#pragma once
// IWYU pragma private; include "Pathfinding/GridHitInfo.hpp"
#include "Pathfinding/zzzz__GridHitInfo_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GridNodeBase*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "direction", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::GridHitInfo::GridHitInfo(::Pathfinding::GridNodeBase*  node, int32_t  direction) noexcept  {
this->node = node;
this->direction = direction;
}
// Ctor Parameters []
constexpr ::Pathfinding::GridHitInfo::GridHitInfo()   {
}
