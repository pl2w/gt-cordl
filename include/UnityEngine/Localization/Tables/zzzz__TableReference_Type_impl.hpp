#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableReference_Type.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_Type_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TableReference_Type::TableReference_Type(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TableReference_Type::TableReference_Type()   {
}
constexpr ::GlobalNamespace::TableReference_Type  GlobalNamespace::TableReference_Type::Empty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::TableReference_Type  GlobalNamespace::TableReference_Type::Guid{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::TableReference_Type  GlobalNamespace::TableReference_Type::Name{static_cast<int32_t>(0x2)};
