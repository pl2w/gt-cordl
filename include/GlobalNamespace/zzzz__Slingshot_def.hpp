#pragma once
// IWYU pragma private; include "GlobalNamespace/Slingshot.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ProjectileWeapon_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Slingshot)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct Slingshot_SlingshotActions;
}
namespace GlobalNamespace {
struct Slingshot_SlingshotState;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class Slingshot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Slingshot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Slingshot*, "", "Slingshot");
// Dependencies ProjectileWeapon, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: Slingshot
class CORDL_TYPE Slingshot : public ::GlobalNamespace::ProjectileWeapon {
public:
// Declarations
using SlingshotActions = ::GlobalNamespace::Slingshot_SlingshotActions;

using SlingshotState = ::GlobalNamespace::Slingshot_SlingshotState;

/// @brief Field StretchEndLocal, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StretchEndLocal, put=__cordl_internal_set_StretchEndLocal)) ::UnityEngine::Events::UnityEvent_1<bool>*  StretchEndLocal;

/// @brief Field StretchEndShared, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_StretchEndShared, put=__cordl_internal_set_StretchEndShared)) ::UnityEngine::Events::UnityEvent_1<bool>*  StretchEndShared;

/// @brief Field StretchStartLocal, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_StretchStartLocal, put=__cordl_internal_set_StretchStartLocal)) ::UnityEngine::Events::UnityEvent_1<bool>*  StretchStartLocal;

/// @brief Field StretchStartShared, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_StretchStartShared, put=__cordl_internal_set_StretchStartShared)) ::UnityEngine::Events::UnityEvent_1<bool>*  StretchStartShared;

/// @brief Field _elasticIntialWidthMultiplier, offset 0x430, size 0x4 
 __declspec(property(get=__cordl_internal_get__elasticIntialWidthMultiplier, put=__cordl_internal_set__elasticIntialWidthMultiplier)) float_t  _elasticIntialWidthMultiplier;

/// @brief Field center, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityW<::UnityEngine::Transform>  center;

/// @brief Field centerOrigin, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_centerOrigin, put=__cordl_internal_set_centerOrigin)) ::UnityW<::UnityEngine::Transform>  centerOrigin;

/// @brief Field delayLaunchTime, offset 0x40c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayLaunchTime, put=__cordl_internal_set_delayLaunchTime)) float_t  delayLaunchTime;

/// @brief Field disableInDraw, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_disableInDraw, put=__cordl_internal_set_disableInDraw)) ::UnityW<::UnityEngine::GameObject>  disableInDraw;

/// @brief Field disableLineRenderer, offset 0x358, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableLineRenderer, put=__cordl_internal_set_disableLineRenderer)) bool  disableLineRenderer;

/// @brief Field disableWhenNotInRoom, offset 0x408, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableWhenNotInRoom, put=__cordl_internal_set_disableWhenNotInRoom)) bool  disableWhenNotInRoom;

/// @brief Field drawingHand, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_drawingHand, put=__cordl_internal_set_drawingHand)) ::UnityW<::UnityEngine::GameObject>  drawingHand;

/// @brief Field dummyProjectile, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_dummyProjectile, put=__cordl_internal_set_dummyProjectile)) ::UnityW<::UnityEngine::GameObject>  dummyProjectile;

/// @brief Field dummyProjectileColliderRadius, offset 0x414, size 0x4 
 __declspec(property(get=__cordl_internal_get_dummyProjectileColliderRadius, put=__cordl_internal_set_dummyProjectileColliderRadius)) float_t  dummyProjectileColliderRadius;

/// @brief Field dummyProjectileInitialScale, offset 0x418, size 0x4 
 __declspec(property(get=__cordl_internal_get_dummyProjectileInitialScale, put=__cordl_internal_set_dummyProjectileInitialScale)) float_t  dummyProjectileInitialScale;

/// @brief Field elasticLeft, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_elasticLeft, put=__cordl_internal_set_elasticLeft)) ::UnityW<::UnityEngine::LineRenderer>  elasticLeft;

/// @brief Field elasticLeftPoints, offset 0x420, size 0x8 
 __declspec(property(get=__cordl_internal_get_elasticLeftPoints, put=__cordl_internal_set_elasticLeftPoints)) ::ArrayW<::UnityEngine::Vector3>  elasticLeftPoints;

/// @brief Field elasticRight, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_elasticRight, put=__cordl_internal_set_elasticRight)) ::UnityW<::UnityEngine::LineRenderer>  elasticRight;

/// @brief Field elasticRightPoints, offset 0x428, size 0x8 
 __declspec(property(get=__cordl_internal_get_elasticRightPoints, put=__cordl_internal_set_elasticRightPoints)) ::ArrayW<::UnityEngine::Vector3>  elasticRightPoints;

/// @brief Field grip, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_grip, put=__cordl_internal_set_grip)) ::UnityW<::GlobalNamespace::InteractionPoint>  grip;

/// @brief Field hapticsLength, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticsLength, put=__cordl_internal_set_hapticsLength)) float_t  hapticsLength;

/// @brief Field hapticsStrength, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticsStrength, put=__cordl_internal_set_hapticsStrength)) float_t  hapticsStrength;

/// @brief Field hasDummyProjectile, offset 0x409, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDummyProjectile, put=__cordl_internal_set_hasDummyProjectile)) bool  hasDummyProjectile;

/// @brief Field leftArm, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArm, put=__cordl_internal_set_leftArm)) ::UnityW<::UnityEngine::Transform>  leftArm;

/// @brief Field leftHandSnap, offset 0x3f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftHandSnap, put=__cordl_internal_set_leftHandSnap)) ::UnityW<::UnityEngine::Transform>  leftHandSnap;

/// @brief Field maxDraw, offset 0x3b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDraw, put=__cordl_internal_set_maxDraw)) float_t  maxDraw;

/// @brief Field minDrawDistanceToRelease, offset 0x3c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDrawDistanceToRelease, put=__cordl_internal_set_minDrawDistanceToRelease)) float_t  minDrawDistanceToRelease;

/// @brief Field minTimeToLaunch, offset 0x410, size 0x4 
 __declspec(property(get=__cordl_internal_get_minTimeToLaunch, put=__cordl_internal_set_minTimeToLaunch)) float_t  minTimeToLaunch;

/// @brief Field myRig, offset 0x438, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field nock, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nock, put=__cordl_internal_set_nock)) ::UnityW<::GlobalNamespace::InteractionPoint>  nock;

/// @brief Field playStretchingHaptics, offset 0x3c4, size 0x1 
 __declspec(property(get=__cordl_internal_get_playStretchingHaptics, put=__cordl_internal_set_playStretchingHaptics)) bool  playStretchingHaptics;

/// @brief Field projectileCount, offset 0x41c, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileCount, put=__cordl_internal_set_projectileCount)) int32_t  projectileCount;

/// @brief Field rightArm, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArm, put=__cordl_internal_set_rightArm)) ::UnityW<::UnityEngine::Transform>  rightArm;

/// @brief Field rightHandSnap, offset 0x400, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightHandSnap, put=__cordl_internal_set_rightHandSnap)) ::UnityW<::UnityEngine::Transform>  rightHandSnap;

/// @brief Field springConstant, offset 0x3b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_springConstant, put=__cordl_internal_set_springConstant)) float_t  springConstant;

/// @brief Field wasStretching, offset 0x3f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasStretching, put=__cordl_internal_set_wasStretching)) bool  wasStretching;

/// @brief Field wasStretchingLocal, offset 0x3f1, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasStretchingLocal, put=__cordl_internal_set_wasStretchingLocal)) bool  wasStretchingLocal;

/// @brief Method AutoGrabTrue, addr 0x5738968, size 0x8, virtual true, abstract: false, final false
inline bool AutoGrabTrue(bool  leftGrabbingHand) ;

/// @brief Method Awake, addr 0x57373ac, size 0x88, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroyDummyProjectile, addr 0x5737280, size 0x12c, virtual false, abstract: false, final false
inline void DestroyDummyProjectile() ;

/// @brief Method DropItemCleanup, addr 0x5738940, size 0x28, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method ForLeftHandSlingshot, addr 0x5737f18, size 0x24, virtual false, abstract: false, final false
inline bool ForLeftHandSlingshot() ;

/// @brief Method GetLaunchPosition, addr 0x5738970, size 0x28, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetLaunchPosition() ;

/// @brief Method GetLaunchVelocity, addr 0x5738998, size 0x258, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 GetLaunchVelocity() ;

/// @brief Method InDrawingState, addr 0x5737de8, size 0x14, virtual false, abstract: false, final false
inline bool InDrawingState() ;

/// @brief Method IsSlingShotEnabled, addr 0x5738170, size 0x1bc, virtual false, abstract: false, final false
static inline bool IsSlingShotEnabled() ;

/// @brief Method LateUpdateLocal, addr 0x5737f3c, size 0x1cc, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5738108, size 0x68, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x57375f4, size 0x7f4, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::Slingshot* New_ctor() ;

/// @brief Method OnDisable, addr 0x57375d8, size 0x1c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5737478, size 0x160, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x573832c, size 0x2cc, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x57385f8, size 0x348, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnSpawn, addr 0x5737434, size 0x44, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_StretchEndLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_StretchEndLocal() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_StretchEndShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_StretchEndShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_StretchStartLocal() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_StretchStartLocal() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_StretchStartShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_StretchStartShared() ;

constexpr float_t const& __cordl_internal_get__elasticIntialWidthMultiplier() const;

constexpr float_t& __cordl_internal_get__elasticIntialWidthMultiplier() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_center() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_center() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_centerOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_centerOrigin() ;

constexpr float_t const& __cordl_internal_get_delayLaunchTime() const;

constexpr float_t& __cordl_internal_get_delayLaunchTime() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_disableInDraw() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_disableInDraw() ;

constexpr bool const& __cordl_internal_get_disableLineRenderer() const;

constexpr bool& __cordl_internal_get_disableLineRenderer() ;

constexpr bool const& __cordl_internal_get_disableWhenNotInRoom() const;

constexpr bool& __cordl_internal_get_disableWhenNotInRoom() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_drawingHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_drawingHand() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dummyProjectile() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dummyProjectile() ;

constexpr float_t const& __cordl_internal_get_dummyProjectileColliderRadius() const;

constexpr float_t& __cordl_internal_get_dummyProjectileColliderRadius() ;

constexpr float_t const& __cordl_internal_get_dummyProjectileInitialScale() const;

constexpr float_t& __cordl_internal_get_dummyProjectileInitialScale() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_elasticLeft() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_elasticLeft() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_elasticLeftPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_elasticLeftPoints() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_elasticRight() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_elasticRight() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_elasticRightPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_elasticRightPoints() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_grip() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_grip() ;

constexpr float_t const& __cordl_internal_get_hapticsLength() const;

constexpr float_t& __cordl_internal_get_hapticsLength() ;

constexpr float_t const& __cordl_internal_get_hapticsStrength() const;

constexpr float_t& __cordl_internal_get_hapticsStrength() ;

constexpr bool const& __cordl_internal_get_hasDummyProjectile() const;

constexpr bool& __cordl_internal_get_hasDummyProjectile() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftArm() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_leftHandSnap() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_leftHandSnap() ;

constexpr float_t const& __cordl_internal_get_maxDraw() const;

constexpr float_t& __cordl_internal_get_maxDraw() ;

constexpr float_t const& __cordl_internal_get_minDrawDistanceToRelease() const;

constexpr float_t& __cordl_internal_get_minDrawDistanceToRelease() ;

constexpr float_t const& __cordl_internal_get_minTimeToLaunch() const;

constexpr float_t& __cordl_internal_get_minTimeToLaunch() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_nock() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_nock() ;

constexpr bool const& __cordl_internal_get_playStretchingHaptics() const;

constexpr bool& __cordl_internal_get_playStretchingHaptics() ;

constexpr int32_t const& __cordl_internal_get_projectileCount() const;

constexpr int32_t& __cordl_internal_get_projectileCount() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightArm() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightArm() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rightHandSnap() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rightHandSnap() ;

constexpr float_t const& __cordl_internal_get_springConstant() const;

constexpr float_t& __cordl_internal_get_springConstant() ;

constexpr bool const& __cordl_internal_get_wasStretching() const;

constexpr bool& __cordl_internal_get_wasStretching() ;

constexpr bool const& __cordl_internal_get_wasStretchingLocal() const;

constexpr bool& __cordl_internal_get_wasStretchingLocal() ;

constexpr void __cordl_internal_set_StretchEndLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_StretchEndShared(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_StretchStartLocal(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_StretchStartShared(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set__elasticIntialWidthMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_center(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_centerOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_delayLaunchTime(float_t  value) ;

constexpr void __cordl_internal_set_disableInDraw(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_disableLineRenderer(bool  value) ;

constexpr void __cordl_internal_set_disableWhenNotInRoom(bool  value) ;

constexpr void __cordl_internal_set_drawingHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_dummyProjectile(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_dummyProjectileColliderRadius(float_t  value) ;

constexpr void __cordl_internal_set_dummyProjectileInitialScale(float_t  value) ;

constexpr void __cordl_internal_set_elasticLeft(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_elasticLeftPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_elasticRight(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_elasticRightPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_grip(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_hapticsLength(float_t  value) ;

constexpr void __cordl_internal_set_hapticsStrength(float_t  value) ;

constexpr void __cordl_internal_set_hasDummyProjectile(bool  value) ;

constexpr void __cordl_internal_set_leftArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_leftHandSnap(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_maxDraw(float_t  value) ;

constexpr void __cordl_internal_set_minDrawDistanceToRelease(float_t  value) ;

constexpr void __cordl_internal_set_minTimeToLaunch(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_nock(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_playStretchingHaptics(bool  value) ;

constexpr void __cordl_internal_set_projectileCount(int32_t  value) ;

constexpr void __cordl_internal_set_rightArm(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rightHandSnap(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_springConstant(float_t  value) ;

constexpr void __cordl_internal_set_wasStretching(bool  value) ;

constexpr void __cordl_internal_set_wasStretchingLocal(bool  value) ;

/// @brief Method .ctor, addr 0x5738bf0, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Slingshot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Slingshot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Slingshot(Slingshot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Slingshot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Slingshot(Slingshot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1214};

/// [SerializeField]
/// @brief Field disableLineRenderer, offset: 0x358, size: 0x1, def value: None
 bool  ___disableLineRenderer;

/// [FormerlySerializedAs("elastic")]
/// @brief Field elasticLeft, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___elasticLeft;

/// @brief Field elasticRight, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___elasticRight;

/// @brief Field leftArm, offset: 0x370, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftArm;

/// @brief Field rightArm, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightArm;

/// @brief Field center, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___center;

/// @brief Field centerOrigin, offset: 0x388, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___centerOrigin;

/// @brief Field dummyProjectile, offset: 0x390, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dummyProjectile;

/// @brief Field drawingHand, offset: 0x398, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___drawingHand;

/// @brief Field nock, offset: 0x3a0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___nock;

/// @brief Field grip, offset: 0x3a8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___grip;

/// @brief Field springConstant, offset: 0x3b0, size: 0x4, def value: None
 float_t  ___springConstant;

/// @brief Field maxDraw, offset: 0x3b4, size: 0x4, def value: None
 float_t  ___maxDraw;

/// [SerializeField]
/// @brief Field disableInDraw, offset: 0x3b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___disableInDraw;

/// [SerializeField]
/// @brief Field minDrawDistanceToRelease, offset: 0x3c0, size: 0x4, def value: None
 float_t  ___minDrawDistanceToRelease;

/// [Header("Stretching Haptics")]
/// [Space]
/// [SerializeField]
/// @brief Field playStretchingHaptics, offset: 0x3c4, size: 0x1, def value: None
 bool  ___playStretchingHaptics;

/// [SerializeField]
/// @brief Field hapticsStrength, offset: 0x3c8, size: 0x4, def value: None
 float_t  ___hapticsStrength;

/// [SerializeField]
/// @brief Field hapticsLength, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___hapticsLength;

/// [Header("Stretching Events")]
/// [Space]
/// @brief Field StretchStartShared, offset: 0x3d0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___StretchStartShared;

/// @brief Field StretchEndShared, offset: 0x3d8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___StretchEndShared;

/// [Space]
/// @brief Field StretchStartLocal, offset: 0x3e0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___StretchStartLocal;

/// @brief Field StretchEndLocal, offset: 0x3e8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___StretchEndLocal;

/// @brief Field wasStretching, offset: 0x3f0, size: 0x1, def value: None
 bool  ___wasStretching;

/// @brief Field wasStretchingLocal, offset: 0x3f1, size: 0x1, def value: None
 bool  ___wasStretchingLocal;

/// @brief Field leftHandSnap, offset: 0x3f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___leftHandSnap;

/// @brief Field rightHandSnap, offset: 0x400, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rightHandSnap;

/// @brief Field disableWhenNotInRoom, offset: 0x408, size: 0x1, def value: None
 bool  ___disableWhenNotInRoom;

/// @brief Field hasDummyProjectile, offset: 0x409, size: 0x1, def value: None
 bool  ___hasDummyProjectile;

/// @brief Field delayLaunchTime, offset: 0x40c, size: 0x4, def value: None
 float_t  ___delayLaunchTime;

/// @brief Field minTimeToLaunch, offset: 0x410, size: 0x4, def value: None
 float_t  ___minTimeToLaunch;

/// @brief Field dummyProjectileColliderRadius, offset: 0x414, size: 0x4, def value: None
 float_t  ___dummyProjectileColliderRadius;

/// @brief Field dummyProjectileInitialScale, offset: 0x418, size: 0x4, def value: None
 float_t  ___dummyProjectileInitialScale;

/// @brief Field projectileCount, offset: 0x41c, size: 0x4, def value: None
 int32_t  ___projectileCount;

/// @brief Field elasticLeftPoints, offset: 0x420, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___elasticLeftPoints;

/// @brief Field elasticRightPoints, offset: 0x428, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___elasticRightPoints;

/// @brief Field _elasticIntialWidthMultiplier, offset: 0x430, size: 0x4, def value: None
 float_t  ____elasticIntialWidthMultiplier;

/// @brief Field myRig, offset: 0x438, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Size padding 0x470 - 0x440 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Slingshot, ___disableLineRenderer) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___elasticLeft) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___elasticRight) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___leftArm) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___rightArm) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___center) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___centerOrigin) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___dummyProjectile) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___drawingHand) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___nock) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___grip) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___springConstant) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___maxDraw) == 0x3b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___disableInDraw) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___minDrawDistanceToRelease) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___playStretchingHaptics) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___hapticsStrength) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___hapticsLength) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___StretchStartShared) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___StretchEndShared) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___StretchStartLocal) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___StretchEndLocal) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___wasStretching) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___wasStretchingLocal) == 0x3f1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___leftHandSnap) == 0x3f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___rightHandSnap) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___disableWhenNotInRoom) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___hasDummyProjectile) == 0x409, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___delayLaunchTime) == 0x40c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___minTimeToLaunch) == 0x410, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___dummyProjectileColliderRadius) == 0x414, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___dummyProjectileInitialScale) == 0x418, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___projectileCount) == 0x41c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___elasticLeftPoints) == 0x420, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___elasticRightPoints) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ____elasticIntialWidthMultiplier) == 0x430, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Slingshot, ___myRig) == 0x438, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Slingshot) == 0x470, "Size mismatch!");

} // namespace end def GlobalNamespace
