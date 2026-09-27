#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetPeerGroupMap_EntryState.hpp"
#include "Fusion/Sockets/zzzz__NetPeerGroupMap_EntryState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetPeerGroupMap_EntryState::NetPeerGroupMap_EntryState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetPeerGroupMap_EntryState::NetPeerGroupMap_EntryState()   {
}
constexpr ::GlobalNamespace::NetPeerGroupMap_EntryState  GlobalNamespace::NetPeerGroupMap_EntryState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetPeerGroupMap_EntryState  GlobalNamespace::NetPeerGroupMap_EntryState::Free{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetPeerGroupMap_EntryState  GlobalNamespace::NetPeerGroupMap_EntryState::Used{static_cast<int32_t>(0x2)};
