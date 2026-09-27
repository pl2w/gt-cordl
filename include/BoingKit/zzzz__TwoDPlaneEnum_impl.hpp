#pragma once
// IWYU pragma private; include "BoingKit/TwoDPlaneEnum.hpp"
#include "BoingKit/zzzz__TwoDPlaneEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::BoingKit::TwoDPlaneEnum::TwoDPlaneEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BoingKit::TwoDPlaneEnum::TwoDPlaneEnum()   {
}
constexpr ::BoingKit::TwoDPlaneEnum  BoingKit::TwoDPlaneEnum::XY{static_cast<int32_t>(0x0)};
constexpr ::BoingKit::TwoDPlaneEnum  BoingKit::TwoDPlaneEnum::XZ{static_cast<int32_t>(0x1)};
constexpr ::BoingKit::TwoDPlaneEnum  BoingKit::TwoDPlaneEnum::YZ{static_cast<int32_t>(0x2)};
