#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/OperationTypes.hpp"
#include "PlayFab/GroupsModels/zzzz__OperationTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::GroupsModels::OperationTypes::OperationTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::GroupsModels::OperationTypes::OperationTypes()   {
}
constexpr ::PlayFab::GroupsModels::OperationTypes  PlayFab::GroupsModels::OperationTypes::Created{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::GroupsModels::OperationTypes  PlayFab::GroupsModels::OperationTypes::Updated{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::GroupsModels::OperationTypes  PlayFab::GroupsModels::OperationTypes::Deleted{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::GroupsModels::OperationTypes  PlayFab::GroupsModels::OperationTypes::None{static_cast<int32_t>(0x3)};
