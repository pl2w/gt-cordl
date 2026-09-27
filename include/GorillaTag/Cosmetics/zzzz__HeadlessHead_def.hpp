#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/HeadlessHead.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_def.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeadlessHead)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class HeadlessHead;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::HeadlessHead*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::HeadlessHead*, "GorillaTag.Cosmetics", "HeadlessHead");
// Dependencies GTBitOps::BitWriteInfo, HoldableObject, UnityEngine.Quaternion, UnityEngine.Vector3, VRRig::WearablePackedStateSlots
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.HeadlessHead
class CORDL_TYPE HeadlessHead : public ::GlobalNamespace::HoldableObject {
public:
// Declarations
/// @brief Field baseLocalPosition, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_baseLocalPosition, put=__cordl_internal_set_baseLocalPosition)) ::UnityEngine::Vector3  baseLocalPosition;

/// @brief Field blendDuration, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendDuration, put=__cordl_internal_set_blendDuration)) float_t  blendDuration;

/// @brief Field blendFraction, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_blendFraction, put=__cordl_internal_set_blendFraction)) float_t  blendFraction;

/// @brief Field blendingFromPosition, offset 0xa4, size 0xc 
 __declspec(property(get=__cordl_internal_get_blendingFromPosition, put=__cordl_internal_set_blendingFromPosition)) ::UnityEngine::Vector3  blendingFromPosition;

/// @brief Field blendingFromRotation, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_blendingFromRotation, put=__cordl_internal_set_blendingFromRotation)) ::UnityEngine::Quaternion  blendingFromRotation;

/// @brief Field firstPersonHiddenRadius, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_firstPersonHiddenRadius, put=__cordl_internal_set_firstPersonHiddenRadius)) float_t  firstPersonHiddenRadius;

/// @brief Field firstPersonHideCenter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPersonHideCenter, put=__cordl_internal_set_firstPersonHideCenter)) ::UnityW<::UnityEngine::Transform>  firstPersonHideCenter;

/// @brief Field firstPersonRenderer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_firstPersonRenderer, put=__cordl_internal_set_firstPersonRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  firstPersonRenderer;

/// @brief Field hasFirstPersonRenderer, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFirstPersonRenderer, put=__cordl_internal_set_hasFirstPersonRenderer)) bool  hasFirstPersonRenderer;

/// @brief Field holdAnchorPoint, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdAnchorPoint, put=__cordl_internal_set_holdAnchorPoint)) ::UnityW<::UnityEngine::Transform>  holdAnchorPoint;

/// @brief Field isHeld, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Field isHeldLeftHand, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeldLeftHand, put=__cordl_internal_set_isHeldLeftHand)) bool  isHeldLeftHand;

/// @brief Field isLocal, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field offsetFromLeftHand, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetFromLeftHand, put=__cordl_internal_set_offsetFromLeftHand)) ::UnityEngine::Vector3  offsetFromLeftHand;

/// @brief Field offsetFromRightHand, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetFromRightHand, put=__cordl_internal_set_offsetFromRightHand)) ::UnityEngine::Vector3  offsetFromRightHand;

/// @brief Field ownerRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field rotationFromLeftHand, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationFromLeftHand, put=__cordl_internal_set_rotationFromLeftHand)) ::UnityEngine::Quaternion  rotationFromLeftHand;

/// @brief Field rotationFromRightHand, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rotationFromRightHand, put=__cordl_internal_set_rotationFromRightHand)) ::UnityEngine::Quaternion  rotationFromRightHand;

/// @brief Field stateBitsWriteInfo, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_stateBitsWriteInfo, put=__cordl_internal_set_stateBitsWriteInfo)) ::GlobalNamespace::GTBitOps_BitWriteInfo  stateBitsWriteInfo;

/// @brief Field wasHeld, offset 0xc4, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeld, put=__cordl_internal_set_wasHeld)) bool  wasHeld;

/// @brief Field wasHeldLeftHand, offset 0xc5, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasHeldLeftHand, put=__cordl_internal_set_wasHeldLeftHand)) bool  wasHeldLeftHand;

/// @brief Field wearablePackedStateSlot, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_wearablePackedStateSlot, put=__cordl_internal_set_wearablePackedStateSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  wearablePackedStateSlot;

/// @brief Method Awake, addr 0x5d7cbac, size 0x1d8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DropItemCleanup, addr 0x5d7d5c0, size 0x8, virtual true, abstract: false, final false
inline void DropItemCleanup() ;

/// @brief Method LateUpdate, addr 0x5d7cf20, size 0x50, virtual true, abstract: false, final false
inline void LateUpdate() ;

/// @brief Method LateUpdateLocal, addr 0x5d7cf70, size 0x5c, virtual true, abstract: false, final false
inline void LateUpdateLocal() ;

/// @brief Method LateUpdateReplicated, addr 0x5d7cfcc, size 0x40, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x5d7d00c, size 0x4e0, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GorillaTag::Cosmetics::HeadlessHead* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d7cef8, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d7cd84, size 0x174, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5d7d4f0, size 0xd0, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnHover, addr 0x5d7d4ec, size 0x4, virtual true, abstract: false, final false
inline void OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand) ;

/// @brief Method OnRelease, addr 0x5d7d5c8, size 0x15c, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_baseLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_baseLocalPosition() ;

constexpr float_t const& __cordl_internal_get_blendDuration() const;

constexpr float_t& __cordl_internal_get_blendDuration() ;

constexpr float_t const& __cordl_internal_get_blendFraction() const;

constexpr float_t& __cordl_internal_get_blendFraction() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_blendingFromPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_blendingFromPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_blendingFromRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_blendingFromRotation() ;

constexpr float_t const& __cordl_internal_get_firstPersonHiddenRadius() const;

constexpr float_t& __cordl_internal_get_firstPersonHiddenRadius() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_firstPersonHideCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_firstPersonHideCenter() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_firstPersonRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_firstPersonRenderer() ;

constexpr bool const& __cordl_internal_get_hasFirstPersonRenderer() const;

constexpr bool& __cordl_internal_get_hasFirstPersonRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_holdAnchorPoint() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_holdAnchorPoint() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr bool const& __cordl_internal_get_isHeldLeftHand() const;

constexpr bool& __cordl_internal_get_isHeldLeftHand() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetFromLeftHand() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetFromLeftHand() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetFromRightHand() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetFromRightHand() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationFromLeftHand() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationFromLeftHand() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rotationFromRightHand() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rotationFromRightHand() ;

constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo const& __cordl_internal_get_stateBitsWriteInfo() const;

constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo& __cordl_internal_get_stateBitsWriteInfo() ;

constexpr bool const& __cordl_internal_get_wasHeld() const;

constexpr bool& __cordl_internal_get_wasHeld() ;

constexpr bool const& __cordl_internal_get_wasHeldLeftHand() const;

constexpr bool& __cordl_internal_get_wasHeldLeftHand() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_wearablePackedStateSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_wearablePackedStateSlot() ;

constexpr void __cordl_internal_set_baseLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_blendDuration(float_t  value) ;

constexpr void __cordl_internal_set_blendFraction(float_t  value) ;

constexpr void __cordl_internal_set_blendingFromPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_blendingFromRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_firstPersonHiddenRadius(float_t  value) ;

constexpr void __cordl_internal_set_firstPersonHideCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_firstPersonRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_hasFirstPersonRenderer(bool  value) ;

constexpr void __cordl_internal_set_holdAnchorPoint(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

constexpr void __cordl_internal_set_isHeldLeftHand(bool  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_offsetFromLeftHand(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offsetFromRightHand(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rotationFromLeftHand(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_rotationFromRightHand(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_stateBitsWriteInfo(::GlobalNamespace::GTBitOps_BitWriteInfo  value) ;

constexpr void __cordl_internal_set_wasHeld(bool  value) ;

constexpr void __cordl_internal_set_wasHeldLeftHand(bool  value) ;

constexpr void __cordl_internal_set_wearablePackedStateSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

/// @brief Method .ctor, addr 0x5d7d724, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeadlessHead() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeadlessHead", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeadlessHead(HeadlessHead && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeadlessHead", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeadlessHead(HeadlessHead const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4872};

/// [Tooltip("The slot this cosmetic resides.")]
/// @brief Field wearablePackedStateSlot, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___wearablePackedStateSlot;

/// [SerializeField]
/// @brief Field offsetFromLeftHand, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetFromLeftHand;

/// [SerializeField]
/// @brief Field offsetFromRightHand, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetFromRightHand;

/// [SerializeField]
/// @brief Field rotationFromLeftHand, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotationFromLeftHand;

/// [SerializeField]
/// @brief Field rotationFromRightHand, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rotationFromRightHand;

/// @brief Field baseLocalPosition, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___baseLocalPosition;

/// @brief Field ownerRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field isLocal, offset: 0x70, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field isHeld, offset: 0x71, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field isHeldLeftHand, offset: 0x72, size: 0x1, def value: None
 bool  ___isHeldLeftHand;

/// @brief Field stateBitsWriteInfo, offset: 0x74, size: 0xc, def value: None
 ::GlobalNamespace::GTBitOps_BitWriteInfo  ___stateBitsWriteInfo;

/// [SerializeField]
/// @brief Field firstPersonRenderer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___firstPersonRenderer;

/// [SerializeField]
/// @brief Field firstPersonHiddenRadius, offset: 0x88, size: 0x4, def value: None
 float_t  ___firstPersonHiddenRadius;

/// [SerializeField]
/// @brief Field firstPersonHideCenter, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___firstPersonHideCenter;

/// [SerializeField]
/// @brief Field holdAnchorPoint, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___holdAnchorPoint;

/// @brief Field hasFirstPersonRenderer, offset: 0xa0, size: 0x1, def value: None
 bool  ___hasFirstPersonRenderer;

/// @brief Field blendingFromPosition, offset: 0xa4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___blendingFromPosition;

/// @brief Field blendingFromRotation, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___blendingFromRotation;

/// @brief Field blendFraction, offset: 0xc0, size: 0x4, def value: None
 float_t  ___blendFraction;

/// @brief Field wasHeld, offset: 0xc4, size: 0x1, def value: None
 bool  ___wasHeld;

/// @brief Field wasHeldLeftHand, offset: 0xc5, size: 0x1, def value: None
 bool  ___wasHeldLeftHand;

/// [SerializeField]
/// @brief Field blendDuration, offset: 0xc8, size: 0x4, def value: None
 float_t  ___blendDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___wearablePackedStateSlot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___offsetFromLeftHand) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___offsetFromRightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___rotationFromLeftHand) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___rotationFromRightHand) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___baseLocalPosition) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___ownerRig) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___isLocal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___isHeld) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___isHeldLeftHand) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___stateBitsWriteInfo) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___firstPersonRenderer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___firstPersonHiddenRadius) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___firstPersonHideCenter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___holdAnchorPoint) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___hasFirstPersonRenderer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___blendingFromPosition) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___blendingFromRotation) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___blendFraction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___wasHeld) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___wasHeldLeftHand) == 0xc5, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HeadlessHead, ___blendDuration) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::HeadlessHead) == 0xd0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
