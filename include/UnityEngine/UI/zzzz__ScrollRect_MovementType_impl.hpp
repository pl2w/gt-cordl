#pragma once
// IWYU pragma private; include "UnityEngine/UI/ScrollRect_MovementType.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_MovementType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScrollRect_MovementType::ScrollRect_MovementType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScrollRect_MovementType::ScrollRect_MovementType()   {
}
constexpr ::GlobalNamespace::ScrollRect_MovementType  GlobalNamespace::ScrollRect_MovementType::Unrestricted{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ScrollRect_MovementType  GlobalNamespace::ScrollRect_MovementType::Elastic{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ScrollRect_MovementType  GlobalNamespace::ScrollRect_MovementType::Clamped{static_cast<int32_t>(0x2)};
