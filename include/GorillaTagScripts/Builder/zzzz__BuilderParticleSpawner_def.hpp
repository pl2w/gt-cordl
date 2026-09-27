#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderParticleSpawner.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BuilderParticleSpawner)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GorillaTagScripts::Builder {
class BuilderSmallMonkeTrigger;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderParticleSpawner;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderParticleSpawner*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderParticleSpawner*, "GorillaTagScripts.Builder", "BuilderParticleSpawner");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderParticleSpawner
class CORDL_TYPE BuilderParticleSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field cooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field lastSpawnTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSpawnTime, put=__cordl_internal_set_lastSpawnTime)) float_t  lastSpawnTime;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field prefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefab, put=__cordl_internal_set_prefab)) ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field spawnLocation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnLocation, put=__cordl_internal_set_spawnLocation)) ::UnityW<::UnityEngine::Transform>  spawnLocation;

/// @brief Field spawnOnEnter, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawnOnEnter, put=__cordl_internal_set_spawnOnEnter)) bool  spawnOnEnter;

/// @brief Field spawnOnExit, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawnOnExit, put=__cordl_internal_set_spawnOnExit)) bool  spawnOnExit;

/// @brief Field spawnTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnTrigger, put=__cordl_internal_set_spawnTrigger)) ::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>  spawnTrigger;

static inline ::GorillaTagScripts::Builder::BuilderParticleSpawner* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c22f9c, size 0x11c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnter, addr 0x5c23318, size 0x10, virtual false, abstract: false, final false
inline void OnEnter() ;

/// @brief Method OnExit, addr 0x5c23328, size 0x10, virtual false, abstract: false, final false
inline void OnExit() ;

/// @brief Method Start, addr 0x5c22d94, size 0xd0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TrySpawning, addr 0x5c231f0, size 0x128, virtual false, abstract: false, final false
inline void TrySpawning() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_lastSpawnTime() const;

constexpr float_t& __cordl_internal_get_lastSpawnTime() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_prefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_prefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spawnLocation() ;

constexpr bool const& __cordl_internal_get_spawnOnEnter() const;

constexpr bool& __cordl_internal_get_spawnOnEnter() ;

constexpr bool const& __cordl_internal_get_spawnOnExit() const;

constexpr bool& __cordl_internal_get_spawnOnExit() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger> const& __cordl_internal_get_spawnTrigger() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>& __cordl_internal_get_spawnTrigger() ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_lastSpawnTime(float_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_prefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_spawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spawnOnEnter(bool  value) ;

constexpr void __cordl_internal_set_spawnOnExit(bool  value) ;

constexpr void __cordl_internal_set_spawnTrigger(::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>  value) ;

/// @brief Method .ctor, addr 0x5c23338, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderParticleSpawner() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderParticleSpawner", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderParticleSpawner(BuilderParticleSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderParticleSpawner", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderParticleSpawner(BuilderParticleSpawner const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4149};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// @brief Field prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___prefab;

/// @brief Field cooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___cooldown;

/// @brief Field lastSpawnTime, offset: 0x34, size: 0x4, def value: None
 float_t  ___lastSpawnTime;

/// [SerializeField]
/// @brief Field spawnTrigger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderSmallMonkeTrigger>  ___spawnTrigger;

/// [SerializeField]
/// @brief Field spawnOnEnter, offset: 0x40, size: 0x1, def value: None
 bool  ___spawnOnEnter;

/// [SerializeField]
/// @brief Field spawnOnExit, offset: 0x41, size: 0x1, def value: None
 bool  ___spawnOnExit;

/// [SerializeField]
/// @brief Field spawnLocation, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spawnLocation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___cooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___lastSpawnTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___spawnTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___spawnOnEnter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___spawnOnExit) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderParticleSpawner, ___spawnLocation) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderParticleSpawner) == 0x50, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
