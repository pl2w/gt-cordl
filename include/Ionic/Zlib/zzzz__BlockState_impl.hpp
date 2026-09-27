#pragma once
// IWYU pragma private; include "Ionic/Zlib/BlockState.hpp"
#include "Ionic/Zlib/zzzz__BlockState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Ionic::Zlib::BlockState::BlockState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Ionic::Zlib::BlockState::BlockState()   {
}
constexpr ::Ionic::Zlib::BlockState  Ionic::Zlib::BlockState::NeedMore{static_cast<int32_t>(0x0)};
constexpr ::Ionic::Zlib::BlockState  Ionic::Zlib::BlockState::BlockDone{static_cast<int32_t>(0x1)};
constexpr ::Ionic::Zlib::BlockState  Ionic::Zlib::BlockState::FinishStarted{static_cast<int32_t>(0x2)};
constexpr ::Ionic::Zlib::BlockState  Ionic::Zlib::BlockState::FinishDone{static_cast<int32_t>(0x3)};
