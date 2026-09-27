#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPools_EState.hpp"
#include "GlobalNamespace/zzzz__PropHuntPools_EState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PropHuntPools_EState::PropHuntPools_EState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PropHuntPools_EState::PropHuntPools_EState()   {
}
constexpr ::GlobalNamespace::PropHuntPools_EState  GlobalNamespace::PropHuntPools_EState::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::PropHuntPools_EState  GlobalNamespace::PropHuntPools_EState::WaitingForTitleData{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::PropHuntPools_EState  GlobalNamespace::PropHuntPools_EState::WaitingForLocalPlayerToVisitBayou{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::PropHuntPools_EState  GlobalNamespace::PropHuntPools_EState::SpawningProps{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::PropHuntPools_EState  GlobalNamespace::PropHuntPools_EState::Ready{static_cast<int32_t>(0x4)};
