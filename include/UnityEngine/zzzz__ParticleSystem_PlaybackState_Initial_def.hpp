#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Initial.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Initial)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Initial;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Initial);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Initial, "UnityEngine", "ParticleSystem/PlaybackState/Initial");
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Initial
struct CORDL_TYPE PlaybackState_ParticleSystem_Initial {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Initial() ;

// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Initial(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4  m_Random) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed4  m_Random;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Initial, m_Random) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Initial) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
