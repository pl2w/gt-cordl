#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Trail.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Trail)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Trail;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Trail);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Trail, "UnityEngine", "ParticleSystem/PlaybackState/Trail");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Trail
struct CORDL_TYPE PlaybackState_ParticleSystem_Trail {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Trail() ;

// Ctor Parameters [CppParam { name: "m_Timer", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Trail(float_t  m_Timer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30814};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field m_Timer, offset: 0x0, size: 0x4, def value: None
 float_t  m_Timer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Trail, m_Timer) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Trail) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
