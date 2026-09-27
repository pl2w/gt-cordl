#pragma once
// IWYU pragma private; include "Pathfinding/BlockManager_BlockMode.hpp"
#include "Pathfinding/zzzz__BlockManager_BlockMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BlockManager_BlockMode::BlockManager_BlockMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlockManager_BlockMode::BlockManager_BlockMode()   {
}
constexpr ::GlobalNamespace::BlockManager_BlockMode  GlobalNamespace::BlockManager_BlockMode::AllExceptSelector{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BlockManager_BlockMode  GlobalNamespace::BlockManager_BlockMode::OnlySelector{static_cast<int32_t>(0x1)};
