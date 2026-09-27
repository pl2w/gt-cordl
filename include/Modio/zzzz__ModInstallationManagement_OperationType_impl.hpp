#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_OperationType.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType::ModInstallationManagement_OperationType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType::ModInstallationManagement_OperationType()   {
}
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType  GlobalNamespace::ModInstallationManagement_OperationType::Download{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType  GlobalNamespace::ModInstallationManagement_OperationType::Install{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType  GlobalNamespace::ModInstallationManagement_OperationType::Update{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType  GlobalNamespace::ModInstallationManagement_OperationType::Uninstall{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType  GlobalNamespace::ModInstallationManagement_OperationType::Validate{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationType  GlobalNamespace::ModInstallationManagement_OperationType::Scan{static_cast<int32_t>(0x5)};
