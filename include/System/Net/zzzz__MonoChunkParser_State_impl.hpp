#pragma once
// IWYU pragma private; include "System/Net/MonoChunkParser_State.hpp"
#include "System/Net/zzzz__MonoChunkParser_State_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::MonoChunkParser_State::MonoChunkParser_State(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonoChunkParser_State::MonoChunkParser_State()   {
}
constexpr ::GlobalNamespace::MonoChunkParser_State  GlobalNamespace::MonoChunkParser_State::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::MonoChunkParser_State  GlobalNamespace::MonoChunkParser_State::PartialSize{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::MonoChunkParser_State  GlobalNamespace::MonoChunkParser_State::Body{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::MonoChunkParser_State  GlobalNamespace::MonoChunkParser_State::BodyFinished{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::MonoChunkParser_State  GlobalNamespace::MonoChunkParser_State::Trailer{static_cast<int32_t>(0x4)};
