#pragma once
// IWYU pragma private; include "Pathfinding/GraphModifier_EventType.hpp"
#include "Pathfinding/zzzz__GraphModifier_EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GraphModifier_EventType::GraphModifier_EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphModifier_EventType::GraphModifier_EventType()   {
}
constexpr ::GlobalNamespace::GraphModifier_EventType  GlobalNamespace::GraphModifier_EventType::PostScan{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GraphModifier_EventType  GlobalNamespace::GraphModifier_EventType::PreScan{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::GraphModifier_EventType  GlobalNamespace::GraphModifier_EventType::LatePostScan{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::GraphModifier_EventType  GlobalNamespace::GraphModifier_EventType::PreUpdate{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::GraphModifier_EventType  GlobalNamespace::GraphModifier_EventType::PostUpdate{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::GraphModifier_EventType  GlobalNamespace::GraphModifier_EventType::PostCacheLoad{static_cast<int32_t>(0x20)};
