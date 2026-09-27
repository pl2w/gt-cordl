#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmitParams_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ParticleSystem_EmitParams.set_startColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ParticleSystem_EmitParams::*)(::UnityEngine::Color32)>(&::GlobalNamespace::ParticleSystem_EmitParams::set_startColor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb670e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_EmitParams>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ParticleSystem_EmitParams::set_startColor(::UnityEngine::Color32  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleSystem_EmitParams>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color32>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "m_Particle", ty: "::GlobalNamespace::ParticleSystem_Particle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_EmitParams::ParticleSystem_EmitParams(::GlobalNamespace::ParticleSystem_Particle  m_Particle, bool  m_PositionSet, bool  m_VelocitySet, bool  m_AxisOfRotationSet, bool  m_RotationSet, bool  m_AngularVelocitySet, bool  m_StartSizeSet, bool  m_StartColorSet, bool  m_RandomSeedSet, bool  m_StartLifetimeSet, bool  m_MeshIndexSet, bool  m_ApplyShapeToPosition) noexcept  {
this->m_Particle = m_Particle;
this->m_PositionSet = m_PositionSet;
this->m_VelocitySet = m_VelocitySet;
this->m_AxisOfRotationSet = m_AxisOfRotationSet;
this->m_RotationSet = m_RotationSet;
this->m_AngularVelocitySet = m_AngularVelocitySet;
this->m_StartSizeSet = m_StartSizeSet;
this->m_StartColorSet = m_StartColorSet;
this->m_RandomSeedSet = m_RandomSeedSet;
this->m_StartLifetimeSet = m_StartLifetimeSet;
this->m_MeshIndexSet = m_MeshIndexSet;
this->m_ApplyShapeToPosition = m_ApplyShapeToPosition;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_EmitParams::ParticleSystem_EmitParams()   {
}
