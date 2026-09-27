#pragma once
// IWYU pragma private; include "GlobalNamespace/SIExclusionType.hpp"
#include "GlobalNamespace/zzzz__SIExclusionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SIExclusionType::SIExclusionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIExclusionType::SIExclusionType()   {
}
constexpr ::GlobalNamespace::SIExclusionType  GlobalNamespace::SIExclusionType::AffectsOthers{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::SIExclusionType  GlobalNamespace::SIExclusionType::AffectsLocalMovement{static_cast<int32_t>(0x2)};
