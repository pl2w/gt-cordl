#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Emission.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Emission)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Emission;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Emission);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Emission, "UnityEngine", "ParticleSystem/PlaybackState/Emission");
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Emission
struct CORDL_TYPE PlaybackState_ParticleSystem_Emission {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Emission() ;

// Ctor Parameters [CppParam { name: "m_ParticleSpacing", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ToEmitAccumulator", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Random", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Emission(float_t  m_ParticleSpacing, float_t  m_ToEmitAccumulator, ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  m_Random) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30807};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field m_ParticleSpacing, offset: 0x0, size: 0x4, def value: None
 float_t  m_ParticleSpacing;

/// @brief Field m_ToEmitAccumulator, offset: 0x4, size: 0x4, def value: None
 float_t  m_ToEmitAccumulator;

/// @brief Field m_Random, offset: 0x8, size: 0x10, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  m_Random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Emission, m_ParticleSpacing) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Emission, m_ToEmitAccumulator) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Emission, m_Random) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Emission) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
