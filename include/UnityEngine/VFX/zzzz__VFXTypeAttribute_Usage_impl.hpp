#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXTypeAttribute_Usage.hpp"
#include "UnityEngine/VFX/zzzz__VFXTypeAttribute_Usage_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage::VFXTypeAttribute_Usage(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage::VFXTypeAttribute_Usage()   {
}
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage  GlobalNamespace::VFXTypeAttribute_Usage::Default{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage  GlobalNamespace::VFXTypeAttribute_Usage::GraphicsBuffer{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::VFXTypeAttribute_Usage  GlobalNamespace::VFXTypeAttribute_Usage::ExcludeFromProperty{static_cast<int32_t>(0x4)};
