#pragma once
// IWYU pragma private; include "Fusion/RuntimeFlagsDotNetVersion.hpp"
#include "Fusion/zzzz__RuntimeFlagsDotNetVersion_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RuntimeFlagsDotNetVersion::RuntimeFlagsDotNetVersion(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RuntimeFlagsDotNetVersion::RuntimeFlagsDotNetVersion()   {
}
constexpr ::Fusion::RuntimeFlagsDotNetVersion  Fusion::RuntimeFlagsDotNetVersion::NONE{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RuntimeFlagsDotNetVersion  Fusion::RuntimeFlagsDotNetVersion::NET_4_6{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RuntimeFlagsDotNetVersion  Fusion::RuntimeFlagsDotNetVersion::NETFX_CORE{static_cast<int32_t>(0x4)};
constexpr ::Fusion::RuntimeFlagsDotNetVersion  Fusion::RuntimeFlagsDotNetVersion::NET_STANDARD_2_0{static_cast<int32_t>(0x8)};
