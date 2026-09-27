#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TimeSpanResult.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanResult_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_ParseFailureKind_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeSpanParse_TimeSpanResult::*)(bool)>(&::GlobalNamespace::TimeSpanParse_TimeSpanResult::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa237dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanResult>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeSpanParse_TimeSpanResult.SetFailure
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeSpanParse_TimeSpanResult::*)(::GlobalNamespace::TimeSpanParse_ParseFailureKind, ::StringW, ::System::Object*, ::StringW)>(&::GlobalNamespace::TimeSpanParse_TimeSpanResult::SetFailure)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa238180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::TimeSpanParse_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimeSpanParse_TimeSpanResult::_ctor(bool  throwOnFailure)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanResult>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, throwOnFailure);
}
inline bool GlobalNamespace::TimeSpanParse_TimeSpanResult::SetFailure(::GlobalNamespace::TimeSpanParse_ParseFailureKind  kind, ::StringW  resourceKey, ::System::Object*  messageArgument, ::StringW  argumentName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeSpanParse_TimeSpanResult>(),
                        {"SetFailure", {}, {::i2c::type_of<::GlobalNamespace::TimeSpanParse_ParseFailureKind>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, kind, resourceKey, messageArgument, argumentName);
}
// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeSpanParse_TimeSpanResult::TimeSpanParse_TimeSpanResult(::System::TimeSpan  parsedTimeSpan, bool  _throwOnFailure) noexcept  {
this->parsedTimeSpan = parsedTimeSpan;
this->_throwOnFailure = _throwOnFailure;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeSpanParse_TimeSpanResult::TimeSpanParse_TimeSpanResult()   {
}
