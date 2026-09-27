#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField_EditState.hpp"
#include "UnityEngine/UI/zzzz__InputField_EditState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputField_EditState::InputField_EditState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputField_EditState::InputField_EditState()   {
}
constexpr ::GlobalNamespace::InputField_EditState  GlobalNamespace::InputField_EditState::Continue{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::InputField_EditState  GlobalNamespace::InputField_EditState::Finish{static_cast<int32_t>(0x1)};
