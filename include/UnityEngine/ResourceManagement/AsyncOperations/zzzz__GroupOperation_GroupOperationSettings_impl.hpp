#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/AsyncOperations/GroupOperation_GroupOperationSettings.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__GroupOperation_GroupOperationSettings_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GroupOperation_GroupOperationSettings::GroupOperation_GroupOperationSettings(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GroupOperation_GroupOperationSettings::GroupOperation_GroupOperationSettings()   {
}
constexpr ::GlobalNamespace::GroupOperation_GroupOperationSettings  GlobalNamespace::GroupOperation_GroupOperationSettings::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::GroupOperation_GroupOperationSettings  GlobalNamespace::GroupOperation_GroupOperationSettings::ReleaseDependenciesOnFailure{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::GroupOperation_GroupOperationSettings  GlobalNamespace::GroupOperation_GroupOperationSettings::AllowFailedDependencies{static_cast<int32_t>(0x2)};
