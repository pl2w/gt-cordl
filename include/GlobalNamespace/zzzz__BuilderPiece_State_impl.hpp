#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPiece_State.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPiece_State::BuilderPiece_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPiece_State::BuilderPiece_State()   {
}
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::None{static_cast<int32_t>(0xffffffff)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::AttachedAndPlaced{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::AttachedToDropped{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::Grabbed{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::Dropped{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::OnShelf{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::Displayed{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::GrabbedLocal{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::OnConveyor{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::BuilderPiece_State  GlobalNamespace::BuilderPiece_State::AttachedToArm{static_cast<int32_t>(0x8)};
