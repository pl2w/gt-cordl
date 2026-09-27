#pragma once
// IWYU pragma private; include "GlobalNamespace/SpawnWorldEffectsTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnWorldEffectsTrigger)
namespace GorillaTag::Reactions {
class SpawnWorldEffects;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnWorldEffectsTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SpawnWorldEffectsTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpawnWorldEffectsTrigger*, "", "SpawnWorldEffectsTrigger");
// [RequireComponent(typeof(GorillaTag.Reactions.SpawnWorldEffects))]
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SpawnWorldEffectsTrigger
class CORDL_TYPE SpawnWorldEffectsTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field spawnCooldown, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnCooldown, put=__cordl_internal_set_spawnCooldown)) float_t  spawnCooldown;

/// @brief Field spawnTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnTime, put=__cordl_internal_set_spawnTime)) float_t  spawnTime;

/// @brief Field swe, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_swe, put=__cordl_internal_set_swe)) ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  swe;

static inline ::GlobalNamespace::SpawnWorldEffectsTrigger* New_ctor() ;

/// @brief Method OnEnable, addr 0x5b206b0, size 0xa4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5b20754, size 0x50, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay, addr 0x5b207a4, size 0x6c, virtual false, abstract: false, final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

constexpr float_t const& __cordl_internal_get_spawnCooldown() const;

constexpr float_t& __cordl_internal_get_spawnCooldown() ;

constexpr float_t const& __cordl_internal_get_spawnTime() const;

constexpr float_t& __cordl_internal_get_spawnTime() ;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects> const& __cordl_internal_get_swe() const;

constexpr ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>& __cordl_internal_get_swe() ;

constexpr void __cordl_internal_set_spawnCooldown(float_t  value) ;

constexpr void __cordl_internal_set_spawnTime(float_t  value) ;

constexpr void __cordl_internal_set_swe(::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  value) ;

/// @brief Method .ctor, addr 0x5b20810, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpawnWorldEffectsTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpawnWorldEffectsTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnWorldEffectsTrigger(SpawnWorldEffectsTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnWorldEffectsTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnWorldEffectsTrigger(SpawnWorldEffectsTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3602};

/// @brief Field swe, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Reactions::SpawnWorldEffects>  ___swe;

/// @brief Field spawnTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___spawnTime;

/// [SerializeField]
/// @brief Field spawnCooldown, offset: 0x2c, size: 0x4, def value: None
 float_t  ___spawnCooldown;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpawnWorldEffectsTrigger, ___swe) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnWorldEffectsTrigger, ___spawnTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpawnWorldEffectsTrigger, ___spawnCooldown) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpawnWorldEffectsTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
