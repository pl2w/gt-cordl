#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_LightmapOptions.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LightmapOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions::MB2_LightmapOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions::MB2_LightmapOptions()   {
}
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions  DigitalOpus::MB::Core::MB2_LightmapOptions::preserve_current_lightmapping{static_cast<int32_t>(0x0)};
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions  DigitalOpus::MB::Core::MB2_LightmapOptions::ignore_UV2{static_cast<int32_t>(0x1)};
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions  DigitalOpus::MB::Core::MB2_LightmapOptions::copy_UV2_unchanged{static_cast<int32_t>(0x2)};
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions  DigitalOpus::MB::Core::MB2_LightmapOptions::generate_new_UV2_layout{static_cast<int32_t>(0x3)};
constexpr ::DigitalOpus::MB::Core::MB2_LightmapOptions  DigitalOpus::MB::Core::MB2_LightmapOptions::copy_UV2_unchanged_to_separate_rects{static_cast<int32_t>(0x4)};
