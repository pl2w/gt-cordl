#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateStage.hpp"
#include "Pathfinding/zzzz__GraphUpdateStage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::GraphUpdateStage::GraphUpdateStage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUpdateStage::GraphUpdateStage()   {
}
constexpr ::Pathfinding::GraphUpdateStage  Pathfinding::GraphUpdateStage::Created{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::GraphUpdateStage  Pathfinding::GraphUpdateStage::Pending{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::GraphUpdateStage  Pathfinding::GraphUpdateStage::Applied{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::GraphUpdateStage  Pathfinding::GraphUpdateStage::Aborted{static_cast<int32_t>(0x3)};
