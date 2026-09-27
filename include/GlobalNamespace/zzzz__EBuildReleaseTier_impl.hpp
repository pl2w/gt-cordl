#pragma once
// IWYU pragma private; include "GlobalNamespace/EBuildReleaseTier.hpp"
#include "GlobalNamespace/zzzz__EBuildReleaseTier_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::EBuildReleaseTier::EBuildReleaseTier(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EBuildReleaseTier::EBuildReleaseTier()   {
}
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::PublicRC{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::PrivateRC{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::PublicBeta{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::PrivateBeta{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::PublicAlpha{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::PrivateAlpha{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::EBuildReleaseTier  GlobalNamespace::EBuildReleaseTier::Internal{static_cast<int32_t>(0x7)};
