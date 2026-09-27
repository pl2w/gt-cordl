#pragma once
// IWYU pragma private; include "GlobalNamespace/LckEntitlementsManager_FeatureState.hpp"
#include "GlobalNamespace/zzzz__LckEntitlementsManager_FeatureState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState::LckEntitlementsManager_FeatureState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState::LckEntitlementsManager_FeatureState()   {
}
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState  GlobalNamespace::LckEntitlementsManager_FeatureState::Checking{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState  GlobalNamespace::LckEntitlementsManager_FeatureState::Enabled{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::LckEntitlementsManager_FeatureState  GlobalNamespace::LckEntitlementsManager_FeatureState::Disabled{static_cast<int32_t>(0x2)};
