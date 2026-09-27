#pragma once
// IWYU pragma private; include "GlobalNamespace/TakeMyHand_HandLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TakeMyHand_HandLink)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class GorillaIK;
}
namespace GlobalNamespace {
struct HandLinkAuthorityStatus;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TakeMyHand_HandLink;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TakeMyHand_HandLink*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TakeMyHand_HandLink*, "", "TakeMyHand_HandLink");
// Dependencies HoldableObject, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TakeMyHand_HandLink
class CORDL_TYPE TakeMyHand_HandLink : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
 __declspec(property(get=get_IsLocal, put=set_IsLocal)) bool  IsLocal;

 __declspec(property(get=get_IsTentacleGrab, put=set_IsTentacleGrab)) bool  IsTentacleGrab;

 __declspec(property(get=get_LinkPosition)) ::UnityEngine::Vector3  LinkPosition;

/// @brief Field OnHandLinkChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnHandLinkChanged, put=setStaticF_OnHandLinkChanged)) ::System::Action*  OnHandLinkChanged;

 __declspec(property(get=get_TentacleOffset, put=set_TentacleOffset)) ::UnityEngine::Vector3  TentacleOffset;

/// @brief Field <IsLocal>k__BackingField, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLocal_k__BackingField, put=__cordl_internal_set__IsLocal_k__BackingField)) bool  _IsLocal_k__BackingField;

/// @brief Field <IsTentacleGrab>k__BackingField, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsTentacleGrab_k__BackingField, put=__cordl_internal_set__IsTentacleGrab_k__BackingField)) bool  _IsTentacleGrab_k__BackingField;

/// @brief Field <TentacleOffset>k__BackingField, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get__TentacleOffset_k__BackingField, put=__cordl_internal_set__TentacleOffset_k__BackingField)) ::UnityEngine::Vector3  _TentacleOffset_k__BackingField;

/// @brief Field audioOnGrab, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioOnGrab, put=__cordl_internal_set_audioOnGrab)) ::UnityW<::UnityEngine::AudioClip>  audioOnGrab;

/// @brief Field grabbedHandIsLeft, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_grabbedHandIsLeft, put=__cordl_internal_set_grabbedHandIsLeft)) bool  grabbedHandIsLeft;

/// @brief Field grabbedLink, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedLink, put=__cordl_internal_set_grabbedLink)) ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  grabbedLink;

/// @brief Field grabbedPlayer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbedPlayer, put=__cordl_internal_set_grabbedPlayer)) ::GlobalNamespace::NetPlayer*  grabbedPlayer;

/// @brief Field gripPressedAtTimestamp, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_gripPressedAtTimestamp, put=__cordl_internal_set_gripPressedAtTimestamp)) float_t  gripPressedAtTimestamp;

/// @brief Field hapticDurationOnGrab, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDurationOnGrab, put=__cordl_internal_set_hapticDurationOnGrab)) float_t  hapticDurationOnGrab;

/// @brief Field hapticDurationOnVicariousTap, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDurationOnVicariousTap, put=__cordl_internal_set_hapticDurationOnVicariousTap)) float_t  hapticDurationOnVicariousTap;

/// @brief Field hapticStrengthOnGrab, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrengthOnGrab, put=__cordl_internal_set_hapticStrengthOnGrab)) float_t  hapticStrengthOnGrab;

/// @brief Field hapticStrengthOnVicariousTap, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrengthOnVicariousTap, put=__cordl_internal_set_hapticStrengthOnVicariousTap)) float_t  hapticStrengthOnVicariousTap;

/// @brief Field interactionPoint, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPoint, put=__cordl_internal_set_interactionPoint)) ::UnityW<::GlobalNamespace::InteractionPoint>  interactionPoint;

/// @brief Field isGroundedButt, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGroundedButt, put=__cordl_internal_set_isGroundedButt)) bool  isGroundedButt;

/// @brief Field isGroundedHand, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGroundedHand, put=__cordl_internal_set_isGroundedHand)) bool  isGroundedHand;

/// @brief Field isLeftHand, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHand, put=__cordl_internal_set_isLeftHand)) bool  isLeftHand;

/// @brief Field isReadyForGrabbing, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReadyForGrabbing, put=__cordl_internal_set_isReadyForGrabbing)) bool  isReadyForGrabbing;

/// @brief Field lastReadGrabbedPlayerActorNumber, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReadGrabbedPlayerActorNumber, put=__cordl_internal_set_lastReadGrabbedPlayerActorNumber)) int32_t  lastReadGrabbedPlayerActorNumber;

/// @brief Field myIK, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_myIK, put=__cordl_internal_set_myIK)) ::UnityW<::GlobalNamespace::GorillaIK>  myIK;

/// @brief Field myOtherHandLink, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myOtherHandLink, put=__cordl_internal_set_myOtherHandLink)) ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  myOtherHandLink;

/// @brief Field myRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rejectGrabsUntilTimestamp, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_rejectGrabsUntilTimestamp, put=__cordl_internal_set_rejectGrabsUntilTimestamp)) float_t  rejectGrabsUntilTimestamp;

/// @brief Field snapPositionCalculatedAtFrame, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_snapPositionCalculatedAtFrame, put=__cordl_internal_set_snapPositionCalculatedAtFrame)) int32_t  snapPositionCalculatedAtFrame;

/// @brief Field wasGripPressed, offset 0x43, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasGripPressed, put=__cordl_internal_set_wasGripPressed)) bool  wasGripPressed;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method BreakLink, addr 0x598b2c8, size 0x214, virtual false, abstract: false, final false
inline void BreakLink() ;

/// @brief Method BreakLinkTo, addr 0x598b8d8, size 0x88, virtual false, abstract: false, final false
inline void BreakLinkTo(::GlobalNamespace::TakeMyHand_HandLink*  targetLink) ;

/// @brief Method CanBeGrabbed, addr 0x598a7b8, size 0xd0, virtual false, abstract: false, final false
inline bool CanBeGrabbed() ;

/// @brief Method CheckFormLinkWithRemoteGrab, addr 0x598c864, size 0x27c, virtual false, abstract: false, final false
inline void CheckFormLinkWithRemoteGrab() ;

/// @brief Method DropItemCleanup, addr 0x598b4e0, size 0x80, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method GetChainAuthority, addr 0x598b0d4, size 0x1f4, virtual false, abstract: false, final false
inline ::GlobalNamespace::HandLinkAuthorityStatus GetChainAuthority(::by_ref<int32_t>  stepsToAuth) ;

/// @brief Method IsHandInChainWithOtherPlayer, addr 0x598b960, size 0x2cc, virtual false, abstract: false, final false
static inline bool IsHandInChainWithOtherPlayer(::GlobalNamespace::TakeMyHand_HandLink*  startingLink, int32_t  targetPlayer) ;

/// @brief Method IsLinkActive, addr 0x598b560, size 0x60, virtual false, abstract: false, final false
inline bool IsLinkActive() ;

/// @brief Method IsLocalGrabInRange, addr 0x598c684, size 0x1e0, virtual false, abstract: false, final false
inline bool IsLocalGrabInRange(bool  grabbedLeftHand, ::UnityEngine::Vector3  handLocalPos, ::UnityEngine::Quaternion  bodyWorldRot, ::UnityEngine::Vector3  bodyWorldPos, float_t  tolerance) ;

/// @brief Method LocalCreateLink, addr 0x598a888, size 0x430, virtual false, abstract: false, final false
inline void LocalCreateLink(::GlobalNamespace::TakeMyHand_HandLink*  remoteLink) ;

/// @brief Method LocalUpdate, addr 0x598bc2c, size 0x380, virtual false, abstract: false, final false
inline void LocalUpdate(bool  isGroundedHand, bool  isGroundedButt, bool  isGripPressed, bool  isReadyForGrabbing) ;

static inline ::GlobalNamespace::TakeMyHand_HandLink* New_ctor() ;

/// @brief Method OnDisable, addr 0x598a3a8, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x598a39c, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x598a4e0, size 0x2d8, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x598b4dc, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x598acb8, size 0x41c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method PlayVicariousTapHaptic, addr 0x598cd38, size 0xa0, virtual false, abstract: false, final false
inline void PlayVicariousTapHaptic() ;

/// @brief Method Read, addr 0x598c03c, size 0x648, virtual false, abstract: false, final false
inline void Read(::UnityEngine::Vector3  remoteHandLocalPos, ::UnityEngine::Quaternion  remoteBodyWorldRot, ::UnityEngine::Vector3  remoteBodyWorldPos, bool  isGroundedHand, bool  isGroundedButt, bool  isReadyForGrabbing, bool  isTentacleGrab, int32_t  grabbedPlayerActorNumber, bool  grabbedHandIsLeft) ;

/// @brief Method RejectGrabsFor, addr 0x598bfac, size 0x38, virtual false, abstract: false, final false
inline void RejectGrabsFor(float_t  duration) ;

/// @brief Method SliceUpdate, addr 0x598a3b4, size 0x12c, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x598a28c, size 0x110, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TentacleTryCreateLink, addr 0x598b5c0, size 0x2c4, virtual false, abstract: false, final false
inline bool TentacleTryCreateLink(::GlobalNamespace::TakeMyHand_HandLink*  remoteLink) ;

/// @brief Method VisuallySnapHandsTogether, addr 0x598cae0, size 0x258, virtual false, abstract: false, final false
inline void VisuallySnapHandsTogether() ;

/// @brief Method Write, addr 0x598bfe4, size 0x58, virtual false, abstract: false, final false
inline void Write(::by_ref<bool>  isGroundedHand, ::by_ref<bool>  isGroundedButt, ::by_ref<int32_t>  grabbedPlayerActorNumber, ::by_ref<bool>  grabbedHandIsLeft) ;

constexpr bool const& __cordl_internal_get__IsLocal_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLocal_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsTentacleGrab_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsTentacleGrab_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__TentacleOffset_k__BackingField() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__TentacleOffset_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioOnGrab() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioOnGrab() ;

constexpr bool const& __cordl_internal_get_grabbedHandIsLeft() const;

constexpr bool& __cordl_internal_get_grabbedHandIsLeft() ;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink> const& __cordl_internal_get_grabbedLink() const;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>& __cordl_internal_get_grabbedLink() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_grabbedPlayer() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_grabbedPlayer() ;

constexpr float_t const& __cordl_internal_get_gripPressedAtTimestamp() const;

constexpr float_t& __cordl_internal_get_gripPressedAtTimestamp() ;

constexpr float_t const& __cordl_internal_get_hapticDurationOnGrab() const;

constexpr float_t& __cordl_internal_get_hapticDurationOnGrab() ;

constexpr float_t const& __cordl_internal_get_hapticDurationOnVicariousTap() const;

constexpr float_t& __cordl_internal_get_hapticDurationOnVicariousTap() ;

constexpr float_t const& __cordl_internal_get_hapticStrengthOnGrab() const;

constexpr float_t& __cordl_internal_get_hapticStrengthOnGrab() ;

constexpr float_t const& __cordl_internal_get_hapticStrengthOnVicariousTap() const;

constexpr float_t& __cordl_internal_get_hapticStrengthOnVicariousTap() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_interactionPoint() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_interactionPoint() ;

constexpr bool const& __cordl_internal_get_isGroundedButt() const;

constexpr bool& __cordl_internal_get_isGroundedButt() ;

constexpr bool const& __cordl_internal_get_isGroundedHand() const;

constexpr bool& __cordl_internal_get_isGroundedHand() ;

constexpr bool const& __cordl_internal_get_isLeftHand() const;

constexpr bool& __cordl_internal_get_isLeftHand() ;

constexpr bool const& __cordl_internal_get_isReadyForGrabbing() const;

constexpr bool& __cordl_internal_get_isReadyForGrabbing() ;

constexpr int32_t const& __cordl_internal_get_lastReadGrabbedPlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_lastReadGrabbedPlayerActorNumber() ;

constexpr ::UnityW<::GlobalNamespace::GorillaIK> const& __cordl_internal_get_myIK() const;

constexpr ::UnityW<::GlobalNamespace::GorillaIK>& __cordl_internal_get_myIK() ;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink> const& __cordl_internal_get_myOtherHandLink() const;

constexpr ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>& __cordl_internal_get_myOtherHandLink() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr float_t const& __cordl_internal_get_rejectGrabsUntilTimestamp() const;

constexpr float_t& __cordl_internal_get_rejectGrabsUntilTimestamp() ;

constexpr int32_t const& __cordl_internal_get_snapPositionCalculatedAtFrame() const;

constexpr int32_t& __cordl_internal_get_snapPositionCalculatedAtFrame() ;

constexpr bool const& __cordl_internal_get_wasGripPressed() const;

constexpr bool& __cordl_internal_get_wasGripPressed() ;

constexpr void __cordl_internal_set__IsLocal_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsTentacleGrab_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__TentacleOffset_k__BackingField(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_audioOnGrab(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_grabbedHandIsLeft(bool  value) ;

constexpr void __cordl_internal_set_grabbedLink(::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  value) ;

constexpr void __cordl_internal_set_grabbedPlayer(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_gripPressedAtTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_hapticDurationOnGrab(float_t  value) ;

constexpr void __cordl_internal_set_hapticDurationOnVicariousTap(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrengthOnGrab(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrengthOnVicariousTap(float_t  value) ;

constexpr void __cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_isGroundedButt(bool  value) ;

constexpr void __cordl_internal_set_isGroundedHand(bool  value) ;

constexpr void __cordl_internal_set_isLeftHand(bool  value) ;

constexpr void __cordl_internal_set_isReadyForGrabbing(bool  value) ;

constexpr void __cordl_internal_set_lastReadGrabbedPlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_myIK(::UnityW<::GlobalNamespace::GorillaIK>  value) ;

constexpr void __cordl_internal_set_myOtherHandLink(::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rejectGrabsUntilTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_snapPositionCalculatedAtFrame(int32_t  value) ;

constexpr void __cordl_internal_set_wasGripPressed(bool  value) ;

/// @brief Method .ctor, addr 0x598cdd8, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action* getStaticF_OnHandLinkChanged() ;

/// [CompilerGenerated]
/// @brief Method get_IsLocal, addr 0x598a27c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLocal() ;

/// [CompilerGenerated]
/// @brief Method get_IsTentacleGrab, addr 0x598a26c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsTentacleGrab() ;

/// @brief Method get_LinkPosition, addr 0x598b89c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LinkPosition() ;

/// [CompilerGenerated]
/// @brief Method get_TentacleOffset, addr 0x598b884, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_TentacleOffset() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF_OnHandLinkChanged(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsLocal, addr 0x598a284, size 0x8, virtual false, abstract: false, final false
inline void set_IsLocal(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsTentacleGrab, addr 0x598a274, size 0x8, virtual false, abstract: false, final false
inline void set_IsTentacleGrab(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_TentacleOffset, addr 0x598b890, size 0xc, virtual false, abstract: false, final false
inline void set_TentacleOffset(::UnityEngine::Vector3  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TakeMyHand_HandLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TakeMyHand_HandLink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TakeMyHand_HandLink(TakeMyHand_HandLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TakeMyHand_HandLink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TakeMyHand_HandLink(TakeMyHand_HandLink const& ) = delete;

/// @brief Field DEBUG_GRAB_ANYONE offset 0xffffffff size 0x1
static constexpr bool  DEBUG_GRAB_ANYONE{false};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2562};

/// [FormerlySerializedAs("myPlayer")]
/// [SerializeField]
/// @brief Field myRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// [FormerlySerializedAs("leftHand")]
/// [SerializeField]
/// @brief Field isLeftHand, offset: 0x28, size: 0x1, def value: None
 bool  ___isLeftHand;

/// [SerializeField]
/// @brief Field myIK, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaIK>  ___myIK;

/// @brief Field myOtherHandLink, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  ___myOtherHandLink;

/// @brief Field isReadyForGrabbing, offset: 0x40, size: 0x1, def value: None
 bool  ___isReadyForGrabbing;

/// @brief Field isGroundedHand, offset: 0x41, size: 0x1, def value: None
 bool  ___isGroundedHand;

/// @brief Field isGroundedButt, offset: 0x42, size: 0x1, def value: None
 bool  ___isGroundedButt;

/// @brief Field wasGripPressed, offset: 0x43, size: 0x1, def value: None
 bool  ___wasGripPressed;

/// @brief Field gripPressedAtTimestamp, offset: 0x44, size: 0x4, def value: None
 float_t  ___gripPressedAtTimestamp;

/// @brief Field rejectGrabsUntilTimestamp, offset: 0x48, size: 0x4, def value: None
 float_t  ___rejectGrabsUntilTimestamp;

/// @brief Field grabbedLink, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TakeMyHand_HandLink>  ___grabbedLink;

/// @brief Field grabbedPlayer, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___grabbedPlayer;

/// @brief Field grabbedHandIsLeft, offset: 0x60, size: 0x1, def value: None
 bool  ___grabbedHandIsLeft;

/// [CompilerGenerated]
/// @brief Field <IsTentacleGrab>k__BackingField, offset: 0x61, size: 0x1, def value: None
 bool  ____IsTentacleGrab_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsLocal>k__BackingField, offset: 0x62, size: 0x1, def value: None
 bool  ____IsLocal_k__BackingField;

/// [SerializeField]
/// @brief Field hapticStrengthOnGrab, offset: 0x64, size: 0x4, def value: None
 float_t  ___hapticStrengthOnGrab;

/// [SerializeField]
/// @brief Field hapticDurationOnGrab, offset: 0x68, size: 0x4, def value: None
 float_t  ___hapticDurationOnGrab;

/// [SerializeField]
/// @brief Field hapticStrengthOnVicariousTap, offset: 0x6c, size: 0x4, def value: None
 float_t  ___hapticStrengthOnVicariousTap;

/// [SerializeField]
/// @brief Field hapticDurationOnVicariousTap, offset: 0x70, size: 0x4, def value: None
 float_t  ___hapticDurationOnVicariousTap;

/// [SerializeField]
/// @brief Field audioOnGrab, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioOnGrab;

/// @brief Field interactionPoint, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___interactionPoint;

/// [CompilerGenerated]
/// @brief Field <TentacleOffset>k__BackingField, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____TentacleOffset_k__BackingField;

/// @brief Field lastReadGrabbedPlayerActorNumber, offset: 0x94, size: 0x4, def value: None
 int32_t  ___lastReadGrabbedPlayerActorNumber;

/// @brief Field snapPositionCalculatedAtFrame, offset: 0x98, size: 0x4, def value: None
 int32_t  ___snapPositionCalculatedAtFrame;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___myRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___isLeftHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___myIK) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___myOtherHandLink) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___isReadyForGrabbing) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___isGroundedHand) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___isGroundedButt) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___wasGripPressed) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___gripPressedAtTimestamp) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___rejectGrabsUntilTimestamp) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___grabbedLink) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___grabbedPlayer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___grabbedHandIsLeft) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ____IsTentacleGrab_k__BackingField) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ____IsLocal_k__BackingField) == 0x62, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___hapticStrengthOnGrab) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___hapticDurationOnGrab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___hapticStrengthOnVicariousTap) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___hapticDurationOnVicariousTap) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___audioOnGrab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___interactionPoint) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ____TentacleOffset_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___lastReadGrabbedPlayerActorNumber) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TakeMyHand_HandLink, ___snapPositionCalculatedAtFrame) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TakeMyHand_HandLink) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
