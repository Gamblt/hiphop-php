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

#ifndef __EXTPROFILE_MB_H__
#define __EXTPROFILE_MB_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_mb.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Array x_mb_list_encodings() {
  FUNCTION_INJECTION_BUILTIN(mb_list_encodings);
  return f_mb_list_encodings();
}

inline Variant x_mb_list_encodings_alias_names(CStrRef name = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_list_encodings_alias_names);
  return f_mb_list_encodings_alias_names(name);
}

inline Variant x_mb_list_mime_names(CStrRef name = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_list_mime_names);
  return f_mb_list_mime_names(name);
}

inline bool x_mb_check_encoding(CStrRef var = null_string, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_check_encoding);
  return f_mb_check_encoding(var, encoding);
}

inline Variant x_mb_convert_case(CStrRef str, int mode, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_convert_case);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_convert_case(str, mode, encoding);
}

inline Variant x_mb_convert_encoding(CStrRef str, CStrRef to_encoding, CVarRef from_encoding = null_variant) {
  FUNCTION_INJECTION_BUILTIN(mb_convert_encoding);
  return f_mb_convert_encoding(str, to_encoding, from_encoding);
}

inline Variant x_mb_convert_kana(CStrRef str, CStrRef option = null_string, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_convert_kana);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_convert_kana(str, option, encoding);
}

inline Variant x_mb_convert_variables(int _argc, CStrRef to_encoding, CVarRef from_encoding, VRefParam vars, CArrRef _argv = null_array) {
  FUNCTION_INJECTION_BUILTIN(mb_convert_variables);
  return f_mb_convert_variables(_argc, to_encoding, from_encoding, vars, _argv);
}

inline Variant x_mb_decode_mimeheader(CStrRef str) {
  FUNCTION_INJECTION_BUILTIN(mb_decode_mimeheader);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_decode_mimeheader(str);
}

inline Variant x_mb_decode_numericentity(CStrRef str, CVarRef convmap, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_decode_numericentity);
  return f_mb_decode_numericentity(str, convmap, encoding);
}

inline Variant x_mb_detect_encoding(CStrRef str, CVarRef encoding_list = null_variant, CVarRef strict = null_variant) {
  FUNCTION_INJECTION_BUILTIN(mb_detect_encoding);
  return f_mb_detect_encoding(str, encoding_list, strict);
}

inline Variant x_mb_detect_order(CVarRef encoding_list = null_variant) {
  FUNCTION_INJECTION_BUILTIN(mb_detect_order);
  return f_mb_detect_order(encoding_list);
}

inline Variant x_mb_encode_mimeheader(CStrRef str, CStrRef charset = null_string, CStrRef transfer_encoding = null_string, CStrRef linefeed = "\r\n", int indent = 0) {
  FUNCTION_INJECTION_BUILTIN(mb_encode_mimeheader);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_encode_mimeheader(str, charset, transfer_encoding, linefeed, indent);
}

inline Variant x_mb_encode_numericentity(CStrRef str, CVarRef convmap, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_encode_numericentity);
  return f_mb_encode_numericentity(str, convmap, encoding);
}

inline bool x_mb_ereg_match(CStrRef pattern, CStrRef str, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_match);
  return f_mb_ereg_match(pattern, str, option);
}

inline Variant x_mb_ereg_replace(CVarRef pattern, CStrRef replacement, CStrRef str, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_replace);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_ereg_replace(pattern, replacement, str, option);
}

inline int64 x_mb_ereg_search_getpos() {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search_getpos);
  return f_mb_ereg_search_getpos();
}

inline Variant x_mb_ereg_search_getregs() {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search_getregs);
  return f_mb_ereg_search_getregs();
}

inline bool x_mb_ereg_search_init(CStrRef str, CStrRef pattern = null_string, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search_init);
  return f_mb_ereg_search_init(str, pattern, option);
}

inline Variant x_mb_ereg_search_pos(CStrRef pattern = null_string, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search_pos);
  return f_mb_ereg_search_pos(pattern, option);
}

inline Variant x_mb_ereg_search_regs(CStrRef pattern = null_string, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search_regs);
  return f_mb_ereg_search_regs(pattern, option);
}

inline bool x_mb_ereg_search_setpos(int position) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search_setpos);
  return f_mb_ereg_search_setpos(position);
}

inline Variant x_mb_ereg_search(CStrRef pattern = null_string, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg_search);
  return f_mb_ereg_search(pattern, option);
}

inline Variant x_mb_ereg(CVarRef pattern, CStrRef str, VRefParam regs = null) {
  FUNCTION_INJECTION_BUILTIN(mb_ereg);
  return f_mb_ereg(pattern, str, regs);
}

inline Variant x_mb_eregi_replace(CVarRef pattern, CStrRef replacement, CStrRef str, CStrRef option = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_eregi_replace);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_eregi_replace(pattern, replacement, str, option);
}

inline Variant x_mb_eregi(CVarRef pattern, CStrRef str, VRefParam regs = null) {
  FUNCTION_INJECTION_BUILTIN(mb_eregi);
  return f_mb_eregi(pattern, str, regs);
}

inline Variant x_mb_get_info(CStrRef type = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_get_info);
  return f_mb_get_info(type);
}

inline Variant x_mb_http_input(CStrRef type = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_http_input);
  return f_mb_http_input(type);
}

inline Variant x_mb_http_output(CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_http_output);
  return f_mb_http_output(encoding);
}

inline Variant x_mb_internal_encoding(CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_internal_encoding);
  return f_mb_internal_encoding(encoding);
}

inline Variant x_mb_language(CStrRef language = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_language);
  return f_mb_language(language);
}

inline String x_mb_output_handler(CStrRef contents, int status) {
  FUNCTION_INJECTION_BUILTIN(mb_output_handler);
  return f_mb_output_handler(contents, status);
}

inline bool x_mb_parse_str(CStrRef encoded_string, VRefParam result = null) {
  FUNCTION_INJECTION_BUILTIN(mb_parse_str);
  return f_mb_parse_str(encoded_string, result);
}

inline Variant x_mb_preferred_mime_name(CStrRef encoding) {
  FUNCTION_INJECTION_BUILTIN(mb_preferred_mime_name);
  return f_mb_preferred_mime_name(encoding);
}

inline Variant x_mb_regex_encoding(CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_regex_encoding);
  return f_mb_regex_encoding(encoding);
}

inline String x_mb_regex_set_options(CStrRef options = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_regex_set_options);
  return f_mb_regex_set_options(options);
}

inline bool x_mb_send_mail(CStrRef to, CStrRef subject, CStrRef message, CStrRef headers = null_string, CStrRef extra_cmd = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_send_mail);
  return f_mb_send_mail(to, subject, message, headers, extra_cmd);
}

inline Variant x_mb_split(CStrRef pattern, CStrRef str, int count = -1) {
  FUNCTION_INJECTION_BUILTIN(mb_split);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_split(pattern, str, count);
}

inline Variant x_mb_strcut(CStrRef str, int start, int length = 0x7FFFFFFF, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strcut);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strcut(str, start, length, encoding);
}

inline Variant x_mb_strimwidth(CStrRef str, int start, int width, CStrRef trimmarker = null_string, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strimwidth);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strimwidth(str, start, width, trimmarker, encoding);
}

inline Variant x_mb_stripos(CStrRef haystack, CStrRef needle, int offset = 0, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_stripos);
  return f_mb_stripos(haystack, needle, offset, encoding);
}

inline Variant x_mb_stristr(CStrRef haystack, CStrRef needle, bool part = false, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_stristr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_stristr(haystack, needle, part, encoding);
}

inline Variant x_mb_strlen(CStrRef str, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strlen);
  return f_mb_strlen(str, encoding);
}

inline Variant x_mb_strpos(CStrRef haystack, CStrRef needle, int offset = 0, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strpos);
  return f_mb_strpos(haystack, needle, offset, encoding);
}

inline Variant x_mb_strrchr(CStrRef haystack, CStrRef needle, bool part = false, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strrchr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strrchr(haystack, needle, part, encoding);
}

inline Variant x_mb_strrichr(CStrRef haystack, CStrRef needle, bool part = false, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strrichr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strrichr(haystack, needle, part, encoding);
}

inline Variant x_mb_strripos(CStrRef haystack, CStrRef needle, int offset = 0, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strripos);
  return f_mb_strripos(haystack, needle, offset, encoding);
}

inline Variant x_mb_strrpos(CStrRef haystack, CStrRef needle, CVarRef offset = 0, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strrpos);
  return f_mb_strrpos(haystack, needle, offset, encoding);
}

inline Variant x_mb_strstr(CStrRef haystack, CStrRef needle, bool part = false, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strstr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strstr(haystack, needle, part, encoding);
}

inline Variant x_mb_strtolower(CStrRef str, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strtolower);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strtolower(str, encoding);
}

inline Variant x_mb_strtoupper(CStrRef str, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strtoupper);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_strtoupper(str, encoding);
}

inline Variant x_mb_strwidth(CStrRef str, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_strwidth);
  return f_mb_strwidth(str, encoding);
}

inline Variant x_mb_substitute_character(CVarRef substrchar = null_variant) {
  FUNCTION_INJECTION_BUILTIN(mb_substitute_character);
  return f_mb_substitute_character(substrchar);
}

inline Variant x_mb_substr_count(CStrRef haystack, CStrRef needle, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_substr_count);
  return f_mb_substr_count(haystack, needle, encoding);
}

inline Variant x_mb_substr(CStrRef str, int start, int length = 0x7FFFFFFF, CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(mb_substr);
  TAINT_OBSERVER(TAINT_BIT_MUTATED, TAINT_BIT_NONE);
  return f_mb_substr(str, start, length, encoding);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_MB_H__
