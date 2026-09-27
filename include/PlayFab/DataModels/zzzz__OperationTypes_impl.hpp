#pragma once
// IWYU pragma private; include "PlayFab/DataModels/OperationTypes.hpp"
#include "PlayFab/DataModels/zzzz__OperationTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::DataModels::OperationTypes::OperationTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::DataModels::OperationTypes::OperationTypes()   {
}
constexpr ::PlayFab::DataModels::OperationTypes  PlayFab::DataModels::OperationTypes::Created{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::DataModels::OperationTypes  PlayFab::DataModels::OperationTypes::Updated{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::DataModels::OperationTypes  PlayFab::DataModels::OperationTypes::Deleted{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::DataModels::OperationTypes  PlayFab::DataModels::OperationTypes::None{static_cast<int32_t>(0x3)};
