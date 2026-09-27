#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorField_CellMoveModeEnum.hpp"
#include "BoingKit/zzzz__BoingReactorField_CellMoveModeEnum_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum::BoingReactorField_CellMoveModeEnum(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum::BoingReactorField_CellMoveModeEnum()   {
}
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum  GlobalNamespace::BoingReactorField_CellMoveModeEnum::Follow{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BoingReactorField_CellMoveModeEnum  GlobalNamespace::BoingReactorField_CellMoveModeEnum::WrapAround{static_cast<int32_t>(0x1)};
