#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType {
  EOL,
  COMMENT
};

const char NEWLINE = '\n';
const char COLON = ':';
const char EXCLAM = '!';

FILE *fp;

void *tree_sitter_br_external_scanner_create() { 
  fp = fopen("./log.txt", "w+");
  return NULL; 
}

void tree_sitter_br_external_scanner_destroy(void *p) {
  fclose(fp);
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
          lexer->advance(lexer, true);
        } else {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
        }
      }
    }
  }
}

bool tree_sitter_br_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
) {
  fprintf(fp, "scan start");

  if (!(valid_symbols[EOL] || valid_symbols[COMMENT])) return false;

  for (;;) {
    if (valid_symbols[EOL]){
      if (lexer->lookahead == 0 || lexer->lookahead == NEWLINE){
        lexer->result_symbol = EOL;
        return true;
      }
    }

    if (valid_symbols[COMMENT]){
      if (lexer->lookahead == EXCLAM){
        lexer->advance(lexer, false);
        if (lexer->lookahead != COLON){
          lexer->mark_end(lexer);
          lexer->result_symbol = COMMENT;
          consume_comment(lexer);
          return true;
        }
      }
    }

    if (valid_symbols[EOL] || valid_symbols[COMMENT]){
      if (!iswspace(lexer->lookahead)) return false;
      lexer->advance(lexer, true);
    }
  }
}