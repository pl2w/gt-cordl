#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Clipping_OutCode.hpp"
#include "UnityEngine/ProBuilder/zzzz__Clipping_OutCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Clipping_OutCode::Clipping_OutCode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Clipping_OutCode::Clipping_OutCode()   {
}
constexpr ::GlobalNamespace::Clipping_OutCode  GlobalNamespace::Clipping_OutCode::Inside{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Clipping_OutCode  GlobalNamespace::Clipping_OutCode::Left{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Clipping_OutCode  GlobalNamespace::Clipping_OutCode::Right{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Clipping_OutCode  GlobalNamespace::Clipping_OutCode::Bottom{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Clipping_OutCode  GlobalNamespace::Clipping_OutCode::Top{static_cast<int32_t>(0x8)};
