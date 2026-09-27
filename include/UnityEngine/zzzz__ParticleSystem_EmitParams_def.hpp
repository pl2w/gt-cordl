#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_EmitParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ParticleSystem_Particle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystem_EmitParams)
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_EmitParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_EmitParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_EmitParams, "UnityEngine", "ParticleSystem/EmitParams");
// Dependencies UnityEngine.ParticleSystem::Particle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/EmitParams
struct CORDL_TYPE ParticleSystem_EmitParams {
public:
// Declarations
 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

/// @brief Method set_startColor, addr 0xb670e14, size 0x10, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color32  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_EmitParams() ;

// Ctor Parameters [CppParam { name: "m_Particle", ty: "::GlobalNamespace::ParticleSystem_Particle", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PositionSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_VelocitySet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AxisOfRotationSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RotationSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AngularVelocitySet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartSizeSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartColorSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RandomSeedSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartLifetimeSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MeshIndexSet", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ApplyShapeToPosition", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_EmitParams(::GlobalNamespace::ParticleSystem_Particle  m_Particle, bool  m_PositionSet, bool  m_VelocitySet, bool  m_AxisOfRotationSet, bool  m_RotationSet, bool  m_AngularVelocitySet, bool  m_StartSizeSet, bool  m_StartColorSet, bool  m_RandomSeedSet, bool  m_StartLifetimeSet, bool  m_MeshIndexSet, bool  m_ApplyShapeToPosition) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30804};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// [NativeName("particle")]
/// @brief Field m_Particle, offset: 0x0, size: 0x84, def value: None
 ::GlobalNamespace::ParticleSystem_Particle  m_Particle;

/// [NativeName("positionSet")]
/// @brief Field m_PositionSet, offset: 0x84, size: 0x1, def value: None
 bool  m_PositionSet;

/// [NativeName("velocitySet")]
/// @brief Field m_VelocitySet, offset: 0x85, size: 0x1, def value: None
 bool  m_VelocitySet;

/// [NativeName("axisOfRotationSet")]
/// @brief Field m_AxisOfRotationSet, offset: 0x86, size: 0x1, def value: None
 bool  m_AxisOfRotationSet;

/// [NativeName("rotationSet")]
/// @brief Field m_RotationSet, offset: 0x87, size: 0x1, def value: None
 bool  m_RotationSet;

/// [NativeName("rotationalSpeedSet")]
/// @brief Field m_AngularVelocitySet, offset: 0x88, size: 0x1, def value: None
 bool  m_AngularVelocitySet;

/// [NativeName("startSizeSet")]
/// @brief Field m_StartSizeSet, offset: 0x89, size: 0x1, def value: None
 bool  m_StartSizeSet;

/// [NativeName("startColorSet")]
/// @brief Field m_StartColorSet, offset: 0x8a, size: 0x1, def value: None
 bool  m_StartColorSet;

/// [NativeName("randomSeedSet")]
/// @brief Field m_RandomSeedSet, offset: 0x8b, size: 0x1, def value: None
 bool  m_RandomSeedSet;

/// [NativeName("startLifetimeSet")]
/// @brief Field m_StartLifetimeSet, offset: 0x8c, size: 0x1, def value: None
 bool  m_StartLifetimeSet;

/// [NativeName("meshIndexSet")]
/// @brief Field m_MeshIndexSet, offset: 0x8d, size: 0x1, def value: None
 bool  m_MeshIndexSet;

/// [NativeName("applyShapeToPosition")]
/// @brief Field m_ApplyShapeToPosition, offset: 0x8e, size: 0x1, def value: None
 bool  m_ApplyShapeToPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_Particle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_PositionSet) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_VelocitySet) == 0x85, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_AxisOfRotationSet) == 0x86, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_RotationSet) == 0x87, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_AngularVelocitySet) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_StartSizeSet) == 0x89, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_StartColorSet) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_RandomSeedSet) == 0x8b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_StartLifetimeSet) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_MeshIndexSet) == 0x8d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_EmitParams, m_ApplyShapeToPosition) == 0x8e, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_EmitParams) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
