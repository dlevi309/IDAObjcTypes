
#ifndef ICU_H_
#define ICU_H_

typedef struct USet USet;

typedef int8_t UBool;
typedef int32_t UChar32;

#define U_MAX_VERSION_LENGTH 4
#define U_MAX_VERSION_STRING_LENGTH 20
typedef uint8_t UVersionInfo[U_MAX_VERSION_LENGTH];

#define U_UNICODE_VERSION "11.0"
#define UCHAR_MIN_VALUE 0
#define UCHAR_MAX_VALUE 0x10ffff
#define U_MASK(x) ((uint32_t)1<<(x))

typedef enum UProperty {
	UCHAR_ALPHABETIC=0,
	UCHAR_BINARY_START=UCHAR_ALPHABETIC,
	UCHAR_ASCII_HEX_DIGIT=1,
	UCHAR_BIDI_CONTROL=2,
	UCHAR_BIDI_MIRRORED=3,
	UCHAR_DASH=4,
	UCHAR_DEFAULT_IGNORABLE_CODE_POINT=5,
	UCHAR_DEPRECATED=6,
	UCHAR_DIACRITIC=7,
	UCHAR_EXTENDER=8,
	UCHAR_FULL_COMPOSITION_EXCLUSION=9,
	UCHAR_GRAPHEME_BASE=10,
	UCHAR_GRAPHEME_EXTEND=11,
	UCHAR_GRAPHEME_LINK=12,
	UCHAR_HEX_DIGIT=13,
	UCHAR_HYPHEN=14,
	UCHAR_ID_CONTINUE=15,
	UCHAR_ID_START=16,
	UCHAR_IDEOGRAPHIC=17,
	UCHAR_IDS_BINARY_OPERATOR=18,
	UCHAR_IDS_TRINARY_OPERATOR=19,
	UCHAR_JOIN_CONTROL=20,
	UCHAR_LOGICAL_ORDER_EXCEPTION=21,
	UCHAR_LOWERCASE=22,
	UCHAR_MATH=23,
	UCHAR_NONCHARACTER_CODE_POINT=24,
	UCHAR_QUOTATION_MARK=25,
	UCHAR_RADICAL=26,
	UCHAR_SOFT_DOTTED=27,
	UCHAR_TERMINAL_PUNCTUATION=28,
	UCHAR_UNIFIED_IDEOGRAPH=29,
	UCHAR_UPPERCASE=30,
	UCHAR_WHITE_SPACE=31,
	UCHAR_XID_CONTINUE=32,
	UCHAR_XID_START=33,
	UCHAR_CASE_SENSITIVE=34,
	UCHAR_S_TERM=35,
	UCHAR_VARIATION_SELECTOR=36,
	UCHAR_NFD_INERT=37,
	UCHAR_NFKD_INERT=38,
	UCHAR_NFC_INERT=39,
	UCHAR_NFKC_INERT=40,
	UCHAR_SEGMENT_STARTER=41,
	UCHAR_PATTERN_SYNTAX=42,
	UCHAR_PATTERN_WHITE_SPACE=43,
	UCHAR_POSIX_ALNUM=44,
	UCHAR_POSIX_BLANK=45,
	UCHAR_POSIX_GRAPH=46,
	UCHAR_POSIX_PRINT=47,
	UCHAR_POSIX_XDIGIT=48,
	UCHAR_CASED=49,
	UCHAR_CASE_IGNORABLE=50,
	UCHAR_CHANGES_WHEN_LOWERCASED=51,
	UCHAR_CHANGES_WHEN_UPPERCASED=52,
	UCHAR_CHANGES_WHEN_TITLECASED=53,
	UCHAR_CHANGES_WHEN_CASEFOLDED=54,
	UCHAR_CHANGES_WHEN_CASEMAPPED=55,
	UCHAR_CHANGES_WHEN_NFKC_CASEFOLDED=56,
	UCHAR_EMOJI=57,
	UCHAR_EMOJI_PRESENTATION=58,
	UCHAR_EMOJI_MODIFIER=59,
	UCHAR_EMOJI_MODIFIER_BASE=60,
	UCHAR_EMOJI_COMPONENT=61,
	UCHAR_REGIONAL_INDICATOR=62,
	UCHAR_PREPENDED_CONCATENATION_MARK=63,
	UCHAR_EXTENDED_PICTOGRAPHIC=64,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_BINARY_LIMIT,
#endif
	UCHAR_BIDI_CLASS=0x1000,
	UCHAR_INT_START=UCHAR_BIDI_CLASS,
	UCHAR_BLOCK=0x1001,
	UCHAR_CANONICAL_COMBINING_CLASS=0x1002,
	UCHAR_DECOMPOSITION_TYPE=0x1003,
	UCHAR_EAST_ASIAN_WIDTH=0x1004,
	UCHAR_GENERAL_CATEGORY=0x1005,
	UCHAR_JOINING_GROUP=0x1006,
	UCHAR_JOINING_TYPE=0x1007,
	UCHAR_LINE_BREAK=0x1008,
	UCHAR_NUMERIC_TYPE=0x1009,
	UCHAR_SCRIPT=0x100A,
	UCHAR_HANGUL_SYLLABLE_TYPE=0x100B,
	UCHAR_NFD_QUICK_CHECK=0x100C,
	UCHAR_NFKD_QUICK_CHECK=0x100D,
	UCHAR_NFC_QUICK_CHECK=0x100E,
	UCHAR_NFKC_QUICK_CHECK=0x100F,
	UCHAR_LEAD_CANONICAL_COMBINING_CLASS=0x1010,
	UCHAR_TRAIL_CANONICAL_COMBINING_CLASS=0x1011,
	UCHAR_GRAPHEME_CLUSTER_BREAK=0x1012,
	UCHAR_SENTENCE_BREAK=0x1013,
	UCHAR_WORD_BREAK=0x1014,
	UCHAR_BIDI_PAIRED_BRACKET_TYPE=0x1015,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_INT_LIMIT=0x1016,
#endif
	UCHAR_GENERAL_CATEGORY_MASK=0x2000,
	UCHAR_MASK_START=UCHAR_GENERAL_CATEGORY_MASK,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_MASK_LIMIT=0x2001,
#endif
	UCHAR_NUMERIC_VALUE=0x3000,
	UCHAR_DOUBLE_START=UCHAR_NUMERIC_VALUE,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_DOUBLE_LIMIT=0x3001,
#endif
	UCHAR_AGE=0x4000,
	UCHAR_STRING_START=UCHAR_AGE,
	UCHAR_BIDI_MIRRORING_GLYPH=0x4001,
	UCHAR_CASE_FOLDING=0x4002,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_ISO_COMMENT=0x4003,
#endif
	UCHAR_LOWERCASE_MAPPING=0x4004,
	UCHAR_NAME=0x4005,
	UCHAR_SIMPLE_CASE_FOLDING=0x4006,
	UCHAR_SIMPLE_LOWERCASE_MAPPING=0x4007,
	UCHAR_SIMPLE_TITLECASE_MAPPING=0x4008,
	UCHAR_SIMPLE_UPPERCASE_MAPPING=0x4009,
	UCHAR_TITLECASE_MAPPING=0x400A,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_UNICODE_1_NAME=0x400B,
#endif
	UCHAR_UPPERCASE_MAPPING=0x400C,
	UCHAR_BIDI_PAIRED_BRACKET=0x400D,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_STRING_LIMIT=0x400E,
#endif
	UCHAR_SCRIPT_EXTENSIONS=0x7000,
	UCHAR_OTHER_PROPERTY_START=UCHAR_SCRIPT_EXTENSIONS,

#ifndef U_HIDE_DEPRECATED_API
	UCHAR_OTHER_PROPERTY_LIMIT=0x7001,
#endif
	UCHAR_INVALID_CODE = -1
} UProperty;

typedef enum UCharCategory
{
	U_UNASSIGNED            = 0,
	U_GENERAL_OTHER_TYPES    = 0,
	U_UPPERCASE_LETTER       = 1,
	U_LOWERCASE_LETTER       = 2,
	U_TITLECASE_LETTER       = 3,
	U_MODIFIER_LETTER        = 4,
	U_OTHER_LETTER          = 5,
	U_NON_SPACING_MARK       = 6,
	U_ENCLOSING_MARK        = 7,
	U_COMBINING_SPACING_MARK  = 8,
	U_DECIMAL_DIGIT_NUMBER    = 9,
	U_LETTER_NUMBER         = 10,
	U_OTHER_NUMBER          = 11,
	U_SPACE_SEPARATOR        = 12,
	U_LINE_SEPARATOR        = 13,
	U_PARAGRAPH_SEPARATOR    = 14,
	U_CONTROL_CHAR          = 15,
	U_FORMAT_CHAR           = 16,
	U_PRIVATE_USE_CHAR       = 17,
	U_SURROGATE            = 18,
	U_DASH_PUNCTUATION       = 19,
	U_START_PUNCTUATION      = 20,
	U_END_PUNCTUATION        = 21,
	U_CONNECTOR_PUNCTUATION   = 22,
	U_OTHER_PUNCTUATION      = 23,
	U_MATH_SYMBOL           = 24,
	U_CURRENCY_SYMBOL        = 25,
	U_MODIFIER_SYMBOL        = 26,
	U_OTHER_SYMBOL          = 27,
	U_INITIAL_PUNCTUATION    = 28,
	U_FINAL_PUNCTUATION      = 29,
	U_CHAR_CATEGORY_COUNT
} UCharCategory;

#define U_GC_CN_MASK    U_MASK(U_GENERAL_OTHER_TYPES)
#define U_GC_LU_MASK    U_MASK(U_UPPERCASE_LETTER)
#define U_GC_LL_MASK    U_MASK(U_LOWERCASE_LETTER)
#define U_GC_LT_MASK    U_MASK(U_TITLECASE_LETTER)
#define U_GC_LM_MASK    U_MASK(U_MODIFIER_LETTER)
#define U_GC_LO_MASK    U_MASK(U_OTHER_LETTER)
#define U_GC_MN_MASK    U_MASK(U_NON_SPACING_MARK)
#define U_GC_ME_MASK    U_MASK(U_ENCLOSING_MARK)
#define U_GC_MC_MASK    U_MASK(U_COMBINING_SPACING_MARK)
#define U_GC_ND_MASK    U_MASK(U_DECIMAL_DIGIT_NUMBER)
#define U_GC_NL_MASK    U_MASK(U_LETTER_NUMBER)
#define U_GC_NO_MASK    U_MASK(U_OTHER_NUMBER)
#define U_GC_ZS_MASK    U_MASK(U_SPACE_SEPARATOR)
#define U_GC_ZL_MASK    U_MASK(U_LINE_SEPARATOR)
#define U_GC_ZP_MASK    U_MASK(U_PARAGRAPH_SEPARATOR)
#define U_GC_CC_MASK    U_MASK(U_CONTROL_CHAR)
#define U_GC_CF_MASK    U_MASK(U_FORMAT_CHAR)
#define U_GC_CO_MASK    U_MASK(U_PRIVATE_USE_CHAR)
#define U_GC_CS_MASK    U_MASK(U_SURROGATE)
#define U_GC_PD_MASK    U_MASK(U_DASH_PUNCTUATION)
#define U_GC_PS_MASK    U_MASK(U_START_PUNCTUATION)
#define U_GC_PE_MASK    U_MASK(U_END_PUNCTUATION)
#define U_GC_PC_MASK    U_MASK(U_CONNECTOR_PUNCTUATION)
#define U_GC_PO_MASK    U_MASK(U_OTHER_PUNCTUATION)
#define U_GC_SM_MASK    U_MASK(U_MATH_SYMBOL)
#define U_GC_SC_MASK    U_MASK(U_CURRENCY_SYMBOL)
#define U_GC_SK_MASK    U_MASK(U_MODIFIER_SYMBOL)
#define U_GC_SO_MASK    U_MASK(U_OTHER_SYMBOL)
#define U_GC_PI_MASK    U_MASK(U_INITIAL_PUNCTUATION)
#define U_GC_PF_MASK    U_MASK(U_FINAL_PUNCTUATION)
#define U_GC_L_MASK \
	(U_GC_LU_MASK|U_GC_LL_MASK|U_GC_LT_MASK|U_GC_LM_MASK|U_GC_LO_MASK)
#define U_GC_LC_MASK \
	(U_GC_LU_MASK|U_GC_LL_MASK|U_GC_LT_MASK)
#define U_GC_M_MASK (U_GC_MN_MASK|U_GC_ME_MASK|U_GC_MC_MASK)
#define U_GC_N_MASK (U_GC_ND_MASK|U_GC_NL_MASK|U_GC_NO_MASK)
#define U_GC_Z_MASK (U_GC_ZS_MASK|U_GC_ZL_MASK|U_GC_ZP_MASK)
#define U_GC_C_MASK \
	(U_GC_CN_MASK|U_GC_CC_MASK|U_GC_CF_MASK|U_GC_CO_MASK|U_GC_CS_MASK)
#define U_GC_P_MASK \
	(U_GC_PD_MASK|U_GC_PS_MASK|U_GC_PE_MASK|U_GC_PC_MASK|U_GC_PO_MASK| \
	U_GC_PI_MASK|U_GC_PF_MASK)
#define U_GC_S_MASK (U_GC_SM_MASK|U_GC_SC_MASK|U_GC_SK_MASK|U_GC_SO_MASK)

typedef enum UCharDirection {
	U_LEFT_TO_RIGHT            = 0,
	U_RIGHT_TO_LEFT            = 1,
	U_EUROPEAN_NUMBER           = 2,
	U_EUROPEAN_NUMBER_SEPARATOR   = 3,
	U_EUROPEAN_NUMBER_TERMINATOR  = 4,
	U_ARABIC_NUMBER            = 5,
	U_COMMON_NUMBER_SEPARATOR    = 6,
	U_BLOCK_SEPARATOR           = 7,
	U_SEGMENT_SEPARATOR         = 8,
	U_WHITE_SPACE_NEUTRAL        = 9,
	U_OTHER_NEUTRAL            = 10,
	U_LEFT_TO_RIGHT_EMBEDDING    = 11,
	U_LEFT_TO_RIGHT_OVERRIDE     = 12,
	U_RIGHT_TO_LEFT_ARABIC       = 13,
	U_RIGHT_TO_LEFT_EMBEDDING    = 14,
	U_RIGHT_TO_LEFT_OVERRIDE     = 15,
	U_POP_DIRECTIONAL_FORMAT     = 16,
	U_DIR_NON_SPACING_MARK       = 17,
	U_BOUNDARY_NEUTRAL          = 18,
	U_FIRST_STRONG_ISOLATE       = 19,
	U_LEFT_TO_RIGHT_ISOLATE      = 20,
	U_RIGHT_TO_LEFT_ISOLATE      = 21,
	U_POP_DIRECTIONAL_ISOLATE    = 22,

#ifndef U_HIDE_DEPRECATED_API
	U_CHAR_DIRECTION_COUNT
#endif
} UCharDirection;

typedef enum UBidiPairedBracketType {
	U_BPT_NONE,
	U_BPT_OPEN,
	U_BPT_CLOSE,

#ifndef U_HIDE_DEPRECATED_API
	U_BPT_COUNT
#endif
} UBidiPairedBracketType;

typedef enum UBlockCode {
	UBLOCK_NO_BLOCK = 0,
	UBLOCK_BASIC_LATIN = 1,
	UBLOCK_LATIN_1_SUPPLEMENT=2,
	UBLOCK_LATIN_EXTENDED_A =3,
	UBLOCK_LATIN_EXTENDED_B =4,
	UBLOCK_IPA_EXTENSIONS =5,
	UBLOCK_SPACING_MODIFIER_LETTERS =6,
	UBLOCK_COMBINING_DIACRITICAL_MARKS =7,
	UBLOCK_GREEK =8,
	UBLOCK_CYRILLIC =9,
	UBLOCK_ARMENIAN =10,
	UBLOCK_HEBREW =11,
	UBLOCK_ARABIC =12,
	UBLOCK_SYRIAC =13,
	UBLOCK_THAANA =14,
	UBLOCK_DEVANAGARI =15,
	UBLOCK_BENGALI =16,
	UBLOCK_GURMUKHI =17,
	UBLOCK_GUJARATI =18,
	UBLOCK_ORIYA =19,
	UBLOCK_TAMIL =20,
	UBLOCK_TELUGU =21,
	UBLOCK_KANNADA =22,
	UBLOCK_MALAYALAM =23,
	UBLOCK_SINHALA =24,
	UBLOCK_THAI =25,
	UBLOCK_LAO =26,
	UBLOCK_TIBETAN =27,
	UBLOCK_MYANMAR =28,
	UBLOCK_GEORGIAN =29,
	UBLOCK_HANGUL_JAMO =30,
	UBLOCK_ETHIOPIC =31,
	UBLOCK_CHEROKEE =32,
	UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS =33,
	UBLOCK_OGHAM =34,
	UBLOCK_RUNIC =35,
	UBLOCK_KHMER =36,
	UBLOCK_MONGOLIAN =37,
	UBLOCK_LATIN_EXTENDED_ADDITIONAL =38,
	UBLOCK_GREEK_EXTENDED =39,
	UBLOCK_GENERAL_PUNCTUATION =40,
	UBLOCK_SUPERSCRIPTS_AND_SUBSCRIPTS =41,
	UBLOCK_CURRENCY_SYMBOLS =42,
	UBLOCK_COMBINING_MARKS_FOR_SYMBOLS =43,
	UBLOCK_LETTERLIKE_SYMBOLS =44,
	UBLOCK_NUMBER_FORMS =45,
	UBLOCK_ARROWS =46,
	UBLOCK_MATHEMATICAL_OPERATORS =47,
	UBLOCK_MISCELLANEOUS_TECHNICAL =48,
	UBLOCK_CONTROL_PICTURES =49,
	UBLOCK_OPTICAL_CHARACTER_RECOGNITION =50,
	UBLOCK_ENCLOSED_ALPHANUMERICS =51,
	UBLOCK_BOX_DRAWING =52,
	UBLOCK_BLOCK_ELEMENTS =53,
	UBLOCK_GEOMETRIC_SHAPES =54,
	UBLOCK_MISCELLANEOUS_SYMBOLS =55,
	UBLOCK_DINGBATS =56,
	UBLOCK_BRAILLE_PATTERNS =57,
	UBLOCK_CJK_RADICALS_SUPPLEMENT =58,
	UBLOCK_KANGXI_RADICALS =59,
	UBLOCK_IDEOGRAPHIC_DESCRIPTION_CHARACTERS =60,
	UBLOCK_CJK_SYMBOLS_AND_PUNCTUATION =61,
	UBLOCK_HIRAGANA =62,
	UBLOCK_KATAKANA =63,
	UBLOCK_BOPOMOFO =64,
	UBLOCK_HANGUL_COMPATIBILITY_JAMO =65,
	UBLOCK_KANBUN =66,
	UBLOCK_BOPOMOFO_EXTENDED =67,
	UBLOCK_ENCLOSED_CJK_LETTERS_AND_MONTHS =68,
	UBLOCK_CJK_COMPATIBILITY =69,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A =70,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS =71,
	UBLOCK_YI_SYLLABLES =72,
	UBLOCK_YI_RADICALS =73,
	UBLOCK_HANGUL_SYLLABLES =74,
	UBLOCK_HIGH_SURROGATES =75,
	UBLOCK_HIGH_PRIVATE_USE_SURROGATES =76,
	UBLOCK_LOW_SURROGATES =77,
	UBLOCK_PRIVATE_USE_AREA =78,
	UBLOCK_PRIVATE_USE = UBLOCK_PRIVATE_USE_AREA,
	UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS =79,
	UBLOCK_ALPHABETIC_PRESENTATION_FORMS =80,
	UBLOCK_ARABIC_PRESENTATION_FORMS_A =81,
	UBLOCK_COMBINING_HALF_MARKS =82,
	UBLOCK_CJK_COMPATIBILITY_FORMS =83,
	UBLOCK_SMALL_FORM_VARIANTS =84,
	UBLOCK_ARABIC_PRESENTATION_FORMS_B =85,
	UBLOCK_SPECIALS =86,
	UBLOCK_HALFWIDTH_AND_FULLWIDTH_FORMS =87,
	UBLOCK_OLD_ITALIC = 88,
	UBLOCK_GOTHIC = 89,
	UBLOCK_DESERET = 90,
	UBLOCK_BYZANTINE_MUSICAL_SYMBOLS = 91,
	UBLOCK_MUSICAL_SYMBOLS = 92,
	UBLOCK_MATHEMATICAL_ALPHANUMERIC_SYMBOLS = 93,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B  = 94,
	UBLOCK_CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT = 95,
	UBLOCK_TAGS = 96,
	UBLOCK_CYRILLIC_SUPPLEMENT = 97,
	UBLOCK_CYRILLIC_SUPPLEMENTARY = UBLOCK_CYRILLIC_SUPPLEMENT,
	UBLOCK_TAGALOG = 98,
	UBLOCK_HANUNOO = 99,
	UBLOCK_BUHID = 100,
	UBLOCK_TAGBANWA = 101,
	UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A = 102,
	UBLOCK_SUPPLEMENTAL_ARROWS_A = 103,
	UBLOCK_SUPPLEMENTAL_ARROWS_B = 104,
	UBLOCK_MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B = 105,
	UBLOCK_SUPPLEMENTAL_MATHEMATICAL_OPERATORS = 106,
	UBLOCK_KATAKANA_PHONETIC_EXTENSIONS = 107,
	UBLOCK_VARIATION_SELECTORS = 108,
	UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_A = 109,
	UBLOCK_SUPPLEMENTARY_PRIVATE_USE_AREA_B = 110,
	UBLOCK_LIMBU = 111,
	UBLOCK_TAI_LE = 112,
	UBLOCK_KHMER_SYMBOLS = 113,
	UBLOCK_PHONETIC_EXTENSIONS = 114,
	UBLOCK_MISCELLANEOUS_SYMBOLS_AND_ARROWS = 115,
	UBLOCK_YIJING_HEXAGRAM_SYMBOLS = 116,
	UBLOCK_LINEAR_B_SYLLABARY = 117,
	UBLOCK_LINEAR_B_IDEOGRAMS = 118,
	UBLOCK_AEGEAN_NUMBERS = 119,
	UBLOCK_UGARITIC = 120,
	UBLOCK_SHAVIAN = 121,
	UBLOCK_OSMANYA = 122,
	UBLOCK_CYPRIOT_SYLLABARY = 123,
	UBLOCK_TAI_XUAN_JING_SYMBOLS = 124,
	UBLOCK_VARIATION_SELECTORS_SUPPLEMENT = 125,
	UBLOCK_ANCIENT_GREEK_MUSICAL_NOTATION = 126,
	UBLOCK_ANCIENT_GREEK_NUMBERS = 127,
	UBLOCK_ARABIC_SUPPLEMENT = 128,
	UBLOCK_BUGINESE = 129,
	UBLOCK_CJK_STROKES = 130,
	UBLOCK_COMBINING_DIACRITICAL_MARKS_SUPPLEMENT = 131,
	UBLOCK_COPTIC = 132,
	UBLOCK_ETHIOPIC_EXTENDED = 133,
	UBLOCK_ETHIOPIC_SUPPLEMENT = 134,
	UBLOCK_GEORGIAN_SUPPLEMENT = 135,
	UBLOCK_GLAGOLITIC = 136,
	UBLOCK_KHAROSHTHI = 137,
	UBLOCK_MODIFIER_TONE_LETTERS = 138,
	UBLOCK_NEW_TAI_LUE = 139,
	UBLOCK_OLD_PERSIAN = 140,
	UBLOCK_PHONETIC_EXTENSIONS_SUPPLEMENT = 141,
	UBLOCK_SUPPLEMENTAL_PUNCTUATION = 142,
	UBLOCK_SYLOTI_NAGRI = 143,
	UBLOCK_TIFINAGH = 144,
	UBLOCK_VERTICAL_FORMS = 145,
	UBLOCK_NKO = 146,
	UBLOCK_BALINESE = 147,
	UBLOCK_LATIN_EXTENDED_C = 148,
	UBLOCK_LATIN_EXTENDED_D = 149,
	UBLOCK_PHAGS_PA = 150,
	UBLOCK_PHOENICIAN = 151,
	UBLOCK_CUNEIFORM = 152,
	UBLOCK_CUNEIFORM_NUMBERS_AND_PUNCTUATION = 153,
	UBLOCK_COUNTING_ROD_NUMERALS = 154,
	UBLOCK_SUNDANESE = 155,
	UBLOCK_LEPCHA = 156,
	UBLOCK_OL_CHIKI = 157,
	UBLOCK_CYRILLIC_EXTENDED_A = 158,
	UBLOCK_VAI = 159,
	UBLOCK_CYRILLIC_EXTENDED_B = 160,
	UBLOCK_SAURASHTRA = 161,
	UBLOCK_KAYAH_LI = 162,
	UBLOCK_REJANG = 163,
	UBLOCK_CHAM = 164,
	UBLOCK_ANCIENT_SYMBOLS = 165,
	UBLOCK_PHAISTOS_DISC = 166,
	UBLOCK_LYCIAN = 167,
	UBLOCK_CARIAN = 168,
	UBLOCK_LYDIAN = 169,
	UBLOCK_MAHJONG_TILES = 170,
	UBLOCK_DOMINO_TILES = 171,
	UBLOCK_SAMARITAN = 172,
	UBLOCK_UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED = 173,
	UBLOCK_TAI_THAM = 174,
	UBLOCK_VEDIC_EXTENSIONS = 175,
	UBLOCK_LISU = 176,
	UBLOCK_BAMUM = 177,
	UBLOCK_COMMON_INDIC_NUMBER_FORMS = 178,
	UBLOCK_DEVANAGARI_EXTENDED = 179,
	UBLOCK_HANGUL_JAMO_EXTENDED_A = 180,
	UBLOCK_JAVANESE = 181,
	UBLOCK_MYANMAR_EXTENDED_A = 182,
	UBLOCK_TAI_VIET = 183,
	UBLOCK_MEETEI_MAYEK = 184,
	UBLOCK_HANGUL_JAMO_EXTENDED_B = 185,
	UBLOCK_IMPERIAL_ARAMAIC = 186,
	UBLOCK_OLD_SOUTH_ARABIAN = 187,
	UBLOCK_AVESTAN = 188,
	UBLOCK_INSCRIPTIONAL_PARTHIAN = 189,
	UBLOCK_INSCRIPTIONAL_PAHLAVI = 190,
	UBLOCK_OLD_TURKIC = 191,
	UBLOCK_RUMI_NUMERAL_SYMBOLS = 192,
	UBLOCK_KAITHI = 193,
	UBLOCK_EGYPTIAN_HIEROGLYPHS = 194,
	UBLOCK_ENCLOSED_ALPHANUMERIC_SUPPLEMENT = 195,
	UBLOCK_ENCLOSED_IDEOGRAPHIC_SUPPLEMENT = 196,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C = 197,
	UBLOCK_MANDAIC = 198,
	UBLOCK_BATAK = 199,
	UBLOCK_ETHIOPIC_EXTENDED_A = 200,
	UBLOCK_BRAHMI = 201,
	UBLOCK_BAMUM_SUPPLEMENT = 202,
	UBLOCK_KANA_SUPPLEMENT = 203,
	UBLOCK_PLAYING_CARDS = 204,
	UBLOCK_MISCELLANEOUS_SYMBOLS_AND_PICTOGRAPHS = 205,
	UBLOCK_EMOTICONS = 206,
	UBLOCK_TRANSPORT_AND_MAP_SYMBOLS = 207,
	UBLOCK_ALCHEMICAL_SYMBOLS = 208,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D = 209,
	UBLOCK_ARABIC_EXTENDED_A = 210,
	UBLOCK_ARABIC_MATHEMATICAL_ALPHABETIC_SYMBOLS = 211,
	UBLOCK_CHAKMA = 212,
	UBLOCK_MEETEI_MAYEK_EXTENSIONS = 213,
	UBLOCK_MEROITIC_CURSIVE = 214,
	UBLOCK_MEROITIC_HIEROGLYPHS = 215,
	UBLOCK_MIAO = 216,
	UBLOCK_SHARADA = 217,
	UBLOCK_SORA_SOMPENG = 218,
	UBLOCK_SUNDANESE_SUPPLEMENT = 219,
	UBLOCK_TAKRI = 220,
	UBLOCK_BASSA_VAH = 221,
	UBLOCK_CAUCASIAN_ALBANIAN = 222,
	UBLOCK_COPTIC_EPACT_NUMBERS = 223,
	UBLOCK_COMBINING_DIACRITICAL_MARKS_EXTENDED = 224,
	UBLOCK_DUPLOYAN = 225,
	UBLOCK_ELBASAN = 226,
	UBLOCK_GEOMETRIC_SHAPES_EXTENDED = 227,
	UBLOCK_GRANTHA = 228,
	UBLOCK_KHOJKI = 229,
	UBLOCK_KHUDAWADI = 230,
	UBLOCK_LATIN_EXTENDED_E = 231,
	UBLOCK_LINEAR_A = 232,
	UBLOCK_MAHAJANI = 233,
	UBLOCK_MANICHAEAN = 234,
	UBLOCK_MENDE_KIKAKUI = 235,
	UBLOCK_MODI = 236,
	UBLOCK_MRO = 237,
	UBLOCK_MYANMAR_EXTENDED_B = 238,
	UBLOCK_NABATAEAN = 239,
	UBLOCK_OLD_NORTH_ARABIAN = 240,
	UBLOCK_OLD_PERMIC = 241,
	UBLOCK_ORNAMENTAL_DINGBATS = 242,
	UBLOCK_PAHAWH_HMONG = 243,
	UBLOCK_PALMYRENE = 244,
	UBLOCK_PAU_CIN_HAU = 245,
	UBLOCK_PSALTER_PAHLAVI = 246,
	UBLOCK_SHORTHAND_FORMAT_CONTROLS = 247,
	UBLOCK_SIDDHAM = 248,
	UBLOCK_SINHALA_ARCHAIC_NUMBERS = 249,
	UBLOCK_SUPPLEMENTAL_ARROWS_C = 250,
	UBLOCK_TIRHUTA = 251,
	UBLOCK_WARANG_CITI = 252,
	UBLOCK_AHOM = 253,
	UBLOCK_ANATOLIAN_HIEROGLYPHS = 254,
	UBLOCK_CHEROKEE_SUPPLEMENT = 255,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E = 256,
	UBLOCK_EARLY_DYNASTIC_CUNEIFORM = 257,
	UBLOCK_HATRAN = 258,
	UBLOCK_MULTANI = 259,
	UBLOCK_OLD_HUNGARIAN = 260,
	UBLOCK_SUPPLEMENTAL_SYMBOLS_AND_PICTOGRAPHS = 261,
	UBLOCK_SUTTON_SIGNWRITING = 262,
	UBLOCK_ADLAM = 263,
	UBLOCK_BHAIKSUKI = 264,
	UBLOCK_CYRILLIC_EXTENDED_C = 265,
	UBLOCK_GLAGOLITIC_SUPPLEMENT = 266,
	UBLOCK_IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION = 267,
	UBLOCK_MARCHEN = 268,
	UBLOCK_MONGOLIAN_SUPPLEMENT = 269,
	UBLOCK_NEWA = 270,
	UBLOCK_OSAGE = 271,
	UBLOCK_TANGUT = 272,
	UBLOCK_TANGUT_COMPONENTS = 273,
	UBLOCK_CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F = 274,
	UBLOCK_KANA_EXTENDED_A = 275,
	UBLOCK_MASARAM_GONDI = 276,
	UBLOCK_NUSHU = 277,
	UBLOCK_SOYOMBO = 278,
	UBLOCK_SYRIAC_SUPPLEMENT = 279,
	UBLOCK_ZANABAZAR_SQUARE = 280,
	UBLOCK_CHESS_SYMBOLS = 281,
	UBLOCK_DOGRA = 282,
	UBLOCK_GEORGIAN_EXTENDED = 283,
	UBLOCK_GUNJALA_GONDI = 284,
	UBLOCK_HANIFI_ROHINGYA = 285,
	UBLOCK_INDIC_SIYAQ_NUMBERS = 286,
	UBLOCK_MAKASAR = 287,
	UBLOCK_MAYAN_NUMERALS = 288,
	UBLOCK_MEDEFAIDRIN = 289,
	UBLOCK_OLD_SOGDIAN = 290,
	UBLOCK_SOGDIAN = 291,

#ifndef U_HIDE_DEPRECATED_API
	UBLOCK_COUNT = 292,
#endif
	UBLOCK_INVALID_CODE=-1
} UBlockCode;

typedef enum UEastAsianWidth {
	U_EA_NEUTRAL,
	U_EA_AMBIGUOUS,
	U_EA_HALFWIDTH,
	U_EA_FULLWIDTH,
	U_EA_NARROW,
	U_EA_WIDE,

#ifndef U_HIDE_DEPRECATED_API
	U_EA_COUNT
#endif
} UEastAsianWidth;

typedef enum UCharNameChoice {
	U_UNICODE_CHAR_NAME,

#ifndef U_HIDE_DEPRECATED_API
	U_UNICODE_10_CHAR_NAME,
#endif
	U_EXTENDED_CHAR_NAME = U_UNICODE_CHAR_NAME+2,
	U_CHAR_NAME_ALIAS,

#ifndef U_HIDE_DEPRECATED_API
	U_CHAR_NAME_CHOICE_COUNT
#endif
} UCharNameChoice;

typedef enum UPropertyNameChoice {
	U_SHORT_PROPERTY_NAME,
	U_LONG_PROPERTY_NAME,

#ifndef U_HIDE_DEPRECATED_API
	U_PROPERTY_NAME_CHOICE_COUNT
#endif
} UPropertyNameChoice;

typedef enum UDecompositionType {
	U_DT_NONE,
	U_DT_CANONICAL,
	U_DT_COMPAT,
	U_DT_CIRCLE,
	U_DT_FINAL,
	U_DT_FONT,
	U_DT_FRACTION,
	U_DT_INITIAL,
	U_DT_ISOLATED,
	U_DT_MEDIAL,
	U_DT_NARROW,
	U_DT_NOBREAK,
	U_DT_SMALL,
	U_DT_SQUARE,
	U_DT_SUB,
	U_DT_SUPER,
	U_DT_VERTICAL,
	U_DT_WIDE,

#ifndef U_HIDE_DEPRECATED_API
	U_DT_COUNT
#endif
} UDecompositionType;

typedef enum UJoiningType {
	U_JT_NON_JOINING,
	U_JT_JOIN_CAUSING,
	U_JT_DUAL_JOINING,
	U_JT_LEFT_JOINING,

	U_JT_RIGHT_JOINING,
	U_JT_TRANSPARENT,

#ifndef U_HIDE_DEPRECATED_API
	U_JT_COUNT
#endif
} UJoiningType;

typedef enum UJoiningGroup {
	U_JG_NO_JOINING_GROUP,
	U_JG_AIN,
	U_JG_ALAPH,
	U_JG_ALEF,
	U_JG_BEH,
	U_JG_BETH,
	U_JG_DAL,
	U_JG_DALATH_RISH,
	U_JG_E,
	U_JG_FEH,
	U_JG_FINAL_SEMKATH,
	U_JG_GAF,
	U_JG_GAMAL,
	U_JG_HAH,
	U_JG_TEH_MARBUTA_GOAL,
	U_JG_HAMZA_ON_HEH_GOAL=U_JG_TEH_MARBUTA_GOAL,
	U_JG_HE,
	U_JG_HEH,
	U_JG_HEH_GOAL,
	U_JG_HETH,
	U_JG_KAF,
	U_JG_KAPH,
	U_JG_KNOTTED_HEH,
	U_JG_LAM,
	U_JG_LAMADH,
	U_JG_MEEM,
	U_JG_MIM,
	U_JG_NOON,
	U_JG_NUN,
	U_JG_PE,
	U_JG_QAF,
	U_JG_QAPH,
	U_JG_REH,
	U_JG_REVERSED_PE,
	U_JG_SAD,
	U_JG_SADHE,
	U_JG_SEEN,
	U_JG_SEMKATH,
	U_JG_SHIN,
	U_JG_SWASH_KAF,
	U_JG_SYRIAC_WAW,
	U_JG_TAH,
	U_JG_TAW,
	U_JG_TEH_MARBUTA,
	U_JG_TETH,
	U_JG_WAW,
	U_JG_YEH,
	U_JG_YEH_BARREE,
	U_JG_YEH_WITH_TAIL,
	U_JG_YUDH,
	U_JG_YUDH_HE,
	U_JG_ZAIN,
	U_JG_FE,
	U_JG_KHAPH,
	U_JG_ZHAIN,
	U_JG_BURUSHASKI_YEH_BARREE,
	U_JG_FARSI_YEH,
	U_JG_NYA,
	U_JG_ROHINGYA_YEH,
	U_JG_MANICHAEAN_ALEPH,
	U_JG_MANICHAEAN_AYIN,
	U_JG_MANICHAEAN_BETH,
	U_JG_MANICHAEAN_DALETH,
	U_JG_MANICHAEAN_DHAMEDH,
	U_JG_MANICHAEAN_FIVE,
	U_JG_MANICHAEAN_GIMEL,
	U_JG_MANICHAEAN_HETH,
	U_JG_MANICHAEAN_HUNDRED,
	U_JG_MANICHAEAN_KAPH,
	U_JG_MANICHAEAN_LAMEDH,
	U_JG_MANICHAEAN_MEM,
	U_JG_MANICHAEAN_NUN,
	U_JG_MANICHAEAN_ONE,
	U_JG_MANICHAEAN_PE,
	U_JG_MANICHAEAN_QOPH,
	U_JG_MANICHAEAN_RESH,
	U_JG_MANICHAEAN_SADHE,
	U_JG_MANICHAEAN_SAMEKH,
	U_JG_MANICHAEAN_TAW,
	U_JG_MANICHAEAN_TEN,
	U_JG_MANICHAEAN_TETH,
	U_JG_MANICHAEAN_THAMEDH,
	U_JG_MANICHAEAN_TWENTY,
	U_JG_MANICHAEAN_WAW,
	U_JG_MANICHAEAN_YODH,
	U_JG_MANICHAEAN_ZAYIN,
	U_JG_STRAIGHT_WAW,
	U_JG_AFRICAN_FEH,
	U_JG_AFRICAN_NOON,
	U_JG_AFRICAN_QAF,
	U_JG_MALAYALAM_BHA,
	U_JG_MALAYALAM_JA,
	U_JG_MALAYALAM_LLA,
	U_JG_MALAYALAM_LLLA,
	U_JG_MALAYALAM_NGA,
	U_JG_MALAYALAM_NNA,
	U_JG_MALAYALAM_NNNA,
	U_JG_MALAYALAM_NYA,
	U_JG_MALAYALAM_RA,
	U_JG_MALAYALAM_SSA,
	U_JG_MALAYALAM_TTA,
	U_JG_HANIFI_ROHINGYA_KINNA_YA,
	U_JG_HANIFI_ROHINGYA_PA,

#ifndef U_HIDE_DEPRECATED_API
	U_JG_COUNT
#endif
} UJoiningGroup;

typedef enum UGraphemeClusterBreak {
	U_GCB_OTHER = 0,
	U_GCB_CONTROL = 1,
    U_GCB_CR = 2,
	U_GCB_EXTEND = 3,
	U_GCB_L = 4,
	U_GCB_LF = 5,
	U_GCB_LV = 6,
	U_GCB_LVT = 7,
	U_GCB_T = 8,
	U_GCB_V = 9,
	U_GCB_SPACING_MARK = 10,
	U_GCB_PREPEND = 11,
    U_GCB_REGIONAL_INDICATOR = 12,
	U_GCB_E_BASE = 13,
	U_GCB_E_BASE_GAZ = 14,
	U_GCB_E_MODIFIER = 15,
	U_GCB_GLUE_AFTER_ZWJ = 16,
	U_GCB_ZWJ = 17,

#ifndef U_HIDE_DEPRECATED_API
	U_GCB_COUNT = 18
#endif
} UGraphemeClusterBreak;

typedef enum UWordBreakValues {
	U_WB_OTHER = 0,
	U_WB_ALETTER = 1,
	U_WB_FORMAT = 2,
	U_WB_KATAKANA = 3,
    U_WB_MIDLETTER = 4,
    U_WB_MIDNUM = 5,
	U_WB_NUMERIC = 6,
	U_WB_EXTENDNUMLET = 7,
	U_WB_CR = 8,
	U_WB_EXTEND = 9,
	U_WB_LF = 10,
	U_WB_MIDNUMLET =11,
    U_WB_NEWLINE =12,
	U_WB_REGIONAL_INDICATOR = 13,
	U_WB_HEBREW_LETTER = 14,
	U_WB_SINGLE_QUOTE = 15,
	U_WB_DOUBLE_QUOTE = 16,
	U_WB_E_BASE = 17,
	U_WB_E_BASE_GAZ = 18,
	U_WB_E_MODIFIER = 19,
	U_WB_GLUE_AFTER_ZWJ = 20,
	U_WB_ZWJ = 21,
	U_WB_WSEGSPACE = 22,

#ifndef U_HIDE_DEPRECATED_API
	U_WB_COUNT = 23
#endif
} UWordBreakValues;

typedef enum USentenceBreak {
	U_SB_OTHER = 0,
	U_SB_ATERM = 1,
	U_SB_CLOSE = 2,
	U_SB_FORMAT = 3,
	U_SB_LOWER = 4,
	U_SB_NUMERIC = 5,
	U_SB_OLETTER = 6,
	U_SB_SEP = 7,
	U_SB_SP = 8,
	U_SB_STERM = 9,
	U_SB_UPPER = 10,
	U_SB_CR = 11,
	U_SB_EXTEND = 12,
	U_SB_LF = 13,
	U_SB_SCONTINUE = 14,

#ifndef U_HIDE_DEPRECATED_API
	U_SB_COUNT = 15
#endif
} USentenceBreak;
typedef enum ULineBreak {
	U_LB_UNKNOWN = 0,
	U_LB_AMBIGUOUS = 1,
    U_LB_ALPHABETIC = 2,
	U_LB_BREAK_BOTH = 3,
	U_LB_BREAK_AFTER = 4,
	U_LB_BREAK_BEFORE = 5,
	U_LB_MANDATORY_BREAK = 6,
	U_LB_CONTINGENT_BREAK = 7,
	U_LB_CLOSE_PUNCTUATION = 8,
	U_LB_COMBINING_MARK = 9,
	U_LB_CARRIAGE_RETURN = 10,
	U_LB_EXCLAMATION = 11,
	U_LB_GLUE = 12,
	U_LB_HYPHEN = 13,
	U_LB_IDEOGRAPHIC = 14,
	U_LB_INSEPARABLE = 15,
	U_LB_INSEPERABLE = U_LB_INSEPARABLE,
	U_LB_INFIX_NUMERIC = 16,
	U_LB_LINE_FEED = 17,
    U_LB_NONSTARTER = 18,
	U_LB_NUMERIC = 19,
	U_LB_OPEN_PUNCTUATION = 20,
	U_LB_POSTFIX_NUMERIC = 21,
	U_LB_PREFIX_NUMERIC = 22,
	U_LB_QUOTATION = 23,
    U_LB_COMPLEX_CONTEXT = 24,
	U_LB_SURROGATE = 25,
    U_LB_SPACE = 26,
	U_LB_BREAK_SYMBOLS = 27,
	U_LB_ZWSPACE = 28,
	U_LB_NEXT_LINE = 29,
    U_LB_WORD_JOINER = 30,
	U_LB_H2 = 31,
	U_LB_H3 = 32,
	U_LB_JL = 33,
	U_LB_JT = 34,
	U_LB_JV = 35,
	U_LB_CLOSE_PARENTHESIS = 36,
	U_LB_CONDITIONAL_JAPANESE_STARTER = 37,
	U_LB_HEBREW_LETTER = 38,
	U_LB_REGIONAL_INDICATOR = 39,
	U_LB_E_BASE = 40,
	U_LB_E_MODIFIER = 41,
    U_LB_ZWJ = 42,

#ifndef U_HIDE_DEPRECATED_API
	U_LB_COUNT = 43
#endif
} ULineBreak;

typedef enum UNumericType {
	U_NT_NONE,
	U_NT_DECIMAL,
	U_NT_DIGIT,
	U_NT_NUMERIC,

#ifndef U_HIDE_DEPRECATED_API
	U_NT_COUNT
#endif
} UNumericType;

typedef enum UHangulSyllableType {
	U_HST_NOT_APPLICABLE,
	U_HST_LEADING_JAMO,
	U_HST_VOWEL_JAMO,
	U_HST_TRAILING_JAMO,
	U_HST_LV_SYLLABLE,
	U_HST_LVT_SYLLABLE,

#ifndef U_HIDE_DEPRECATED_API
	U_HST_COUNT
#endif
} UHangulSyllableType;

typedef enum UErrorCode {
    U_USING_FALLBACK_WARNING  = -128,
    U_ERROR_WARNING_START     = -128,
    U_USING_DEFAULT_WARNING   = -127,
    U_SAFECLONE_ALLOCATED_WARNING = -126,
    U_STATE_OLD_WARNING       = -125,
    U_STRING_NOT_TERMINATED_WARNING = -124,
    U_SORT_KEY_TOO_SHORT_WARNING = -123,
    U_AMBIGUOUS_ALIAS_WARNING = -122,
    U_DIFFERENT_UCA_VERSION = -121,
    U_PLUGIN_CHANGED_LEVEL_WARNING = -120,

#ifndef U_HIDE_DEPRECATED_API
    U_ERROR_WARNING_LIMIT,
#endif
    U_ZERO_ERROR              =  0,
    U_ILLEGAL_ARGUMENT_ERROR  =  1,
	U_MISSING_RESOURCE_ERROR  =  2,
	U_INVALID_FORMAT_ERROR    =  3,
	U_FILE_ACCESS_ERROR       =  4,
	U_INTERNAL_PROGRAM_ERROR  =  5,
	U_MESSAGE_PARSE_ERROR     =  6,
	U_MEMORY_ALLOCATION_ERROR =  7,
	U_INDEX_OUTOFBOUNDS_ERROR =  8,
	U_PARSE_ERROR             =  9,
	U_INVALID_CHAR_FOUND      = 10,
	U_TRUNCATED_CHAR_FOUND    = 11,
	U_ILLEGAL_CHAR_FOUND      = 12,
	U_INVALID_TABLE_FORMAT    = 13,
	U_INVALID_TABLE_FILE      = 14,
	U_BUFFER_OVERFLOW_ERROR   = 15,
	U_UNSUPPORTED_ERROR       = 16,
	U_RESOURCE_TYPE_MISMATCH  = 17,
	U_ILLEGAL_ESCAPE_SEQUENCE = 18,
	U_UNSUPPORTED_ESCAPE_SEQUENCE = 19,
	U_NO_SPACE_AVAILABLE      = 20,
	U_CE_NOT_FOUND_ERROR      = 21,
	U_PRIMARY_TOO_LONG_ERROR  = 22,
	U_STATE_TOO_OLD_ERROR     = 23,
	U_TOO_MANY_ALIASES_ERROR  = 24,
    U_ENUM_OUT_OF_SYNC_ERROR  = 25,
	U_INVARIANT_CONVERSION_ERROR = 26,
	U_INVALID_STATE_ERROR     = 27,
	U_COLLATOR_VERSION_MISMATCH = 28,
	U_USELESS_COLLATOR_ERROR  = 29,
	U_NO_WRITE_PERMISSION     = 30,

#ifndef U_HIDE_DEPRECATED_API
    U_STANDARD_ERROR_LIMIT,
#endif
    U_BAD_VARIABLE_DEFINITION=0x10000,
    U_PARSE_ERROR_START = 0x10000,
	U_MALFORMED_RULE,
	U_MALFORMED_SET,
	U_MALFORMED_SYMBOL_REFERENCE,
	U_MALFORMED_UNICODE_ESCAPE,
	U_MALFORMED_VARIABLE_DEFINITION,
	U_MALFORMED_VARIABLE_REFERENCE,
	U_MISMATCHED_SEGMENT_DELIMITERS,
	U_MISPLACED_ANCHOR_START,
	U_MISPLACED_CURSOR_OFFSET,
	U_MISPLACED_QUANTIFIER,
	U_MISSING_OPERATOR,
	U_MISSING_SEGMENT_CLOSE,
	U_MULTIPLE_ANTE_CONTEXTS,
	U_MULTIPLE_CURSORS,
	U_MULTIPLE_POST_CONTEXTS,
	U_TRAILING_BACKSLASH,
	U_UNDEFINED_SEGMENT_REFERENCE,
	U_UNDEFINED_VARIABLE,
	U_UNQUOTED_SPECIAL,
	U_UNTERMINATED_QUOTE,
	U_RULE_MASK_ERROR,
	U_MISPLACED_COMPOUND_FILTER,
	U_MULTIPLE_COMPOUND_FILTERS,
	U_INVALID_RBT_SYNTAX,
	U_INVALID_PROPERTY_PATTERN,
	U_MALFORMED_PRAGMA,
	U_UNCLOSED_SEGMENT,
	U_ILLEGAL_CHAR_IN_SEGMENT,
	U_VARIABLE_RANGE_EXHAUSTED,
	U_VARIABLE_RANGE_OVERLAP,
	U_ILLEGAL_CHARACTER,
	U_INTERNAL_TRANSLITERATOR_ERROR,
	U_INVALID_ID,
	U_INVALID_FUNCTION,

#ifndef U_HIDE_DEPRECATED_API
    U_PARSE_ERROR_LIMIT,
#endif
    U_UNEXPECTED_TOKEN=0x10100,
	U_FMT_PARSE_ERROR_START=0x10100,
	U_MULTIPLE_DECIMAL_SEPARATORS,
	U_MULTIPLE_DECIMAL_SEPERATORS = U_MULTIPLE_DECIMAL_SEPARATORS,
	U_MULTIPLE_EXPONENTIAL_SYMBOLS,
	U_MALFORMED_EXPONENTIAL_PATTERN,
	U_MULTIPLE_PERCENT_SYMBOLS,
	U_MULTIPLE_PERMILL_SYMBOLS,
	U_MULTIPLE_PAD_SPECIFIERS,
	U_PATTERN_SYNTAX_ERROR,
	U_ILLEGAL_PAD_POSITION,
	U_UNMATCHED_BRACES,
	U_UNSUPPORTED_PROPERTY,
	U_UNSUPPORTED_ATTRIBUTE,
	U_ARGUMENT_TYPE_MISMATCH,
	U_DUPLICATE_KEYWORD,
	U_UNDEFINED_KEYWORD,
	U_DEFAULT_KEYWORD_MISSING,
	U_DECIMAL_NUMBER_SYNTAX_ERROR,
	U_FORMAT_INEXACT_ERROR,

#ifndef U_HIDE_DRAFT_API
    U_NUMBER_ARG_OUTOFBOUNDS_ERROR,
#endif

#ifndef U_HIDE_DRAFT_API
    U_NUMBER_SKELETON_SYNTAX_ERROR,
#endif

#ifndef U_HIDE_DEPRECATED_API
    U_FMT_PARSE_ERROR_LIMIT = 0x10114,
#endif
    U_BRK_INTERNAL_ERROR=0x10200,
	U_BRK_ERROR_START=0x10200,
	U_BRK_HEX_DIGITS_EXPECTED,
	U_BRK_SEMICOLON_EXPECTED,
	U_BRK_RULE_SYNTAX,
	U_BRK_UNCLOSED_SET,
	U_BRK_ASSIGN_ERROR,
	U_BRK_VARIABLE_REDFINITION,
	U_BRK_MISMATCHED_PAREN,
	U_BRK_NEW_LINE_IN_QUOTED_STRING,
	U_BRK_UNDEFINED_VARIABLE,
	U_BRK_INIT_ERROR,
	U_BRK_RULE_EMPTY_SET,
	U_BRK_UNRECOGNIZED_OPTION,
	U_BRK_MALFORMED_RULE_TAG,
#ifndef U_HIDE_DEPRECATED_API
    U_BRK_ERROR_LIMIT,
#endif
    U_REGEX_INTERNAL_ERROR=0x10300,
	U_REGEX_ERROR_START=0x10300,
	U_REGEX_RULE_SYNTAX,
	U_REGEX_INVALID_STATE,
	U_REGEX_BAD_ESCAPE_SEQUENCE,
	U_REGEX_PROPERTY_SYNTAX,
	U_REGEX_UNIMPLEMENTED,
	U_REGEX_MISMATCHED_PAREN,
	U_REGEX_NUMBER_TOO_BIG,
	U_REGEX_BAD_INTERVAL,
	U_REGEX_MAX_LT_MIN,
	U_REGEX_INVALID_BACK_REF,
	U_REGEX_INVALID_FLAG,
	U_REGEX_LOOK_BEHIND_LIMIT,
	U_REGEX_SET_CONTAINS_STRING,
#ifndef U_HIDE_DEPRECATED_API
    U_REGEX_OCTAL_TOO_BIG,
#endif
    U_REGEX_MISSING_CLOSE_BRACKET=U_REGEX_SET_CONTAINS_STRING+2,
	U_REGEX_INVALID_RANGE,
	U_REGEX_STACK_OVERFLOW,
	U_REGEX_TIME_OUT,
	U_REGEX_STOPPED_BY_CALLER,
	U_REGEX_PATTERN_TOO_BIG,
	U_REGEX_INVALID_CAPTURE_GROUP_NAME,
#ifndef U_HIDE_DEPRECATED_API
    U_REGEX_ERROR_LIMIT=U_REGEX_STOPPED_BY_CALLER+3,
#endif
    U_IDNA_PROHIBITED_ERROR=0x10400,
    U_IDNA_ERROR_START=0x10400,
    U_IDNA_UNASSIGNED_ERROR,
    U_IDNA_CHECK_BIDI_ERROR,
    U_IDNA_STD3_ASCII_RULES_ERROR,
    U_IDNA_ACE_PREFIX_ERROR,
    U_IDNA_VERIFICATION_ERROR,
    U_IDNA_LABEL_TOO_LONG_ERROR,
    U_IDNA_ZERO_LENGTH_LABEL_ERROR,
    U_IDNA_DOMAIN_NAME_TOO_LONG_ERROR,
#ifndef U_HIDE_DEPRECATED_API
    U_IDNA_ERROR_LIMIT,
#endif

    U_STRINGPREP_PROHIBITED_ERROR = U_IDNA_PROHIBITED_ERROR,
    U_STRINGPREP_UNASSIGNED_ERROR = U_IDNA_UNASSIGNED_ERROR,
    U_STRINGPREP_CHECK_BIDI_ERROR = U_IDNA_CHECK_BIDI_ERROR,
    U_PLUGIN_ERROR_START=0x10500,
	U_PLUGIN_TOO_HIGH=0x10500,
	U_PLUGIN_DIDNT_SET_LEVEL,
#ifndef U_HIDE_DEPRECATED_API
    U_PLUGIN_ERROR_LIMIT,
#endif
#ifndef U_HIDE_DEPRECATED_API
    U_ERROR_LIMIT=U_PLUGIN_ERROR_LIMIT
#endif
} UErrorCode;

struct BinaryProperty;

typedef UBool BinaryPropertyContains(const BinaryProperty &prop, UChar32 c, UProperty which);

typedef struct BinaryProperty {
    int32_t column;
    uint32_t mask;
    BinaryPropertyContains *contains;
} BinaryProperty;

typedef struct UBreakIterator UBreakIterator;

#endif