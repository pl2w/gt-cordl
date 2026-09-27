#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderVolumeType.hpp"
#include "GlobalNamespace/zzzz__GTShaderVolumeType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTShaderVolumeType::GTShaderVolumeType(uint32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTShaderVolumeType::GTShaderVolumeType()   {
}
constexpr ::GlobalNamespace::GTShaderVolumeType  GlobalNamespace::GTShaderVolumeType::None{static_cast<uint32_t>(0x0u)};
constexpr ::GlobalNamespace::GTShaderVolumeType  GlobalNamespace::GTShaderVolumeType::Fog{static_cast<uint32_t>(0x1u)};
constexpr ::GlobalNamespace::GTShaderVolumeType  GlobalNamespace::GTShaderVolumeType::Tint{static_cast<uint32_t>(0x2u)};
constexpr ::GlobalNamespace::GTShaderVolumeType  GlobalNamespace::GTShaderVolumeType::Decal{static_cast<uint32_t>(0x4u)};
