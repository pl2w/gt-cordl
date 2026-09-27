#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleVertexSnapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Particle_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ParticleVertexSnapper)
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleVertexSnapper;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleVertexSnapper*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleVertexSnapper*, "", "ParticleVertexSnapper");
// [RequireComponent(typeof(UnityEngine.ParticleSystem))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::Particle, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleVertexSnapper
class CORDL_TYPE ParticleVertexSnapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bakedMesh, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_bakedMesh, put=__cordl_internal_set_bakedMesh)) ::UnityW<::UnityEngine::Mesh>  bakedMesh;

/// @brief Field particleSystemComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleSystemComponent, put=__cordl_internal_set_particleSystemComponent)) ::UnityW<::UnityEngine::ParticleSystem>  particleSystemComponent;

/// @brief Field particles, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  particles;

/// @brief Field targetSkinnedMesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetSkinnedMesh, put=__cordl_internal_set_targetSkinnedMesh)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  targetSkinnedMesh;

/// @brief Field vertexPositions, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertexPositions, put=__cordl_internal_set_vertexPositions)) ::ArrayW<::UnityEngine::Vector3>  vertexPositions;

/// @brief Method LateUpdate, addr 0x5643254, size 0x2f4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ParticleVertexSnapper* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5643548, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x5643124, size 0x130, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_bakedMesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_bakedMesh() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleSystemComponent() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleSystemComponent() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle> const& __cordl_internal_get_particles() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>& __cordl_internal_get_particles() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_targetSkinnedMesh() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_targetSkinnedMesh() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_vertexPositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_vertexPositions() ;

constexpr void __cordl_internal_set_bakedMesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_particleSystemComponent(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_particles(::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  value) ;

constexpr void __cordl_internal_set_targetSkinnedMesh(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_vertexPositions(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x56435d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleVertexSnapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleVertexSnapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleVertexSnapper(ParticleVertexSnapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleVertexSnapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleVertexSnapper(ParticleVertexSnapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{654};

/// [SerializeField]
/// @brief Field targetSkinnedMesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___targetSkinnedMesh;

/// @brief Field particleSystemComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleSystemComponent;

/// @brief Field particles, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_Particle>  ___particles;

/// @brief Field bakedMesh, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___bakedMesh;

/// @brief Field vertexPositions, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___vertexPositions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleVertexSnapper, ___targetSkinnedMesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleVertexSnapper, ___particleSystemComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleVertexSnapper, ___particles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleVertexSnapper, ___bakedMesh) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleVertexSnapper, ___vertexPositions) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleVertexSnapper) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
