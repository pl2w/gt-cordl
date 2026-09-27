#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/GrabPoseFinder_FindResult.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__GrabPoseFinder_FindResult_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GrabPoseFinder_FindResult::GrabPoseFinder_FindResult(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GrabPoseFinder_FindResult::GrabPoseFinder_FindResult()   {
}
constexpr ::GlobalNamespace::GrabPoseFinder_FindResult  GlobalNamespace::GrabPoseFinder_FindResult::NotFound{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GrabPoseFinder_FindResult  GlobalNamespace::GrabPoseFinder_FindResult::NotCompatible{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GrabPoseFinder_FindResult  GlobalNamespace::GrabPoseFinder_FindResult::Found{static_cast<int32_t>(0x2)};
