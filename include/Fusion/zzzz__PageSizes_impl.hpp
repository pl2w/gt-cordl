#pragma once
// IWYU pragma private; include "Fusion/PageSizes.hpp"
#include "Fusion/zzzz__PageSizes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::PageSizes::PageSizes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::PageSizes::PageSizes()   {
}
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_1Kb{static_cast<int32_t>(0xa)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_2Kb{static_cast<int32_t>(0xb)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_4Kb{static_cast<int32_t>(0xc)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_8Kb{static_cast<int32_t>(0xd)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_16Kb{static_cast<int32_t>(0xe)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_32Kb{static_cast<int32_t>(0xf)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_64Kb{static_cast<int32_t>(0x10)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_128Kb{static_cast<int32_t>(0x11)};
constexpr ::Fusion::PageSizes  Fusion::PageSizes::_256Kb{static_cast<int32_t>(0x12)};
