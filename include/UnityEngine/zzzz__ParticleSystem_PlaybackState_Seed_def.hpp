#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Seed.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Seed)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Seed;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Seed);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Seed, "UnityEngine", "ParticleSystem/PlaybackState/Seed");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Seed
struct CORDL_TYPE PlaybackState_ParticleSystem_Seed {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Seed() ;

// Ctor Parameters [CppParam { name: "x", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "y", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "z", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Seed(uint32_t  x, uint32_t  y, uint32_t  z, uint32_t  w) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30805};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field x, offset: 0x0, size: 0x4, def value: None
 uint32_t  x;

/// @brief Field y, offset: 0x4, size: 0x4, def value: None
 uint32_t  y;

/// @brief Field z, offset: 0x8, size: 0x4, def value: None
 uint32_t  z;

/// @brief Field w, offset: 0xc, size: 0x4, def value: None
 uint32_t  w;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed, x) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed, y) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed, z) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed, w) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Seed) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
