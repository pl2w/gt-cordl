#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_PlaybackState_Shape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_PlaybackState_Seed4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_PlaybackState_Shape)
// Forward declare root types
namespace GlobalNamespace {
struct PlaybackState_ParticleSystem_Shape;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlaybackState_ParticleSystem_Shape);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, "UnityEngine", "ParticleSystem/PlaybackState/Shape");
// Dependencies UnityEngine.ParticleSystem::PlaybackState::Seed4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/PlaybackState/Shape
struct CORDL_TYPE PlaybackState_ParticleSystem_Shape {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PlaybackState_ParticleSystem_Shape() ;

// Ctor Parameters [CppParam { name: "m_Random", ty: "::GlobalNamespace::PlaybackState_ParticleSystem_Seed4", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RadiusTimer", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RadiusTimerPrev", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ArcTimer", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ArcTimerPrev", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MeshSpawnTimer", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MeshSpawnTimerPrev", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OrderedMeshVertexIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackState_ParticleSystem_Shape(::GlobalNamespace::PlaybackState_ParticleSystem_Seed4  m_Random, float_t  m_RadiusTimer, float_t  m_RadiusTimerPrev, float_t  m_ArcTimer, float_t  m_ArcTimerPrev, float_t  m_MeshSpawnTimer, float_t  m_MeshSpawnTimerPrev, int32_t  m_OrderedMeshVertexIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30809};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x5c};

/// @brief Field m_Random, offset: 0x0, size: 0x40, def value: None
 ::GlobalNamespace::PlaybackState_ParticleSystem_Seed4  m_Random;

/// @brief Field m_RadiusTimer, offset: 0x40, size: 0x4, def value: None
 float_t  m_RadiusTimer;

/// @brief Field m_RadiusTimerPrev, offset: 0x44, size: 0x4, def value: None
 float_t  m_RadiusTimerPrev;

/// @brief Field m_ArcTimer, offset: 0x48, size: 0x4, def value: None
 float_t  m_ArcTimer;

/// @brief Field m_ArcTimerPrev, offset: 0x4c, size: 0x4, def value: None
 float_t  m_ArcTimerPrev;

/// @brief Field m_MeshSpawnTimer, offset: 0x50, size: 0x4, def value: None
 float_t  m_MeshSpawnTimer;

/// @brief Field m_MeshSpawnTimerPrev, offset: 0x54, size: 0x4, def value: None
 float_t  m_MeshSpawnTimerPrev;

/// @brief Field m_OrderedMeshVertexIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  m_OrderedMeshVertexIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_Random) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_RadiusTimer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_RadiusTimerPrev) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_ArcTimer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_ArcTimerPrev) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_MeshSpawnTimer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_MeshSpawnTimerPrev) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape, m_OrderedMeshVertexIndex) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlaybackState_ParticleSystem_Shape) == 0x5c, "Size mismatch!");

} // namespace end def GlobalNamespace
