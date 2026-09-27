#pragma once
// IWYU pragma private; include "Liv/Lck/Settings/LckSettings_MicPermissionAskType.hpp"
#include "Liv/Lck/Settings/zzzz__LckSettings_MicPermissionAskType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType::LckSettings_MicPermissionAskType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType::LckSettings_MicPermissionAskType()   {
}
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType  GlobalNamespace::LckSettings_MicPermissionAskType::OnAppStartup{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType  GlobalNamespace::LckSettings_MicPermissionAskType::OnTabletSpawn{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType  GlobalNamespace::LckSettings_MicPermissionAskType::OnMicUnmute{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::LckSettings_MicPermissionAskType  GlobalNamespace::LckSettings_MicPermissionAskType::NeverAskFromLck{static_cast<int32_t>(0x3)};
