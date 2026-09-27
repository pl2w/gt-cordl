#pragma once
// IWYU pragma private; include "GlobalNamespace/UGCAccessLevel.hpp"
#include "GlobalNamespace/zzzz__UGCAccessLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UGCAccessLevel::UGCAccessLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UGCAccessLevel::UGCAccessLevel()   {
}
constexpr ::GlobalNamespace::UGCAccessLevel  GlobalNamespace::UGCAccessLevel::Disabled{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::UGCAccessLevel  GlobalNamespace::UGCAccessLevel::FeaturedMapsOnly{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::UGCAccessLevel  GlobalNamespace::UGCAccessLevel::Full{static_cast<int32_t>(0x2)};
