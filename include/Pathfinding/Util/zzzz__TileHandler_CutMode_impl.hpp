#pragma once
// IWYU pragma private; include "Pathfinding/Util/TileHandler_CutMode.hpp"
#include "Pathfinding/Util/zzzz__TileHandler_CutMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TileHandler_CutMode::TileHandler_CutMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TileHandler_CutMode::TileHandler_CutMode()   {
}
constexpr ::GlobalNamespace::TileHandler_CutMode  GlobalNamespace::TileHandler_CutMode::CutAll{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TileHandler_CutMode  GlobalNamespace::TileHandler_CutMode::CutDual{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::TileHandler_CutMode  GlobalNamespace::TileHandler_CutMode::CutExtra{static_cast<int32_t>(0x4)};
