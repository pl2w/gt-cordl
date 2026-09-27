#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Collision_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Emission_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Force_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Initial_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Lights_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Noise_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Shape_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Trail_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState)
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Collision;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Emission;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Force;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Initial;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Lights;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Noise;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Seed4;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Seed;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Shape;
}
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Trail;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_PlaybackState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_PlaybackState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_PlaybackState, "UnityEngine", "ParticleSystem/PlaybackState");
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Collision, UnityEngine.ParticleSystem::PlaybackState::Emission, UnityEngine.ParticleSystem::PlaybackState::Force, UnityEngine.ParticleSystem::PlaybackState::Initial, UnityEngine.ParticleSystem::PlaybackState::Lights, UnityEngine.ParticleSystem::PlaybackState::Noise, UnityEngine.ParticleSystem::PlaybackState::Shape, UnityEngine.ParticleSystem::PlaybackState::Trail
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState
struct CORDL_TYPE ParticleSystem_PlaybackState {
public:
// Declarations
using Collision = ::GlobalNamespace::PlaybackState_ParticleSystem_Collision;

using Emission = ::GlobalNamespace::PlaybackState_ParticleSystem_Emission;

using Force = ::GlobalNamespace::PlaybackState_ParticleSystem_Force;

using Initial = ::GlobalNamespace::PlaybackState_ParticleSystem_Initial;

using Lights = ::GlobalNamespace::PlaybackState_ParticleSystem_Lights;

using Noise = ::GlobalNamespace::PlaybackState_ParticleSystem_Noise;

using Seed = ::GlobalNamespace::PlaybackState_ParticleSystem_Seed;

using Seed4 = ::GlobalNamespace::PlaybackState_ParticleSystem_Seed4;

using Shape = ::GlobalNamespace::PlaybackState_ParticleSystem_Shape;

using Trail = ::GlobalNamespace::PlaybackState_ParticleSystem_Trail;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_PlaybackState() ;

// Ctor Parameters [CppParam { name: "m_AccumulatedDt", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartDelay", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PlaybackTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RingBufferIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Emission", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Emission", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Initial", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Initial", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Shape", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Shape", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Force", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Force", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Collision", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Collision", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Noise", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Noise", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Lights", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Lights", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Trail", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Trail", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_PlaybackState(float_t  m_AccumulatedDt, float_t  m_StartDelay, float_t  m_PlaybackTime, int32_t  m_RingBufferIndex, ::GlobalNamespace::PlaybackState_ParticleSystem_Emission  m_Emission, ::GlobalNamespace::PlaybackState_ParticleSystem_Initial  m_Initial, ::GlobalNamespace::PlaybackState_ParticleSystem_Shape  m_Shape, ::GlobalNamespace::PlaybackState_ParticleSystem_Force  m_Force, ::GlobalNamespace::PlaybackState_ParticleSystem_Collision  m_Collision, ::GlobalNamespace::PlaybackState_ParticleSystem_Noise  m_Noise, ::GlobalNamespace::PlaybackState_ParticleSystem_Lights  m_Lights, ::GlobalNamespace::PlaybackState_ParticleSystem_Trail  m_Trail) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30815};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x160};

/// @brief Field m_AccumulatedDt, offset: 0x0, size: 0x4, def value: None
 float_t  m_AccumulatedDt;

/// @brief Field m_StartDelay, offset: 0x4, size: 0x4, def value: None
 float_t  m_StartDelay;

/// @brief Field m_PlaybackTime, offset: 0x8, size: 0x4, def value: None
 float_t  m_PlaybackTime;

/// @brief Field m_RingBufferIndex, offset: 0xc, size: 0x4, def value: None
 int32_t  m_RingBufferIndex;

/// @brief Field m_Emission, offset: 0x10, size: 0x18, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Emission  m_Emission;

/// @brief Field m_Initial, offset: 0x28, size: 0x40, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Initial  m_Initial;

/// @brief Field m_Shape, offset: 0x68, size: 0x5c, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Shape  m_Shape;

/// @brief Field m_Force, offset: 0xc4, size: 0x40, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Force  m_Force;

/// @brief Field m_Collision, offset: 0x104, size: 0x40, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Collision  m_Collision;

/// @brief Field m_Noise, offset: 0x144, size: 0x4, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Noise  m_Noise;

/// @brief Field m_Lights, offset: 0x148, size: 0x14, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Lights  m_Lights;

/// @brief Field m_Trail, offset: 0x15c, size: 0x4, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Trail  m_Trail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_AccumulatedDt) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_StartDelay) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_PlaybackTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_RingBufferIndex) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Emission) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Initial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Shape) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Force) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Collision) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Noise) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Lights) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_PlaybackState, m_Trail) == 0x15c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_PlaybackState) == 0x160, "Size mismatch!");

} // namespace end def GlobalNamespace
