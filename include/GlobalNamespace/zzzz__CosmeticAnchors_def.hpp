#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticAnchors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticSlots_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CosmeticAnchors)
namespace GlobalNamespace {
struct TransferrableObject_PositionState;
}
namespace GlobalNamespace {
class VRRigAnchorOverrides;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class GTLogErrorLimiter;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticAnchors;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticAnchors*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticAnchors*, "", "CosmeticAnchors");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticSlots, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticAnchors
class CORDL_TYPE CosmeticAnchors : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0xd1, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field anchorEnabled, offset 0xd0, size 0x1 
 __declspec(property(get=__cordl_internal_get_anchorEnabled, put=__cordl_internal_set_anchorEnabled)) bool  anchorEnabled;

/// @brief Field anchorOverrides, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchorOverrides, put=__cordl_internal_set_anchorOverrides)) ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  anchorOverrides;

/// @brief Field badgeAnchor, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeAnchor, put=__cordl_internal_set_badgeAnchor)) ::UnityW<::UnityEngine::GameObject>  badgeAnchor;

/// @brief Field badgeAnchor_path, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_badgeAnchor_path, put=__cordl_internal_set_badgeAnchor_path)) ::StringW  badgeAnchor_path;

/// @brief Field builderWatchAnchor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderWatchAnchor, put=__cordl_internal_set_builderWatchAnchor)) ::UnityW<::UnityEngine::GameObject>  builderWatchAnchor;

/// @brief Field builderWatchAnchor_path, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderWatchAnchor_path, put=__cordl_internal_set_builderWatchAnchor_path)) ::StringW  builderWatchAnchor_path;

/// @brief Field chestAnchor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestAnchor, put=__cordl_internal_set_chestAnchor)) ::UnityW<::UnityEngine::GameObject>  chestAnchor;

/// @brief Field chestAnchor_path, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_chestAnchor_path, put=__cordl_internal_set_chestAnchor_path)) ::StringW  chestAnchor_path;

/// @brief Field deprecatedWarning, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_deprecatedWarning, put=__cordl_internal_set_deprecatedWarning)) bool  deprecatedWarning;

/// @brief Field friendshipBraceletLeftOverride, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletLeftOverride, put=__cordl_internal_set_friendshipBraceletLeftOverride)) ::UnityW<::UnityEngine::GameObject>  friendshipBraceletLeftOverride;

/// @brief Field friendshipBraceletLeftOverride_path, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletLeftOverride_path, put=__cordl_internal_set_friendshipBraceletLeftOverride_path)) ::StringW  friendshipBraceletLeftOverride_path;

/// @brief Field friendshipBraceletRightOverride, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletRightOverride, put=__cordl_internal_set_friendshipBraceletRightOverride)) ::UnityW<::UnityEngine::GameObject>  friendshipBraceletRightOverride;

/// @brief Field friendshipBraceletRightOverride_path, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_friendshipBraceletRightOverride_path, put=__cordl_internal_set_friendshipBraceletRightOverride_path)) ::StringW  friendshipBraceletRightOverride_path;

/// @brief Field huntComputerAnchor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntComputerAnchor, put=__cordl_internal_set_huntComputerAnchor)) ::UnityW<::UnityEngine::GameObject>  huntComputerAnchor;

/// @brief Field huntComputerAnchor_path, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_huntComputerAnchor_path, put=__cordl_internal_set_huntComputerAnchor_path)) ::StringW  huntComputerAnchor_path;

/// @brief Field k_debugLogError_anchorOverridesNull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_debugLogError_anchorOverridesNull, put=setStaticF_k_debugLogError_anchorOverridesNull)) ::GorillaTag::GTLogErrorLimiter*  k_debugLogError_anchorOverridesNull;

/// @brief Field leftArmAnchor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmAnchor, put=__cordl_internal_set_leftArmAnchor)) ::UnityW<::UnityEngine::GameObject>  leftArmAnchor;

/// @brief Field leftArmAnchor_path, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftArmAnchor_path, put=__cordl_internal_set_leftArmAnchor_path)) ::StringW  leftArmAnchor_path;

/// @brief Field nameAnchor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameAnchor, put=__cordl_internal_set_nameAnchor)) ::UnityW<::UnityEngine::GameObject>  nameAnchor;

/// @brief Field nameAnchor_path, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameAnchor_path, put=__cordl_internal_set_nameAnchor_path)) ::StringW  nameAnchor_path;

/// @brief Field rightArmAnchor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmAnchor, put=__cordl_internal_set_rightArmAnchor)) ::UnityW<::UnityEngine::GameObject>  rightArmAnchor;

/// @brief Field rightArmAnchor_path, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightArmAnchor_path, put=__cordl_internal_set_rightArmAnchor_path)) ::StringW  rightArmAnchor_path;

/// @brief Field slot, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_slot, put=__cordl_internal_set_slot)) ::GlobalNamespace::CosmeticsController_CosmeticSlots  slot;

/// @brief Field vrRig, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_vrRig, put=__cordl_internal_set_vrRig)) ::UnityW<::GlobalNamespace::VRRig>  vrRig;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method AffectedByBuilder, addr 0x5755e14, size 0x60, virtual false, abstract: false, final false
inline bool AffectedByBuilder() ;

/// @brief Method AffectedByHunt, addr 0x5755db4, size 0x60, virtual false, abstract: false, final false
inline bool AffectedByHunt() ;

/// @brief Method AssignAnchorToPath, addr 0x575613c, size 0x204, virtual false, abstract: false, final false
inline void AssignAnchorToPath(::by_ref<::UnityEngine::GameObject*>  anchorGObjRef, ::StringW  path) ;

/// @brief Method EnableAnchor, addr 0x5756348, size 0x4, virtual false, abstract: false, final false
inline void EnableAnchor(bool  enable) ;

/// @brief Method GetNameAnchor, addr 0x57569c8, size 0x84, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetNameAnchor() ;

/// @brief Method GetPositionAnchor, addr 0x57568bc, size 0x10c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetPositionAnchor(::GlobalNamespace::TransferrableObject_PositionState  pos) ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5756138, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5756134, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5756124, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5756114, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x575612c, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x575611c, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::CosmeticAnchors* New_ctor() ;

/// @brief Method OnDisable, addr 0x5756344, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5756340, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetBuilderWatchAnchor, addr 0x57564fc, size 0x1b0, virtual false, abstract: false, final false
inline void SetBuilderWatchAnchor(bool  enable) ;

/// @brief Method SetCustomAnchor, addr 0x57566ac, size 0x210, virtual false, abstract: false, final false
inline void SetCustomAnchor(::UnityEngine::Transform*  target, bool  enable, ::UnityEngine::GameObject*  overrideAnchor, ::UnityEngine::Transform*  defaultAnchor) ;

/// @brief Method SetHuntComputerAnchor, addr 0x575634c, size 0x1b0, virtual false, abstract: false, final false
inline void SetHuntComputerAnchor(bool  enable) ;

/// @brief Method TryUpdate, addr 0x575606c, size 0x4, virtual false, abstract: false, final false
inline void TryUpdate() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr bool const& __cordl_internal_get_anchorEnabled() const;

constexpr bool& __cordl_internal_get_anchorEnabled() ;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& __cordl_internal_get_anchorOverrides() const;

constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& __cordl_internal_get_anchorOverrides() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_badgeAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_badgeAnchor() ;

constexpr ::StringW const& __cordl_internal_get_badgeAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_badgeAnchor_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_builderWatchAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_builderWatchAnchor() ;

constexpr ::StringW const& __cordl_internal_get_builderWatchAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_builderWatchAnchor_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_chestAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_chestAnchor() ;

constexpr ::StringW const& __cordl_internal_get_chestAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_chestAnchor_path() ;

constexpr bool const& __cordl_internal_get_deprecatedWarning() const;

constexpr bool& __cordl_internal_get_deprecatedWarning() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_friendshipBraceletLeftOverride() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_friendshipBraceletLeftOverride() ;

constexpr ::StringW const& __cordl_internal_get_friendshipBraceletLeftOverride_path() const;

constexpr ::StringW& __cordl_internal_get_friendshipBraceletLeftOverride_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_friendshipBraceletRightOverride() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_friendshipBraceletRightOverride() ;

constexpr ::StringW const& __cordl_internal_get_friendshipBraceletRightOverride_path() const;

constexpr ::StringW& __cordl_internal_get_friendshipBraceletRightOverride_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_huntComputerAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_huntComputerAnchor() ;

constexpr ::StringW const& __cordl_internal_get_huntComputerAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_huntComputerAnchor_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leftArmAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leftArmAnchor() ;

constexpr ::StringW const& __cordl_internal_get_leftArmAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_leftArmAnchor_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_nameAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_nameAnchor() ;

constexpr ::StringW const& __cordl_internal_get_nameAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_nameAnchor_path() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_rightArmAnchor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_rightArmAnchor() ;

constexpr ::StringW const& __cordl_internal_get_rightArmAnchor_path() const;

constexpr ::StringW& __cordl_internal_get_rightArmAnchor_path() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots const& __cordl_internal_get_slot() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticSlots& __cordl_internal_get_slot() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_vrRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_vrRig() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anchorEnabled(bool  value) ;

constexpr void __cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value) ;

constexpr void __cordl_internal_set_badgeAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_badgeAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_builderWatchAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_builderWatchAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_chestAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_chestAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_deprecatedWarning(bool  value) ;

constexpr void __cordl_internal_set_friendshipBraceletLeftOverride(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletLeftOverride_path(::StringW  value) ;

constexpr void __cordl_internal_set_friendshipBraceletRightOverride(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_friendshipBraceletRightOverride_path(::StringW  value) ;

constexpr void __cordl_internal_set_huntComputerAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_huntComputerAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_leftArmAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leftArmAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_nameAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_nameAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_rightArmAnchor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_rightArmAnchor_path(::StringW  value) ;

constexpr void __cordl_internal_set_slot(::GlobalNamespace::CosmeticsController_CosmeticSlots  value) ;

constexpr void __cordl_internal_set_vrRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x5756a4c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::GTLogErrorLimiter* getStaticF_k_debugLogError_anchorOverridesNull() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

static inline void setStaticF_k_debugLogError_anchorOverridesNull(::GorillaTag::GTLogErrorLimiter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticAnchors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticAnchors", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticAnchors(CosmeticAnchors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticAnchors", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticAnchors(CosmeticAnchors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1319};

/// [SerializeField]
/// @brief Field deprecatedWarning, offset: 0x20, size: 0x1, def value: None
 bool  ___deprecatedWarning;

/// [SerializeField]
/// @brief Field nameAnchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___nameAnchor;

/// [SerializeField]
/// @brief Field nameAnchor_path, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___nameAnchor_path;

/// [SerializeField]
/// @brief Field leftArmAnchor, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leftArmAnchor;

/// [SerializeField]
/// @brief Field leftArmAnchor_path, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___leftArmAnchor_path;

/// [SerializeField]
/// @brief Field rightArmAnchor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___rightArmAnchor;

/// [SerializeField]
/// @brief Field rightArmAnchor_path, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___rightArmAnchor_path;

/// [SerializeField]
/// @brief Field chestAnchor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___chestAnchor;

/// [SerializeField]
/// @brief Field chestAnchor_path, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___chestAnchor_path;

/// [SerializeField]
/// @brief Field huntComputerAnchor, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___huntComputerAnchor;

/// [SerializeField]
/// @brief Field huntComputerAnchor_path, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___huntComputerAnchor_path;

/// [SerializeField]
/// @brief Field builderWatchAnchor, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___builderWatchAnchor;

/// [SerializeField]
/// @brief Field builderWatchAnchor_path, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___builderWatchAnchor_path;

/// [SerializeField]
/// @brief Field friendshipBraceletLeftOverride, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___friendshipBraceletLeftOverride;

/// [SerializeField]
/// @brief Field friendshipBraceletLeftOverride_path, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___friendshipBraceletLeftOverride_path;

/// [SerializeField]
/// @brief Field friendshipBraceletRightOverride, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___friendshipBraceletRightOverride;

/// [SerializeField]
/// @brief Field friendshipBraceletRightOverride_path, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___friendshipBraceletRightOverride_path;

/// [SerializeField]
/// @brief Field badgeAnchor, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___badgeAnchor;

/// [SerializeField]
/// @brief Field badgeAnchor_path, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___badgeAnchor_path;

/// [SerializeField]
/// @brief Field slot, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticSlots  ___slot;

/// @brief Field vrRig, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___vrRig;

/// @brief Field anchorOverrides, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  ___anchorOverrides;

/// @brief Field anchorEnabled, offset: 0xd0, size: 0x1, def value: None
 bool  ___anchorEnabled;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0xd1, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0xd4, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___deprecatedWarning) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___nameAnchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___nameAnchor_path) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___leftArmAnchor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___leftArmAnchor_path) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___rightArmAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___rightArmAnchor_path) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___chestAnchor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___chestAnchor_path) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___huntComputerAnchor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___huntComputerAnchor_path) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___builderWatchAnchor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___builderWatchAnchor_path) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___friendshipBraceletLeftOverride) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___friendshipBraceletLeftOverride_path) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___friendshipBraceletRightOverride) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___friendshipBraceletRightOverride_path) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___badgeAnchor) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___badgeAnchor_path) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___slot) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___vrRig) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___anchorOverrides) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ___anchorEnabled) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0xd1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticAnchors, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticAnchors) == 0xd8, "Size mismatch!");

} // namespace end def GlobalNamespace
