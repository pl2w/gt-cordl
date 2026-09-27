#pragma once
// IWYU pragma private; include "Fusion/CompareOperator.hpp"
#include "Fusion/zzzz__CompareOperator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::CompareOperator::CompareOperator(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::CompareOperator::CompareOperator()   {
}
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::Equal{static_cast<int32_t>(0x0)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::NotEqual{static_cast<int32_t>(0x1)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::Less{static_cast<int32_t>(0x2)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::LessOrEqual{static_cast<int32_t>(0x3)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::GreaterOrEqual{static_cast<int32_t>(0x4)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::Greater{static_cast<int32_t>(0x5)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::NotZero{static_cast<int32_t>(0x6)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::IsZero{static_cast<int32_t>(0x7)};
constexpr ::Fusion::CompareOperator  Fusion::CompareOperator::BitwiseAndNotEqualZero{static_cast<int32_t>(0x8)};
