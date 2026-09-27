#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Emission.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Emission_def.hpp"
// Ctor Parameters [CppParam { name: "m_ParticleSpacing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ToEmitAccumulator", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Random", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PlaybackState_ParticleSystem_Emission::PlaybackState_ParticleSystem_Emission(float_t  m_ParticleSpacing, float_t  m_ToEmitAccumulator, ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  m_Random) noexcept  {
this->m_ParticleSpacing = m_ParticleSpacing;
this->m_ToEmitAccumulator = m_ToEmitAccumulator;
this->m_Random = m_Random;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlaybackState_ParticleSystem_Emission::PlaybackState_ParticleSystem_Emission()   {
}
