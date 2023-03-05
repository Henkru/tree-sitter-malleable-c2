#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_set = 1,
  anon_sym_client = 2,
  anon_sym_dns_DASHbeacon = 3,
  anon_sym_execute = 4,
  anon_sym_http_DASHget = 5,
  anon_sym_http_DASHpost = 6,
  anon_sym_http_DASHstager = 7,
  anon_sym_https_DASHcertificate = 8,
  anon_sym_id = 9,
  anon_sym_output = 10,
  anon_sym_post_DASHex = 11,
  anon_sym_process_DASHinject = 12,
  anon_sym_server = 13,
  anon_sym_stage = 14,
  anon_sym_transform_DASHx64 = 15,
  anon_sym_transform_DASHx86 = 16,
  sym_option = 17,
  sym_semicolon = 18,
  sym_block_start = 19,
  sym_block_end = 20,
  anon_sym_DQUOTE = 21,
  aux_sym_string_token1 = 22,
  sym_escape_sequence = 23,
  sym_number = 24,
  sym_comment = 25,
  sym_source_file = 26,
  sym_block_name = 27,
  sym_string = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_string_repeat1 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_set] = "set",
  [anon_sym_client] = "client",
  [anon_sym_dns_DASHbeacon] = "dns-beacon",
  [anon_sym_execute] = "execute",
  [anon_sym_http_DASHget] = "http-get",
  [anon_sym_http_DASHpost] = "http-post",
  [anon_sym_http_DASHstager] = "http-stager",
  [anon_sym_https_DASHcertificate] = "https-certificate",
  [anon_sym_id] = "id",
  [anon_sym_output] = "output",
  [anon_sym_post_DASHex] = "post-ex",
  [anon_sym_process_DASHinject] = "process-inject",
  [anon_sym_server] = "server",
  [anon_sym_stage] = "stage ",
  [anon_sym_transform_DASHx64] = "transform-x64",
  [anon_sym_transform_DASHx86] = "transform-x86",
  [sym_option] = "option",
  [sym_semicolon] = "semicolon",
  [sym_block_start] = "block_start",
  [sym_block_end] = "block_end",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_block_name] = "block_name",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_set] = sym_set,
  [anon_sym_client] = anon_sym_client,
  [anon_sym_dns_DASHbeacon] = anon_sym_dns_DASHbeacon,
  [anon_sym_execute] = anon_sym_execute,
  [anon_sym_http_DASHget] = anon_sym_http_DASHget,
  [anon_sym_http_DASHpost] = anon_sym_http_DASHpost,
  [anon_sym_http_DASHstager] = anon_sym_http_DASHstager,
  [anon_sym_https_DASHcertificate] = anon_sym_https_DASHcertificate,
  [anon_sym_id] = anon_sym_id,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_post_DASHex] = anon_sym_post_DASHex,
  [anon_sym_process_DASHinject] = anon_sym_process_DASHinject,
  [anon_sym_server] = anon_sym_server,
  [anon_sym_stage] = anon_sym_stage,
  [anon_sym_transform_DASHx64] = anon_sym_transform_DASHx64,
  [anon_sym_transform_DASHx86] = anon_sym_transform_DASHx86,
  [sym_option] = sym_option,
  [sym_semicolon] = sym_semicolon,
  [sym_block_start] = sym_block_start,
  [sym_block_end] = sym_block_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_block_name] = sym_block_name,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_set] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_client] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_dns_DASHbeacon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_execute] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DASHget] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DASHpost] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_http_DASHstager] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_https_DASHcertificate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_id] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_post_DASHex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_process_DASHinject] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_server] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform_DASHx64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transform_DASHx86] = {
    .visible = true,
    .named = false,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block_name] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(1)
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(7)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '\r') SKIP(3)
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(129);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0) ADVANCE(128);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == ';') ADVANCE(123);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(76);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'h') ADVANCE(108);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 'p') ADVANCE(83);
      if (lookahead == 's') ADVANCE(52);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(131);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_set);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_client);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_dns_DASHbeacon);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_execute);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_http_DASHget);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_http_DASHpost);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_http_DASHstager);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_https_DASHcertificate);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_post_DASHex);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_process_DASHinject);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_server);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_stage);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_transform_DASHx64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_transform_DASHx86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == 's') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '4') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '6') ADVANCE(36);
      if (lookahead == '8') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '6') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'a') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'a') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'b') ADVANCE(60);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'c') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'd') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 't') ADVANCE(39);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'e') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'f') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'g') ADVANCE(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'j') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'm') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'n') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'o') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'o') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'p') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'r') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'r') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 's') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 't') ADVANCE(42);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'u') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'u') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'v') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'x') ADVANCE(53);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'x') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == 'x') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_option);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_block_start);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_block_end);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_set] = ACTIONS(1),
    [anon_sym_client] = ACTIONS(1),
    [anon_sym_dns_DASHbeacon] = ACTIONS(1),
    [anon_sym_execute] = ACTIONS(1),
    [anon_sym_http_DASHget] = ACTIONS(1),
    [anon_sym_http_DASHpost] = ACTIONS(1),
    [anon_sym_http_DASHstager] = ACTIONS(1),
    [anon_sym_https_DASHcertificate] = ACTIONS(1),
    [anon_sym_id] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_post_DASHex] = ACTIONS(1),
    [anon_sym_process_DASHinject] = ACTIONS(1),
    [anon_sym_server] = ACTIONS(1),
    [anon_sym_stage] = ACTIONS(1),
    [anon_sym_transform_DASHx64] = ACTIONS(1),
    [anon_sym_transform_DASHx86] = ACTIONS(1),
    [sym_option] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_block_start] = ACTIONS(1),
    [sym_block_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(10),
    [sym_block_name] = STATE(2),
    [sym_string] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_set] = ACTIONS(7),
    [anon_sym_client] = ACTIONS(9),
    [anon_sym_dns_DASHbeacon] = ACTIONS(9),
    [anon_sym_execute] = ACTIONS(9),
    [anon_sym_http_DASHget] = ACTIONS(9),
    [anon_sym_http_DASHpost] = ACTIONS(9),
    [anon_sym_http_DASHstager] = ACTIONS(9),
    [anon_sym_https_DASHcertificate] = ACTIONS(9),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_output] = ACTIONS(9),
    [anon_sym_post_DASHex] = ACTIONS(9),
    [anon_sym_process_DASHinject] = ACTIONS(9),
    [anon_sym_server] = ACTIONS(9),
    [anon_sym_stage] = ACTIONS(11),
    [anon_sym_transform_DASHx64] = ACTIONS(9),
    [anon_sym_transform_DASHx86] = ACTIONS(9),
    [sym_option] = ACTIONS(7),
    [sym_semicolon] = ACTIONS(13),
    [sym_block_start] = ACTIONS(13),
    [sym_block_end] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_block_name] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_set] = ACTIONS(19),
    [anon_sym_client] = ACTIONS(9),
    [anon_sym_dns_DASHbeacon] = ACTIONS(9),
    [anon_sym_execute] = ACTIONS(9),
    [anon_sym_http_DASHget] = ACTIONS(9),
    [anon_sym_http_DASHpost] = ACTIONS(9),
    [anon_sym_http_DASHstager] = ACTIONS(9),
    [anon_sym_https_DASHcertificate] = ACTIONS(9),
    [anon_sym_id] = ACTIONS(9),
    [anon_sym_output] = ACTIONS(9),
    [anon_sym_post_DASHex] = ACTIONS(9),
    [anon_sym_process_DASHinject] = ACTIONS(9),
    [anon_sym_server] = ACTIONS(9),
    [anon_sym_stage] = ACTIONS(11),
    [anon_sym_transform_DASHx64] = ACTIONS(9),
    [anon_sym_transform_DASHx86] = ACTIONS(9),
    [sym_option] = ACTIONS(19),
    [sym_semicolon] = ACTIONS(21),
    [sym_block_start] = ACTIONS(21),
    [sym_block_end] = ACTIONS(21),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [sym_number] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_block_name] = STATE(3),
    [sym_string] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [sym_set] = ACTIONS(25),
    [anon_sym_client] = ACTIONS(28),
    [anon_sym_dns_DASHbeacon] = ACTIONS(28),
    [anon_sym_execute] = ACTIONS(28),
    [anon_sym_http_DASHget] = ACTIONS(28),
    [anon_sym_http_DASHpost] = ACTIONS(28),
    [anon_sym_http_DASHstager] = ACTIONS(28),
    [anon_sym_https_DASHcertificate] = ACTIONS(28),
    [anon_sym_id] = ACTIONS(28),
    [anon_sym_output] = ACTIONS(28),
    [anon_sym_post_DASHex] = ACTIONS(28),
    [anon_sym_process_DASHinject] = ACTIONS(28),
    [anon_sym_server] = ACTIONS(28),
    [anon_sym_stage] = ACTIONS(31),
    [anon_sym_transform_DASHx64] = ACTIONS(28),
    [anon_sym_transform_DASHx86] = ACTIONS(28),
    [sym_option] = ACTIONS(25),
    [sym_semicolon] = ACTIONS(34),
    [sym_block_start] = ACTIONS(34),
    [sym_block_end] = ACTIONS(34),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_number] = ACTIONS(34),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_set] = ACTIONS(42),
    [anon_sym_client] = ACTIONS(42),
    [anon_sym_dns_DASHbeacon] = ACTIONS(42),
    [anon_sym_execute] = ACTIONS(42),
    [anon_sym_http_DASHget] = ACTIONS(42),
    [anon_sym_http_DASHpost] = ACTIONS(42),
    [anon_sym_http_DASHstager] = ACTIONS(42),
    [anon_sym_https_DASHcertificate] = ACTIONS(42),
    [anon_sym_id] = ACTIONS(42),
    [anon_sym_output] = ACTIONS(42),
    [anon_sym_post_DASHex] = ACTIONS(42),
    [anon_sym_process_DASHinject] = ACTIONS(42),
    [anon_sym_server] = ACTIONS(42),
    [anon_sym_stage] = ACTIONS(40),
    [anon_sym_transform_DASHx64] = ACTIONS(42),
    [anon_sym_transform_DASHx86] = ACTIONS(42),
    [sym_option] = ACTIONS(42),
    [sym_semicolon] = ACTIONS(40),
    [sym_block_start] = ACTIONS(40),
    [sym_block_end] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym_number] = ACTIONS(40),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_set] = ACTIONS(46),
    [anon_sym_client] = ACTIONS(46),
    [anon_sym_dns_DASHbeacon] = ACTIONS(46),
    [anon_sym_execute] = ACTIONS(46),
    [anon_sym_http_DASHget] = ACTIONS(46),
    [anon_sym_http_DASHpost] = ACTIONS(46),
    [anon_sym_http_DASHstager] = ACTIONS(46),
    [anon_sym_https_DASHcertificate] = ACTIONS(46),
    [anon_sym_id] = ACTIONS(46),
    [anon_sym_output] = ACTIONS(46),
    [anon_sym_post_DASHex] = ACTIONS(46),
    [anon_sym_process_DASHinject] = ACTIONS(46),
    [anon_sym_server] = ACTIONS(46),
    [anon_sym_stage] = ACTIONS(44),
    [anon_sym_transform_DASHx64] = ACTIONS(46),
    [anon_sym_transform_DASHx86] = ACTIONS(46),
    [sym_option] = ACTIONS(46),
    [sym_semicolon] = ACTIONS(44),
    [sym_block_start] = ACTIONS(44),
    [sym_block_end] = ACTIONS(44),
    [anon_sym_DQUOTE] = ACTIONS(44),
    [sym_number] = ACTIONS(44),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_set] = ACTIONS(50),
    [anon_sym_client] = ACTIONS(50),
    [anon_sym_dns_DASHbeacon] = ACTIONS(50),
    [anon_sym_execute] = ACTIONS(50),
    [anon_sym_http_DASHget] = ACTIONS(50),
    [anon_sym_http_DASHpost] = ACTIONS(50),
    [anon_sym_http_DASHstager] = ACTIONS(50),
    [anon_sym_https_DASHcertificate] = ACTIONS(50),
    [anon_sym_id] = ACTIONS(50),
    [anon_sym_output] = ACTIONS(50),
    [anon_sym_post_DASHex] = ACTIONS(50),
    [anon_sym_process_DASHinject] = ACTIONS(50),
    [anon_sym_server] = ACTIONS(50),
    [anon_sym_stage] = ACTIONS(48),
    [anon_sym_transform_DASHx64] = ACTIONS(50),
    [anon_sym_transform_DASHx86] = ACTIONS(50),
    [sym_option] = ACTIONS(50),
    [sym_semicolon] = ACTIONS(48),
    [sym_block_start] = ACTIONS(48),
    [sym_block_end] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [sym_number] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(52), 1,
      anon_sym_DQUOTE,
    ACTIONS(54), 1,
      aux_sym_string_token1,
    ACTIONS(56), 1,
      sym_escape_sequence,
    ACTIONS(58), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_string_repeat1,
  [16] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym_string_token1,
    ACTIONS(64), 1,
      sym_escape_sequence,
    STATE(9), 1,
      aux_sym_string_repeat1,
  [32] = 5,
    ACTIONS(58), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    ACTIONS(68), 1,
      aux_sym_string_token1,
    ACTIONS(71), 1,
      sym_escape_sequence,
    STATE(9), 1,
      aux_sym_string_repeat1,
  [48] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 16,
  [SMALL_STATE(9)] = 32,
  [SMALL_STATE(10)] = 48,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_name, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_name, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(9),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_malleable_c2(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
