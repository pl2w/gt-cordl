#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigAnchorOverrides.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiClipEntry_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticAnchorAntiIntersectOffsets_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VRRigAnchorOverrides)
namespace GlobalNamespace {
struct CosmeticsController_CosmeticSlots;
}
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GorillaTag::CosmeticSystem {
struct CosmeticAnchorAntiClipEntry;
}
namespace GorillaTag {
struct XformOffset;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VRRigAnchorOverrides*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VRRigAnchorOverrides*, "", "VRRigAnchorOverrides");
// Dependencies GorillaTag.CosmeticSystem.CosmeticAnchorAntiClipEntry, GorillaTag.CosmeticSystem.CosmeticAnchorAntiIntersectOffsets, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: VRRigAnchorOverrides
class CORDL_TYPE VRRigAnchorOverrides : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BuilderWatch)) ::UnityW<::UnityEngine::Transform>  BuilderWatch;

 __declspec(property(get=get_BuilderWatchAnchor)) ::UnityW<::UnityEngine::Transform>  BuilderWatchAnchor;

/// @brief [DebugOption]
 __declspec(property(get=get_CurrentBadgeTransform, put=set_CurrentBadgeTransform)) ::UnityW<::UnityEngine::Transform>  CurrentBadgeTransform;

 __declspec(property(get=get_HuntComputer)) ::UnityW<::UnityEngine::Transform>  HuntComputer;

 __declspec(property(get=get_HuntDefaultAnchor)) ::UnityW<::UnityEngine::Transform>  HuntDefaultAnchor;

/// @brief Field activeAntiClippingOffsets, offset 0x88, size 0x1f8 
 __declspec(property(get=__cordl_internal_get_activeAntiClippingOffsets, put=__cordl_internal_set_activeAntiClippingOffsets)) ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  activeAntiClippingOffsets;

/// @brief Field badgeAnchors, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeAnchors, put=__cordl_internal_set_badgeAnchors)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  badgeAnchors;

/// @brief Field badgeDefaultPos, offset 0x298, size 0xc 
 __declspec(property(get=__cordl_internal_get_badgeDefaultPos, put=__cordl_internal_set_badgeDefaultPos)) ::UnityEngine::Vector3  badgeDefaultPos;

/// @brief Field badgeDefaultRot, offset 0x2a4, size 0x10 
 __declspec(property(get=__cordl_internal_get_badgeDefaultRot, put=__cordl_internal_set_badgeDefaultRot)) ::UnityEngine::Quaternion  badgeDefaultRot;

/// @brief Field badgeOffsets, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeOffsets, put=__cordl_internal_set_badgeOffsets)) ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  badgeOffsets;

/// @brief Field builderResizeButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderResizeButton, put=__cordl_internal_set_builderResizeButton)) ::UnityW<::UnityEngine::Transform>  builderResizeButton;

/// @brief Field builderResizeButtonDefaultAnchor, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderResizeButtonDefaultAnchor, put=__cordl_internal_set_builderResizeButtonDefaultAnchor)) ::UnityW<::UnityEngine::Transform>  builderResizeButtonDefaultAnchor;

/// @brief Field builderResizeButtonDefaultTransform, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderResizeButtonDefaultTransform, put=__cordl_internal_set_builderResizeButtonDefaultTransform)) ::UnityW<::UnityEngine::Transform>  builderResizeButtonDefaultTransform;

/// @brief Field chestBodyTrackingOffset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestBodyTrackingOffset, put=__cordl_internal_set_chestBodyTrackingOffset)) ::UnityW<::UnityEngine::Transform>  chestBodyTrackingOffset;

/// @brief Field chestDefaultLocalPos, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_chestDefaultLocalPos, put=__cordl_internal_set_chestDefaultLocalPos)) ::UnityEngine::Vector3  chestDefaultLocalPos;

/// @brief Field chestDefaultTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestDefaultTransform, put=__cordl_internal_set_chestDefaultTransform)) ::UnityW<::UnityEngine::Transform>  chestDefaultTransform;

/// @brief Field clippingOffsetTransforms, offset 0x280, size 0x8 
 __declspec(property(get=__cordl_internal_get_clippingOffsetTransforms, put=__cordl_internal_set_clippingOffsetTransforms)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  clippingOffsetTransforms;

/// @brief Field currentBadgeTransform, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentBadgeTransform, put=__cordl_internal_set_currentBadgeTransform)) ::UnityW<::UnityEngine::Transform>  currentBadgeTransform;

/// @brief Field friendshipBraceletLeftAnchor, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletLeftAnchor, put=__cordl_internal_set_friendshipBraceletLeftAnchor)) ::UnityW<::UnityEngine::Transform>  friendshipBraceletLeftAnchor;

/// @brief Field friendshipBraceletLeftDefaultAnchor, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletLeftDefaultAnchor, put=__cordl_internal_set_friendshipBraceletLeftDefaultAnchor)) ::UnityW<::UnityEngine::Transform>  friendshipBraceletLeftDefaultAnchor;

/// @brief Field friendshipBraceletRightAnchor, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletRightAnchor, put=__cordl_internal_set_friendshipBraceletRightAnchor)) ::UnityW<::UnityEngine::Transform>  friendshipBraceletRightAnchor;

/// @brief Field friendshipBraceletRightDefaultAnchor, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletRightDefaultAnchor, put=__cordl_internal_set_friendshipBraceletRightDefaultAnchor)) ::UnityW<::UnityEngine::Transform>  friendshipBraceletRightDefaultAnchor;

/// @brief Field huntComputer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntComputer, put=__cordl_internal_set_huntComputer)) ::UnityW<::UnityEngine::Transform>  huntComputer;

/// @brief Field huntComputerDefaultAnchor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntComputerDefaultAnchor, put=__cordl_internal_set_huntComputerDefaultAnchor)) ::UnityW<::UnityEngine::Transform>  huntComputerDefaultAnchor;

/// @brief Field huntDefaultTransform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntDefaultTransform, put=__cordl_internal_set_huntDefaultTransform)) ::UnityW<::UnityEngine::Transform>  huntDefaultTransform;

/// @brief Field nameAnchors, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameAnchors, put=__cordl_internal_set_nameAnchors)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  nameAnchors;

/// @brief Field nameDefaultAnchor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameDefaultAnchor, put=__cordl_internal_set_nameDefaultAnchor)) ::UnityW<::UnityEngine::Transform>  nameDefaultAnchor;

/// @brief Field nameLastObjectToAttach, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameLastObjectToAttach, put=__cordl_internal_set_nameLastObjectToAttach)) ::UnityW<::UnityEngine::GameObject>  nameLastObjectToAttach;

/// @brief Field nameOffsets, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameOffsets, put=__cordl_internal_set_nameOffsets)) ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  nameOffsets;

/// @brief Field nameTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameTransform, put=__cordl_internal_set_nameTransform)) ::UnityW<::UnityEngine::Transform>  nameTransform;

/// @brief Field overrideAnchors, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideAnchors, put=__cordl_internal_set_overrideAnchors)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  overrideAnchors;

/// @brief Method AnchorOverride, addr 0x576e5d8, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> AnchorOverride(::GlobalNamespace::TransferrableObject_PositionState  pos, ::UnityEngine::Transform*  fallback) ;

/// @brief Method ApplyAntiClippingOffsets, addr 0x5774764, size 0x59c, virtual false, abstract: false, final false
inline void ApplyAntiClippingOffsets(::GlobalNamespace::TransferrableObject_PositionState  pos, ::GorillaTag::XformOffset  offset, bool  enable, ::UnityEngine::Transform*  defaultAnchor) ;

/// @brief Method Awake, addr 0x57741ec, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method EnableChestBodyTracking, addr 0x5774300, size 0xa0, virtual false, abstract: false, final false
inline void EnableChestBodyTracking(bool  enabled) ;

/// @brief Method MapPositionToIndex, addr 0x57742d8, size 0x28, virtual false, abstract: false, final false
inline int32_t MapPositionToIndex(::GlobalNamespace::TransferrableObject_PositionState  pos) ;

static inline ::GlobalNamespace::VRRigAnchorOverrides* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5775fe8, size 0x3ac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x57743a0, size 0x3c4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OverrideAnchor, addr 0x5774d00, size 0x6e4, virtual false, abstract: false, final false
inline void OverrideAnchor(::GlobalNamespace::TransferrableObject_PositionState  pos, ::UnityEngine::Transform*  anchor) ;

/// @brief Method ResetBadge, addr 0x5773d64, size 0xac, virtual false, abstract: false, final false
inline void ResetBadge() ;

/// @brief Method TryGetLargestOffset, addr 0x5775cfc, size 0x11c, virtual false, abstract: false, final false
static inline bool TryGetLargestOffset(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  entries, ::by_ref<::GorillaTag::XformOffset>  best) ;

/// @brief Method UpdateBadge, addr 0x5773e10, size 0x3bc, virtual false, abstract: false, final false
inline void UpdateBadge() ;

/// [Obsolete("Use UpdateBadgeOffset", true)]
/// @brief Method UpdateBadgeAnchor, addr 0x5775f34, size 0xb4, virtual false, abstract: false, final false
inline void UpdateBadgeAnchor(::UnityEngine::GameObject*  badgeAnchor, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method UpdateBadgeOffset, addr 0x5775e18, size 0x11c, virtual false, abstract: false, final false
inline void UpdateBadgeOffset(::GorillaTag::XformOffset  offset, bool  enable, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method UpdateBuilderWatchOffset, addr 0x5775504, size 0x11c, virtual false, abstract: false, final false
inline void UpdateBuilderWatchOffset(::GorillaTag::XformOffset  offset, bool  enable) ;

/// @brief Method UpdateFriendshipBraceletOffset, addr 0x5775620, size 0x240, virtual false, abstract: false, final false
inline void UpdateFriendshipBraceletOffset(::GorillaTag::XformOffset  offset, bool  left, bool  enable) ;

/// @brief Method UpdateHuntWatchOffset, addr 0x57753e4, size 0x120, virtual false, abstract: false, final false
inline void UpdateHuntWatchOffset(::GorillaTag::XformOffset  offset, bool  enable) ;

/// @brief Method UpdateName, addr 0x57759ac, size 0x254, virtual false, abstract: false, final false
inline void UpdateName() ;

/// [Obsolete("Use UpdateNameOffset", true)]
/// @brief Method UpdateNameAnchor, addr 0x5775c00, size 0xfc, virtual false, abstract: false, final false
inline void UpdateNameAnchor(::UnityEngine::GameObject*  nameAnchor, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

/// @brief Method UpdateNameTagOffset, addr 0x5775860, size 0x14c, virtual false, abstract: false, final false
inline void UpdateNameTagOffset(::GorillaTag::XformOffset  offset, bool  enable, ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot) ;

constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets const& __cordl_internal_get_activeAntiClippingOffsets() const;

constexpr ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets& __cordl_internal_get_activeAntiClippingOffsets() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_badgeAnchors() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_badgeAnchors() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_badgeDefaultPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_badgeDefaultPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_badgeDefaultRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_badgeDefaultRot() ;

constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry> const& __cordl_internal_get_badgeOffsets() const;

constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>& __cordl_internal_get_badgeOffsets() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_builderResizeButton() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_builderResizeButton() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_builderResizeButtonDefaultAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_builderResizeButtonDefaultAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_builderResizeButtonDefaultTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_builderResizeButtonDefaultTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chestBodyTrackingOffset() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chestBodyTrackingOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_chestDefaultLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_chestDefaultLocalPos() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_chestDefaultTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_chestDefaultTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_clippingOffsetTransforms() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_clippingOffsetTransforms() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_currentBadgeTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_currentBadgeTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_friendshipBraceletLeftAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_friendshipBraceletLeftAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_friendshipBraceletLeftDefaultAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_friendshipBraceletLeftDefaultAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_friendshipBraceletRightAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_friendshipBraceletRightAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_friendshipBraceletRightDefaultAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_friendshipBraceletRightDefaultAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_huntComputer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_huntComputer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_huntComputerDefaultAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_huntComputerDefaultAnchor() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_huntDefaultTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_huntDefaultTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_nameAnchors() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_nameAnchors() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_nameDefaultAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_nameDefaultAnchor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nameLastObjectToAttach() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nameLastObjectToAttach() ;

constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry> const& __cordl_internal_get_nameOffsets() const;

constexpr ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>& __cordl_internal_get_nameOffsets() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_nameTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_nameTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_overrideAnchors() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_overrideAnchors() ;

constexpr void __cordl_internal_set_activeAntiClippingOffsets(::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  value) ;

constexpr void __cordl_internal_set_badgeAnchors(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_badgeDefaultPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_badgeDefaultRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_badgeOffsets(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  value) ;

constexpr void __cordl_internal_set_builderResizeButton(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_builderResizeButtonDefaultAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_builderResizeButtonDefaultTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_chestBodyTrackingOffset(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_chestDefaultLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_chestDefaultTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_clippingOffsetTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_currentBadgeTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletLeftAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletLeftDefaultAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletRightAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletRightDefaultAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_huntComputer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_huntComputerDefaultAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_huntDefaultTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nameAnchors(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_nameDefaultAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_nameLastObjectToAttach(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nameOffsets(::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  value) ;

constexpr void __cordl_internal_set_nameTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_overrideAnchors(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5776394, size 0x164, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BuilderWatch, addr 0x57741e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_BuilderWatch() ;

/// @brief Method get_BuilderWatchAnchor, addr 0x57741dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_BuilderWatchAnchor() ;

/// @brief Method get_CurrentBadgeTransform, addr 0x5773c7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_CurrentBadgeTransform() ;

/// @brief Method get_HuntComputer, addr 0x57741d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_HuntComputer() ;

/// @brief Method get_HuntDefaultAnchor, addr 0x57741cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_HuntDefaultAnchor() ;

/// @brief Method set_CurrentBadgeTransform, addr 0x5773c84, size 0xe0, virtual false, abstract: false, final false
inline void set_CurrentBadgeTransform(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRRigAnchorOverrides() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRRigAnchorOverrides", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VRRigAnchorOverrides(VRRigAnchorOverrides && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRRigAnchorOverrides", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRRigAnchorOverrides(VRRigAnchorOverrides const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1373};

/// [SerializeField]
/// @brief Field nameDefaultAnchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___nameDefaultAnchor;

/// [SerializeField]
/// @brief Field nameTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___nameTransform;

/// [SerializeField]
/// @brief Field chestDefaultTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chestDefaultTransform;

/// [SerializeField]
/// @brief Field chestBodyTrackingOffset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___chestBodyTrackingOffset;

/// @brief Field chestDefaultLocalPos, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___chestDefaultLocalPos;

/// [SerializeField]
/// @brief Field huntComputer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___huntComputer;

/// [SerializeField]
/// @brief Field huntComputerDefaultAnchor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___huntComputerDefaultAnchor;

/// @brief Field huntDefaultTransform, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___huntDefaultTransform;

/// [SerializeField]
/// @brief Field builderResizeButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___builderResizeButton;

/// [SerializeField]
/// @brief Field builderResizeButtonDefaultAnchor, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___builderResizeButtonDefaultAnchor;

/// @brief Field builderResizeButtonDefaultTransform, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___builderResizeButtonDefaultTransform;

/// @brief Field overrideAnchors, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___overrideAnchors;

/// @brief Field activeAntiClippingOffsets, offset: 0x88, size: 0x1f8, def value: None
 ::GorillaTag::CosmeticSystem::CosmeticAnchorAntiIntersectOffsets  ___activeAntiClippingOffsets;

/// @brief Field clippingOffsetTransforms, offset: 0x280, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___clippingOffsetTransforms;

/// @brief Field nameLastObjectToAttach, offset: 0x288, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nameLastObjectToAttach;

/// @brief Field currentBadgeTransform, offset: 0x290, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___currentBadgeTransform;

/// @brief Field badgeDefaultPos, offset: 0x298, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___badgeDefaultPos;

/// @brief Field badgeDefaultRot, offset: 0x2a4, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___badgeDefaultRot;

/// @brief Field badgeAnchors, offset: 0x2b8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___badgeAnchors;

/// @brief Field nameAnchors, offset: 0x2c0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___nameAnchors;

/// @brief Field badgeOffsets, offset: 0x2c8, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  ___badgeOffsets;

/// @brief Field nameOffsets, offset: 0x2d0, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::CosmeticSystem::CosmeticAnchorAntiClipEntry>  ___nameOffsets;

/// [SerializeField]
/// @brief Field friendshipBraceletLeftDefaultAnchor, offset: 0x2d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___friendshipBraceletLeftDefaultAnchor;

/// @brief Field friendshipBraceletLeftAnchor, offset: 0x2e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___friendshipBraceletLeftAnchor;

/// [SerializeField]
/// @brief Field friendshipBraceletRightDefaultAnchor, offset: 0x2e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___friendshipBraceletRightDefaultAnchor;

/// @brief Field friendshipBraceletRightAnchor, offset: 0x2f0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___friendshipBraceletRightAnchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___nameDefaultAnchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___nameTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___chestDefaultTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___chestBodyTrackingOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___chestDefaultLocalPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___huntComputer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___huntComputerDefaultAnchor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___huntDefaultTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___builderResizeButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___builderResizeButtonDefaultAnchor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___builderResizeButtonDefaultTransform) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___overrideAnchors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___activeAntiClippingOffsets) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___clippingOffsetTransforms) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___nameLastObjectToAttach) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___currentBadgeTransform) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___badgeDefaultPos) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___badgeDefaultRot) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___badgeAnchors) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___nameAnchors) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___badgeOffsets) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___nameOffsets) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___friendshipBraceletLeftDefaultAnchor) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___friendshipBraceletLeftAnchor) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___friendshipBraceletRightDefaultAnchor) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VRRigAnchorOverrides, ___friendshipBraceletRightAnchor) == 0x2f0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VRRigAnchorOverrides) == 0x2f8, "Size mismatch!");

} // namespace end def GlobalNamespace
