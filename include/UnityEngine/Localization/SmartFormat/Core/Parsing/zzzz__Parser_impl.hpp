#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Core/Parsing/Parser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Parser_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Format_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Parser_ParsingError_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__Parser_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrorEventArgs_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Parsing/zzzz__ParsingErrors_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Settings/zzzz__SmartSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::get_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb045fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.set_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::set_Settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb045fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"set_Settings", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.add_OnParsingFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::add_OnParsingFailure)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb045fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"add_OnParsingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.remove_OnParsingFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::remove_OnParsingFailure)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb04608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"remove_OnParsingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb028c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.AddAlphanumericSelectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::AddAlphanumericSelectors)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb03bd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"AddAlphanumericSelectors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.AddAdditionalSelectorChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::AddAdditionalSelectorChars)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb03b6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"AddAdditionalSelectorChars", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.AddOperators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::AddOperators)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb03b628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"AddOperators", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.UseAlternativeEscapeChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(char16_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::UseAlternativeEscapeChar)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb04613c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"UseAlternativeEscapeChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.UseBraceEscaping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::UseBraceEscaping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04614c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"UseBraceEscaping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.UseAlternativeBraces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(char16_t, char16_t)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::UseAlternativeBraces)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb046154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"UseAlternativeBraces", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.ParseFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::StringW, ::System::Collections::Generic::IList_1<::StringW>*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::ParseFormat)> {
  constexpr static std::size_t size = 0x1190;
  constexpr static std::size_t addrs = 0xb0294f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"ParseFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.HandleParsingErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::HandleParsingErrors)> {
  constexpr static std::size_t size = 0x72c;
  constexpr static std::size_t addrs = 0xb046420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"HandleParsingErrors", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser.FormatterNameExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Collections::Generic::IList_1<::StringW>*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::FormatterNameExists)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xb046160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"FormatterNameExists", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr char16_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_OpeningBrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OpeningBrace;
}
constexpr char16_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_OpeningBrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OpeningBrace;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_OpeningBrace(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OpeningBrace = value;
}
constexpr char16_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_ClosingBrace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClosingBrace;
}
constexpr char16_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_ClosingBrace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClosingBrace;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_ClosingBrace(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClosingBrace = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_Settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_Settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Settings;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Settings = value;
}
constexpr bool& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AlphanumericSelectors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlphanumericSelectors;
}
constexpr bool const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AlphanumericSelectors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlphanumericSelectors;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_AlphanumericSelectors(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlphanumericSelectors = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AllowedSelectorChars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowedSelectorChars;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AllowedSelectorChars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowedSelectorChars;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_AllowedSelectorChars(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowedSelectorChars = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_Operators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Operators;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_Operators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Operators;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_Operators(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Operators = value;
}
constexpr bool& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AlternativeEscaping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlternativeEscaping;
}
constexpr bool const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AlternativeEscaping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlternativeEscaping;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_AlternativeEscaping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlternativeEscaping = value;
}
constexpr char16_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AlternativeEscapeChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlternativeEscapeChar;
}
constexpr char16_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_m_AlternativeEscapeChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlternativeEscapeChar;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_m_AlternativeEscapeChar(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlternativeEscapeChar = value;
}
constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_OnParsingFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnParsingFailure;
}
constexpr ::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_get_OnParsingFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnParsingFailure;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::__cordl_internal_set_OnParsingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnParsingFailure = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::setStaticF_s_ParsingErrorText(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*, "s_ParsingErrorText", ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(std::forward<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::getStaticF_s_ParsingErrorText()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*, "s_ParsingErrorText", ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>();
}
inline ::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::set_Settings(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"set_Settings", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::add_OnParsingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"add_OnParsingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::remove_OnParsingFailure(::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"remove_OnParsingFailure", {}, {::i2c::type_of<::System::EventHandler_1<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrorEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::_ctor(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::AddAlphanumericSelectors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"AddAlphanumericSelectors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::AddAdditionalSelectorChars(::StringW  chars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"AddAdditionalSelectorChars", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::AddOperators(::StringW  chars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"AddOperators", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, chars);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::UseAlternativeEscapeChar(char16_t  alternativeEscapeChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"UseAlternativeEscapeChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, alternativeEscapeChar);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::UseBraceEscaping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"UseBraceEscaping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::UseAlternativeBraces(char16_t  opening, char16_t  closing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"UseAlternativeBraces", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opening, closing);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::ParseFormat(::StringW  format, ::System::Collections::Generic::IList_1<::StringW>*  formatterExtensionNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"ParseFormat", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method, format, formatterExtensionNames);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::HandleParsingErrors(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*  parsingErrors, ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  currentResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"HandleParsingErrors", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors*>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*>(this, ___internal_method, parsingErrors, currentResult);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::FormatterNameExists(::StringW  name, ::System::Collections::Generic::IList_1<::StringW>*  formatterExtensionNames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(),
                        {"FormatterNameExists", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, name, formatterExtensionNames);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::New_ctor(::UnityEngine::Localization::SmartFormat::Core::Settings::SmartSettings*  settings)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser*>(settings));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser::Parser()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2._HandleParsingErrors_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::_HandleParsingErrors_b__1)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb046dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*>(),
                        {"<HandleParsingErrors>b__1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::__cordl_internal_get_CS$__8__locals2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::__cordl_internal_get_CS$__8__locals2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals2;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::__cordl_internal_set_CS$__8__locals2(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals2 = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::_HandleParsingErrors_b__1(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  errItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*>(),
                        {"<HandleParsingErrors>b__1", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, errItem);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_2::Parser___c__DisplayClass24_2()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1._HandleParsingErrors_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::*)(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::_HandleParsingErrors_b__0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb046d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*>(),
                        {"<HandleParsingErrors>b__0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::__cordl_internal_get_i()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr int32_t const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::__cordl_internal_get_i() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___i;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::__cordl_internal_set_i(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___i = value;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::__cordl_internal_set_CS$__8__locals1(::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::_HandleParsingErrors_b__0(::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*  errItem)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*>(),
                        {"<HandleParsingErrors>b__0", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::ParsingErrors_ParsingIssue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, errItem);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_1::Parser___c__DisplayClass24_1()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb046cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::__cordl_internal_get_currentResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResult;
}
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Format* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::__cordl_internal_get_currentResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResult;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::__cordl_internal_set_currentResult(::UnityEngine::Localization::SmartFormat::Core::Parsing::Format*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResult = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser___c__DisplayClass24_0::Parser___c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::*)()>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::_ctor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb046b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::*)(::GlobalNamespace::Parser_ParsingError)>(&::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::get_Item)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb046c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*>(),
                        {"get_Item", {}, {::i2c::type_of<::GlobalNamespace::Parser_ParsingError>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>*& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::__cordl_internal_get__errors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errors;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>* const& UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::__cordl_internal_get__errors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errors;
}
constexpr void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::__cordl_internal_set__errors(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Parser_ParsingError,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errors = value;
}
inline void UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::get_Item(::GlobalNamespace::Parser_ParsingError  parsingErrorKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*>(),
                        {"get_Item", {}, {::i2c::type_of<::GlobalNamespace::Parser_ParsingError>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, parsingErrorKey);
}
inline ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText* UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Core::Parsing::Parser_ParsingErrorText::Parser_ParsingErrorText()   {
}
