#pragma once
// IWYU pragma private; include "Fusion/NetworkObject_ObjectInterestModes.hpp"
#include "Fusion/zzzz__NetworkObject_ObjectInterestModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes::NetworkObject_ObjectInterestModes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes::NetworkObject_ObjectInterestModes()   {
}
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes  GlobalNamespace::NetworkObject_ObjectInterestModes::AreaOfInterest{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes  GlobalNamespace::NetworkObject_ObjectInterestModes::Global{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkObject_ObjectInterestModes  GlobalNamespace::NetworkObject_ObjectInterestModes::Explicit{static_cast<int32_t>(0x2)};
