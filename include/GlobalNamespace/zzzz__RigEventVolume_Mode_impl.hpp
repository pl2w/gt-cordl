#pragma once
// IWYU pragma private; include "GlobalNamespace/RigEventVolume_Mode.hpp"
#include "GlobalNamespace/zzzz__RigEventVolume_Mode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RigEventVolume_Mode::RigEventVolume_Mode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RigEventVolume_Mode::RigEventVolume_Mode()   {
}
constexpr ::GlobalNamespace::RigEventVolume_Mode  GlobalNamespace::RigEventVolume_Mode::RELATIVE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RigEventVolume_Mode  GlobalNamespace::RigEventVolume_Mode::ABSOLUTE{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::RigEventVolume_Mode  GlobalNamespace::RigEventVolume_Mode::NONE{static_cast<int32_t>(0x2)};
