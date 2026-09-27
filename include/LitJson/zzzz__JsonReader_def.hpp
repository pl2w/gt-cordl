#pragma once
// IWYU pragma private; include "LitJson/JsonReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LitJson/zzzz__JsonToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader)
namespace LitJson {
struct JsonToken;
}
namespace LitJson {
class Lexer;
}
namespace LitJson {
struct ParserToken;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::IO {
class TextReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LitJson {
class JsonReader;
}
// Write type traits
MARK_REF_T(::LitJson::JsonReader*);
DEFINE_IL2CPP_CLASS(::LitJson::JsonReader*, "LitJson", "JsonReader");
// Dependencies LitJson.JsonToken, System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.JsonReader
class CORDL_TYPE JsonReader : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AllowComments, put=set_AllowComments)) bool  AllowComments;

 __declspec(property(get=get_AllowSingleQuotedStrings, put=set_AllowSingleQuotedStrings)) bool  AllowSingleQuotedStrings;

 __declspec(property(get=get_EndOfInput)) bool  EndOfInput;

 __declspec(property(get=get_EndOfJson)) bool  EndOfJson;

 __declspec(property(get=get_Token)) ::LitJson::JsonToken  Token;

 __declspec(property(get=get_Value)) ::System::Object*  Value;

/// @brief Field automaton_stack, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_automaton_stack, put=__cordl_internal_set_automaton_stack)) ::System::Collections::Generic::Stack_1<int32_t>*  automaton_stack;

/// @brief Field current_input, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_current_input, put=__cordl_internal_set_current_input)) int32_t  current_input;

/// @brief Field current_symbol, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_current_symbol, put=__cordl_internal_set_current_symbol)) int32_t  current_symbol;

/// @brief Field end_of_input, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_end_of_input, put=__cordl_internal_set_end_of_input)) bool  end_of_input;

/// @brief Field end_of_json, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_end_of_json, put=__cordl_internal_set_end_of_json)) bool  end_of_json;

/// @brief Field lexer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_lexer, put=__cordl_internal_set_lexer)) ::LitJson::Lexer*  lexer;

/// @brief Field parse_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_parse_table, put=setStaticF_parse_table)) ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>*  parse_table;

/// @brief Field parser_in_string, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_parser_in_string, put=__cordl_internal_set_parser_in_string)) bool  parser_in_string;

/// @brief Field parser_return, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_parser_return, put=__cordl_internal_set_parser_return)) bool  parser_return;

/// @brief Field read_started, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_read_started, put=__cordl_internal_set_read_started)) bool  read_started;

/// @brief Field reader, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::IO::TextReader*  reader;

/// @brief Field reader_is_owned, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_reader_is_owned, put=__cordl_internal_set_reader_is_owned)) bool  reader_is_owned;

/// @brief Field token, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) ::LitJson::JsonToken  token;

/// @brief Field token_value, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_token_value, put=__cordl_internal_set_token_value)) ::System::Object*  token_value;

/// @brief Method Close, addr 0x5b69220, size 0x54, virtual false, abstract: false, final false
inline void Close() ;

static inline ::LitJson::JsonReader* New_ctor(::StringW  json_text) ;

static inline ::LitJson::JsonReader* New_ctor(::System::IO::TextReader*  reader) ;

static inline ::LitJson::JsonReader* New_ctor(::System::IO::TextReader*  reader, bool  owned) ;

/// @brief Method PopulateParseTable, addr 0x5b680fc, size 0x6d0, virtual false, abstract: false, final false
static inline void PopulateParseTable() ;

/// @brief Method ProcessNumber, addr 0x5b68ccc, size 0x148, virtual false, abstract: false, final false
inline void ProcessNumber(::StringW  number) ;

/// @brief Method ProcessSymbol, addr 0x5b68e14, size 0x1ec, virtual false, abstract: false, final false
inline void ProcessSymbol() ;

/// @brief Method Read, addr 0x5b64180, size 0x460, virtual false, abstract: false, final false
inline bool Read() ;

/// @brief Method ReadToken, addr 0x5b69000, size 0x54, virtual false, abstract: false, final false
inline bool ReadToken() ;

/// @brief Method TableAddCol, addr 0x5b68b6c, size 0x160, virtual false, abstract: false, final false
static inline void TableAddCol(::LitJson::ParserToken  row, int32_t  col, /* [ParamArray] */ ::ArrayW<int32_t>  symbols) ;

/// @brief Method TableAddRow, addr 0x5b68a50, size 0x11c, virtual false, abstract: false, final false
static inline void TableAddRow(::LitJson::ParserToken  rule) ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_automaton_stack() const;

constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_automaton_stack() ;

constexpr int32_t const& __cordl_internal_get_current_input() const;

constexpr int32_t& __cordl_internal_get_current_input() ;

constexpr int32_t const& __cordl_internal_get_current_symbol() const;

constexpr int32_t& __cordl_internal_get_current_symbol() ;

constexpr bool const& __cordl_internal_get_end_of_input() const;

constexpr bool& __cordl_internal_get_end_of_input() ;

constexpr bool const& __cordl_internal_get_end_of_json() const;

constexpr bool& __cordl_internal_get_end_of_json() ;

constexpr ::LitJson::Lexer* const& __cordl_internal_get_lexer() const;

constexpr ::LitJson::Lexer*& __cordl_internal_get_lexer() ;

constexpr bool const& __cordl_internal_get_parser_in_string() const;

constexpr bool& __cordl_internal_get_parser_in_string() ;

constexpr bool const& __cordl_internal_get_parser_return() const;

constexpr bool& __cordl_internal_get_parser_return() ;

constexpr bool const& __cordl_internal_get_read_started() const;

constexpr bool& __cordl_internal_get_read_started() ;

constexpr ::System::IO::TextReader* const& __cordl_internal_get_reader() const;

constexpr ::System::IO::TextReader*& __cordl_internal_get_reader() ;

constexpr bool const& __cordl_internal_get_reader_is_owned() const;

constexpr bool& __cordl_internal_get_reader_is_owned() ;

constexpr ::LitJson::JsonToken const& __cordl_internal_get_token() const;

constexpr ::LitJson::JsonToken& __cordl_internal_get_token() ;

constexpr ::System::Object* const& __cordl_internal_get_token_value() const;

constexpr ::System::Object*& __cordl_internal_get_token_value() ;

constexpr void __cordl_internal_set_automaton_stack(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_current_input(int32_t  value) ;

constexpr void __cordl_internal_set_current_symbol(int32_t  value) ;

constexpr void __cordl_internal_set_end_of_input(bool  value) ;

constexpr void __cordl_internal_set_end_of_json(bool  value) ;

constexpr void __cordl_internal_set_lexer(::LitJson::Lexer*  value) ;

constexpr void __cordl_internal_set_parser_in_string(bool  value) ;

constexpr void __cordl_internal_set_parser_return(bool  value) ;

constexpr void __cordl_internal_set_read_started(bool  value) ;

constexpr void __cordl_internal_set_reader(::System::IO::TextReader*  value) ;

constexpr void __cordl_internal_set_reader_is_owned(bool  value) ;

constexpr void __cordl_internal_set_token(::LitJson::JsonToken  value) ;

constexpr void __cordl_internal_set_token_value(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x5b66cb8, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  json_text) ;

/// @brief Method .ctor, addr 0x5b66ad8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextReader*  reader) ;

/// @brief Method .ctor, addr 0x5b687cc, size 0x18c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextReader*  reader, bool  owned) ;

static inline ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>* getStaticF_parse_table() ;

/// @brief Method get_AllowComments, addr 0x5b68070, size 0x18, virtual false, abstract: false, final false
inline bool get_AllowComments() ;

/// @brief Method get_AllowSingleQuotedStrings, addr 0x5b680a4, size 0x18, virtual false, abstract: false, final false
inline bool get_AllowSingleQuotedStrings() ;

/// @brief Method get_EndOfInput, addr 0x5b680d8, size 0x8, virtual false, abstract: false, final false
inline bool get_EndOfInput() ;

/// @brief Method get_EndOfJson, addr 0x5b680e0, size 0x8, virtual false, abstract: false, final false
inline bool get_EndOfJson() ;

/// @brief Method get_Token, addr 0x5b680e8, size 0x8, virtual false, abstract: false, final false
inline ::LitJson::JsonToken get_Token() ;

/// @brief Method get_Value, addr 0x5b680f0, size 0x8, virtual false, abstract: false, final false
inline ::System::Object* get_Value() ;

static inline void setStaticF_parse_table(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>*  value) ;

/// @brief Method set_AllowComments, addr 0x5b68088, size 0x1c, virtual false, abstract: false, final false
inline void set_AllowComments(bool  value) ;

/// @brief Method set_AllowSingleQuotedStrings, addr 0x5b680bc, size 0x1c, virtual false, abstract: false, final false
inline void set_AllowSingleQuotedStrings(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonReader(JsonReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonReader(JsonReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3835};

/// @brief Field automaton_stack, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  ___automaton_stack;

/// @brief Field current_input, offset: 0x18, size: 0x4, def value: None
 int32_t  ___current_input;

/// @brief Field current_symbol, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___current_symbol;

/// @brief Field end_of_json, offset: 0x20, size: 0x1, def value: None
 bool  ___end_of_json;

/// @brief Field end_of_input, offset: 0x21, size: 0x1, def value: None
 bool  ___end_of_input;

/// @brief Field lexer, offset: 0x28, size: 0x8, def value: None
 ::LitJson::Lexer*  ___lexer;

/// @brief Field parser_in_string, offset: 0x30, size: 0x1, def value: None
 bool  ___parser_in_string;

/// @brief Field parser_return, offset: 0x31, size: 0x1, def value: None
 bool  ___parser_return;

/// @brief Field read_started, offset: 0x32, size: 0x1, def value: None
 bool  ___read_started;

/// @brief Field reader, offset: 0x38, size: 0x8, def value: None
 ::System::IO::TextReader*  ___reader;

/// @brief Field reader_is_owned, offset: 0x40, size: 0x1, def value: None
 bool  ___reader_is_owned;

/// @brief Field token_value, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ___token_value;

/// @brief Field token, offset: 0x50, size: 0x4, def value: None
 ::LitJson::JsonToken  ___token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LitJson::JsonReader, ___automaton_stack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___current_input) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___current_symbol) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___end_of_json) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___end_of_input) == 0x21, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___lexer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___parser_in_string) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___parser_return) == 0x31, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___read_started) == 0x32, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___reader) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___reader_is_owned) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___token_value) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LitJson::JsonReader, ___token) == 0x50, "Offset mismatch!");

static_assert(sizeof(::LitJson::JsonReader) == 0x58, "Size mismatch!");

} // namespace end def LitJson
