#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayer_LiquidProperties.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_LiquidProperties_def.hpp"
// Ctor Parameters [CppParam { name: "resistance", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "buoyancy", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "dampingFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "surfaceJumpFactor", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTPlayer_LiquidProperties::GTPlayer_LiquidProperties(float_t  resistance, float_t  buoyancy, float_t  dampingFactor, float_t  surfaceJumpFactor) noexcept  {
this->resistance = resistance;
this->buoyancy = buoyancy;
this->dampingFactor = dampingFactor;
this->surfaceJumpFactor = surfaceJumpFactor;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTPlayer_LiquidProperties::GTPlayer_LiquidProperties()   {
}
