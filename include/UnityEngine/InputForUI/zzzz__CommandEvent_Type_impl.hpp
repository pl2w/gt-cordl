#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/CommandEvent_Type.hpp"
#include "UnityEngine/InputForUI/zzzz__CommandEvent_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CommandEvent_Type::CommandEvent_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CommandEvent_Type::CommandEvent_Type()   {
}
constexpr ::GlobalNamespace::CommandEvent_Type  GlobalNamespace::CommandEvent_Type::Validate{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::CommandEvent_Type  GlobalNamespace::CommandEvent_Type::Execute{static_cast<int32_t>(0x2)};
