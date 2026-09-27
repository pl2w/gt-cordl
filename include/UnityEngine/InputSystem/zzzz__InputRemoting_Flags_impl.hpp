#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting_Flags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputRemoting_Flags::InputRemoting_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputRemoting_Flags::InputRemoting_Flags()   {
}
constexpr ::GlobalNamespace::InputRemoting_Flags  GlobalNamespace::InputRemoting_Flags::Sending{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::InputRemoting_Flags  GlobalNamespace::InputRemoting_Flags::StartSendingOnConnect{static_cast<int32_t>(0x2)};
