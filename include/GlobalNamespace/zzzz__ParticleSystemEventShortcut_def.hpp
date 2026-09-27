#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleSystemEventShortcut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ShapeModule_def.hpp"
CORDL_MODULE_EXPORT(ParticleSystemEventShortcut)
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEventShortcut;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ParticleSystemEventShortcut*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystemEventShortcut*, "", "ParticleSystemEventShortcut");
// [RequireComponent(typeof(UnityEngine.ParticleSystem))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem::ShapeModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: ParticleSystemEventShortcut
class CORDL_TYPE ParticleSystemEventShortcut : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field initialized, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

/// @brief Field poolExists, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_poolExists, put=__cordl_internal_set_poolExists)) bool  poolExists;

/// @brief Field ps, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ps, put=__cordl_internal_set_ps)) ::UnityW<::UnityEngine::ParticleSystem>  ps;

/// @brief Field shape, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::GlobalNamespace::ParticleSystem_ShapeModule  shape;

/// @brief Method ClearAndPlay, addr 0x578e63c, size 0x34, virtual false, abstract: false, final false
inline void ClearAndPlay() ;

/// @brief Method InitIfNeeded, addr 0x578e520, size 0xf0, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

static inline ::GlobalNamespace::ParticleSystemEventShortcut* New_ctor() ;

/// @brief Method OnParticleSystemStopped, addr 0x578e7a8, size 0x4, virtual false, abstract: false, final false
inline void OnParticleSystemStopped() ;

/// @brief Method PlayFromMesh, addr 0x578e670, size 0x50, virtual false, abstract: false, final false
inline void PlayFromMesh(::UnityEngine::MeshRenderer*  mesh) ;

/// @brief Method PlayFromSkin, addr 0x578e6c0, size 0x50, virtual false, abstract: false, final false
inline void PlayFromSkin(::UnityEngine::SkinnedMeshRenderer*  skin) ;

/// @brief Method ReturnToPool, addr 0x578e710, size 0x98, virtual false, abstract: false, final false
inline void ReturnToPool() ;

/// @brief Method StopAndClear, addr 0x578e610, size 0x2c, virtual false, abstract: false, final false
inline void StopAndClear() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_poolExists() const;

constexpr bool& __cordl_internal_get_poolExists() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_ps() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_ps() ;

constexpr ::GlobalNamespace::ParticleSystem_ShapeModule const& __cordl_internal_get_shape() const;

constexpr ::GlobalNamespace::ParticleSystem_ShapeModule& __cordl_internal_get_shape() ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_poolExists(bool  value) ;

constexpr void __cordl_internal_set_ps(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_shape(::GlobalNamespace::ParticleSystem_ShapeModule  value) ;

/// @brief Method .ctor, addr 0x578e7ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemEventShortcut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventShortcut", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemEventShortcut(ParticleSystemEventShortcut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEventShortcut", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemEventShortcut(ParticleSystemEventShortcut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1438};

/// @brief Field initialized, offset: 0x20, size: 0x1, def value: None
 bool  ___initialized;

/// @brief Field ps, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___ps;

/// @brief Field shape, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_ShapeModule  ___shape;

/// @brief Field poolExists, offset: 0x38, size: 0x1, def value: None
 bool  ___poolExists;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemEventShortcut, ___initialized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventShortcut, ___ps) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventShortcut, ___shape) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemEventShortcut, ___poolExists) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystemEventShortcut) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
