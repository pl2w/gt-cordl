#pragma once
// IWYU pragma private; include "Modio/ModInstallationManagement_OperationPhase.hpp"
#include "Modio/zzzz__ModInstallationManagement_OperationPhase_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase::ModInstallationManagement_OperationPhase(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase::ModInstallationManagement_OperationPhase()   {
}
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase  GlobalNamespace::ModInstallationManagement_OperationPhase::Checking{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase  GlobalNamespace::ModInstallationManagement_OperationPhase::Started{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase  GlobalNamespace::ModInstallationManagement_OperationPhase::Completed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase  GlobalNamespace::ModInstallationManagement_OperationPhase::Cancelled{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::ModInstallationManagement_OperationPhase  GlobalNamespace::ModInstallationManagement_OperationPhase::Failed{static_cast<int32_t>(0x4)};
