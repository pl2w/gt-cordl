#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderPieceTappable_FunctionalState.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderPieceTappable_FunctionalState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState::BuilderPieceTappable_FunctionalState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState::BuilderPieceTappable_FunctionalState()   {
}
constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState  GlobalNamespace::BuilderPieceTappable_FunctionalState::Idle{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::BuilderPieceTappable_FunctionalState  GlobalNamespace::BuilderPieceTappable_FunctionalState::Tap{static_cast<int32_t>(0x1)};
