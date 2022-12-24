#include <tree_sitter/parser.h>

enum TokenType {
  EOL,
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
  if (!valid_symbols[EOL]) return false;
  lexer->result_symbol = EOL;
  for (;;) {
    if (lexer->lookahead == 0) return true;
    if (lexer->lookahead == '\n') return true;
    if (!iswspace(lexer->lookahead)) return false;
    lexer->advance(lexer, true);
  }
}