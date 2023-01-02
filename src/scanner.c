#include <tree_sitter/parser.h>
#include <stdio.h>
#include <wctype.h>

enum TokenType {
  EOL,
  COMMENT,
  MULTIPLIER
};

const char NEWLINE = '\n';
const char COLON = ':';
const char EXCLAM = '!';

FILE *fp;

void *tree_sitter_br_external_scanner_create() { 
  // fp = fopen("./log.txt", "w+");
  return NULL; 
}

void tree_sitter_br_external_scanner_destroy(void *p) {
  // fclose(fp);
}

void tree_sitter_br_external_scanner_reset(void *p) {}
unsigned tree_sitter_br_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_br_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

void consume_comment(TSLexer *lexer){
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
        } else {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
        }
      }
    }
  }
}

bool valid_char(TSLexer *lexer){
  bool isValid = false;
  if ((lexer->lookahead >= 'a' && lexer->lookahead <= 'z') || (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z') || (lexer->lookahead >= '0' && lexer->lookahead <= '9') || lexer->lookahead == '_'){
    isValid = true;
  }
  return isValid;
}

bool consume_var(TSLexer *lexer){
  lexer->advance(lexer, false);
  lexer->mark_end(lexer);
  
  if (lexer->lookahead == '*'){
    lexer->result_symbol = MULTIPLIER;
    return true;
  }

  for (;;){
    if (iswspace(lexer->lookahead)) break;
    if (!valid_char(lexer)){
      return false;
    } else {
      lexer->mark_end(lexer);
      lexer->advance(lexer, false);
    }
  }
  for (;;){
    if (iswspace(lexer->lookahead)){
      lexer->advance(lexer, true);
    } else {
      if (lexer->lookahead == '*'){
        lexer->result_symbol = MULTIPLIER;
        return true;
      } else {
        return false;
      }
    }
  }
}

bool tree_sitter_br_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {

  if (!(valid_symbols[EOL] || valid_symbols[COMMENT] || valid_symbols[MULTIPLIER])) return false;

  bool var_found = false;
  bool var_done = false;

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
          consume_comment(lexer);
          return true;
        }
      }
    }

    if (valid_symbols[MULTIPLIER]){
      if (lexer->lookahead == '_' || (lexer->lookahead >= 'a' && lexer->lookahead <= 'z') || (lexer->lookahead >= 'A' && lexer->lookahead <= 'Z')){
        bool found = false;
        found = consume_var(lexer);
        return found;
      }
    }

    if (valid_symbols[EOL] || valid_symbols[COMMENT] || valid_symbols[MULTIPLIER]){
      if (!iswspace(lexer->lookahead)) return false;
      lexer->advance(lexer, true);
    }
  }
}
