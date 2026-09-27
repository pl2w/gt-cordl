#pragma once
// IWYU pragma private; include "GlobalNamespace/SurfaceImpactFX.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SurfaceImpactFX)
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class SurfaceImpactFX;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SurfaceImpactFX*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SurfaceImpactFX*, "", "SurfaceImpactFX");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::MainModule, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: SurfaceImpactFX
class CORDL_TYPE SurfaceImpactFX : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fxMainModule, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxMainModule, put=__cordl_internal_set_fxMainModule)) ::GlobalNamespace::ParticleSystem_MainModule  fxMainModule;

/// @brief Field particleFX, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFX, put=__cordl_internal_set_particleFX)) ::UnityW<::UnityEngine::ParticleSystem>  particleFX;

/// @brief Field startingGravityModifier, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingGravityModifier, put=__cordl_internal_set_startingGravityModifier)) float_t  startingGravityModifier;

/// @brief Field startingScale, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_startingScale, put=__cordl_internal_set_startingScale)) ::UnityEngine::Vector3  startingScale;

/// @brief Method Awake, addr 0x5b23d94, size 0x150, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::SurfaceImpactFX* New_ctor() ;

/// @brief Method SetScale, addr 0x5b23ee4, size 0x5c, virtual false, abstract: false, final false
inline void SetScale(float_t  scale) ;

constexpr ::GlobalNamespace::ParticleSystem_MainModule const& __cordl_internal_get_fxMainModule() const;

constexpr ::GlobalNamespace::ParticleSystem_MainModule& __cordl_internal_get_fxMainModule() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleFX() ;

constexpr float_t const& __cordl_internal_get_startingGravityModifier() const;

constexpr float_t& __cordl_internal_get_startingGravityModifier() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startingScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startingScale() ;

constexpr void __cordl_internal_set_fxMainModule(::GlobalNamespace::ParticleSystem_MainModule  value) ;

constexpr void __cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_startingGravityModifier(float_t  value) ;

constexpr void __cordl_internal_set_startingScale(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5b23f40, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SurfaceImpactFX() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SurfaceImpactFX", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SurfaceImpactFX(SurfaceImpactFX && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SurfaceImpactFX", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SurfaceImpactFX(SurfaceImpactFX const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3621};

/// @brief Field particleFX, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleFX;

/// @brief Field startingGravityModifier, offset: 0x28, size: 0x4, def value: None
 float_t  ___startingGravityModifier;

/// @brief Field startingScale, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startingScale;

/// @brief Field fxMainModule, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_MainModule  ___fxMainModule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SurfaceImpactFX, ___particleFX) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceImpactFX, ___startingGravityModifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceImpactFX, ___startingScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceImpactFX, ___fxMainModule) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SurfaceImpactFX) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
