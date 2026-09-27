#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RegisterForIOSPushNotificationRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RegisterForIOSPushNotificationRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::*)()>(&::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_get_ConfirmationMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmationMessage;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_get_ConfirmationMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfirmationMessage;
}
constexpr void PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_set_ConfirmationMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfirmationMessage = value;
}
constexpr ::StringW& PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_get_DeviceToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceToken;
}
constexpr ::StringW const& PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_get_DeviceToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceToken;
}
constexpr void PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_set_DeviceToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceToken = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_get_SendPushNotificationConfirmation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendPushNotificationConfirmation;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_get_SendPushNotificationConfirmation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendPushNotificationConfirmation;
}
constexpr void PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::__cordl_internal_set_SendPushNotificationConfirmation(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendPushNotificationConfirmation = value;
}
inline void PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest* PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RegisterForIOSPushNotificationRequest::RegisterForIOSPushNotificationRequest()   {
}
