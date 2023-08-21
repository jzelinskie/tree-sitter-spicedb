#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  sym_comment = 2,
  anon_sym_definition = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_relation = 6,
  anon_sym_COLON = 7,
  anon_sym_permission = 8,
  anon_sym_EQ = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  anon_sym_AMP = 12,
  anon_sym_STAR = 13,
  anon_sym_POUND = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_PIPE = 16,
  sym_source_file = 17,
  sym__top_level = 18,
  sym_object_definition = 19,
  sym_relation = 20,
  sym_permission = 21,
  sym_permission_expr = 22,
  sym_unary_permission_expr = 23,
  sym_binary_permission_expr = 24,
  sym_userset = 25,
  sym_wildcard_userset = 26,
  sym_reference_userset = 27,
  sym_computed_userset = 28,
  sym_relation_expr = 29,
  sym_unary_relation_expr = 30,
  sym_binary_relation_expr = 31,
  aux_sym_source_file_repeat1 = 32,
  aux_sym_object_definition_repeat1 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [anon_sym_definition] = "definition",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_relation] = "relation",
  [anon_sym_COLON] = ":",
  [anon_sym_permission] = "permission",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_POUND] = "#",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PIPE] = "|",
  [sym_source_file] = "source_file",
  [sym__top_level] = "_top_level",
  [sym_object_definition] = "object_definition",
  [sym_relation] = "relation",
  [sym_permission] = "permission",
  [sym_permission_expr] = "permission_expr",
  [sym_unary_permission_expr] = "unary_permission_expr",
  [sym_binary_permission_expr] = "binary_permission_expr",
  [sym_userset] = "userset",
  [sym_wildcard_userset] = "wildcard_userset",
  [sym_reference_userset] = "reference_userset",
  [sym_computed_userset] = "computed_userset",
  [sym_relation_expr] = "relation_expr",
  [sym_unary_relation_expr] = "unary_relation_expr",
  [sym_binary_relation_expr] = "binary_relation_expr",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_object_definition_repeat1] = "object_definition_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [anon_sym_definition] = anon_sym_definition,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_relation] = anon_sym_relation,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_permission] = anon_sym_permission,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_source_file] = sym_source_file,
  [sym__top_level] = sym__top_level,
  [sym_object_definition] = sym_object_definition,
  [sym_relation] = sym_relation,
  [sym_permission] = sym_permission,
  [sym_permission_expr] = sym_permission_expr,
  [sym_unary_permission_expr] = sym_unary_permission_expr,
  [sym_binary_permission_expr] = sym_binary_permission_expr,
  [sym_userset] = sym_userset,
  [sym_wildcard_userset] = sym_wildcard_userset,
  [sym_reference_userset] = sym_reference_userset,
  [sym_computed_userset] = sym_computed_userset,
  [sym_relation_expr] = sym_relation_expr,
  [sym_unary_relation_expr] = sym_unary_relation_expr,
  [sym_binary_relation_expr] = sym_binary_relation_expr,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_object_definition_repeat1] = aux_sym_object_definition_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_definition] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_permission] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level] = {
    .visible = false,
    .named = true,
  },
  [sym_object_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_permission] = {
    .visible = true,
    .named = true,
  },
  [sym_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_permission_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_userset] = {
    .visible = true,
    .named = true,
  },
  [sym_wildcard_userset] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_userset] = {
    .visible = true,
    .named = true,
  },
  [sym_computed_userset] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_relation_expr] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_expr = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_expr] = "expr",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_body, 3},
    {field_name, 1},
  [3] =
    {field_expr, 3},
    {field_name, 1},
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(141);
      if (lookahead == '&') ADVANCE(139);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(137);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ':') ADVANCE(135);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(143);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 65:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(74);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(82);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(84);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(88);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(90);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(110);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(122);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(71);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(142);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'p') ADVANCE(2);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 6:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_relation);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_definition);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_permission);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_definition] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_relation] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_permission] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__top_level] = STATE(19),
    [sym_object_definition] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_definition] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH_GT,
    ACTIONS(11), 5,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_AMP,
  [20] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(24), 1,
      sym_relation_expr,
    STATE(7), 2,
      sym_wildcard_userset,
      sym_computed_userset,
    STATE(21), 2,
      sym_userset,
      sym_reference_userset,
    STATE(23), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [42] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(22), 1,
      sym_relation_expr,
    STATE(7), 2,
      sym_wildcard_userset,
      sym_computed_userset,
    STATE(21), 2,
      sym_userset,
      sym_reference_userset,
    STATE(23), 2,
      sym_unary_relation_expr,
      sym_binary_relation_expr,
  [64] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_COLON,
    ACTIONS(17), 1,
      anon_sym_DASH_GT,
    ACTIONS(21), 1,
      anon_sym_POUND,
    ACTIONS(11), 4,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PIPE,
  [83] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_permission_expr,
    STATE(17), 1,
      sym_userset,
    STATE(7), 2,
      sym_wildcard_userset,
      sym_computed_userset,
    STATE(16), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 7,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
  [117] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(15), 1,
      sym_permission_expr,
    STATE(17), 1,
      sym_userset,
    STATE(7), 2,
      sym_wildcard_userset,
      sym_computed_userset,
    STATE(16), 2,
      sym_unary_permission_expr,
      sym_binary_permission_expr,
  [138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 7,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
  [151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 7,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
  [164] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 6,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
  [176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_relation,
    ACTIONS(35), 1,
      anon_sym_permission,
    STATE(13), 3,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      anon_sym_relation,
    ACTIONS(42), 1,
      anon_sym_permission,
    STATE(13), 3,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_relation,
    ACTIONS(35), 1,
      anon_sym_permission,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(12), 3,
      sym_relation,
      sym_permission,
      aux_sym_object_definition_repeat1,
  [230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 3,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
    ACTIONS(49), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
  [244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 6,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
  [256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_AMP,
  [268] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_definition,
    STATE(18), 3,
      sym__top_level,
      sym_object_definition,
      aux_sym_source_file_repeat1,
  [283] = 4,
    ACTIONS(9), 1,
      anon_sym_definition,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_comment,
    STATE(18), 3,
      sym__top_level,
      sym_object_definition,
      aux_sym_source_file_repeat1,
  [298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PIPE,
  [308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 4,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PIPE,
  [318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    ACTIONS(71), 3,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
  [330] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PIPE,
  [340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 4,
      anon_sym_RBRACE,
      anon_sym_relation,
      anon_sym_permission,
      anon_sym_PIPE,
  [350] = 1,
    ACTIONS(79), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
  [356] = 1,
    ACTIONS(81), 3,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_definition,
  [362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_identifier,
  [369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_identifier,
  [376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      sym_identifier,
  [383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_STAR,
  [390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_identifier,
  [397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_EQ,
  [404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COLON,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
  [418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 83,
  [SMALL_STATE(7)] = 104,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 256,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 298,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 318,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 340,
  [SMALL_STATE(25)] = 350,
  [SMALL_STATE(26)] = 356,
  [SMALL_STATE(27)] = 362,
  [SMALL_STATE(28)] = 369,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 383,
  [SMALL_STATE(31)] = 390,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 404,
  [SMALL_STATE(34)] = 411,
  [SMALL_STATE(35)] = 418,
  [SMALL_STATE(36)] = 425,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_userset, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_userset, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_computed_userset, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_wildcard_userset, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_permission_expr, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(27),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_definition_repeat1, 2), SHIFT_REPEAT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission, 4, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_permission_expr, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_permission_expr, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_userset, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_relation_expr, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_expr, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_relation_expr, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 5, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_definition, 4, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_spicedb(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif