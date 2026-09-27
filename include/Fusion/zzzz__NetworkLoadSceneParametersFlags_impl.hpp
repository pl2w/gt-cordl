#pragma once
// IWYU pragma private; include "Fusion/NetworkLoadSceneParametersFlags.hpp"
#include "Fusion/zzzz__NetworkLoadSceneParametersFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkLoadSceneParametersFlags::NetworkLoadSceneParametersFlags(uint8_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkLoadSceneParametersFlags::NetworkLoadSceneParametersFlags()   {
}
constexpr ::Fusion::NetworkLoadSceneParametersFlags  Fusion::NetworkLoadSceneParametersFlags::Single{static_cast<uint8_t>(0x1u)};
constexpr ::Fusion::NetworkLoadSceneParametersFlags  Fusion::NetworkLoadSceneParametersFlags::LocalPhysics2D{static_cast<uint8_t>(0x2u)};
constexpr ::Fusion::NetworkLoadSceneParametersFlags  Fusion::NetworkLoadSceneParametersFlags::LocalPhysics3D{static_cast<uint8_t>(0x4u)};
constexpr ::Fusion::NetworkLoadSceneParametersFlags  Fusion::NetworkLoadSceneParametersFlags::ActiveOnLoad{static_cast<uint8_t>(0x8u)};
