#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionMap_EntryState.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionMap_EntryState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetConnectionMap_EntryState::NetConnectionMap_EntryState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetConnectionMap_EntryState::NetConnectionMap_EntryState()   {
}
constexpr ::GlobalNamespace::NetConnectionMap_EntryState  GlobalNamespace::NetConnectionMap_EntryState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetConnectionMap_EntryState  GlobalNamespace::NetConnectionMap_EntryState::Free{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetConnectionMap_EntryState  GlobalNamespace::NetConnectionMap_EntryState::Used{static_cast<int32_t>(0x2)};
