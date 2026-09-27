#pragma once
// IWYU pragma private; include "GlobalNamespace/FishingRod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FishingRod)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class VerletLine;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class HingeJoint;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class FishingRod;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FishingRod*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FishingRod*, "", "FishingRod");
// Dependencies TimeSince, TransferrableObject, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FishingRod
class CORDL_TYPE FishingRod : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field _bobFloatPlaneY, offset 0x3d4, size 0x4 
 __declspec(property(get=__cordl_internal_get__bobFloatPlaneY, put=__cordl_internal_set__bobFloatPlaneY)) float_t  _bobFloatPlaneY;

/// @brief Field _bobFloating, offset 0x3c4, size 0x1 
 __declspec(property(get=__cordl_internal_get__bobFloating, put=__cordl_internal_set__bobFloating)) bool  _bobFloating;

/// @brief Field _grippingHand, offset 0x408, size 0x8 
 __declspec(property(get=__cordl_internal_get__grippingHand, put=__cordl_internal_set__grippingHand)) ::UnityW<::UnityEngine::Transform>  _grippingHand;

/// @brief Field _isGrippingHandle, offset 0x404, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGrippingHandle, put=__cordl_internal_set__isGrippingHandle)) bool  _isGrippingHandle;

/// @brief Field _lastLocalRot, offset 0x3f0, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastLocalRot, put=__cordl_internal_set__lastLocalRot)) ::UnityEngine::Quaternion  _lastLocalRot;

/// @brief Field _lineExpanding, offset 0x3e2, size 0x1 
 __declspec(property(get=__cordl_internal_get__lineExpanding, put=__cordl_internal_set__lineExpanding)) bool  _lineExpanding;

/// @brief Field _lineResetting, offset 0x3e3, size 0x1 
 __declspec(property(get=__cordl_internal_get__lineResetting, put=__cordl_internal_set__lineResetting)) bool  _lineResetting;

/// @brief Field _lineResizing, offset 0x3e1, size 0x1 
 __declspec(property(get=__cordl_internal_get__lineResizing, put=__cordl_internal_set__lineResizing)) bool  _lineResizing;

/// @brief Field _localRotDelta, offset 0x400, size 0x4 
 __declspec(property(get=__cordl_internal_get__localRotDelta, put=__cordl_internal_set__localRotDelta)) float_t  _localRotDelta;

/// @brief Field _manualReeling, offset 0x3e0, size 0x1 
 __declspec(property(get=__cordl_internal_get__manualReeling, put=__cordl_internal_set__manualReeling)) bool  _manualReeling;

/// @brief Field _sinceGripLoss, offset 0x410, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceGripLoss, put=__cordl_internal_set__sinceGripLoss)) ::GlobalNamespace::TimeSince  _sinceGripLoss;

/// @brief Field _sinceReset, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__sinceReset, put=__cordl_internal_set__sinceReset)) ::GlobalNamespace::TimeSince  _sinceReset;

/// @brief Field _targetSegmentMax, offset 0x3dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetSegmentMax, put=__cordl_internal_set__targetSegmentMax)) float_t  _targetSegmentMax;

/// @brief Field _targetSegmentMin, offset 0x3d8, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetSegmentMin, put=__cordl_internal_set__targetSegmentMin)) float_t  _targetSegmentMin;

/// @brief Field bobCollider, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_bobCollider, put=__cordl_internal_set_bobCollider)) ::UnityW<::UnityEngine::Collider>  bobCollider;

/// @brief Field bobDynamicDrag, offset 0x3d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobDynamicDrag, put=__cordl_internal_set_bobDynamicDrag)) float_t  bobDynamicDrag;

/// @brief Field bobFloatForce, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobFloatForce, put=__cordl_internal_set_bobFloatForce)) float_t  bobFloatForce;

/// @brief Field bobRigidbody, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_bobRigidbody, put=__cordl_internal_set_bobRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  bobRigidbody;

/// @brief Field bobStaticDrag, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_bobStaticDrag, put=__cordl_internal_set_bobStaticDrag)) float_t  bobStaticDrag;

/// @brief Field handleCollider, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleCollider, put=__cordl_internal_set_handleCollider)) ::UnityW<::UnityEngine::BoxCollider>  handleCollider;

/// @brief Field handleJoint, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleJoint, put=__cordl_internal_set_handleJoint)) ::UnityW<::UnityEngine::HingeJoint>  handleJoint;

/// @brief Field handleRigidbody, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleRigidbody, put=__cordl_internal_set_handleRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  handleRigidbody;

/// @brief Field handleTransform, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_handleTransform, put=__cordl_internal_set_handleTransform)) ::UnityW<::UnityEngine::Transform>  handleTransform;

/// @brief Field line, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_line, put=__cordl_internal_set_line)) ::UnityW<::GlobalNamespace::VerletLine>  line;

/// @brief Field lineCastFactor, offset 0x3b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineCastFactor, put=__cordl_internal_set_lineCastFactor)) float_t  lineCastFactor;

/// @brief Field lineLengthMax, offset 0x3c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineLengthMax, put=__cordl_internal_set_lineLengthMax)) float_t  lineLengthMax;

/// @brief Field lineLengthMin, offset 0x3bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineLengthMin, put=__cordl_internal_set_lineLengthMin)) float_t  lineLengthMin;

/// @brief Field lineResizeRate, offset 0x3b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lineResizeRate, put=__cordl_internal_set_lineResizeRate)) float_t  lineResizeRate;

/// @brief Field reelFreezeLocalPosition, offset 0x388, size 0xc 
 __declspec(property(get=__cordl_internal_get_reelFreezeLocalPosition, put=__cordl_internal_set_reelFreezeLocalPosition)) ::UnityEngine::Vector3  reelFreezeLocalPosition;

/// @brief Field reelFrom, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_reelFrom, put=__cordl_internal_set_reelFrom)) ::UnityW<::UnityEngine::Transform>  reelFrom;

/// @brief Field reelSpinRate, offset 0x3b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_reelSpinRate, put=__cordl_internal_set_reelSpinRate)) float_t  reelSpinRate;

/// @brief Field reelTo, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_reelTo, put=__cordl_internal_set_reelTo)) ::UnityW<::UnityEngine::Transform>  reelTo;

/// @brief Field reelToSync, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reelToSync, put=__cordl_internal_set_reelToSync)) ::UnityW<::UnityEngine::Transform>  reelToSync;

/// @brief Field rig, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field tipBody, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_tipBody, put=__cordl_internal_set_tipBody)) ::UnityW<::UnityEngine::Rigidbody>  tipBody;

/// @brief Field tipTracker, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_tipTracker, put=__cordl_internal_set_tipTracker)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  tipTracker;

/// @brief Method FixedUpdate, addr 0x580466c, size 0x580, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetSignedDeltaYZ, addr 0x5804bec, size 0x130, virtual false, abstract: false, final false
static inline float_t GetSignedDeltaYZ(::by_ref<::UnityEngine::Quaternion>  a, ::by_ref<::UnityEngine::Quaternion>  b) ;

/// @brief Method IsFreeHandGripping, addr 0x58040e0, size 0x214, virtual false, abstract: false, final false
inline bool IsFreeHandGripping() ;

static inline ::GlobalNamespace::FishingRod* New_ctor() ;

/// @brief Method OnActivate, addr 0x5803d2c, size 0xb4, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDeactivate, addr 0x5803e50, size 0x30, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnRelease, addr 0x58042f4, size 0xbc, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method QuickReel, addr 0x580402c, size 0x3c, virtual false, abstract: false, final false
inline void QuickReel() ;

/// @brief Method ReelIn, addr 0x5804068, size 0x78, virtual false, abstract: false, final false
inline void ReelIn() ;

/// @brief Method ReelOut, addr 0x5803de0, size 0x70, virtual false, abstract: false, final false
inline void ReelOut() ;

/// @brief Method ReelStop, addr 0x5803e80, size 0xb8, virtual false, abstract: false, final false
inline void ReelStop() ;

/// @brief Method ResetLineLength, addr 0x58043b0, size 0xb0, virtual false, abstract: false, final false
inline void ResetLineLength(float_t  length) ;

/// @brief Method SetBobFloat, addr 0x5803f9c, size 0x90, virtual false, abstract: false, final false
inline void SetBobFloat(bool  enable) ;

/// @brief Method SetHandleMotorUse, addr 0x5804460, size 0xb0, virtual false, abstract: false, final false
static inline void SetHandleMotorUse(bool  useMotor, float_t  spinRate, ::UnityEngine::HingeJoint*  handleJoint, bool  reverse) ;

/// @brief Method Start, addr 0x5803f38, size 0x64, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TriggeredLateUpdate, addr 0x5804510, size 0x15c, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr float_t const& __cordl_internal_get__bobFloatPlaneY() const;

constexpr float_t& __cordl_internal_get__bobFloatPlaneY() ;

constexpr bool const& __cordl_internal_get__bobFloating() const;

constexpr bool& __cordl_internal_get__bobFloating() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grippingHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grippingHand() ;

constexpr bool const& __cordl_internal_get__isGrippingHandle() const;

constexpr bool& __cordl_internal_get__isGrippingHandle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastLocalRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastLocalRot() ;

constexpr bool const& __cordl_internal_get__lineExpanding() const;

constexpr bool& __cordl_internal_get__lineExpanding() ;

constexpr bool const& __cordl_internal_get__lineResetting() const;

constexpr bool& __cordl_internal_get__lineResetting() ;

constexpr bool const& __cordl_internal_get__lineResizing() const;

constexpr bool& __cordl_internal_get__lineResizing() ;

constexpr float_t const& __cordl_internal_get__localRotDelta() const;

constexpr float_t& __cordl_internal_get__localRotDelta() ;

constexpr bool const& __cordl_internal_get__manualReeling() const;

constexpr bool& __cordl_internal_get__manualReeling() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceGripLoss() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceGripLoss() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__sinceReset() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__sinceReset() ;

constexpr float_t const& __cordl_internal_get__targetSegmentMax() const;

constexpr float_t& __cordl_internal_get__targetSegmentMax() ;

constexpr float_t const& __cordl_internal_get__targetSegmentMin() const;

constexpr float_t& __cordl_internal_get__targetSegmentMin() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_bobCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_bobCollider() ;

constexpr float_t const& __cordl_internal_get_bobDynamicDrag() const;

constexpr float_t& __cordl_internal_get_bobDynamicDrag() ;

constexpr float_t const& __cordl_internal_get_bobFloatForce() const;

constexpr float_t& __cordl_internal_get_bobFloatForce() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_bobRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_bobRigidbody() ;

constexpr float_t const& __cordl_internal_get_bobStaticDrag() const;

constexpr float_t& __cordl_internal_get_bobStaticDrag() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_handleCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_handleCollider() ;

constexpr ::UnityW<::UnityEngine::HingeJoint> const& __cordl_internal_get_handleJoint() const;

constexpr ::UnityW<::UnityEngine::HingeJoint>& __cordl_internal_get_handleJoint() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_handleRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_handleRigidbody() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_handleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_handleTransform() ;

constexpr ::UnityW<::GlobalNamespace::VerletLine> const& __cordl_internal_get_line() const;

constexpr ::UnityW<::GlobalNamespace::VerletLine>& __cordl_internal_get_line() ;

constexpr float_t const& __cordl_internal_get_lineCastFactor() const;

constexpr float_t& __cordl_internal_get_lineCastFactor() ;

constexpr float_t const& __cordl_internal_get_lineLengthMax() const;

constexpr float_t& __cordl_internal_get_lineLengthMax() ;

constexpr float_t const& __cordl_internal_get_lineLengthMin() const;

constexpr float_t& __cordl_internal_get_lineLengthMin() ;

constexpr float_t const& __cordl_internal_get_lineResizeRate() const;

constexpr float_t& __cordl_internal_get_lineResizeRate() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_reelFreezeLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_reelFreezeLocalPosition() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reelFrom() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reelFrom() ;

constexpr float_t const& __cordl_internal_get_reelSpinRate() const;

constexpr float_t& __cordl_internal_get_reelSpinRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reelTo() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reelTo() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_reelToSync() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_reelToSync() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_tipBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_tipBody() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_tipTracker() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_tipTracker() ;

constexpr void __cordl_internal_set__bobFloatPlaneY(float_t  value) ;

constexpr void __cordl_internal_set__bobFloating(bool  value) ;

constexpr void __cordl_internal_set__grippingHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__isGrippingHandle(bool  value) ;

constexpr void __cordl_internal_set__lastLocalRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__lineExpanding(bool  value) ;

constexpr void __cordl_internal_set__lineResetting(bool  value) ;

constexpr void __cordl_internal_set__lineResizing(bool  value) ;

constexpr void __cordl_internal_set__localRotDelta(float_t  value) ;

constexpr void __cordl_internal_set__manualReeling(bool  value) ;

constexpr void __cordl_internal_set__sinceGripLoss(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set__sinceReset(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set__targetSegmentMax(float_t  value) ;

constexpr void __cordl_internal_set__targetSegmentMin(float_t  value) ;

constexpr void __cordl_internal_set_bobCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_bobDynamicDrag(float_t  value) ;

constexpr void __cordl_internal_set_bobFloatForce(float_t  value) ;

constexpr void __cordl_internal_set_bobRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_bobStaticDrag(float_t  value) ;

constexpr void __cordl_internal_set_handleCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_handleJoint(::UnityW<::UnityEngine::HingeJoint>  value) ;

constexpr void __cordl_internal_set_handleRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_handleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_line(::UnityW<::GlobalNamespace::VerletLine>  value) ;

constexpr void __cordl_internal_set_lineCastFactor(float_t  value) ;

constexpr void __cordl_internal_set_lineLengthMax(float_t  value) ;

constexpr void __cordl_internal_set_lineLengthMin(float_t  value) ;

constexpr void __cordl_internal_set_lineResizeRate(float_t  value) ;

constexpr void __cordl_internal_set_reelFreezeLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_reelFrom(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reelSpinRate(float_t  value) ;

constexpr void __cordl_internal_set_reelTo(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_reelToSync(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_tipBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_tipTracker(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

/// @brief Method .ctor, addr 0x5804d1c, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FishingRod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FishingRod", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FishingRod(FishingRod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FishingRod", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FishingRod(FishingRod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1691};

/// @brief Field handleTransform, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___handleTransform;

/// @brief Field handleJoint, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::HingeJoint>  ___handleJoint;

/// @brief Field handleRigidbody, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___handleRigidbody;

/// @brief Field handleCollider, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___handleCollider;

/// @brief Field bobRigidbody, offset: 0x358, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___bobRigidbody;

/// @brief Field bobCollider, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___bobCollider;

/// @brief Field line, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VerletLine>  ___line;

/// @brief Field tipTracker, offset: 0x370, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___tipTracker;

/// @brief Field tipBody, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___tipBody;

/// @brief Field rig, offset: 0x380, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// [Space]
/// @brief Field reelFreezeLocalPosition, offset: 0x388, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___reelFreezeLocalPosition;

/// @brief Field reelFrom, offset: 0x398, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reelFrom;

/// @brief Field reelTo, offset: 0x3a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reelTo;

/// @brief Field reelToSync, offset: 0x3a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___reelToSync;

/// [Space]
/// @brief Field reelSpinRate, offset: 0x3b0, size: 0x4, def value: None
 float_t  ___reelSpinRate;

/// @brief Field lineResizeRate, offset: 0x3b4, size: 0x4, def value: None
 float_t  ___lineResizeRate;

/// @brief Field lineCastFactor, offset: 0x3b8, size: 0x4, def value: None
 float_t  ___lineCastFactor;

/// @brief Field lineLengthMin, offset: 0x3bc, size: 0x4, def value: None
 float_t  ___lineLengthMin;

/// @brief Field lineLengthMax, offset: 0x3c0, size: 0x4, def value: None
 float_t  ___lineLengthMax;

/// [Space]
/// @brief Field _bobFloating, offset: 0x3c4, size: 0x1, def value: None
 bool  ____bobFloating;

/// @brief Field bobFloatForce, offset: 0x3c8, size: 0x4, def value: None
 float_t  ___bobFloatForce;

/// @brief Field bobStaticDrag, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___bobStaticDrag;

/// @brief Field bobDynamicDrag, offset: 0x3d0, size: 0x4, def value: None
 float_t  ___bobDynamicDrag;

/// @brief Field _bobFloatPlaneY, offset: 0x3d4, size: 0x4, def value: None
 float_t  ____bobFloatPlaneY;

/// [Space]
/// @brief Field _targetSegmentMin, offset: 0x3d8, size: 0x4, def value: None
 float_t  ____targetSegmentMin;

/// @brief Field _targetSegmentMax, offset: 0x3dc, size: 0x4, def value: None
 float_t  ____targetSegmentMax;

/// [Space]
/// @brief Field _manualReeling, offset: 0x3e0, size: 0x1, def value: None
 bool  ____manualReeling;

/// @brief Field _lineResizing, offset: 0x3e1, size: 0x1, def value: None
 bool  ____lineResizing;

/// @brief Field _lineExpanding, offset: 0x3e2, size: 0x1, def value: None
 bool  ____lineExpanding;

/// @brief Field _lineResetting, offset: 0x3e3, size: 0x1, def value: None
 bool  ____lineResetting;

/// @brief Field _sinceReset, offset: 0x3e8, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceReset;

/// [Space]
/// @brief Field _lastLocalRot, offset: 0x3f0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____lastLocalRot;

/// @brief Field _localRotDelta, offset: 0x400, size: 0x4, def value: None
 float_t  ____localRotDelta;

/// @brief Field _isGrippingHandle, offset: 0x404, size: 0x1, def value: None
 bool  ____isGrippingHandle;

/// @brief Field _grippingHand, offset: 0x408, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grippingHand;

/// @brief Field _sinceGripLoss, offset: 0x410, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____sinceGripLoss;

/// @brief Size padding 0x448 - 0x418 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FishingRod, ___handleTransform) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___handleJoint) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___handleRigidbody) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___handleCollider) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___bobRigidbody) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___bobCollider) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___line) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___tipTracker) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___tipBody) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___rig) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___reelFreezeLocalPosition) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___reelFrom) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___reelTo) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___reelToSync) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___reelSpinRate) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___lineResizeRate) == 0x3b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___lineCastFactor) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___lineLengthMin) == 0x3bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___lineLengthMax) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____bobFloating) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___bobFloatForce) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___bobStaticDrag) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ___bobDynamicDrag) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____bobFloatPlaneY) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____targetSegmentMin) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____targetSegmentMax) == 0x3dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____manualReeling) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____lineResizing) == 0x3e1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____lineExpanding) == 0x3e2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____lineResetting) == 0x3e3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____sinceReset) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____lastLocalRot) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____localRotDelta) == 0x400, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____isGrippingHandle) == 0x404, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____grippingHand) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FishingRod, ____sinceGripLoss) == 0x410, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FishingRod) == 0x448, "Size mismatch!");

} // namespace end def GlobalNamespace
