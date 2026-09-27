#pragma once
// IWYU pragma private; include "GlobalNamespace/EAssetReleaseTier.hpp"
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EAssetReleaseTier::EAssetReleaseTier(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EAssetReleaseTier::EAssetReleaseTier()   {
}
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::PublicRC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::PrivateRC{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::PublicBeta{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::PrivateBeta{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::PublicAlpha{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::PrivateAlpha{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::EAssetReleaseTier  GlobalNamespace::EAssetReleaseTier::Internal{static_cast<int32_t>(0x7)};
