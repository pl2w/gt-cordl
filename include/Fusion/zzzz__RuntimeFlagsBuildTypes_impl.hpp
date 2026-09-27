#pragma once
// IWYU pragma private; include "Fusion/RuntimeFlagsBuildTypes.hpp"
#include "Fusion/zzzz__RuntimeFlagsBuildTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::RuntimeFlagsBuildTypes::RuntimeFlagsBuildTypes(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::RuntimeFlagsBuildTypes::RuntimeFlagsBuildTypes()   {
}
constexpr ::Fusion::RuntimeFlagsBuildTypes  Fusion::RuntimeFlagsBuildTypes::NONE{static_cast<int32_t>(0x0)};
constexpr ::Fusion::RuntimeFlagsBuildTypes  Fusion::RuntimeFlagsBuildTypes::ENABLE_MONO{static_cast<int32_t>(0x2)};
constexpr ::Fusion::RuntimeFlagsBuildTypes  Fusion::RuntimeFlagsBuildTypes::ENABLE_IL2CPP{static_cast<int32_t>(0x4)};
