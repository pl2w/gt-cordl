#pragma once
// IWYU pragma private; include "Liv/NGFX/EventType.hpp"
#include "Liv/NGFX/zzzz__EventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Liv::NGFX::EventType::EventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Liv::NGFX::EventType::EventType()   {
}
constexpr ::Liv::NGFX::EventType  Liv::NGFX::EventType::GraphicsBufferCreate{static_cast<int32_t>(0x0)};
constexpr ::Liv::NGFX::EventType  Liv::NGFX::EventType::GraphicsBufferCopy{static_cast<int32_t>(0x1)};
constexpr ::Liv::NGFX::EventType  Liv::NGFX::EventType::TextureCreate{static_cast<int32_t>(0x2)};
constexpr ::Liv::NGFX::EventType  Liv::NGFX::EventType::RenderBufferCreate{static_cast<int32_t>(0x3)};
constexpr ::Liv::NGFX::EventType  Liv::NGFX::EventType::ResourceDestroy{static_cast<int32_t>(0x4)};
