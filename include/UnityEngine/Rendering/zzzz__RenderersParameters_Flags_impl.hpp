#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderersParameters_Flags.hpp"
#include "UnityEngine/Rendering/zzzz__RenderersParameters_Flags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RenderersParameters_Flags::RenderersParameters_Flags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RenderersParameters_Flags::RenderersParameters_Flags()   {
}
constexpr ::GlobalNamespace::RenderersParameters_Flags  GlobalNamespace::RenderersParameters_Flags::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::RenderersParameters_Flags  GlobalNamespace::RenderersParameters_Flags::UseBoundingSphereParameter{static_cast<int32_t>(0x1)};
