#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SITechTreeNode)
namespace GlobalNamespace {
struct EAssetReleaseTier;
}
namespace GlobalNamespace {
class GameEntity;
}
// Forward declare root types
namespace GlobalNamespace {
class SITechTreeNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITechTreeNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeNode*, "", "SITechTreeNode");
// Dependencies EAssetReleaseTier, ESuperGameModes, SIResource::ResourceCost, SIUpgradeType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeNode
class CORDL_TYPE SITechTreeNode : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EdReleaseTier, put=set_EdReleaseTier)) ::GlobalNamespace::EAssetReleaseTier  EdReleaseTier;

 __declspec(property(get=get_IsAllowed)) bool  IsAllowed;

 __declspec(property(get=get_IsDispensableGadget)) bool  IsDispensableGadget;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field costOverride, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_costOverride, put=__cordl_internal_set_costOverride)) bool  costOverride;

/// @brief Field description, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_description, put=__cordl_internal_set_description)) ::StringW  description;

/// @brief Field excludedGameModes, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_excludedGameModes, put=__cordl_internal_set_excludedGameModes)) ::GlobalNamespace::ESuperGameModes  excludedGameModes;

/// @brief Field m_edReleaseTier, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_edReleaseTier, put=__cordl_internal_set_m_edReleaseTier)) ::GlobalNamespace::EAssetReleaseTier  m_edReleaseTier;

/// @brief Field nickName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nickName, put=__cordl_internal_set_nickName)) ::StringW  nickName;

/// @brief Field nodeCost, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeCost, put=__cordl_internal_set_nodeCost)) ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  nodeCost;

/// @brief Field parentUpgrades, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentUpgrades, put=__cordl_internal_set_parentUpgrades)) ::ArrayW<::GlobalNamespace::SIUpgradeType>  parentUpgrades;

/// @brief Field unlockedGadgetPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedGadgetPrefab, put=__cordl_internal_set_unlockedGadgetPrefab)) ::UnityW<::GlobalNamespace::GameEntity>  unlockedGadgetPrefab;

/// @brief Field upgradeType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_upgradeType, put=__cordl_internal_set_upgradeType)) ::GlobalNamespace::SIUpgradeType  upgradeType;

static inline ::GlobalNamespace::SITechTreeNode* New_ctor() ;

constexpr bool const& __cordl_internal_get_costOverride() const;

constexpr bool& __cordl_internal_get_costOverride() ;

constexpr ::StringW const& __cordl_internal_get_description() const;

constexpr ::StringW& __cordl_internal_get_description() ;

constexpr ::GlobalNamespace::ESuperGameModes const& __cordl_internal_get_excludedGameModes() const;

constexpr ::GlobalNamespace::ESuperGameModes& __cordl_internal_get_excludedGameModes() ;

constexpr ::GlobalNamespace::EAssetReleaseTier const& __cordl_internal_get_m_edReleaseTier() const;

constexpr ::GlobalNamespace::EAssetReleaseTier& __cordl_internal_get_m_edReleaseTier() ;

constexpr ::StringW const& __cordl_internal_get_nickName() const;

constexpr ::StringW& __cordl_internal_get_nickName() ;

constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost> const& __cordl_internal_get_nodeCost() const;

constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>& __cordl_internal_get_nodeCost() ;

constexpr ::ArrayW<::GlobalNamespace::SIUpgradeType> const& __cordl_internal_get_parentUpgrades() const;

constexpr ::ArrayW<::GlobalNamespace::SIUpgradeType>& __cordl_internal_get_parentUpgrades() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_unlockedGadgetPrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_unlockedGadgetPrefab() ;

constexpr ::GlobalNamespace::SIUpgradeType const& __cordl_internal_get_upgradeType() const;

constexpr ::GlobalNamespace::SIUpgradeType& __cordl_internal_get_upgradeType() ;

constexpr void __cordl_internal_set_costOverride(bool  value) ;

constexpr void __cordl_internal_set_description(::StringW  value) ;

constexpr void __cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value) ;

constexpr void __cordl_internal_set_m_edReleaseTier(::GlobalNamespace::EAssetReleaseTier  value) ;

constexpr void __cordl_internal_set_nickName(::StringW  value) ;

constexpr void __cordl_internal_set_nodeCost(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  value) ;

constexpr void __cordl_internal_set_parentUpgrades(::ArrayW<::GlobalNamespace::SIUpgradeType>  value) ;

constexpr void __cordl_internal_set_unlockedGadgetPrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_upgradeType(::GlobalNamespace::SIUpgradeType  value) ;

/// @brief Method .ctor, addr 0x5aef5d4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EdReleaseTier, addr 0x5aef464, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EAssetReleaseTier get_EdReleaseTier() ;

/// @brief Method get_IsAllowed, addr 0x5aef4ec, size 0x64, virtual false, abstract: false, final false
inline bool get_IsAllowed() ;

/// @brief Method get_IsDispensableGadget, addr 0x5aef550, size 0x84, virtual false, abstract: false, final false
inline bool get_IsDispensableGadget() ;

/// @brief Method get_IsValid, addr 0x5aef474, size 0x78, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method set_EdReleaseTier, addr 0x5aef46c, size 0x8, virtual false, abstract: false, final false
inline void set_EdReleaseTier(::GlobalNamespace::EAssetReleaseTier  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeNode(SITechTreeNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeNode(SITechTreeNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{359};

/// [SerializeField]
/// @brief Field m_edReleaseTier, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::EAssetReleaseTier  ___m_edReleaseTier;

/// @brief Field upgradeType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeType  ___upgradeType;

/// @brief Field nickName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___nickName;

/// @brief Field description, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___description;

/// @brief Field excludedGameModes, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ESuperGameModes  ___excludedGameModes;

/// @brief Field parentUpgrades, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIUpgradeType>  ___parentUpgrades;

/// @brief Field unlockedGadgetPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___unlockedGadgetPrefab;

/// @brief Field nodeCost, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  ___nodeCost;

/// @brief Field costOverride, offset: 0x48, size: 0x1, def value: None
 bool  ___costOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___m_edReleaseTier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___upgradeType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___nickName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___description) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___excludedGameModes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___parentUpgrades) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___unlockedGadgetPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___nodeCost) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeNode, ___costOverride) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeNode) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
