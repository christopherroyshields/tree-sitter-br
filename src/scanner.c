#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType {
  EOL,
  COMMENT
};

void *tree_sitter_br_external_scanner_create() { return NULL; }
void tree_sitter_br_external_scanner_destroy(void *p) {}
void tree_sitter_br_external_scanner_reset(void *p) {}
unsigned tree_sitter_br_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_br_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

bool tree_sitter_br_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  // Detect either a newline or EOF. Currently, external scanners
  // are the only way to match against EOF.
  if (valid_symbols[EOL]) {
    lexer->result_symbol = EOL;
    for (;;) {
      if (lexer->lookahead == 0) return true;
      if (lexer->lookahead == '\n') return true;
      if (!iswspace(lexer->lookahead)) return false;
      lexer->advance(lexer, true);
    }
  } else if (valid_symbols[COMMENT]){
    lexer->result_symbol = COMMENT;
    bool isComment = false;
    for (;;) {
      if (isComment){
        if (lexer->lookahead == '!'){
          lexer->advance(lexer, false);
          if (lexer->lookahead == ':'){
            return true;
          }
        } else {
          if (lexer->lookahead == 0 || lexer->lookahead == '\n'){
            return true;
          } else {
            lexer->mark_end(lexer);
            lexer->advance(lexer, false);
          }
        }
      } else {
        if (lexer->lookahead == '!') {
          isComment = true;
          lexer->mark_end(lexer);
          lexer->advance(lexer, false);
          // lexer->mark_end(lexer);
        } else {
          if (!iswspace(lexer->lookahead)) return false;
          lexer->advance(lexer, true);
        }
      }
    }
    // for (;;) {
    //   if (lexer->lookahead == '!') {
    //     lexer->advance(lexer, false);
    //     lexer->mark_end(lexer);
    //     return true;
    //   }
    //   if (!iswspace(lexer->lookahead)) return false;
    //   lexer->advance(lexer, true);
    // }
    // printf("test");
    // if (lexer->lookahead == "!"){
    //   return true;
    //   lexer->advance(lexer, false);
    //   if (lexer->lookahead == ":") return false;
    //   if (lexer->lookahead == "\n" || lexer->lookahead == "\n" == 0) return true;
    //   lexer->advance(lexer, false);
    //   for (;;) {
    //     if (lexer->lookahead == "\n") return true;
    //     if (lexer->lookahead == 0) return true;
    //     lexer->advance(lexer, false);
    //   }
    // } else {
    //   return false;
    // }
  } else {
    return false;
  }
}