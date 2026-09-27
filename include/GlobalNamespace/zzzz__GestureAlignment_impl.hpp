#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureAlignment.hpp"
#include "GlobalNamespace/zzzz__GestureAlignment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GestureAlignment::GestureAlignment(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GestureAlignment::GestureAlignment()   {
}
constexpr ::GlobalNamespace::GestureAlignment  GlobalNamespace::GestureAlignment::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GestureAlignment  GlobalNamespace::GestureAlignment::TowardFace{static_cast<uint32_t>(0x80u)};
constexpr ::GlobalNamespace::GestureAlignment  GlobalNamespace::GestureAlignment::AwayFromFace{static_cast<uint32_t>(0x100u)};
constexpr ::GlobalNamespace::GestureAlignment  GlobalNamespace::GestureAlignment::WorldUp{static_cast<uint32_t>(0x200u)};
constexpr ::GlobalNamespace::GestureAlignment  GlobalNamespace::GestureAlignment::WorldDown{static_cast<uint32_t>(0x400u)};
