#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystem_Particle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystem_Particle)
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystem_Particle;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystem_Particle);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystem_Particle, "UnityEngine", "ParticleSystem/Particle");
// [RequiredByNativeCode("particleSystemParticle", Optional = true)]
// Dependencies UnityEngine.Color32, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystem/Particle
struct CORDL_TYPE ParticleSystem_Particle {
public:
// Declarations
 __declspec(property(put=set_angularVelocity3D)) ::UnityEngine::Vector3  angularVelocity3D;

/// @brief [Obsolete("Please use Particle.remainingLifetime instead. (UnityUpgradable) -> UnityEngine.ParticleSystem/Particle.remainingLifetime", false)]
 __declspec(property(put=set_lifetime)) float_t  lifetime;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_randomSeed, put=set_randomSeed)) uint32_t  randomSeed;

 __declspec(property(put=set_remainingLifetime)) float_t  remainingLifetime;

 __declspec(property(put=set_rotation3D)) ::UnityEngine::Vector3  rotation3D;

 __declspec(property(put=set_startColor)) ::UnityEngine::Color32  startColor;

 __declspec(property(put=set_startLifetime)) float_t  startLifetime;

 __declspec(property(put=set_startSize)) float_t  startSize;

 __declspec(property(put=set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method get_position, addr 0xb67072c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_randomSeed, addr 0xb670738, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_randomSeed() ;

/// @brief Method set_angularVelocity3D, addr 0xb66960c, size 0x38, virtual false, abstract: false, final false
inline void set_angularVelocity3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_lifetime, addr 0xb6695b8, size 0x8, virtual false, abstract: false, final false
inline void set_lifetime(float_t  value) ;

/// @brief Method set_position, addr 0xb6695a0, size 0xc, virtual false, abstract: false, final false
inline void set_position(::UnityEngine::Vector3  value) ;

/// @brief Method set_randomSeed, addr 0xb66964c, size 0x8, virtual false, abstract: false, final false
inline void set_randomSeed(uint32_t  value) ;

/// @brief Method set_remainingLifetime, addr 0xb670724, size 0x8, virtual false, abstract: false, final false
inline void set_remainingLifetime(float_t  value) ;

/// @brief Method set_rotation3D, addr 0xb6695d4, size 0x38, virtual false, abstract: false, final false
inline void set_rotation3D(::UnityEngine::Vector3  value) ;

/// @brief Method set_startColor, addr 0xb669644, size 0x8, virtual false, abstract: false, final false
inline void set_startColor(::UnityEngine::Color32  value) ;

/// @brief Method set_startLifetime, addr 0xb6695c0, size 0x8, virtual false, abstract: false, final false
inline void set_startLifetime(float_t  value) ;

/// @brief Method set_startSize, addr 0xb6695c8, size 0xc, virtual false, abstract: false, final false
inline void set_startSize(float_t  value) ;

/// @brief Method set_velocity, addr 0xb6695ac, size 0xc, virtual false, abstract: false, final false
inline void set_velocity(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystem_Particle() ;

// Ctor Parameters [CppParam { name: "m_Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AnimatedVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_InitialVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AxisOfRotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Rotation", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AngularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartSize", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartColor", ty: "::UnityEngine::Color32", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_RandomSeed", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ParentRandomSeed", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Lifetime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_StartLifetime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MeshIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EmitAccumulator0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_EmitAccumulator1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystem_Particle(::UnityEngine::Vector3  m_Position, ::UnityEngine::Vector3  m_Velocity, ::UnityEngine::Vector3  m_AnimatedVelocity, ::UnityEngine::Vector3  m_InitialVelocity, ::UnityEngine::Vector3  m_AxisOfRotation, ::UnityEngine::Vector3  m_Rotation, ::UnityEngine::Vector3  m_AngularVelocity, ::UnityEngine::Vector3  m_StartSize, ::UnityEngine::Color32  m_StartColor, uint32_t  m_RandomSeed, uint32_t  m_ParentRandomSeed, float_t  m_Lifetime, float_t  m_StartLifetime, int32_t  m_MeshIndex, float_t  m_EmitAccumulator0, float_t  m_EmitAccumulator1, uint32_t  m_Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x84};

/// @brief Field m_Position, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Position;

/// @brief Field m_Velocity, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Velocity;

/// @brief Field m_AnimatedVelocity, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AnimatedVelocity;

/// @brief Field m_InitialVelocity, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_InitialVelocity;

/// @brief Field m_AxisOfRotation, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AxisOfRotation;

/// @brief Field m_Rotation, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_Rotation;

/// @brief Field m_AngularVelocity, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_AngularVelocity;

/// @brief Field m_StartSize, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  m_StartSize;

/// @brief Field m_StartColor, offset: 0x60, size: 0x4, def value: None
 ::UnityEngine::Color32  m_StartColor;

/// @brief Field m_RandomSeed, offset: 0x64, size: 0x4, def value: None
 uint32_t  m_RandomSeed;

/// @brief Field m_ParentRandomSeed, offset: 0x68, size: 0x4, def value: None
 uint32_t  m_ParentRandomSeed;

/// @brief Field m_Lifetime, offset: 0x6c, size: 0x4, def value: None
 float_t  m_Lifetime;

/// @brief Field m_StartLifetime, offset: 0x70, size: 0x4, def value: None
 float_t  m_StartLifetime;

/// @brief Field m_MeshIndex, offset: 0x74, size: 0x4, def value: None
 int32_t  m_MeshIndex;

/// @brief Field m_EmitAccumulator0, offset: 0x78, size: 0x4, def value: None
 float_t  m_EmitAccumulator0;

/// @brief Field m_EmitAccumulator1, offset: 0x7c, size: 0x4, def value: None
 float_t  m_EmitAccumulator1;

/// @brief Field m_Flags, offset: 0x80, size: 0x4, def value: None
 uint32_t  m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_Position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_Velocity) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_AnimatedVelocity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_InitialVelocity) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_AxisOfRotation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_Rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_AngularVelocity) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_StartSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_StartColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_RandomSeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_ParentRandomSeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_Lifetime) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_StartLifetime) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_MeshIndex) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_EmitAccumulator0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_EmitAccumulator1) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystem_Particle, m_Flags) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystem_Particle) == 0x84, "Size mismatch!");

} // namespace end def GlobalNamespace
