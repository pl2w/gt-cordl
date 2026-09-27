#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/Constants_CMSGameModeType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__Constants_CMSGameModeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Constants_CMSGameModeType::Constants_CMSGameModeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Constants_CMSGameModeType::Constants_CMSGameModeType()   {
}
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Casual{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Infection{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::HuntDown{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Paintbrawl{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Ambush{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::FreezeTag{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Ghost{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Custom{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::Constants_CMSGameModeType  GlobalNamespace::Constants_CMSGameModeType::Count{static_cast<int32_t>(0x8)};
