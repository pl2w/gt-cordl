#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFuture.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRFuture_def.hpp"
#include "GlobalNamespace/zzzz__OVRFuture__When_d__0_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRFuture.When
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(uint64_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OVRFuture::When)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa658344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                        {"When", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture._When_g__LogIfNotSuccess_0_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(::GlobalNamespace::OVRPlugin_Result, ::StringW)>(&::GlobalNamespace::OVRFuture::_When_g__LogIfNotSuccess_0_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa658430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                        {"<When>g__LogIfNotSuccess|0_0", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRFuture._When_g__CheckCancellationAndThrow_0_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::System::Threading::CancellationToken)>(&::GlobalNamespace::OVRFuture::_When_g__CheckCancellationAndThrow_0_1)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa65850c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                        {"<When>g__CheckCancellationAndThrow|0_1", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRFuture::When(uint64_t  future, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                        {"When", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(nullptr, ___internal_method, future, cancellationToken);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRFuture::_When_g__LogIfNotSuccess_0_0(::GlobalNamespace::OVRPlugin_Result  value, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                        {"<When>g__LogIfNotSuccess|0_0", {}, {::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(nullptr, ___internal_method, value, msg);
}
inline void GlobalNamespace::OVRFuture::_When_g__CheckCancellationAndThrow_0_1(uint64_t  futureToCancel, ::System::Threading::CancellationToken  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRFuture*>(),
                        {"<When>g__CheckCancellationAndThrow|0_1", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, futureToCancel, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRFuture::OVRFuture()   {
}
