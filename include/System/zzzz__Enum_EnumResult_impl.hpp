#pragma once
// IWYU pragma private; include "System/Enum_EnumResult.hpp"
#include "System/zzzz__Enum_ParseFailureKind_impl.hpp"
#include "System/zzzz__Enum_EnumResult_def.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Enum_EnumResult.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Enum_EnumResult::*)(bool)>(&::GlobalNamespace::Enum_EnumResult::Init)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa313a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"Init", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Enum_EnumResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Enum_EnumResult::*)(::System::Exception*)>(&::GlobalNamespace::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa314838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Enum_EnumResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Enum_EnumResult::*)(::GlobalNamespace::Enum_ParseFailureKind, ::StringW)>(&::GlobalNamespace::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa31423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Enum_EnumResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Enum_EnumResult::*)(::GlobalNamespace::Enum_ParseFailureKind, ::StringW, ::System::Object*)>(&::GlobalNamespace::Enum_EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa314298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Enum_EnumResult.GetEnumParseException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::GlobalNamespace::Enum_EnumResult::*)()>(&::GlobalNamespace::Enum_EnumResult::GetEnumParseException)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa3140c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"GetEnumParseException", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Enum_EnumResult::Init(bool  canMethodThrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"Init", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, canMethodThrow);
}
inline void GlobalNamespace::Enum_EnumResult::SetFailure(::System::Exception*  unhandledException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unhandledException);
}
inline void GlobalNamespace::Enum_EnumResult::SetFailure(::GlobalNamespace::Enum_ParseFailureKind  failure, ::StringW  failureParameter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureParameter);
}
inline void GlobalNamespace::Enum_EnumResult::SetFailure(::GlobalNamespace::Enum_ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Enum_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline ::System::Exception* GlobalNamespace::Enum_EnumResult::GetEnumParseException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Enum_EnumResult>(),
                        {"GetEnumParseException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_failure", ty: "::GlobalNamespace::Enum_ParseFailureKind", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Enum_EnumResult::Enum_EnumResult(::System::Object*  parsedEnum, bool  canThrow, ::GlobalNamespace::Enum_ParseFailureKind  m_failure, ::StringW  m_failureMessageID, ::StringW  m_failureParameter, ::System::Object*  m_failureMessageFormatArgument, ::System::Exception*  m_innerException) noexcept  {
this->parsedEnum = parsedEnum;
this->canThrow = canThrow;
this->m_failure = m_failure;
this->m_failureMessageID = m_failureMessageID;
this->m_failureParameter = m_failureParameter;
this->m_failureMessageFormatArgument = m_failureMessageFormatArgument;
this->m_innerException = m_innerException;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Enum_EnumResult::Enum_EnumResult()   {
}
