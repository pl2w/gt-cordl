#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/KeyEvent_Type.hpp"
#include "UnityEngine/InputForUI/zzzz__KeyEvent_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::KeyEvent_Type::KeyEvent_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KeyEvent_Type::KeyEvent_Type()   {
}
constexpr ::GlobalNamespace::KeyEvent_Type  GlobalNamespace::KeyEvent_Type::KeyPressed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::KeyEvent_Type  GlobalNamespace::KeyEvent_Type::KeyRepeated{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::KeyEvent_Type  GlobalNamespace::KeyEvent_Type::KeyReleased{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::KeyEvent_Type  GlobalNamespace::KeyEvent_Type::State{static_cast<int32_t>(0x4)};
