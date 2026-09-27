#pragma once
// IWYU pragma private; include "System/ComponentModel/InheritanceLevel.hpp"
#include "System/ComponentModel/zzzz__InheritanceLevel_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::ComponentModel::InheritanceLevel::InheritanceLevel(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::ComponentModel::InheritanceLevel::InheritanceLevel()   {
}
constexpr ::System::ComponentModel::InheritanceLevel  System::ComponentModel::InheritanceLevel::Inherited{static_cast<int32_t>(0x1)};
constexpr ::System::ComponentModel::InheritanceLevel  System::ComponentModel::InheritanceLevel::InheritedReadOnly{static_cast<int32_t>(0x2)};
constexpr ::System::ComponentModel::InheritanceLevel  System::ComponentModel::InheritanceLevel::NotInherited{static_cast<int32_t>(0x3)};
