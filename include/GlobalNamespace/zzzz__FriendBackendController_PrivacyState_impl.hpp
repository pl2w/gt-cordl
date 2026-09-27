#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendBackendController_PrivacyState.hpp"
#include "GlobalNamespace/zzzz__FriendBackendController_PrivacyState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState::FriendBackendController_PrivacyState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState::FriendBackendController_PrivacyState()   {
}
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState  GlobalNamespace::FriendBackendController_PrivacyState::VISIBLE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState  GlobalNamespace::FriendBackendController_PrivacyState::PUBLIC_ONLY{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::FriendBackendController_PrivacyState  GlobalNamespace::FriendBackendController_PrivacyState::HIDDEN{static_cast<int32_t>(0x2)};
