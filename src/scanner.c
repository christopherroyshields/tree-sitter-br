#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  EOL,
  COMMENT,
  TAB_FUNCTION,
  PIC_BODY_CLOSE
};

const char NEWLINE = '\n';
const char COLON = ':';
const char EXCLAM = '!';

void *tree_sitter_br_external_scanner_create() {
  return NULL;
}

void tree_sitter_br_external_scanner_destroy(void *p) {
  (void)p;
}

void tree_sitter_br_external_scanner_reset(void *p) { (void)p; }
unsigned tree_sitter_br_external_scanner_serialize(void *p, char *buffer) { (void)p; (void)buffer; return 0; }
void tree_sitter_br_external_scanner_deserialize(void *p, const char *b, unsigned n) { (void)p; (void)b; (void)n; }

static void consume_comment(TSLexer *lexer){
  for (;;) {
    if (lexer->lookahead == EXCLAM){
      lexer->advance(lexer, false);
      if (lexer->lookahead == COLON){
        return;
      } else {
        lexer->mark_end(lexer);
      }
    } else {
      if (lexer->lookahead == 0 || lexer->lookahead == NEWLINE){
        return;
      } else {
        if (iswspace(lexer->lookahead)){
          lexer->advance(lexer, false);
          // lexer->mark_end(lexer);
        } else {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
        }
      }
    }
  }
}

static bool valid_char(TSLexer *lexer){
  bool isValid = false;
  if ((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') || (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') || (lexer->lookahead >= '0' && lexer->lookahead <= '9') || lexer->lookahead == '_'){
    isValid = true;
  }
  return isValid;
}

bool tree_sitter_br_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  (void)payload;

  // PIC body+close: scan content counting '(' chars, then consume
  // min(open_count+1, available) closing ')' characters.
  // Guard: skip during error recovery (when all externals are valid).
  if (valid_symbols[PIC_BODY_CLOSE] &&
      !(valid_symbols[EOL] && valid_symbols[COMMENT] && valid_symbols[TAB_FUNCTION])) {
    int open_count = 0;
    // Scan PIC content (everything except ')' and newline)
    while (lexer->lookahead != ')' && lexer->lookahead != '\n' &&
           lexer->lookahead != '\r' && lexer->lookahead != 0) {
      if (lexer->lookahead == '(') {
        open_count++;
      }
      lexer->advance(lexer, false);
    }
    // Consume closing ')' characters: need open_count+1 total,
    // but don't consume more than available
    int to_consume = open_count + 1;
    int consumed = 0;
    while (lexer->lookahead == ')' && consumed < to_consume) {
      lexer->advance(lexer, false);
      consumed++;
    }
    if (consumed > 0) {
      lexer->mark_end(lexer);
      lexer->result_symbol = PIC_BODY_CLOSE;
      return true;
    }
    return false;
  }

  if (!(valid_symbols[EOL] || valid_symbols[COMMENT] || valid_symbols[TAB_FUNCTION])) return false;

  for (;;) {
    if (valid_symbols[EOL]){
      if (lexer->lookahead == 0 || lexer->lookahead == NEWLINE){
        if (lexer->lookahead == NEWLINE){
          lexer->advance(lexer, true);
        }
        lexer->result_symbol = EOL;
        return true;
      }
    }

    if (valid_symbols[COMMENT]){
      if (lexer->lookahead == EXCLAM){
        // lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead != COLON){
          // lexer->mark_end(lexer);
          lexer->result_symbol = COMMENT;
          lexer->mark_end(lexer);
          consume_comment(lexer);
          return true;
        }
      }
    }

    if (valid_symbols[TAB_FUNCTION]){
      if (lexer->lookahead == 'T' || lexer->lookahead == 't') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'A' || lexer->lookahead == 'a') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == 'B' || lexer->lookahead == 'b') {
            lexer->advance(lexer, false);
            // Make sure it's not a longer identifier (e.g., TABLE)
            if (!valid_char(lexer)) {
              lexer->mark_end(lexer);
              // Skip whitespace before checking for '('
              while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
                lexer->advance(lexer, false);
              }
              if (lexer->lookahead == '(') {
                lexer->result_symbol = TAB_FUNCTION;
                return true;
              }
            }
          }
        }
        // Started with T but not TAB( — not an external token
        return false;
      }
    }

    if (valid_symbols[EOL] || valid_symbols[COMMENT] || valid_symbols[TAB_FUNCTION]){
      if (!iswspace(lexer->lookahead)) return false;
      lexer->advance(lexer, true);
    }
  }
}
