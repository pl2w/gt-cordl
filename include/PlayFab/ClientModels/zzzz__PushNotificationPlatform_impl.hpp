#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PushNotificationPlatform.hpp"
#include "PlayFab/ClientModels/zzzz__PushNotificationPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ClientModels::PushNotificationPlatform::PushNotificationPlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PushNotificationPlatform::PushNotificationPlatform()   {
}
constexpr ::PlayFab::ClientModels::PushNotificationPlatform  PlayFab::ClientModels::PushNotificationPlatform::ApplePushNotificationService{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ClientModels::PushNotificationPlatform  PlayFab::ClientModels::PushNotificationPlatform::GoogleCloudMessaging{static_cast<int32_t>(0x1)};
