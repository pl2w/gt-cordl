#pragma once
// IWYU pragma private; include "LitJson/JsonReader.hpp"
#include "LitJson/zzzz__JsonToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LitJson/zzzz__JsonReader_def.hpp"
#include "LitJson/zzzz__JsonToken_def.hpp"
#include "LitJson/zzzz__Lexer_def.hpp"
#include "LitJson/zzzz__ParserToken_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LitJson::JsonReader.get_AllowComments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::get_AllowComments)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b68070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_AllowComments", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.set_AllowComments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)(bool)>(&::LitJson::JsonReader::set_AllowComments)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b68088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"set_AllowComments", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.get_AllowSingleQuotedStrings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::get_AllowSingleQuotedStrings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b680a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_AllowSingleQuotedStrings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.set_AllowSingleQuotedStrings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)(bool)>(&::LitJson::JsonReader::set_AllowSingleQuotedStrings)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5b680bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"set_AllowSingleQuotedStrings", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.get_EndOfInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::get_EndOfInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b680d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_EndOfInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.get_EndOfJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::get_EndOfJson)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b680e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_EndOfJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LitJson::JsonToken (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b680e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b680f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)(::StringW)>(&::LitJson::JsonReader::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5b66cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)(::System::IO::TextReader*)>(&::LitJson::JsonReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b66ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)(::System::IO::TextReader*, bool)>(&::LitJson::JsonReader::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5b687cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.PopulateParseTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::LitJson::JsonReader::PopulateParseTable)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0x5b680fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"PopulateParseTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.TableAddCol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LitJson::ParserToken, int32_t, ::ArrayW<int32_t>)>(&::LitJson::JsonReader::TableAddCol)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b68b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"TableAddCol", {}, {::i2c::type_of<::LitJson::ParserToken>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.TableAddRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::LitJson::ParserToken)>(&::LitJson::JsonReader::TableAddRow)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5b68a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"TableAddRow", {}, {::i2c::type_of<::LitJson::ParserToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.ProcessNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)(::StringW)>(&::LitJson::JsonReader::ProcessNumber)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5b68ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"ProcessNumber", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.ProcessSymbol
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::ProcessSymbol)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5b68e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"ProcessSymbol", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.ReadToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::ReadToken)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b69000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"ReadToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.Close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::Close)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b69220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"Close", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LitJson::JsonReader.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LitJson::JsonReader::*)()>(&::LitJson::JsonReader::Read)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5b64180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"Read", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<int32_t>*& LitJson::JsonReader::__cordl_internal_get_automaton_stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___automaton_stack;
}
constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& LitJson::JsonReader::__cordl_internal_get_automaton_stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___automaton_stack;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_automaton_stack(::System::Collections::Generic::Stack_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___automaton_stack = value;
}
constexpr int32_t& LitJson::JsonReader::__cordl_internal_get_current_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current_input;
}
constexpr int32_t const& LitJson::JsonReader::__cordl_internal_get_current_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current_input;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_current_input(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current_input = value;
}
constexpr int32_t& LitJson::JsonReader::__cordl_internal_get_current_symbol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current_symbol;
}
constexpr int32_t const& LitJson::JsonReader::__cordl_internal_get_current_symbol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___current_symbol;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_current_symbol(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___current_symbol = value;
}
constexpr bool& LitJson::JsonReader::__cordl_internal_get_end_of_json()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_of_json;
}
constexpr bool const& LitJson::JsonReader::__cordl_internal_get_end_of_json() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_of_json;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_end_of_json(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end_of_json = value;
}
constexpr bool& LitJson::JsonReader::__cordl_internal_get_end_of_input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_of_input;
}
constexpr bool const& LitJson::JsonReader::__cordl_internal_get_end_of_input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end_of_input;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_end_of_input(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end_of_input = value;
}
constexpr ::LitJson::Lexer*& LitJson::JsonReader::__cordl_internal_get_lexer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lexer;
}
constexpr ::LitJson::Lexer* const& LitJson::JsonReader::__cordl_internal_get_lexer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lexer;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_lexer(::LitJson::Lexer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lexer = value;
}
constexpr bool& LitJson::JsonReader::__cordl_internal_get_parser_in_string()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parser_in_string;
}
constexpr bool const& LitJson::JsonReader::__cordl_internal_get_parser_in_string() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parser_in_string;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_parser_in_string(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parser_in_string = value;
}
constexpr bool& LitJson::JsonReader::__cordl_internal_get_parser_return()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parser_return;
}
constexpr bool const& LitJson::JsonReader::__cordl_internal_get_parser_return() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parser_return;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_parser_return(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parser_return = value;
}
constexpr bool& LitJson::JsonReader::__cordl_internal_get_read_started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read_started;
}
constexpr bool const& LitJson::JsonReader::__cordl_internal_get_read_started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___read_started;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_read_started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___read_started = value;
}
constexpr ::System::IO::TextReader*& LitJson::JsonReader::__cordl_internal_get_reader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr ::System::IO::TextReader* const& LitJson::JsonReader::__cordl_internal_get_reader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_reader(::System::IO::TextReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader = value;
}
constexpr bool& LitJson::JsonReader::__cordl_internal_get_reader_is_owned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader_is_owned;
}
constexpr bool const& LitJson::JsonReader::__cordl_internal_get_reader_is_owned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reader_is_owned;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_reader_is_owned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reader_is_owned = value;
}
constexpr ::System::Object*& LitJson::JsonReader::__cordl_internal_get_token_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token_value;
}
constexpr ::System::Object* const& LitJson::JsonReader::__cordl_internal_get_token_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token_value;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_token_value(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token_value = value;
}
constexpr ::LitJson::JsonToken& LitJson::JsonReader::__cordl_internal_get_token()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr ::LitJson::JsonToken const& LitJson::JsonReader::__cordl_internal_get_token() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___token;
}
constexpr void LitJson::JsonReader::__cordl_internal_set_token(::LitJson::JsonToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___token = value;
}
inline void LitJson::JsonReader::setStaticF_parse_table(::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>*, "parse_table", ::LitJson::JsonReader*>(std::forward<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>*>(value));
}
inline ::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>* LitJson::JsonReader::getStaticF_parse_table()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IDictionary_2<int32_t,::System::Collections::Generic::IDictionary_2<int32_t,::ArrayW<int32_t>>*>*, "parse_table", ::LitJson::JsonReader*>();
}
inline bool LitJson::JsonReader::get_AllowComments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_AllowComments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::JsonReader::set_AllowComments(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"set_AllowComments", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LitJson::JsonReader::get_AllowSingleQuotedStrings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_AllowSingleQuotedStrings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::JsonReader::set_AllowSingleQuotedStrings(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"set_AllowSingleQuotedStrings", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LitJson::JsonReader::get_EndOfInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_EndOfInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool LitJson::JsonReader::get_EndOfJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_EndOfJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::LitJson::JsonToken LitJson::JsonReader::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::LitJson::JsonToken>(this, ___internal_method);
}
inline ::System::Object* LitJson::JsonReader::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void LitJson::JsonReader::_ctor(::StringW  json_text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, json_text);
}
inline void LitJson::JsonReader::_ctor(::System::IO::TextReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void LitJson::JsonReader::_ctor(::System::IO::TextReader*  reader, bool  owned)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, owned);
}
inline void LitJson::JsonReader::PopulateParseTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"PopulateParseTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void LitJson::JsonReader::TableAddCol(::LitJson::ParserToken  row, int32_t  col, /* [ParamArray] */ ::ArrayW<int32_t>  symbols)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"TableAddCol", {}, {::i2c::type_of<::LitJson::ParserToken>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, row, col, symbols);
}
inline void LitJson::JsonReader::TableAddRow(::LitJson::ParserToken  rule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"TableAddRow", {}, {::i2c::type_of<::LitJson::ParserToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rule);
}
inline void LitJson::JsonReader::ProcessNumber(::StringW  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"ProcessNumber", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, number);
}
inline void LitJson::JsonReader::ProcessSymbol()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"ProcessSymbol", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LitJson::JsonReader::ReadToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"ReadToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LitJson::JsonReader::Close()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"Close", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool LitJson::JsonReader::Read()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::LitJson::JsonReader*>(),
                        {"Read", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::LitJson::JsonReader* LitJson::JsonReader::New_ctor(::StringW  json_text)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonReader*>(json_text));
}
inline ::LitJson::JsonReader* LitJson::JsonReader::New_ctor(::System::IO::TextReader*  reader)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonReader*>(reader));
}
inline ::LitJson::JsonReader* LitJson::JsonReader::New_ctor(::System::IO::TextReader*  reader, bool  owned)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LitJson::JsonReader*>(reader, owned));
}
// Ctor Parameters []
constexpr ::LitJson::JsonReader::JsonReader()   {
}
