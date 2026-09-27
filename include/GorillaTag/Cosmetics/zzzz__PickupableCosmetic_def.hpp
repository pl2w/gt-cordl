#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/PickupableCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__PickupableVariant_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PickupableCosmetic)
namespace GlobalNamespace {
class HoldableObject;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct PickupableCosmetic__DelayedPickup_Internal_d__45;
}
namespace GlobalNamespace {
class RigOwnedPhysicsBody;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class PickupableCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::PickupableCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::PickupableCosmetic*, "GorillaTag.Cosmetics", "PickupableCosmetic");
// Dependencies GorillaTag.Cosmetics.PickupableVariant, UnityEngine.LayerMask, UnityEngine.Renderer, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.PickupableCosmetic
class CORDL_TYPE PickupableCosmetic : public ::GorillaTag::Cosmetics::PickupableVariant {
public:
// Declarations
using _DelayedPickup_Internal_d__45 = ::GlobalNamespace::PickupableCosmetic__DelayedPickup_Internal_d__45;

/// @brief Field OnBrokenShared, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnBrokenShared, put=__cordl_internal_set_OnBrokenShared)) ::UnityEngine::Events::UnityEvent*  OnBrokenShared;

/// @brief Field OnPickupShared, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPickupShared, put=__cordl_internal_set_OnPickupShared)) ::UnityEngine::Events::UnityEvent*  OnPickupShared;

/// @brief Field OnPlacedShared, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPlacedShared, put=__cordl_internal_set_OnPlacedShared)) ::UnityEngine::Events::UnityEvent*  OnPlacedShared;

/// @brief Field RaycastCheckDist, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_RaycastCheckDist, put=__cordl_internal_set_RaycastCheckDist)) float_t  RaycastCheckDist;

/// @brief Field RaycastChecksMax, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_RaycastChecksMax, put=__cordl_internal_set_RaycastChecksMax)) int32_t  RaycastChecksMax;

/// @brief Field allowPickupFromGround, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowPickupFromGround, put=__cordl_internal_set_allowPickupFromGround)) bool  allowPickupFromGround;

/// @brief Field autoPickupAfterSeconds, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoPickupAfterSeconds, put=__cordl_internal_set_autoPickupAfterSeconds)) float_t  autoPickupAfterSeconds;

/// @brief Field autoPickupDistance, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoPickupDistance, put=__cordl_internal_set_autoPickupDistance)) float_t  autoPickupDistance;

/// @brief Field bodyCollider, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyCollider, put=__cordl_internal_set_bodyCollider)) ::UnityW<::UnityEngine::Collider>  bodyCollider;

/// @brief Field breakEffect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_breakEffect, put=__cordl_internal_set_breakEffect)) ::UnityW<::UnityEngine::ParticleSystem>  breakEffect;

/// @brief Field breakableBitmask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_breakableBitmask, put=setStaticF_breakableBitmask)) int32_t  breakableBitmask;

/// @brief Field broken, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_broken, put=__cordl_internal_set_broken)) bool  broken;

/// @brief Field brokenTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_brokenTime, put=__cordl_internal_set_brokenTime)) float_t  brokenTime;

/// @brief Field cachedLocalRig, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedLocalRig, put=__cordl_internal_set_cachedLocalRig)) ::UnityW<::GlobalNamespace::VRRig>  cachedLocalRig;

/// @brief Field currentRayIndex, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentRayIndex, put=__cordl_internal_set_currentRayIndex)) int32_t  currentRayIndex;

/// @brief Field debugPlacementRays, offset 0xe4, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugPlacementRays, put=__cordl_internal_set_debugPlacementRays)) bool  debugPlacementRays;

/// @brief Field directionCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_directionCache, put=setStaticF_directionCache)) ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>*  directionCache;

/// @brief Field dontStickToWall, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_dontStickToWall, put=__cordl_internal_set_dontStickToWall)) bool  dontStickToWall;

/// @brief Field floorLayerMask, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_floorLayerMask, put=__cordl_internal_set_floorLayerMask)) ::UnityEngine::LayerMask  floorLayerMask;

/// @brief Field frameCounter, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameCounter, put=__cordl_internal_set_frameCounter)) int32_t  frameCounter;

/// @brief Field hideOnBreak, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hideOnBreak, put=__cordl_internal_set_hideOnBreak)) ::ArrayW<::UnityW<::UnityEngine::Renderer>>  hideOnBreak;

/// @brief Field holdableParent, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdableParent, put=__cordl_internal_set_holdableParent)) ::UnityW<::GlobalNamespace::HoldableObject>  holdableParent;

/// @brief Field interactionPoint, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPoint, put=__cordl_internal_set_interactionPoint)) ::UnityW<::GlobalNamespace::InteractionPoint>  interactionPoint;

/// @brief Field isBreakable, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_isBreakable, put=__cordl_internal_set_isBreakable)) bool  isBreakable;

/// @brief Field landingSide, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_landingSide, put=__cordl_internal_set_landingSide)) int32_t  landingSide;

/// @brief Field placedOnFloor, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_placedOnFloor, put=__cordl_internal_set_placedOnFloor)) bool  placedOnFloor;

/// @brief Field placedOnFloorTime, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_placedOnFloorTime, put=__cordl_internal_set_placedOnFloorTime)) float_t  placedOnFloorTime;

/// @brief Field placementOffset, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_placementOffset, put=__cordl_internal_set_placementOffset)) float_t  placementOffset;

/// @brief Field raycastOrigin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycastOrigin, put=__cordl_internal_set_raycastOrigin)) ::UnityW<::UnityEngine::Transform>  raycastOrigin;

/// @brief Field raysPerStep, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_raysPerStep, put=__cordl_internal_set_raysPerStep)) int32_t  raysPerStep;

/// @brief Field rb, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field respawnDelay, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnDelay, put=__cordl_internal_set_respawnDelay)) float_t  respawnDelay;

/// @brief Field rigOwnedPhysicsBody, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigOwnedPhysicsBody, put=__cordl_internal_set_rigOwnedPhysicsBody)) ::UnityW<::GlobalNamespace::RigOwnedPhysicsBody>  rigOwnedPhysicsBody;

/// @brief Field scale, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field selfSkinOffset, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_selfSkinOffset, put=__cordl_internal_set_selfSkinOffset)) float_t  selfSkinOffset;

/// @brief Field stepEveryNFrames, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_stepEveryNFrames, put=__cordl_internal_set_stepEveryNFrames)) int32_t  stepEveryNFrames;

/// @brief Field throwSettledTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSettledTime, put=__cordl_internal_set_throwSettledTime)) double_t  throwSettledTime;

/// @brief Field tmpEmpty, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tmpEmpty, put=setStaticF_tmpEmpty)) ::ArrayW<::UnityEngine::Vector3>  tmpEmpty;

/// @brief Field transferrableParent, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableParent, put=__cordl_internal_set_transferrableParent)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableParent;

/// @brief Method Awake, addr 0x5d73ae0, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BreakPlaceable, addr 0x5d75114, size 0x18c, virtual false, abstract: false, final false
inline void BreakPlaceable() ;

/// @brief Method DelayedPickup, addr 0x5d74034, size 0x4, virtual true, abstract: false, final false
inline void DelayedPickup() ;

/// [AsyncStateMachine(typeof(GorillaTag.Cosmetics.PickupableCosmetic::<DelayedPickup_Internal>d__45))]
/// @brief Method DelayedPickup_Internal, addr 0x5d74038, size 0xa8, virtual false, abstract: false, final false
inline void DelayedPickup_Internal() ;

/// @brief Method FixedUpdate, addr 0x5d743a0, size 0x5fc, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetCachedDirections, addr 0x5d749a8, size 0x198, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> GetCachedDirections(int32_t  count) ;

/// @brief Method GetFibonacciSphereDirection, addr 0x5d74fec, size 0x128, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetFibonacciSphereDirection(int32_t  index, int32_t  total) ;

/// @brief Method GetSafeRayOrigin, addr 0x5d74b40, size 0x1ec, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSafeRayOrigin(::UnityEngine::Vector3  rawOrigin, ::UnityEngine::Vector3  dir) ;

static inline ::GorillaTag::Cosmetics::PickupableCosmetic* New_ctor() ;

/// @brief Method OnBreakReplicated, addr 0x5d7499c, size 0xc, virtual false, abstract: false, final false
inline void OnBreakReplicated() ;

/// @brief Method OnDisable, addr 0x5d73c04, size 0x88, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d73b7c, size 0x88, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Pickup, addr 0x5d73c8c, size 0x3a8, virtual true, abstract: false, final false
inline void Pickup(bool  isAutoPickup) ;

/// @brief Method PlayBreakEffects, addr 0x5d752a0, size 0x134, virtual true, abstract: false, final false
inline void PlayBreakEffects() ;

/// @brief Method Release, addr 0x5d740e0, size 0x2c0, virtual true, abstract: false, final false
inline void Release(::GlobalNamespace::HoldableObject*  holdable, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  velocity, float_t  playerScale) ;

/// @brief Method SettleBanner, addr 0x5d74d2c, size 0x2c0, virtual false, abstract: false, final false
inline void SettleBanner(::UnityEngine::RaycastHit  hitInfo) ;

/// @brief Method ShowRenderers, addr 0x5d753d4, size 0xd8, virtual true, abstract: false, final false
inline void ShowRenderers(bool  visible) ;

/// @brief Method Start, addr 0x5d73b70, size 0xc, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnBrokenShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnBrokenShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnPickupShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPickupShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnPlacedShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnPlacedShared() ;

constexpr float_t const& __cordl_internal_get_RaycastCheckDist() const;

constexpr float_t& __cordl_internal_get_RaycastCheckDist() ;

constexpr int32_t const& __cordl_internal_get_RaycastChecksMax() const;

constexpr int32_t& __cordl_internal_get_RaycastChecksMax() ;

constexpr bool const& __cordl_internal_get_allowPickupFromGround() const;

constexpr bool& __cordl_internal_get_allowPickupFromGround() ;

constexpr float_t const& __cordl_internal_get_autoPickupAfterSeconds() const;

constexpr float_t& __cordl_internal_get_autoPickupAfterSeconds() ;

constexpr float_t const& __cordl_internal_get_autoPickupDistance() const;

constexpr float_t& __cordl_internal_get_autoPickupDistance() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bodyCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bodyCollider() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_breakEffect() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_breakEffect() ;

constexpr bool const& __cordl_internal_get_broken() const;

constexpr bool& __cordl_internal_get_broken() ;

constexpr float_t const& __cordl_internal_get_brokenTime() const;

constexpr float_t& __cordl_internal_get_brokenTime() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_cachedLocalRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_cachedLocalRig() ;

constexpr int32_t const& __cordl_internal_get_currentRayIndex() const;

constexpr int32_t& __cordl_internal_get_currentRayIndex() ;

constexpr bool const& __cordl_internal_get_debugPlacementRays() const;

constexpr bool& __cordl_internal_get_debugPlacementRays() ;

constexpr bool const& __cordl_internal_get_dontStickToWall() const;

constexpr bool& __cordl_internal_get_dontStickToWall() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_floorLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_floorLayerMask() ;

constexpr int32_t const& __cordl_internal_get_frameCounter() const;

constexpr int32_t& __cordl_internal_get_frameCounter() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& __cordl_internal_get_hideOnBreak() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& __cordl_internal_get_hideOnBreak() ;

constexpr ::UnityW<::GlobalNamespace::HoldableObject> const& __cordl_internal_get_holdableParent() const;

constexpr ::UnityW<::GlobalNamespace::HoldableObject>& __cordl_internal_get_holdableParent() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_interactionPoint() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_interactionPoint() ;

constexpr bool const& __cordl_internal_get_isBreakable() const;

constexpr bool& __cordl_internal_get_isBreakable() ;

constexpr int32_t const& __cordl_internal_get_landingSide() const;

constexpr int32_t& __cordl_internal_get_landingSide() ;

constexpr bool const& __cordl_internal_get_placedOnFloor() const;

constexpr bool& __cordl_internal_get_placedOnFloor() ;

constexpr float_t const& __cordl_internal_get_placedOnFloorTime() const;

constexpr float_t& __cordl_internal_get_placedOnFloorTime() ;

constexpr float_t const& __cordl_internal_get_placementOffset() const;

constexpr float_t& __cordl_internal_get_placementOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_raycastOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_raycastOrigin() ;

constexpr int32_t const& __cordl_internal_get_raysPerStep() const;

constexpr int32_t& __cordl_internal_get_raysPerStep() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_respawnDelay() const;

constexpr float_t& __cordl_internal_get_respawnDelay() ;

constexpr ::UnityW<::GlobalNamespace::RigOwnedPhysicsBody> const& __cordl_internal_get_rigOwnedPhysicsBody() const;

constexpr ::UnityW<::GlobalNamespace::RigOwnedPhysicsBody>& __cordl_internal_get_rigOwnedPhysicsBody() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr float_t const& __cordl_internal_get_selfSkinOffset() const;

constexpr float_t& __cordl_internal_get_selfSkinOffset() ;

constexpr int32_t const& __cordl_internal_get_stepEveryNFrames() const;

constexpr int32_t& __cordl_internal_get_stepEveryNFrames() ;

constexpr double_t const& __cordl_internal_get_throwSettledTime() const;

constexpr double_t& __cordl_internal_get_throwSettledTime() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableParent() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableParent() ;

constexpr void __cordl_internal_set_OnBrokenShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnPickupShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnPlacedShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_RaycastCheckDist(float_t  value) ;

constexpr void __cordl_internal_set_RaycastChecksMax(int32_t  value) ;

constexpr void __cordl_internal_set_allowPickupFromGround(bool  value) ;

constexpr void __cordl_internal_set_autoPickupAfterSeconds(float_t  value) ;

constexpr void __cordl_internal_set_autoPickupDistance(float_t  value) ;

constexpr void __cordl_internal_set_bodyCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_breakEffect(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_broken(bool  value) ;

constexpr void __cordl_internal_set_brokenTime(float_t  value) ;

constexpr void __cordl_internal_set_cachedLocalRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_currentRayIndex(int32_t  value) ;

constexpr void __cordl_internal_set_debugPlacementRays(bool  value) ;

constexpr void __cordl_internal_set_dontStickToWall(bool  value) ;

constexpr void __cordl_internal_set_floorLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_frameCounter(int32_t  value) ;

constexpr void __cordl_internal_set_hideOnBreak(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value) ;

constexpr void __cordl_internal_set_holdableParent(::UnityW<::GlobalNamespace::HoldableObject>  value) ;

constexpr void __cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_isBreakable(bool  value) ;

constexpr void __cordl_internal_set_landingSide(int32_t  value) ;

constexpr void __cordl_internal_set_placedOnFloor(bool  value) ;

constexpr void __cordl_internal_set_placedOnFloorTime(float_t  value) ;

constexpr void __cordl_internal_set_placementOffset(float_t  value) ;

constexpr void __cordl_internal_set_raycastOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_raysPerStep(int32_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_respawnDelay(float_t  value) ;

constexpr void __cordl_internal_set_rigOwnedPhysicsBody(::UnityW<::GlobalNamespace::RigOwnedPhysicsBody>  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_selfSkinOffset(float_t  value) ;

constexpr void __cordl_internal_set_stepEveryNFrames(int32_t  value) ;

constexpr void __cordl_internal_set_throwSettledTime(double_t  value) ;

constexpr void __cordl_internal_set_transferrableParent(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d754ac, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_breakableBitmask() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>* getStaticF_directionCache() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_tmpEmpty() ;

static inline void setStaticF_breakableBitmask(int32_t  value) ;

static inline void setStaticF_directionCache(::System::Collections::Generic::Dictionary_2<int32_t,::ArrayW<::UnityEngine::Vector3>>*  value) ;

static inline void setStaticF_tmpEmpty(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PickupableCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PickupableCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PickupableCosmetic(PickupableCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PickupableCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PickupableCosmetic(PickupableCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4857};

/// [SerializeField]
/// @brief Field interactionPoint, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___interactionPoint;

/// [SerializeField]
/// @brief Field rb, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// [SerializeField]
/// @brief Field raycastOrigin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___raycastOrigin;

/// [Tooltip("Allow player to grab the placed object")]
/// [SerializeField]
/// @brief Field allowPickupFromGround, offset: 0x38, size: 0x1, def value: None
 bool  ___allowPickupFromGround;

/// [SerializeField]
/// @brief Field autoPickupAfterSeconds, offset: 0x3c, size: 0x4, def value: None
 float_t  ___autoPickupAfterSeconds;

/// [SerializeField]
/// @brief Field autoPickupDistance, offset: 0x40, size: 0x4, def value: None
 float_t  ___autoPickupDistance;

/// [Tooltip("Amount to offset the placed object from the hit position in the hit normal direction")]
/// [SerializeField]
/// @brief Field placementOffset, offset: 0x44, size: 0x4, def value: None
 float_t  ___placementOffset;

/// [Tooltip("Prevent sticking if the hit surface normal is not within 40 degrees of world up")]
/// [SerializeField]
/// @brief Field dontStickToWall, offset: 0x48, size: 0x1, def value: None
 bool  ___dontStickToWall;

/// [Tooltip("Layers to raycast against for placement")]
/// [SerializeField]
/// @brief Field floorLayerMask, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___floorLayerMask;

/// [Tooltip("The distance to check if the banner is close to the floor (from a raycast check).")]
/// @brief Field RaycastCheckDist, offset: 0x50, size: 0x4, def value: None
 float_t  ___RaycastCheckDist;

/// [Tooltip("How many checks should we attempt for a raycast.")]
/// @brief Field RaycastChecksMax, offset: 0x54, size: 0x4, def value: None
 int32_t  ___RaycastChecksMax;

/// [FormerlySerializedAs("OnPickup")]
/// [Space]
/// @brief Field OnPickupShared, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnPickupShared;

/// [FormerlySerializedAs("OnPlaced")]
/// @brief Field OnPlacedShared, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnPlacedShared;

/// [SerializeField]
/// @brief Field isBreakable, offset: 0x68, size: 0x1, def value: None
 bool  ___isBreakable;

/// [Tooltip("Particle system played OnBrokenShared")]
/// [SerializeField]
/// @brief Field breakEffect, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___breakEffect;

/// [Tooltip("Renderers disabled OnBrokenShared and enabled OnPickupShared")]
/// [SerializeField]
/// @brief Field hideOnBreak, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Renderer>>  ___hideOnBreak;

/// [Tooltip("Time after BreakPlaceable to reset item")]
/// [SerializeField]
/// @brief Field respawnDelay, offset: 0x80, size: 0x4, def value: None
 float_t  ___respawnDelay;

/// [FormerlySerializedAs("OnBroken")]
/// [Space]
/// @brief Field OnBrokenShared, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnBrokenShared;

/// @brief Field placedOnFloor, offset: 0x90, size: 0x1, def value: None
 bool  ___placedOnFloor;

/// @brief Field placedOnFloorTime, offset: 0x94, size: 0x4, def value: None
 float_t  ___placedOnFloorTime;

/// @brief Field broken, offset: 0x98, size: 0x1, def value: None
 bool  ___broken;

/// @brief Field brokenTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___brokenTime;

/// @brief Field cachedLocalRig, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___cachedLocalRig;

/// @brief Field holdableParent, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoldableObject>  ___holdableParent;

/// @brief Field transferrableParent, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableParent;

/// @brief Field rigOwnedPhysicsBody, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RigOwnedPhysicsBody>  ___rigOwnedPhysicsBody;

/// @brief Field throwSettledTime, offset: 0xc0, size: 0x8, def value: None
 double_t  ___throwSettledTime;

/// @brief Field landingSide, offset: 0xc8, size: 0x4, def value: None
 int32_t  ___landingSide;

/// @brief Field scale, offset: 0xcc, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field bodyCollider, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___bodyCollider;

/// [Tooltip("How many directions to test per physics tick (spreads work across frames).")]
/// [SerializeField]
/// [Min(1)]
/// @brief Field raysPerStep, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___raysPerStep;

/// [Tooltip("Run a raycast step only every N physics ticks (1 = every FixedUpdate).")]
/// [SerializeField]
/// [Min(1)]
/// @brief Field stepEveryNFrames, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___stepEveryNFrames;

/// [Tooltip("Small skin so rays start just outside our own collider volume.")]
/// [SerializeField]
/// [Range(0.005, 0.1)]
/// @brief Field selfSkinOffset, offset: 0xe0, size: 0x4, def value: None
 float_t  ___selfSkinOffset;

/// [SerializeField]
/// @brief Field debugPlacementRays, offset: 0xe4, size: 0x1, def value: None
 bool  ___debugPlacementRays;

/// @brief Field currentRayIndex, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___currentRayIndex;

/// @brief Field frameCounter, offset: 0xec, size: 0x4, def value: None
 int32_t  ___frameCounter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___interactionPoint) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___rb) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___raycastOrigin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___allowPickupFromGround) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___autoPickupAfterSeconds) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___autoPickupDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___placementOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___dontStickToWall) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___floorLayerMask) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___RaycastCheckDist) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___RaycastChecksMax) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___OnPickupShared) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___OnPlacedShared) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___isBreakable) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___breakEffect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___hideOnBreak) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___respawnDelay) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___OnBrokenShared) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___placedOnFloor) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___placedOnFloorTime) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___broken) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___brokenTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___cachedLocalRig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___holdableParent) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___transferrableParent) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___rigOwnedPhysicsBody) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___throwSettledTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___landingSide) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___scale) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___bodyCollider) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___raysPerStep) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___stepEveryNFrames) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___selfSkinOffset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___debugPlacementRays) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___currentRayIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::PickupableCosmetic, ___frameCounter) == 0xec, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::PickupableCosmetic) == 0xf0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
