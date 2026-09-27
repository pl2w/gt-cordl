#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState_BindingState_Flags.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_BindingState_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags::BindingState_InputActionState_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags::BindingState_InputActionState_Flags()   {
}
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags  GlobalNamespace::BindingState_InputActionState_Flags::ChainsWithNext{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags  GlobalNamespace::BindingState_InputActionState_Flags::EndOfChain{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags  GlobalNamespace::BindingState_InputActionState_Flags::Composite{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags  GlobalNamespace::BindingState_InputActionState_Flags::PartOfComposite{static_cast<int32_t>(0x8)};
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags  GlobalNamespace::BindingState_InputActionState_Flags::InitialStateCheckPending{static_cast<int32_t>(0x10)};
constexpr ::GlobalNamespace::BindingState_InputActionState_Flags  GlobalNamespace::BindingState_InputActionState_Flags::WantsInitialStateCheck{static_cast<int32_t>(0x20)};
