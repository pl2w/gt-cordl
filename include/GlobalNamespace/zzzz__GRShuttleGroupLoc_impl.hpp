#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttleGroupLoc.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRShuttleGroupLoc::GRShuttleGroupLoc(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShuttleGroupLoc::GRShuttleGroupLoc()   {
}
constexpr ::GlobalNamespace::GRShuttleGroupLoc  GlobalNamespace::GRShuttleGroupLoc::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::GRShuttleGroupLoc  GlobalNamespace::GRShuttleGroupLoc::Staging{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GRShuttleGroupLoc  GlobalNamespace::GRShuttleGroupLoc::Drill{static_cast<int32_t>(0x1)};
