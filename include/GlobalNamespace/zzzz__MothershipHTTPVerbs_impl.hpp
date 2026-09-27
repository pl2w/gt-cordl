#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipHTTPVerbs.hpp"
#include "GlobalNamespace/zzzz__MothershipHTTPVerbs_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MothershipHTTPVerbs::MothershipHTTPVerbs(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipHTTPVerbs::MothershipHTTPVerbs()   {
}
constexpr ::GlobalNamespace::MothershipHTTPVerbs  GlobalNamespace::MothershipHTTPVerbs::GET{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MothershipHTTPVerbs  GlobalNamespace::MothershipHTTPVerbs::POST{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MothershipHTTPVerbs  GlobalNamespace::MothershipHTTPVerbs::PUT{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MothershipHTTPVerbs  GlobalNamespace::MothershipHTTPVerbs::PATCH{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MothershipHTTPVerbs  GlobalNamespace::MothershipHTTPVerbs::DELETE{static_cast<int32_t>(0x4)};
