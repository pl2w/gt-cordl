#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemForceFieldShape.hpp"
#include "UnityEngine/zzzz__ParticleSystemForceFieldShape_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::ParticleSystemForceFieldShape::ParticleSystemForceFieldShape(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::ParticleSystemForceFieldShape::ParticleSystemForceFieldShape()   {
}
constexpr ::UnityEngine::ParticleSystemForceFieldShape  UnityEngine::ParticleSystemForceFieldShape::Sphere{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::ParticleSystemForceFieldShape  UnityEngine::ParticleSystemForceFieldShape::Hemisphere{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::ParticleSystemForceFieldShape  UnityEngine::ParticleSystemForceFieldShape::Cylinder{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::ParticleSystemForceFieldShape  UnityEngine::ParticleSystemForceFieldShape::Box{static_cast<int32_t>(0x3)};
