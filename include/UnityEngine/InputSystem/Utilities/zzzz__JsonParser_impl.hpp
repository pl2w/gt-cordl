#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonValueType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__JsonParser_JsonValue_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::JsonParser::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xaf326d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf3cb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::ToString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaf3cb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                    {::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.NavigateToProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xaf32758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"NavigateToProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.CurrentPropertyHasValueEqualTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::GlobalNamespace::JsonParser_JsonValue)>(&::UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xaf32c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"CurrentPropertyHasValueEqualTo", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(char16_t)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseToken)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xaf3cbfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseToken", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaf3cd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseValue)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xaf3cd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xaf3cec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseStringValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseArrayValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xaf3d074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseArrayValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseObjectValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xaf3d364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseObjectValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber)> {
  constexpr static std::size_t size = 0x474;
  constexpr static std::size_t addrs = 0xaf3d630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseNumber", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseBooleanValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xaf3d4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseBooleanValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.ParseNullValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::by_ref<::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaf3d5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseNullValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipToValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaf3ccec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"SkipToValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)(::StringW)>(&::UnityEngine::InputSystem::Utilities::JsonParser::SkipString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xaf3db40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"SkipString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.SkipWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaf3cc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"SkipWhitespace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonParser.get_isAtEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::Utilities::JsonParser::*)()>(&::UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf3dc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"get_isAtEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::JsonParser::_ctor(::StringW  json)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, json);
}
inline void UnityEngine::InputSystem::Utilities::JsonParser::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonParser::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::NavigateToProperty(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"NavigateToProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, path);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::CurrentPropertyHasValueEqualTo(::GlobalNamespace::JsonParser_JsonValue  expectedValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"CurrentPropertyHasValueEqualTo", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, expectedValue);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseToken(char16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseToken", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, token);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseStringValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseStringValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseArrayValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseArrayValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseObjectValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseObjectValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNumber(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseNumber", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseBooleanValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseBooleanValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::ParseNullValue(::by_ref<::GlobalNamespace::JsonParser_JsonValue>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"ParseNullValue", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, result);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::SkipToValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"SkipToValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::SkipString(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"SkipString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, text);
}
inline void UnityEngine::InputSystem::Utilities::JsonParser::SkipWhitespace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"SkipWhitespace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Utilities::JsonParser::get_isAtEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonParser>(),
                        {"get_isAtEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Position", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MatchAnyElementInArray", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_DryRun", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser::JsonParser(::StringW  m_Text, int32_t  m_Length, int32_t  m_Position, bool  m_MatchAnyElementInArray, bool  m_DryRun) noexcept  {
this->m_Text = m_Text;
this->m_Length = m_Length;
this->m_Position = m_Position;
this->m_MatchAnyElementInArray = m_MatchAnyElementInArray;
this->m_DryRun = m_DryRun;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonParser::JsonParser()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)()>(&::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf3f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ToString_b__11_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)(::GlobalNamespace::JsonParser_JsonValue)>(&::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf3f4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                        {"<ToString>b__11_0", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c._ToString_b__11_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>)>(&::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_1)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xaf3f4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                        {"<ToString>b__11_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9(::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "<>9", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(std::forward<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(value));
}
inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*, "<>9", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9__11_0(::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>*, "<>9__11_0", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(std::forward<::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9__11_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::JsonParser_JsonValue,::StringW>*, "<>9__11_0", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::setStaticF___9__11_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>*, "<>9__11_1", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::getStaticF___9__11_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>,::StringW>*, "<>9__11_1", ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>();
}
inline void UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_0(::GlobalNamespace::JsonParser_JsonValue  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                        {"<ToString>b__11_0", {}, {::i2c::type_of<::GlobalNamespace::JsonParser_JsonValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, x);
}
inline ::StringW UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::_ToString_b__11_1(::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>  pair)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>(),
                        {"<ToString>b__11_1", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::GlobalNamespace::JsonParser_JsonValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, pair);
}
inline ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c* UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::JsonValue_JsonParser___c::JsonValue_JsonParser___c()   {
}
