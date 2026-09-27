#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderScanKiosk_ScannerState.hpp"
#include "GlobalNamespace/zzzz__BuilderScanKiosk_ScannerState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState::BuilderScanKiosk_ScannerState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState::BuilderScanKiosk_ScannerState()   {
}
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState  GlobalNamespace::BuilderScanKiosk_ScannerState::IDLE{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState  GlobalNamespace::BuilderScanKiosk_ScannerState::CONFIRMATION{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderScanKiosk_ScannerState  GlobalNamespace::BuilderScanKiosk_ScannerState::SAVING{static_cast<int32_t>(0x2)};
