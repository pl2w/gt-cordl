#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AttackType.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__AttackType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GT_CustomMapSupportRuntime::AttackType::AttackType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::AttackType::AttackType()   {
}
constexpr ::GT_CustomMapSupportRuntime::AttackType  GT_CustomMapSupportRuntime::AttackType::Tag{static_cast<int32_t>(0x0)};
constexpr ::GT_CustomMapSupportRuntime::AttackType  GT_CustomMapSupportRuntime::AttackType::UseGT{static_cast<int32_t>(0x1)};
constexpr ::GT_CustomMapSupportRuntime::AttackType  GT_CustomMapSupportRuntime::AttackType::UseLuau{static_cast<int32_t>(0x2)};
