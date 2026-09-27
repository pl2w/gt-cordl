#pragma once
// IWYU pragma private; include "Unity/Cinemachine/JoinType.hpp"
#include "Unity/Cinemachine/zzzz__JoinType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Cinemachine::JoinType::JoinType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::JoinType::JoinType()   {
}
constexpr ::Unity::Cinemachine::JoinType  Unity::Cinemachine::JoinType::Square{static_cast<int32_t>(0x0)};
constexpr ::Unity::Cinemachine::JoinType  Unity::Cinemachine::JoinType::Round{static_cast<int32_t>(0x1)};
constexpr ::Unity::Cinemachine::JoinType  Unity::Cinemachine::JoinType::Miter{static_cast<int32_t>(0x2)};
