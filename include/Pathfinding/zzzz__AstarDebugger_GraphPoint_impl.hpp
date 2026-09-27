#pragma once
// IWYU pragma private; include "Pathfinding/AstarDebugger_GraphPoint.hpp"
#include "Pathfinding/zzzz__AstarDebugger_GraphPoint_def.hpp"
// Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "memory", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "collectEvent", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AstarDebugger_GraphPoint::AstarDebugger_GraphPoint(float_t  fps, float_t  memory, bool  collectEvent) noexcept  {
this->fps = fps;
this->memory = memory;
this->collectEvent = collectEvent;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AstarDebugger_GraphPoint::AstarDebugger_GraphPoint()   {
}
