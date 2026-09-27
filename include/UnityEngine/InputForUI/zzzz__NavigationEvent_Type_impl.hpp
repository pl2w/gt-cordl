#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/NavigationEvent_Type.hpp"
#include "UnityEngine/InputForUI/zzzz__NavigationEvent_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NavigationEvent_Type::NavigationEvent_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NavigationEvent_Type::NavigationEvent_Type()   {
}
constexpr ::GlobalNamespace::NavigationEvent_Type  GlobalNamespace::NavigationEvent_Type::Move{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NavigationEvent_Type  GlobalNamespace::NavigationEvent_Type::Submit{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NavigationEvent_Type  GlobalNamespace::NavigationEvent_Type::Cancel{static_cast<int32_t>(0x3)};
