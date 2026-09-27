#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterForIOSPushNotificationResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RegisterForIOSPushNotificationResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RegisterForIOSPushNotificationResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RegisterForIOSPushNotificationResult::*)()>(&::PlayFab::ClientModels::RegisterForIOSPushNotificationResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterForIOSPushNotificationResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::RegisterForIOSPushNotificationResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterForIOSPushNotificationResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RegisterForIOSPushNotificationResult* PlayFab::ClientModels::RegisterForIOSPushNotificationResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RegisterForIOSPushNotificationResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RegisterForIOSPushNotificationResult::RegisterForIOSPushNotificationResult()   {
}
