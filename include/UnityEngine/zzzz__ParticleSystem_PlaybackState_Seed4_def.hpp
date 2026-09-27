#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Seed4.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Seed4)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Seed4;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4, "UnityEngine", "ParticleSystem/PlaybackState/Seed4");
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Seed4
struct CORDL_TYPE PlaybackState_ParticleSystem_Seed4 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Seed4() ;

// Ctor Parameters [CppParam { name: "x", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Seed4(::GlobalNamespace::PlaybackState_ParticleSystem_Seed  x, ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  y, ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  z, ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field x, offset: 0x0, size: 0x10, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  x;

/// @brief Field y, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  y;

/// @brief Field z, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  z;

/// @brief Field w, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4, y) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4, z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4, w) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
