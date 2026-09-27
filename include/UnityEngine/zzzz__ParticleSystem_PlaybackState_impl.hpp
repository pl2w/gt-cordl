#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Collision_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Emission_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Force_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Initial_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Lights_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Noise_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Shape_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Trail_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Collision_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Emission_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Force_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Initial_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Lights_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Noise_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed4_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Shape_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Trail_def.hpp"
// Ctor Parameters [CppParam { name: "m_AccumulatedDt", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StartDelay", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_PlaybackTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_RingBufferIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Emission", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Emission", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Initial", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Initial", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Shape", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Shape", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Force", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Force", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Collision", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Collision", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Noise", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Noise", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Lights", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Lights", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Trail", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Trail", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ParticleSystem_PlaybackState::ParticleSystem_PlaybackState(float_t  m_AccumulatedDt, float_t  m_StartDelay, float_t  m_PlaybackTime, int32_t  m_RingBufferIndex, ::GlobalNamespace::PlaybackState_ParticleSystem_Emission  m_Emission, ::GlobalNamespace::PlaybackState_ParticleSystem_Initial  m_Initial, ::GlobalNamespace::PlaybackState_ParticleSystem_Shape  m_Shape, ::GlobalNamespace::PlaybackState_ParticleSystem_Force  m_Force, ::GlobalNamespace::PlaybackState_ParticleSystem_Collision  m_Collision, ::GlobalNamespace::PlaybackState_ParticleSystem_Noise  m_Noise, ::GlobalNamespace::PlaybackState_ParticleSystem_Lights  m_Lights, ::GlobalNamespace::PlaybackState_ParticleSystem_Trail  m_Trail) noexcept  {
this->m_AccumulatedDt = m_AccumulatedDt;
this->m_StartDelay = m_StartDelay;
this->m_PlaybackTime = m_PlaybackTime;
this->m_RingBufferIndex = m_RingBufferIndex;
this->m_Emission = m_Emission;
this->m_Initial = m_Initial;
this->m_Shape = m_Shape;
this->m_Force = m_Force;
this->m_Collision = m_Collision;
this->m_Noise = m_Noise;
this->m_Lights = m_Lights;
this->m_Trail = m_Trail;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ParticleSystem_PlaybackState::ParticleSystem_PlaybackState()   {
}
