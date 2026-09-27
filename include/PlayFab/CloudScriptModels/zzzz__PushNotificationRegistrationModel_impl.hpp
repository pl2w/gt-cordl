#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PushNotificationRegistrationModel.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PushNotificationPlatform_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PushNotificationRegistrationModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::PushNotificationRegistrationModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::PushNotificationRegistrationModel::*)()>(&::PlayFab::CloudScriptModels::PushNotificationRegistrationModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::PushNotificationRegistrationModel::__cordl_internal_get_NotificationEndpointARN()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NotificationEndpointARN;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::PushNotificationRegistrationModel::__cordl_internal_get_NotificationEndpointARN() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NotificationEndpointARN;
}
constexpr void PlayFab::CloudScriptModels::PushNotificationRegistrationModel::__cordl_internal_set_NotificationEndpointARN(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NotificationEndpointARN = value;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::PushNotificationPlatform>& PlayFab::CloudScriptModels::PushNotificationRegistrationModel::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::PushNotificationPlatform> const& PlayFab::CloudScriptModels::PushNotificationRegistrationModel::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void PlayFab::CloudScriptModels::PushNotificationRegistrationModel::__cordl_internal_set_Platform(::System::Nullable_1<::PlayFab::CloudScriptModels::PushNotificationPlatform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
inline void PlayFab::CloudScriptModels::PushNotificationRegistrationModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::PushNotificationRegistrationModel* PlayFab::CloudScriptModels::PushNotificationRegistrationModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::PushNotificationRegistrationModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::PushNotificationRegistrationModel::PushNotificationRegistrationModel()   {
}
