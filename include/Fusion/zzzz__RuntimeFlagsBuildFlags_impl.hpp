#pragma once
// IWYU pragma private; include "Fusion/RuntimeFlagsBuildFlags.hpp"
#include "Fusion/zzzz__RuntimeFlagsBuildFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RuntimeFlagsBuildFlags::RuntimeFlagsBuildFlags(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RuntimeFlagsBuildFlags::RuntimeFlagsBuildFlags()   {
}
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::NONE{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::UNITY_WEBGL{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::UNITY_XBOXONE{static_cast<int32_t>(0x4)};
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::UNITY_GAMECORE{static_cast<int32_t>(0x8)};
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::UNITY_EDITOR{static_cast<int32_t>(0x10)};
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::UNITY_SWITCH{static_cast<int32_t>(0x20)};
constexpr ::Fusion::RuntimeFlagsBuildFlags  Fusion::RuntimeFlagsBuildFlags::UNITY_2019_4_OR_NEWER{static_cast<int32_t>(0x40)};
