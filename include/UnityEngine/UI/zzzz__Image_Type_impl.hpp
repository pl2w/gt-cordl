#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image_Type.hpp"
#include "UnityEngine/UI/zzzz__Image_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Image_Type::Image_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Image_Type::Image_Type()   {
}
constexpr ::GlobalNamespace::Image_Type  GlobalNamespace::Image_Type::Simple{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Image_Type  GlobalNamespace::Image_Type::Sliced{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Image_Type  GlobalNamespace::Image_Type::Tiled{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Image_Type  GlobalNamespace::Image_Type::Filled{static_cast<int32_t>(0x3)};
