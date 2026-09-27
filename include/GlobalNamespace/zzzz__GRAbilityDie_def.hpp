#pragma once
// IWYU pragma private; include "GlobalNamespace/GRAbilityDie.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRAbilityDie)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
class AnimationData;
}
namespace GlobalNamespace {
class GRAbilityInterpolatedMovement;
}
namespace GlobalNamespace {
class GRBreakableItemSpawnConfig;
}
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
namespace GlobalNamespace {
class GameAbilityEvents;
}
namespace GlobalNamespace {
class GameAgent;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRAbilityDie;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRAbilityDie*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRAbilityDie*, "", "GRAbilityDie");
// Dependencies GRAbilityBase, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRAbilityDie
class CORDL_TYPE GRAbilityDie : public ::GlobalNamespace::GRAbilityBase {
public:
// Declarations
/// @brief Field animData, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_animData, put=__cordl_internal_set_animData)) ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  animData;

/// @brief Field delayDeath, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayDeath, put=__cordl_internal_set_delayDeath)) float_t  delayDeath;

/// @brief Field delayRespawn, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayRespawn, put=__cordl_internal_set_delayRespawn)) float_t  delayRespawn;

/// @brief Field destroyDelay, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyDelay, put=__cordl_internal_set_destroyDelay)) float_t  destroyDelay;

/// @brief Field disableAllCollidersWhenDead, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableAllCollidersWhenDead, put=__cordl_internal_set_disableAllCollidersWhenDead)) bool  disableAllCollidersWhenDead;

/// @brief Field disableAllRenderersWhenDead, offset 0x91, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableAllRenderersWhenDead, put=__cordl_internal_set_disableAllRenderersWhenDead)) bool  disableAllRenderersWhenDead;

/// @brief Field disableCollidersWhenDead, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableCollidersWhenDead, put=__cordl_internal_set_disableCollidersWhenDead)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  disableCollidersWhenDead;

/// @brief Field doKnockback, offset 0xb4, size 0x1 
 __declspec(property(get=__cordl_internal_get_doKnockback, put=__cordl_internal_set_doKnockback)) bool  doKnockback;

/// @brief Field events, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::GlobalNamespace::GameAbilityEvents*  events;

/// @brief Field fxDeath, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_fxDeath, put=__cordl_internal_set_fxDeath)) ::UnityW<::UnityEngine::GameObject>  fxDeath;

/// @brief Field groundLayerMask, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundLayerMask, put=__cordl_internal_set_groundLayerMask)) ::UnityEngine::LayerMask  groundLayerMask;

/// @brief Field hideWhenDead, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideWhenDead, put=__cordl_internal_set_hideWhenDead)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  hideWhenDead;

/// @brief Field instigatingActorNumber, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_instigatingActorNumber, put=__cordl_internal_set_instigatingActorNumber)) int32_t  instigatingActorNumber;

/// @brief Field isDead, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDead, put=__cordl_internal_set_isDead)) bool  isDead;

/// @brief Field lootSpawnMarker, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lootSpawnMarker, put=__cordl_internal_set_lootSpawnMarker)) ::UnityW<::UnityEngine::Transform>  lootSpawnMarker;

/// @brief Field lootTable, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lootTable, put=__cordl_internal_set_lootTable)) ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  lootTable;

/// @brief Field reported, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_reported, put=__cordl_internal_set_reported)) bool  reported;

/// @brief Field soundDeath, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundDeath, put=__cordl_internal_set_soundDeath)) ::GlobalNamespace::AbilitySound*  soundDeath;

/// @brief Field soundOnHide, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundOnHide, put=__cordl_internal_set_soundOnHide)) ::GlobalNamespace::AbilitySound*  soundOnHide;

/// @brief Field spawnOnGround, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_spawnOnGround, put=__cordl_internal_set_spawnOnGround)) bool  spawnOnGround;

/// @brief Field staggerMovement, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_staggerMovement, put=__cordl_internal_set_staggerMovement)) ::GlobalNamespace::GRAbilityInterpolatedMovement*  staggerMovement;

/// @brief Field totalDeathDelay, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalDeathDelay, put=__cordl_internal_set_totalDeathDelay)) float_t  totalDeathDelay;

/// @brief Method DestroySelf, addr 0x586a040, size 0xc4, virtual false, abstract: false, final false
inline void DestroySelf() ;

/// @brief Method Die, addr 0x58699e0, size 0x474, virtual false, abstract: false, final false
inline void Die() ;

/// @brief Method Disable, addr 0x58693d0, size 0xfc, virtual false, abstract: false, final false
static inline void Disable(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, bool  disable) ;

/// @brief Method Hide, addr 0x5869768, size 0xfc, virtual false, abstract: false, final false
static inline void Hide(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  renderers, bool  hide) ;

/// @brief Method IsDone, addr 0x586a244, size 0x8, virtual true, abstract: false, final false
inline bool IsDone() ;

static inline ::GlobalNamespace::GRAbilityDie* New_ctor() ;

/// @brief Method OnStart, addr 0x58694cc, size 0x218, virtual true, abstract: false, final false
inline void OnStart() ;

/// @brief Method OnStop, addr 0x58696e4, size 0x84, virtual true, abstract: false, final false
inline void OnStop() ;

/// @brief Method OnUpdateShared, addr 0x586a24c, size 0x120, virtual true, abstract: false, final false
inline void OnUpdateShared(float_t  dt) ;

/// @brief Method ReportDeathStat, addr 0x586a104, size 0x140, virtual false, abstract: false, final false
inline void ReportDeathStat() ;

/// @brief Method SetInstigatingPlayerIndex, addr 0x5869924, size 0xbc, virtual false, abstract: false, final false
inline void SetInstigatingPlayerIndex(int32_t  actorNumber) ;

/// @brief Method SetStaggerVelocity, addr 0x5869864, size 0xc0, virtual false, abstract: false, final false
inline void SetStaggerVelocity(::UnityEngine::Vector3  vel) ;

/// @brief Method Setup, addr 0x58692d8, size 0xf8, virtual true, abstract: false, final false
inline void Setup(::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>* const& __cordl_internal_get_animData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*& __cordl_internal_get_animData() ;

constexpr float_t const& __cordl_internal_get_delayDeath() const;

constexpr float_t& __cordl_internal_get_delayDeath() ;

constexpr float_t const& __cordl_internal_get_delayRespawn() const;

constexpr float_t& __cordl_internal_get_delayRespawn() ;

constexpr float_t const& __cordl_internal_get_destroyDelay() const;

constexpr float_t& __cordl_internal_get_destroyDelay() ;

constexpr bool const& __cordl_internal_get_disableAllCollidersWhenDead() const;

constexpr bool& __cordl_internal_get_disableAllCollidersWhenDead() ;

constexpr bool const& __cordl_internal_get_disableAllRenderersWhenDead() const;

constexpr bool& __cordl_internal_get_disableAllRenderersWhenDead() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_disableCollidersWhenDead() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_disableCollidersWhenDead() ;

constexpr bool const& __cordl_internal_get_doKnockback() const;

constexpr bool& __cordl_internal_get_doKnockback() ;

constexpr ::GlobalNamespace::GameAbilityEvents* const& __cordl_internal_get_events() const;

constexpr ::GlobalNamespace::GameAbilityEvents*& __cordl_internal_get_events() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_fxDeath() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_fxDeath() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_groundLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_groundLayerMask() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_hideWhenDead() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_hideWhenDead() ;

constexpr int32_t const& __cordl_internal_get_instigatingActorNumber() const;

constexpr int32_t& __cordl_internal_get_instigatingActorNumber() ;

constexpr bool const& __cordl_internal_get_isDead() const;

constexpr bool& __cordl_internal_get_isDead() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_lootSpawnMarker() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_lootSpawnMarker() ;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& __cordl_internal_get_lootTable() const;

constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& __cordl_internal_get_lootTable() ;

constexpr bool const& __cordl_internal_get_reported() const;

constexpr bool& __cordl_internal_get_reported() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundDeath() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundDeath() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_soundOnHide() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_soundOnHide() ;

constexpr bool const& __cordl_internal_get_spawnOnGround() const;

constexpr bool& __cordl_internal_get_spawnOnGround() ;

constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement* const& __cordl_internal_get_staggerMovement() const;

constexpr ::GlobalNamespace::GRAbilityInterpolatedMovement*& __cordl_internal_get_staggerMovement() ;

constexpr float_t const& __cordl_internal_get_totalDeathDelay() const;

constexpr float_t& __cordl_internal_get_totalDeathDelay() ;

constexpr void __cordl_internal_set_animData(::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  value) ;

constexpr void __cordl_internal_set_delayDeath(float_t  value) ;

constexpr void __cordl_internal_set_delayRespawn(float_t  value) ;

constexpr void __cordl_internal_set_destroyDelay(float_t  value) ;

constexpr void __cordl_internal_set_disableAllCollidersWhenDead(bool  value) ;

constexpr void __cordl_internal_set_disableAllRenderersWhenDead(bool  value) ;

constexpr void __cordl_internal_set_disableCollidersWhenDead(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_doKnockback(bool  value) ;

constexpr void __cordl_internal_set_events(::GlobalNamespace::GameAbilityEvents*  value) ;

constexpr void __cordl_internal_set_fxDeath(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_groundLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_hideWhenDead(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

constexpr void __cordl_internal_set_instigatingActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_isDead(bool  value) ;

constexpr void __cordl_internal_set_lootSpawnMarker(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lootTable(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value) ;

constexpr void __cordl_internal_set_reported(bool  value) ;

constexpr void __cordl_internal_set_soundDeath(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_soundOnHide(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_spawnOnGround(bool  value) ;

constexpr void __cordl_internal_set_staggerMovement(::GlobalNamespace::GRAbilityInterpolatedMovement*  value) ;

constexpr void __cordl_internal_set_totalDeathDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x586a36c, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRAbilityDie() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityDie", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRAbilityDie(GRAbilityDie && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRAbilityDie", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRAbilityDie(GRAbilityDie const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1856};

/// @brief Field delayDeath, offset: 0x74, size: 0x4, def value: None
 float_t  ___delayDeath;

/// @brief Field delayRespawn, offset: 0x78, size: 0x4, def value: None
 float_t  ___delayRespawn;

/// @brief Field hideWhenDead, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___hideWhenDead;

/// @brief Field disableCollidersWhenDead, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___disableCollidersWhenDead;

/// @brief Field disableAllCollidersWhenDead, offset: 0x90, size: 0x1, def value: None
 bool  ___disableAllCollidersWhenDead;

/// @brief Field disableAllRenderersWhenDead, offset: 0x91, size: 0x1, def value: None
 bool  ___disableAllRenderersWhenDead;

/// @brief Field fxDeath, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___fxDeath;

/// @brief Field soundDeath, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundDeath;

/// @brief Field soundOnHide, offset: 0xa8, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___soundOnHide;

/// @brief Field destroyDelay, offset: 0xb0, size: 0x4, def value: None
 float_t  ___destroyDelay;

/// @brief Field doKnockback, offset: 0xb4, size: 0x1, def value: None
 bool  ___doKnockback;

/// @brief Field lootTable, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  ___lootTable;

/// @brief Field spawnOnGround, offset: 0xc0, size: 0x1, def value: None
 bool  ___spawnOnGround;

/// @brief Field groundLayerMask, offset: 0xc4, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___groundLayerMask;

/// @brief Field lootSpawnMarker, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___lootSpawnMarker;

/// @brief Field animData, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::AnimationData*>*  ___animData;

/// @brief Field instigatingActorNumber, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___instigatingActorNumber;

/// @brief Field isDead, offset: 0xdc, size: 0x1, def value: None
 bool  ___isDead;

/// @brief Field totalDeathDelay, offset: 0xe0, size: 0x4, def value: None
 float_t  ___totalDeathDelay;

/// @brief Field staggerMovement, offset: 0xe8, size: 0x8, def value: None
 ::GlobalNamespace::GRAbilityInterpolatedMovement*  ___staggerMovement;

/// @brief Field events, offset: 0xf0, size: 0x8, def value: None
 ::GlobalNamespace::GameAbilityEvents*  ___events;

/// @brief Field reported, offset: 0xf8, size: 0x1, def value: None
 bool  ___reported;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___delayDeath) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___delayRespawn) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___hideWhenDead) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___disableCollidersWhenDead) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___disableAllCollidersWhenDead) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___disableAllRenderersWhenDead) == 0x91, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___fxDeath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___soundDeath) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___soundOnHide) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___destroyDelay) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___doKnockback) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___lootTable) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___spawnOnGround) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___groundLayerMask) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___lootSpawnMarker) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___animData) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___instigatingActorNumber) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___isDead) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___totalDeathDelay) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___staggerMovement) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___events) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRAbilityDie, ___reported) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRAbilityDie) == 0x100, "Size mismatch!");

} // namespace end def GlobalNamespace
