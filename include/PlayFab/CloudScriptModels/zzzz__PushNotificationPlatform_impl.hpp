#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/PushNotificationPlatform.hpp"
#include "PlayFab/CloudScriptModels/zzzz__PushNotificationPlatform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::CloudScriptModels::PushNotificationPlatform::PushNotificationPlatform(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::PushNotificationPlatform::PushNotificationPlatform()   {
}
constexpr ::PlayFab::CloudScriptModels::PushNotificationPlatform  PlayFab::CloudScriptModels::PushNotificationPlatform::ApplePushNotificationService{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::CloudScriptModels::PushNotificationPlatform  PlayFab::CloudScriptModels::PushNotificationPlatform::GoogleCloudMessaging{static_cast<int32_t>(0x1)};
