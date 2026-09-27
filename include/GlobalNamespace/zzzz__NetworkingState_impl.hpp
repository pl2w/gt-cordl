#pragma once
// IWYU pragma private; include "GlobalNamespace/NetworkingState.hpp"
#include "GlobalNamespace/zzzz__NetworkingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NetworkingState::NetworkingState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NetworkingState::NetworkingState()   {
}
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::IsOwner{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::IsBlindClient{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::IsClient{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::ForcefullyTakingOver{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::RequestingOwnership{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::RequestingOwnershipWaitingForSight{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::NetworkingState  GlobalNamespace::NetworkingState::ForcefullyTakingOverWaitingForSight{static_cast<int32_t>(0x6)};
