#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderActionType.hpp"
#include "GlobalNamespace/zzzz__BuilderActionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderActionType::BuilderActionType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderActionType::BuilderActionType()   {
}
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::AttachToPlayer{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::DetachFromPlayer{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::AttachToPiece{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::DetachFromPiece{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::MakePieceRoot{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::DropPiece{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::BuilderActionType  GlobalNamespace::BuilderActionType::AttachToShelf{static_cast<int32_t>(0x6)};
