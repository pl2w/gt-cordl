#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AndroidDevicePushNotificationRegistrationResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AndroidDevicePushNotificationRegistrationResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult::*)()>(&::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult* PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AndroidDevicePushNotificationRegistrationResult::AndroidDevicePushNotificationRegistrationResult()   {
}
