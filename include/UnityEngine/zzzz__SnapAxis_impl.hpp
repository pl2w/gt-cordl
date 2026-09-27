#pragma once
// IWYU pragma private; include "UnityEngine/SnapAxis.hpp"
#include "UnityEngine/zzzz__SnapAxis_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::SnapAxis::SnapAxis(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::SnapAxis::SnapAxis()   {
}
constexpr ::UnityEngine::SnapAxis  UnityEngine::SnapAxis::None{static_cast<uint8_t>(0x0u)};
constexpr ::UnityEngine::SnapAxis  UnityEngine::SnapAxis::X{static_cast<uint8_t>(0x1u)};
constexpr ::UnityEngine::SnapAxis  UnityEngine::SnapAxis::Y{static_cast<uint8_t>(0x2u)};
constexpr ::UnityEngine::SnapAxis  UnityEngine::SnapAxis::Z{static_cast<uint8_t>(0x4u)};
constexpr ::UnityEngine::SnapAxis  UnityEngine::SnapAxis::All{static_cast<uint8_t>(0x7u)};
