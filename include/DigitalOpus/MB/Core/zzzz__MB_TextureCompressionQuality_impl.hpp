#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureCompressionQuality.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality::MB_TextureCompressionQuality(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality::MB_TextureCompressionQuality()   {
}
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  DigitalOpus::MB::Core::MB_TextureCompressionQuality::fast{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  DigitalOpus::MB::Core::MB_TextureCompressionQuality::normal{static_cast<int32_t>(0x32)};
constexpr ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  DigitalOpus::MB::Core::MB_TextureCompressionQuality::best{static_cast<int32_t>(0x64)};
