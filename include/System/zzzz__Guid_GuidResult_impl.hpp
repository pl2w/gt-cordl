#pragma once
// IWYU pragma private; include "System/Guid_GuidResult.hpp"
#include "System/zzzz__Guid_GuidParseThrowStyle_impl.hpp"
#include "System/zzzz__Guid_ParseFailureKind_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Guid_GuidResult_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Guid_GuidParseThrowStyle_def.hpp"
#include "System/zzzz__Guid_ParseFailureKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Guid_GuidResult.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Guid_GuidResult::*)(::GlobalNamespace::Guid_GuidParseThrowStyle)>(&::GlobalNamespace::Guid_GuidResult::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2d802c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::Guid_GuidParseThrowStyle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Guid_GuidResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Guid_GuidResult::*)(::System::Exception*)>(&::GlobalNamespace::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2d72a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Guid_GuidResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Guid_GuidResult::*)(::GlobalNamespace::Guid_ParseFailureKind, ::StringW)>(&::GlobalNamespace::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2d5fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Guid_ParseFailureKind>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Guid_GuidResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Guid_GuidResult::*)(::GlobalNamespace::Guid_ParseFailureKind, ::StringW, ::System::Object*)>(&::GlobalNamespace::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2d6ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Guid_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Guid_GuidResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Guid_GuidResult::*)(::GlobalNamespace::Guid_ParseFailureKind, ::StringW, ::System::Object*, ::StringW, ::System::Exception*)>(&::GlobalNamespace::Guid_GuidResult::SetFailure)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa2d6afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Guid_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Guid_GuidResult.GetGuidParseException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::GlobalNamespace::Guid_GuidResult::*)()>(&::GlobalNamespace::Guid_GuidResult::GetGuidParseException)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa2d5a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"GetGuidParseException", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Guid_GuidResult::Init(::GlobalNamespace::Guid_GuidParseThrowStyle  canThrow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"Init", {}, {::i2c::type_of<::GlobalNamespace::Guid_GuidParseThrowStyle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, canThrow);
}
inline void GlobalNamespace::Guid_GuidResult::SetFailure(::System::Exception*  nativeException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nativeException);
}
inline void GlobalNamespace::Guid_GuidResult::SetFailure(::GlobalNamespace::Guid_ParseFailureKind  failure, ::StringW  failureMessageID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Guid_ParseFailureKind>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID);
}
inline void GlobalNamespace::Guid_GuidResult::SetFailure(::GlobalNamespace::Guid_ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Guid_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline void GlobalNamespace::Guid_GuidResult::SetFailure(::GlobalNamespace::Guid_ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument, ::StringW  failureArgumentName, ::System::Exception*  innerException)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::Guid_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument, failureArgumentName, innerException);
}
inline ::System::Exception* GlobalNamespace::Guid_GuidResult::GetGuidParseException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Guid_GuidResult>(),
                        {"GetGuidParseException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_parsedGuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_throwStyle", ty: "::GlobalNamespace::Guid_GuidParseThrowStyle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_failure", ty: "::GlobalNamespace::Guid_ParseFailureKind", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_failureMessageID", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_failureArgumentName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Guid_GuidResult::Guid_GuidResult(::System::Guid  _parsedGuid, ::GlobalNamespace::Guid_GuidParseThrowStyle  _throwStyle, ::GlobalNamespace::Guid_ParseFailureKind  _failure, ::StringW  _failureMessageID, ::System::Object*  _failureMessageFormatArgument, ::StringW  _failureArgumentName, ::System::Exception*  _innerException) noexcept  {
this->_parsedGuid = _parsedGuid;
this->_throwStyle = _throwStyle;
this->_failure = _failure;
this->_failureMessageID = _failureMessageID;
this->_failureMessageFormatArgument = _failureMessageFormatArgument;
this->_failureArgumentName = _failureArgumentName;
this->_innerException = _innerException;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Guid_GuidResult::Guid_GuidResult()   {
}
