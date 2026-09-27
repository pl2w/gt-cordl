#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeItem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GeodeItem)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GeodeItem;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GeodeItem*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeodeItem*, "", "GeodeItem");
// Dependencies TransferrableObject, TransferrableObject::ItemStates, UnityEngine.GameObject, UnityEngine.LayerMask, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: GeodeItem
class CORDL_TYPE GeodeItem : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field OnGeodeCracked, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGeodeCracked, put=__cordl_internal_set_OnGeodeCracked)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  OnGeodeCracked;

/// @brief Field OnGeodeGrabbed, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGeodeGrabbed, put=__cordl_internal_set_OnGeodeGrabbed)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  OnGeodeGrabbed;

/// @brief Field audioSource, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field collidersHit, offset 0x3c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersHit, put=__cordl_internal_set_collidersHit)) ::ArrayW<::UnityEngine::RaycastHit>  collidersHit;

/// @brief Field collisionLayerMask, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionLayerMask, put=__cordl_internal_set_collisionLayerMask)) ::UnityEngine::LayerMask  collisionLayerMask;

/// @brief Field cooldown, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field cooldownRemaining, offset 0x370, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldownRemaining, put=__cordl_internal_set_cooldownRemaining)) float_t  cooldownRemaining;

/// @brief Field currentItemState, offset 0x3d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentItemState, put=__cordl_internal_set_currentItemState)) ::GlobalNamespace::TransferrableObject_ItemStates  currentItemState;

/// @brief Field effectsGameObject, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectsGameObject, put=__cordl_internal_set_effectsGameObject)) ::UnityW<::UnityEngine::GameObject>  effectsGameObject;

/// @brief Field effectsHaveBeenPlayed, offset 0x399, size 0x1 
 __declspec(property(get=__cordl_internal_get_effectsHaveBeenPlayed, put=__cordl_internal_set_effectsHaveBeenPlayed)) bool  effectsHaveBeenPlayed;

/// @brief Field geodeCrackedMeshes, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_geodeCrackedMeshes, put=__cordl_internal_set_geodeCrackedMeshes)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  geodeCrackedMeshes;

/// @brief Field geodeFullMesh, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_geodeFullMesh, put=__cordl_internal_set_geodeFullMesh)) ::UnityW<::UnityEngine::GameObject>  geodeFullMesh;

/// @brief Field hasEffectsGameObject, offset 0x398, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasEffectsGameObject, put=__cordl_internal_set_hasEffectsGameObject)) bool  hasEffectsGameObject;

/// @brief Field hit, offset 0x39c, size 0x2c 
 __declspec(property(get=__cordl_internal_get_hit, put=__cordl_internal_set_hit)) ::UnityEngine::RaycastHit  hit;

/// @brief Field hitLastFrame, offset 0x374, size 0x1 
 __declspec(property(get=__cordl_internal_get_hitLastFrame, put=__cordl_internal_set_hitLastFrame)) bool  hitLastFrame;

/// @brief Field index, offset 0x3d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field minHitVelocity, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHitVelocity, put=__cordl_internal_set_minHitVelocity)) float_t  minHitVelocity;

/// @brief Field prevItemState, offset 0x3d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_prevItemState, put=__cordl_internal_set_prevItemState)) ::GlobalNamespace::TransferrableObject_ItemStates  prevItemState;

/// @brief Field randomizeGeode, offset 0x380, size 0x1 
 __declspec(property(get=__cordl_internal_get_randomizeGeode, put=__cordl_internal_set_randomizeGeode)) bool  randomizeGeode;

/// @brief Field rayCastMaxDistance, offset 0x368, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastMaxDistance, put=__cordl_internal_set_rayCastMaxDistance)) float_t  rayCastMaxDistance;

/// @brief Field sphereRayRadius, offset 0x36c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sphereRayRadius, put=__cordl_internal_set_sphereRayRadius)) float_t  sphereRayRadius;

/// @brief Field velocityEstimator, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityEstimator, put=__cordl_internal_set_velocityEstimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  velocityEstimator;

/// @brief Method InitToDefault, addr 0x5758d60, size 0xa0, virtual false, abstract: false, final false
inline void InitToDefault() ;

/// @brief Method LateUpdateLocal, addr 0x5758ef0, size 0x2fc, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateShared, addr 0x5759594, size 0x3c, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::GeodeItem* New_ctor() ;

/// @brief Method OnGrab, addr 0x5758e6c, size 0x84, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnItemStateChanged, addr 0x57591ec, size 0x388, virtual false, abstract: false, final false
inline void OnItemStateChanged() ;

/// @brief Method OnRelease, addr 0x5758e28, size 0x44, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnSpawn, addr 0x5758cac, size 0x8c, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method RandomPickCrackedGeode, addr 0x5759574, size 0x20, virtual false, abstract: false, final false
inline int32_t RandomPickCrackedGeode() ;

/// @brief Method ResetToDefaultState, addr 0x5758e00, size 0x28, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

/// @brief Method Start, addr 0x5758d38, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>* const& __cordl_internal_get_OnGeodeCracked() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*& __cordl_internal_get_OnGeodeCracked() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>* const& __cordl_internal_get_OnGeodeGrabbed() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*& __cordl_internal_get_OnGeodeGrabbed() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_collidersHit() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_collidersHit() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionLayerMask() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr float_t const& __cordl_internal_get_cooldownRemaining() const;

constexpr float_t& __cordl_internal_get_cooldownRemaining() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get_currentItemState() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get_currentItemState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_effectsGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_effectsGameObject() ;

constexpr bool const& __cordl_internal_get_effectsHaveBeenPlayed() const;

constexpr bool& __cordl_internal_get_effectsHaveBeenPlayed() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_geodeCrackedMeshes() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_geodeCrackedMeshes() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_geodeFullMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_geodeFullMesh() ;

constexpr bool const& __cordl_internal_get_hasEffectsGameObject() const;

constexpr bool& __cordl_internal_get_hasEffectsGameObject() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get_hit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get_hit() ;

constexpr bool const& __cordl_internal_get_hitLastFrame() const;

constexpr bool& __cordl_internal_get_hitLastFrame() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr float_t const& __cordl_internal_get_minHitVelocity() const;

constexpr float_t& __cordl_internal_get_minHitVelocity() ;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& __cordl_internal_get_prevItemState() const;

constexpr ::GlobalNamespace::TransferrableObject_ItemStates& __cordl_internal_get_prevItemState() ;

constexpr bool const& __cordl_internal_get_randomizeGeode() const;

constexpr bool& __cordl_internal_get_randomizeGeode() ;

constexpr float_t const& __cordl_internal_get_rayCastMaxDistance() const;

constexpr float_t& __cordl_internal_get_rayCastMaxDistance() ;

constexpr float_t const& __cordl_internal_get_sphereRayRadius() const;

constexpr float_t& __cordl_internal_get_sphereRayRadius() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_velocityEstimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_velocityEstimator() ;

constexpr void __cordl_internal_set_OnGeodeCracked(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  value) ;

constexpr void __cordl_internal_set_OnGeodeGrabbed(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_collidersHit(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_collisionLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_cooldownRemaining(float_t  value) ;

constexpr void __cordl_internal_set_currentItemState(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set_effectsGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_effectsHaveBeenPlayed(bool  value) ;

constexpr void __cordl_internal_set_geodeCrackedMeshes(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_geodeFullMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hasEffectsGameObject(bool  value) ;

constexpr void __cordl_internal_set_hit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set_hitLastFrame(bool  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_minHitVelocity(float_t  value) ;

constexpr void __cordl_internal_set_prevItemState(::GlobalNamespace::TransferrableObject_ItemStates  value) ;

constexpr void __cordl_internal_set_randomizeGeode(bool  value) ;

constexpr void __cordl_internal_set_rayCastMaxDistance(float_t  value) ;

constexpr void __cordl_internal_set_sphereRayRadius(float_t  value) ;

constexpr void __cordl_internal_set_velocityEstimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x57595d0, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeodeItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeodeItem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeodeItem(GeodeItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeodeItem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeodeItem(GeodeItem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1325};

/// [Tooltip("This GameObject will activate when the geode hits the ground with enough force.")]
/// @brief Field effectsGameObject, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___effectsGameObject;

/// @brief Field collisionLayerMask, offset: 0x340, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionLayerMask;

/// [Tooltip("Used to calculate velocity of the geode.")]
/// @brief Field velocityEstimator, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___velocityEstimator;

/// @brief Field cooldown, offset: 0x350, size: 0x4, def value: None
 float_t  ___cooldown;

/// [Tooltip("The velocity of the geode must be greater than this value to activate the effect.")]
/// @brief Field minHitVelocity, offset: 0x354, size: 0x4, def value: None
 float_t  ___minHitVelocity;

/// [Tooltip("Geode\'s full mesh before cracking")]
/// @brief Field geodeFullMesh, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___geodeFullMesh;

/// [Tooltip("Geode\'s cracked open half different meshes, picked randomly")]
/// @brief Field geodeCrackedMeshes, offset: 0x360, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___geodeCrackedMeshes;

/// [Tooltip("The distance between te geode and the layer mask to detect whether it hits it")]
/// @brief Field rayCastMaxDistance, offset: 0x368, size: 0x4, def value: None
 float_t  ___rayCastMaxDistance;

/// [FormerlySerializedAs("collisionRadius")]
/// @brief Field sphereRayRadius, offset: 0x36c, size: 0x4, def value: None
 float_t  ___sphereRayRadius;

/// [DebugReadout]
/// @brief Field cooldownRemaining, offset: 0x370, size: 0x4, def value: None
 float_t  ___cooldownRemaining;

/// [DebugReadout]
/// @brief Field hitLastFrame, offset: 0x374, size: 0x1, def value: None
 bool  ___hitLastFrame;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field randomizeGeode, offset: 0x380, size: 0x1, def value: None
 bool  ___randomizeGeode;

/// @brief Field OnGeodeCracked, offset: 0x388, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  ___OnGeodeCracked;

/// @brief Field OnGeodeGrabbed, offset: 0x390, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::GeodeItem>>*  ___OnGeodeGrabbed;

/// @brief Field hasEffectsGameObject, offset: 0x398, size: 0x1, def value: None
 bool  ___hasEffectsGameObject;

/// @brief Field effectsHaveBeenPlayed, offset: 0x399, size: 0x1, def value: None
 bool  ___effectsHaveBeenPlayed;

/// @brief Field hit, offset: 0x39c, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ___hit;

/// @brief Field collidersHit, offset: 0x3c8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___collidersHit;

/// @brief Field currentItemState, offset: 0x3d0, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ___currentItemState;

/// @brief Field prevItemState, offset: 0x3d4, size: 0x4, def value: None
 ::GlobalNamespace::TransferrableObject_ItemStates  ___prevItemState;

/// @brief Field index, offset: 0x3d8, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Size padding 0x410 - 0x3e0 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeodeItem, ___effectsGameObject) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___collisionLayerMask) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___velocityEstimator) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___cooldown) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___minHitVelocity) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___geodeFullMesh) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___geodeCrackedMeshes) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___rayCastMaxDistance) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___sphereRayRadius) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___cooldownRemaining) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___hitLastFrame) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___audioSource) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___randomizeGeode) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___OnGeodeCracked) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___OnGeodeGrabbed) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___hasEffectsGameObject) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___effectsHaveBeenPlayed) == 0x399, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___hit) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___collidersHit) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___currentItemState) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___prevItemState) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeItem, ___index) == 0x3d8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeodeItem) == 0x410, "Size mismatch!");

} // namespace end def GlobalNamespace
