#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/OperationTypes.hpp"
#include "PlayFab/ProfilesModels/zzzz__OperationTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::PlayFab::ProfilesModels::OperationTypes::OperationTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::PlayFab::ProfilesModels::OperationTypes::OperationTypes()   {
}
constexpr ::PlayFab::ProfilesModels::OperationTypes  PlayFab::ProfilesModels::OperationTypes::Created{static_cast<int32_t>(0x0)};
constexpr ::PlayFab::ProfilesModels::OperationTypes  PlayFab::ProfilesModels::OperationTypes::Updated{static_cast<int32_t>(0x1)};
constexpr ::PlayFab::ProfilesModels::OperationTypes  PlayFab::ProfilesModels::OperationTypes::Deleted{static_cast<int32_t>(0x2)};
constexpr ::PlayFab::ProfilesModels::OperationTypes  PlayFab::ProfilesModels::OperationTypes::None{static_cast<int32_t>(0x3)};
