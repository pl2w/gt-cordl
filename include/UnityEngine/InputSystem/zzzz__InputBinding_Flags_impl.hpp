#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBinding_Flags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBinding_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputBinding_Flags::InputBinding_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputBinding_Flags::InputBinding_Flags()   {
}
constexpr ::GlobalNamespace::InputBinding_Flags  GlobalNamespace::InputBinding_Flags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputBinding_Flags  GlobalNamespace::InputBinding_Flags::Composite{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::InputBinding_Flags  GlobalNamespace::InputBinding_Flags::PartOfComposite{static_cast<int32_t>(0x8)};
