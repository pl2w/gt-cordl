#pragma once
// IWYU pragma private; include "Pathfinding/PathLog.hpp"
#include "Pathfinding/zzzz__PathLog_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Pathfinding::PathLog::PathLog(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Pathfinding::PathLog::PathLog()   {
}
constexpr ::Pathfinding::PathLog  Pathfinding::PathLog::None{static_cast<int32_t>(0x0)};
constexpr ::Pathfinding::PathLog  Pathfinding::PathLog::Normal{static_cast<int32_t>(0x1)};
constexpr ::Pathfinding::PathLog  Pathfinding::PathLog::Heavy{static_cast<int32_t>(0x2)};
constexpr ::Pathfinding::PathLog  Pathfinding::PathLog::InGame{static_cast<int32_t>(0x3)};
constexpr ::Pathfinding::PathLog  Pathfinding::PathLog::OnlyErrors{static_cast<int32_t>(0x4)};
