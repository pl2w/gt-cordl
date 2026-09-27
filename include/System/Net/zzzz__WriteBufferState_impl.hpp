#pragma once
// IWYU pragma private; include "System/Net/WriteBufferState.hpp"
#include "System/Net/zzzz__WriteBufferState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Net::WriteBufferState::WriteBufferState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WriteBufferState::WriteBufferState()   {
}
constexpr ::System::Net::WriteBufferState  System::Net::WriteBufferState::Disabled{static_cast<int32_t>(0x0)};
constexpr ::System::Net::WriteBufferState  System::Net::WriteBufferState::Headers{static_cast<int32_t>(0x1)};
constexpr ::System::Net::WriteBufferState  System::Net::WriteBufferState::Buffer{static_cast<int32_t>(0x2)};
constexpr ::System::Net::WriteBufferState  System::Net::WriteBufferState::Playback{static_cast<int32_t>(0x3)};
