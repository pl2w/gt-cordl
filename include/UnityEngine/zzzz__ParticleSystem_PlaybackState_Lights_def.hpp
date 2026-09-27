#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Lights.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Lights)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Lights;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Lights);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Lights, "UnityEngine", "ParticleSystem/PlaybackState/Lights");
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Lights
struct CORDL_TYPE PlaybackState_ParticleSystem_Lights {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Lights() ;

// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ParticleEmissionCounter", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Lights(::GlobalNamespace::PlaybackState_ParticleSystem_Seed  m_Random, float_t  m_ParticleEmissionCounter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30813};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field m_Random, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  m_Random;

/// @brief Field m_ParticleEmissionCounter, offset: 0x10, size: 0x4, def value: None
 float_t  m_ParticleEmissionCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Lights, m_Random) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Lights, m_ParticleEmissionCounter) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Lights) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
