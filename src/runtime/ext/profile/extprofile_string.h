/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef __EXTPROFILE_STRING_H__
#define __EXTPROFILE_STRING_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_string.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline String x_addcslashes(CStrRef str, CStrRef charlist) {
  FUNCTION_INJECTION_BUILTIN(addcslashes);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_addcslashes(str, charlist);
}

inline String x_stripcslashes(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(stripcslashes);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_stripcslashes(str);
}

inline String x_addslashes(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(addslashes);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_addslashes(str);
}

inline String x_stripslashes(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(stripslashes);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_stripslashes(str);
}

inline String x_bin2hex(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(bin2hex);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_bin2hex(str);
}

inline String x_hex2bin(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(hex2bin);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hex2bin(str);
}

inline String x_nl2br(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(nl2br);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_nl2br(str);
}

inline String x_quotemeta(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(quotemeta);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_quotemeta(str);
}

inline String x_str_shuffle(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(str_shuffle);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_str_shuffle(str);
}

inline String x_strrev(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(strrev);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strrev(str);
}

inline String x_strtolower(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(strtolower);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strtolower(str);
}

inline String x_strtoupper(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(strtoupper);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strtoupper(str);
}

inline String x_ucfirst(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(ucfirst);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_ucfirst(str);
}

inline String x_ucwords(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(ucwords);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_ucwords(str);
}

inline String x_strip_tags(CStrRef str, CStrRef allowable_tags = "") {
  FUNCTION_INJECTION_BUILTIN(strip_tags);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strip_tags(str, allowable_tags);
}

inline String x_trim(CStrRef str, CStrRef charlist = k_HPHP_TRIM_CHARLIST) {
  FUNCTION_INJECTION_BUILTIN(trim);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_trim(str, charlist);
}

inline String x_ltrim(CStrRef str, CStrRef charlist = k_HPHP_TRIM_CHARLIST) {
  FUNCTION_INJECTION_BUILTIN(ltrim);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_ltrim(str, charlist);
}

inline String x_rtrim(CStrRef str, CStrRef charlist = k_HPHP_TRIM_CHARLIST) {
  FUNCTION_INJECTION_BUILTIN(rtrim);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_rtrim(str, charlist);
}

inline String x_chop(CStrRef str, CStrRef charlist = k_HPHP_TRIM_CHARLIST) {
  FUNCTION_INJECTION_BUILTIN(chop);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_chop(str, charlist);
}

inline Variant x_explode(CStrRef delimiter, CStrRef str, int limit = 0x7FFFFFFF) {
  FUNCTION_INJECTION_BUILTIN(explode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_explode(delimiter, str, limit);
}

inline String x_implode(CVarRef arg1, CVarRef arg2 = null_variant) {
  FUNCTION_INJECTION_BUILTIN(implode);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_implode(arg1, arg2);
}

inline String x_join(CVarRef glue, CVarRef pieces = null_variant) {
  FUNCTION_INJECTION_BUILTIN(join);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_join(glue, pieces);
}

inline Variant x_str_split(CStrRef str, int split_length = 1) {
  FUNCTION_INJECTION_BUILTIN(str_split);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_str_split(str, split_length);
}

inline Variant x_chunk_split(CStrRef body, int chunklen = 76, CStrRef end = "\r\n") {
  FUNCTION_INJECTION_BUILTIN(chunk_split);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_chunk_split(body, chunklen, end);
}

inline Variant x_strtok(CStrRef str, CVarRef token = null_variant) {
  FUNCTION_INJECTION_BUILTIN(strtok);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strtok(str, token);
}

inline Variant x_str_replace(CVarRef search, CVarRef replace, CVarRef subject, VRefParam count = null) {
  FUNCTION_INJECTION_BUILTIN(str_replace);
  return f_str_replace(search, replace, subject, count);
}

inline Variant x_str_ireplace(CVarRef search, CVarRef replace, CVarRef subject, VRefParam count = null) {
  FUNCTION_INJECTION_BUILTIN(str_ireplace);
  return f_str_ireplace(search, replace, subject, count);
}

inline Variant x_substr_replace(CVarRef str, CVarRef replacement, CVarRef start, CVarRef length = 0x7FFFFFFF) {
  FUNCTION_INJECTION_BUILTIN(substr_replace);
  return f_substr_replace(str, replacement, start, length);
}

inline Variant x_substr(CStrRef str, int start, int length = 0x7FFFFFFF) {
  FUNCTION_INJECTION_BUILTIN(substr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_substr(str, start, length);
}

inline String x_str_pad(CStrRef input, int pad_length, CStrRef pad_string = " ", int pad_type = k_STR_PAD_RIGHT) {
  FUNCTION_INJECTION_BUILTIN(str_pad);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_str_pad(input, pad_length, pad_string, pad_type);
}

inline String x_str_repeat(CStrRef input, int multiplier) {
  FUNCTION_INJECTION_BUILTIN(str_repeat);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_str_repeat(input, multiplier);
}

inline Variant x_wordwrap(CStrRef str, int width = 75, CStrRef wordbreak = "\n", bool cut = false) {
  FUNCTION_INJECTION_BUILTIN(wordwrap);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_wordwrap(str, width, wordbreak, cut);
}

inline String x_html_entity_decode(CStrRef str, int quote_style = k_ENT_COMPAT, CStrRef charset = "ISO-8859-1") {
  FUNCTION_INJECTION_BUILTIN(html_entity_decode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_html_entity_decode(str, quote_style, charset);
}

inline String x_htmlentities(CStrRef str, int quote_style = k_ENT_COMPAT, CStrRef charset = "ISO-8859-1", bool double_encode = true) {
  FUNCTION_INJECTION_BUILTIN(htmlentities);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_htmlentities(str, quote_style, charset, double_encode);
}

inline String x_htmlspecialchars_decode(CStrRef str, int quote_style = k_ENT_COMPAT) {
  FUNCTION_INJECTION_BUILTIN(htmlspecialchars_decode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_htmlspecialchars_decode(str, quote_style);
}

inline String x_htmlspecialchars(CStrRef str, int quote_style = k_ENT_COMPAT, CStrRef charset = "ISO-8859-1", bool double_encode = true) {
  FUNCTION_INJECTION_BUILTIN(htmlspecialchars);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_htmlspecialchars(str, quote_style, charset, double_encode);
}

inline String x_fb_htmlspecialchars(CStrRef str, int quote_style = k_ENT_COMPAT, CStrRef charset = "ISO-8859-1", CArrRef extra = Array()) {
  FUNCTION_INJECTION_BUILTIN(fb_htmlspecialchars);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_fb_htmlspecialchars(str, quote_style, charset, extra);
}

inline String x_quoted_printable_encode(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(quoted_printable_encode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_quoted_printable_encode(str);
}

inline String x_quoted_printable_decode(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(quoted_printable_decode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_quoted_printable_decode(str);
}

inline Variant x_convert_uudecode(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(convert_uudecode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_convert_uudecode(data);
}

inline Variant x_convert_uuencode(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(convert_uuencode);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_convert_uuencode(data);
}

inline String x_str_rot13(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(str_rot13);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_str_rot13(str);
}

inline int64 x_crc32(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(crc32);
  return f_crc32(str);
}

inline String x_crypt(CStrRef str, CStrRef salt = "") {
  FUNCTION_INJECTION_BUILTIN(crypt);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_crypt(str, salt);
}

inline String x_md5(CStrRef str, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(md5);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_md5(str, raw_output);
}

inline String x_sha1(CStrRef str, bool raw_output = false) {
  FUNCTION_INJECTION_BUILTIN(sha1);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_sha1(str, raw_output);
}

inline Variant x_strtr(CStrRef str, CVarRef from, CVarRef to = null_variant) {
  FUNCTION_INJECTION_BUILTIN(strtr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strtr(str, from, to);
}

inline String x_convert_cyr_string(CStrRef str, CStrRef from, CStrRef to) {
  FUNCTION_INJECTION_BUILTIN(convert_cyr_string);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_convert_cyr_string(str, from, to);
}

inline Array x_get_html_translation_table(int table = 0, int quote_style = k_ENT_COMPAT) {
  FUNCTION_INJECTION_BUILTIN(get_html_translation_table);
  return f_get_html_translation_table(table, quote_style);
}

inline String x_hebrev(CStrRef hebrew_text, int max_chars_per_line = 0) {
  FUNCTION_INJECTION_BUILTIN(hebrev);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hebrev(hebrew_text, max_chars_per_line);
}

inline String x_hebrevc(CStrRef hebrew_text, int max_chars_per_line = 0) {
  FUNCTION_INJECTION_BUILTIN(hebrevc);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_hebrevc(hebrew_text, max_chars_per_line);
}

inline Variant x_setlocale(int _argc, int category, CVarRef locale, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(setlocale);
  return f_setlocale(_argc, category, locale, _argv);
}

inline Array x_localeconv() {
  FUNCTION_INJECTION_BUILTIN(localeconv);
  return f_localeconv();
}

inline String x_nl_langinfo(int item) {
  FUNCTION_INJECTION_BUILTIN(nl_langinfo);
  return f_nl_langinfo(item);
}

inline Variant x_printf(int _argc, CStrRef format, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(printf);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_printf(_argc, format, _argv);
}

inline Variant x_vprintf(CStrRef format, CArrRef args) {
  FUNCTION_INJECTION_BUILTIN(vprintf);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_vprintf(format, args);
}

inline Variant x_sprintf(int _argc, CStrRef format, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(sprintf);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_sprintf(_argc, format, _argv);
}

inline Variant x_vsprintf(CStrRef format, CArrRef args) {
  FUNCTION_INJECTION_BUILTIN(vsprintf);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_vsprintf(format, args);
}

inline Variant x_sscanf(int _argc, CStrRef str, CStrRef format, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(sscanf);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_sscanf(_argc, str, format, _argv);
}

inline String x_chr(int64 ascii) {
  FUNCTION_INJECTION_BUILTIN(chr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_chr(ascii);
}

inline int64 x_ord(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(ord);
  return f_ord(str);
}

inline Variant x_money_format(CStrRef format, double number) {
  FUNCTION_INJECTION_BUILTIN(money_format);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_money_format(format, number);
}

inline String x_number_format(double number, int decimals = 0, CStrRef dec_point = ".", CStrRef thousands_sep = ",") {
  FUNCTION_INJECTION_BUILTIN(number_format);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_number_format(number, decimals, dec_point, thousands_sep);
}

inline int64 x_strcmp(CStrRef str1, CStrRef str2) {
  FUNCTION_INJECTION_BUILTIN(strcmp);
  return f_strcmp(str1, str2);
}

inline int64 x_strncmp(CStrRef str1, CStrRef str2, int len) {
  FUNCTION_INJECTION_BUILTIN(strncmp);
  return f_strncmp(str1, str2, len);
}

inline int64 x_strnatcmp(CStrRef str1, CStrRef str2) {
  FUNCTION_INJECTION_BUILTIN(strnatcmp);
  return f_strnatcmp(str1, str2);
}

inline int64 x_strcasecmp(CStrRef str1, CStrRef str2) {
  FUNCTION_INJECTION_BUILTIN(strcasecmp);
  return f_strcasecmp(str1, str2);
}

inline int64 x_strncasecmp(CStrRef str1, CStrRef str2, int len) {
  FUNCTION_INJECTION_BUILTIN(strncasecmp);
  return f_strncasecmp(str1, str2, len);
}

inline int64 x_strnatcasecmp(CStrRef str1, CStrRef str2) {
  FUNCTION_INJECTION_BUILTIN(strnatcasecmp);
  return f_strnatcasecmp(str1, str2);
}

inline int64 x_strcoll(CStrRef str1, CStrRef str2) {
  FUNCTION_INJECTION_BUILTIN(strcoll);
  return f_strcoll(str1, str2);
}

inline Variant x_substr_compare(CStrRef main_str, CStrRef str, int offset, int length = INT_MAX, bool case_insensitivity = false) {
  FUNCTION_INJECTION_BUILTIN(substr_compare);
  return f_substr_compare(main_str, str, offset, length, case_insensitivity);
}

inline Variant x_strchr(CStrRef haystack, CVarRef needle) {
  FUNCTION_INJECTION_BUILTIN(strchr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strchr(haystack, needle);
}

inline Variant x_strrchr(CStrRef haystack, CVarRef needle) {
  FUNCTION_INJECTION_BUILTIN(strrchr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strrchr(haystack, needle);
}

inline Variant x_strstr(CStrRef haystack, CVarRef needle) {
  FUNCTION_INJECTION_BUILTIN(strstr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strstr(haystack, needle);
}

inline Variant x_stristr(CStrRef haystack, CVarRef needle) {
  FUNCTION_INJECTION_BUILTIN(stristr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_stristr(haystack, needle);
}

inline Variant x_strpbrk(CStrRef haystack, CStrRef char_list) {
  FUNCTION_INJECTION_BUILTIN(strpbrk);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_strpbrk(haystack, char_list);
}

inline Variant x_strpos(CStrRef haystack, CVarRef needle, int offset = 0) {
  FUNCTION_INJECTION_BUILTIN(strpos);
  return f_strpos(haystack, needle, offset);
}

inline Variant x_stripos(CStrRef haystack, CVarRef needle, int offset = 0) {
  FUNCTION_INJECTION_BUILTIN(stripos);
  return f_stripos(haystack, needle, offset);
}

inline Variant x_strrpos(CStrRef haystack, CVarRef needle, int offset = 0) {
  FUNCTION_INJECTION_BUILTIN(strrpos);
  return f_strrpos(haystack, needle, offset);
}

inline Variant x_strripos(CStrRef haystack, CVarRef needle, int offset = 0) {
  FUNCTION_INJECTION_BUILTIN(strripos);
  return f_strripos(haystack, needle, offset);
}

inline Variant x_substr_count(CStrRef haystack, CStrRef needle, int offset = 0, int length = 0x7FFFFFFF) {
  FUNCTION_INJECTION_BUILTIN(substr_count);
  return f_substr_count(haystack, needle, offset, length);
}

inline Variant x_strspn(CStrRef str1, CStrRef str2, int start = 0, int length = 0x7FFFFFFF) {
  FUNCTION_INJECTION_BUILTIN(strspn);
  return f_strspn(str1, str2, start, length);
}

inline Variant x_strcspn(CStrRef str1, CStrRef str2, int start = 0, int length = 0x7FFFFFFF) {
  FUNCTION_INJECTION_BUILTIN(strcspn);
  return f_strcspn(str1, str2, start, length);
}

inline int64 x_strlen(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(strlen);
  return f_strlen(str);
}

inline Variant x_count_chars(CStrRef str, int64 mode = 0) {
  FUNCTION_INJECTION_BUILTIN(count_chars);
  return f_count_chars(str, mode);
}

inline Variant x_str_word_count(CStrRef str, int64 format = 0, CStrRef charlist = "") {
  FUNCTION_INJECTION_BUILTIN(str_word_count);
  return f_str_word_count(str, format, charlist);
}

inline int64 x_levenshtein(CStrRef str1, CStrRef str2, int cost_ins = 1, int cost_rep = 1, int cost_del = 1) {
  FUNCTION_INJECTION_BUILTIN(levenshtein);
  return f_levenshtein(str1, str2, cost_ins, cost_rep, cost_del);
}

inline int64 x_similar_text(CStrRef first, CStrRef second, VRefParam percent = null) {
  FUNCTION_INJECTION_BUILTIN(similar_text);
  return f_similar_text(first, second, percent);
}

inline Variant x_soundex(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(soundex);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_soundex(str);
}

inline Variant x_metaphone(CStrRef str, int phones = 0) {
  FUNCTION_INJECTION_BUILTIN(metaphone);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_metaphone(str, phones);
}

inline void x_parse_str(CStrRef str, VRefParam arr = null) {
  FUNCTION_INJECTION_BUILTIN(parse_str);
  f_parse_str(str, arr);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_STRING_H__
