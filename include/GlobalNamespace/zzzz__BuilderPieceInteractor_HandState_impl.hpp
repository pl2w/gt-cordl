#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractor_HandState.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_HandState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState::BuilderPieceInteractor_HandState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState::BuilderPieceInteractor_HandState()   {
}
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::Invalid{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::Empty{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::Grabbed{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::PotentialGrabbed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::WaitForGrabbed{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::WaitingForSnap{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderPieceInteractor_HandState  GlobalNamespace::BuilderPieceInteractor_HandState::WaitingForUnSnap{static_cast<int32_t>(0x5)};
