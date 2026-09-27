#pragma once
// IWYU pragma private; include "GlobalNamespace/GestureHandState.hpp"
#include "GlobalNamespace/zzzz__GestureHandState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GestureHandState::GestureHandState(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GestureHandState::GestureHandState()   {
}
constexpr ::GlobalNamespace::GestureHandState  GlobalNamespace::GestureHandState::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GestureHandState  GlobalNamespace::GestureHandState::IsLeft{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::GestureHandState  GlobalNamespace::GestureHandState::IsRight{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::GestureHandState  GlobalNamespace::GestureHandState::Open{static_cast<uint32_t>(0x4u)};
constexpr ::GlobalNamespace::GestureHandState  GlobalNamespace::GestureHandState::Closed{static_cast<uint32_t>(0x8u)};
