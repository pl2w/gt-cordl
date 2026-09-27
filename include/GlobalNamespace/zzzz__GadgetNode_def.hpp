#pragma once
// IWYU pragma private; include "GlobalNamespace/GadgetNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EAssetReleaseTier_def.hpp"
#include "GlobalNamespace/zzzz__ESuperGameModes_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceCost_def.hpp"
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "GlobalNamespace/zzzz__TechTreeNodeBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GadgetNode)
namespace GlobalNamespace {
class GadgetNode___c;
}
namespace GlobalNamespace {
class GadgetNode___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
struct SIResource_ResourceCost;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace GlobalNamespace {
class TechTreeNodeBase_Empty;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace XNode {
class NodePort;
}
namespace XNode {
class Node;
}
// Forward declare root types
namespace GlobalNamespace {
class GadgetNode;
}
namespace GlobalNamespace {
class GadgetNode___c;
}
namespace GlobalNamespace {
class GadgetNode___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GadgetNode*);
MARK_REF_T(::GlobalNamespace::GadgetNode___c*);
MARK_REF_T(::GlobalNamespace::GadgetNode___c__DisplayClass23_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GadgetNode*, "", "GadgetNode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GadgetNode___c*, "", "GadgetNode/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GadgetNode___c__DisplayClass23_0*, "", "GadgetNode/<>c__DisplayClass23_0");
// Dependencies EAssetReleaseTier, ESuperGameModes, SIResource::ResourceCost, SIUpgradeType, TechTreeNodeBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: GadgetNode
class CORDL_TYPE GadgetNode : public ::GlobalNamespace::TechTreeNodeBase {
public:
// Declarations
using __c = ::GlobalNamespace::GadgetNode___c;

using __c__DisplayClass23_0 = ::GlobalNamespace::GadgetNode___c__DisplayClass23_0;

 __declspec(property(get=get_IsDispensableGadget)) bool  IsDispensableGadget;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_ShowExcludedGameModes)) bool  ShowExcludedGameModes;

 __declspec(property(get=get_ShowGadgetPrefab)) bool  ShowGadgetPrefab;

 __declspec(property(get=get_ShowReleaseTier)) bool  ShowReleaseTier;

/// @brief Field costOverride, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_costOverride, put=__cordl_internal_set_costOverride)) bool  costOverride;

/// @brief Field description, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_description, put=__cordl_internal_set_description)) ::StringW  description;

/// @brief Field excludedGameModes, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_excludedGameModes, put=__cordl_internal_set_excludedGameModes)) ::GlobalNamespace::ESuperGameModes  excludedGameModes;

/// @brief Field input, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_input, put=__cordl_internal_set_input)) ::GlobalNamespace::TechTreeNodeBase_Empty*  input;

/// @brief Field nickName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_nickName, put=__cordl_internal_set_nickName)) ::StringW  nickName;

/// @brief Field nodeCost, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeCost, put=__cordl_internal_set_nodeCost)) ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  nodeCost;

/// @brief Field output, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_output, put=__cordl_internal_set_output)) ::GlobalNamespace::TechTreeNodeBase_Empty*  output;

/// @brief Field releaseTier, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseTier, put=__cordl_internal_set_releaseTier)) ::GlobalNamespace::EAssetReleaseTier  releaseTier;

/// @brief Field unlockedGadgetPrefab, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_unlockedGadgetPrefab, put=__cordl_internal_set_unlockedGadgetPrefab)) ::UnityW<::GlobalNamespace::GameEntity>  unlockedGadgetPrefab;

/// @brief Field upgradeType, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_upgradeType, put=__cordl_internal_set_upgradeType)) ::GlobalNamespace::SIUpgradeType  upgradeType;

/// @brief Method AssignParentUpgrades, addr 0x59d7bf8, size 0x224, virtual false, abstract: false, final false
inline void AssignParentUpgrades(::ArrayW<::GlobalNamespace::SIUpgradeType>  prerequisites) ;

/// @brief Method ConfigureFrom, addr 0x59d7b2c, size 0xcc, virtual false, abstract: false, final false
inline void ConfigureFrom(::GlobalNamespace::SITechTreeNode*  sourceNode) ;

/// @brief Method CostEquals, addr 0x59d9210, size 0xbc, virtual false, abstract: false, final false
inline bool CostEquals(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  cost) ;

/// @brief Method GenerateTechTreeNode, addr 0x59d82c0, size 0x110, virtual false, abstract: false, final false
inline ::GlobalNamespace::SITechTreeNode* GenerateTechTreeNode() ;

/// @brief Method GetChildNodes, addr 0x59d8e48, size 0x268, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* GetChildNodes() ;

/// @brief Method GetDepth, addr 0x59d83d0, size 0x3ac, virtual false, abstract: false, final false
inline int32_t GetDepth() ;

/// @brief Method GetParentNodes, addr 0x59d8be0, size 0x268, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* GetParentNodes() ;

/// @brief Method GetParentUpgradeTypes, addr 0x59d7e24, size 0x49c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::SIUpgradeType>* GetParentUpgradeTypes() ;

/// @brief Method GetTreeDepth, addr 0x59d877c, size 0x1c0, virtual false, abstract: false, final false
inline int32_t GetTreeDepth() ;

/// @brief Method GetTreeNodes, addr 0x59d893c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>* GetTreeNodes() ;

/// @brief Method GetTreeNodes, addr 0x59d89bc, size 0x224, virtual false, abstract: false, final false
inline void GetTreeNodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GadgetNode>>*  nodes) ;

/// @brief Method GetTreeWidth, addr 0x59d90b0, size 0x160, virtual false, abstract: false, final false
inline int32_t GetTreeWidth() ;

static inline ::GlobalNamespace::GadgetNode* New_ctor() ;

constexpr bool const& __cordl_internal_get_costOverride() const;

constexpr bool& __cordl_internal_get_costOverride() ;

constexpr ::StringW const& __cordl_internal_get_description() const;

constexpr ::StringW& __cordl_internal_get_description() ;

constexpr ::GlobalNamespace::ESuperGameModes const& __cordl_internal_get_excludedGameModes() const;

constexpr ::GlobalNamespace::ESuperGameModes& __cordl_internal_get_excludedGameModes() ;

constexpr ::GlobalNamespace::TechTreeNodeBase_Empty* const& __cordl_internal_get_input() const;

constexpr ::GlobalNamespace::TechTreeNodeBase_Empty*& __cordl_internal_get_input() ;

constexpr ::StringW const& __cordl_internal_get_nickName() const;

constexpr ::StringW& __cordl_internal_get_nickName() ;

constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost> const& __cordl_internal_get_nodeCost() const;

constexpr ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>& __cordl_internal_get_nodeCost() ;

constexpr ::GlobalNamespace::TechTreeNodeBase_Empty* const& __cordl_internal_get_output() const;

constexpr ::GlobalNamespace::TechTreeNodeBase_Empty*& __cordl_internal_get_output() ;

constexpr ::GlobalNamespace::EAssetReleaseTier const& __cordl_internal_get_releaseTier() const;

constexpr ::GlobalNamespace::EAssetReleaseTier& __cordl_internal_get_releaseTier() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_unlockedGadgetPrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_unlockedGadgetPrefab() ;

constexpr ::GlobalNamespace::SIUpgradeType const& __cordl_internal_get_upgradeType() const;

constexpr ::GlobalNamespace::SIUpgradeType& __cordl_internal_get_upgradeType() ;

constexpr void __cordl_internal_set_costOverride(bool  value) ;

constexpr void __cordl_internal_set_description(::StringW  value) ;

constexpr void __cordl_internal_set_excludedGameModes(::GlobalNamespace::ESuperGameModes  value) ;

constexpr void __cordl_internal_set_input(::GlobalNamespace::TechTreeNodeBase_Empty*  value) ;

constexpr void __cordl_internal_set_nickName(::StringW  value) ;

constexpr void __cordl_internal_set_nodeCost(::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  value) ;

constexpr void __cordl_internal_set_output(::GlobalNamespace::TechTreeNodeBase_Empty*  value) ;

constexpr void __cordl_internal_set_releaseTier(::GlobalNamespace::EAssetReleaseTier  value) ;

constexpr void __cordl_internal_set_unlockedGadgetPrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_upgradeType(::GlobalNamespace::SIUpgradeType  value) ;

/// @brief Method .ctor, addr 0x59d92cc, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_InEditor, addr 0x59d7948, size 0x48, virtual false, abstract: false, final false
static inline bool get_InEditor() ;

/// @brief Method get_IsDispensableGadget, addr 0x59d79a4, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsDispensableGadget() ;

/// @brief Method get_IsValid, addr 0x59d7990, size 0x14, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_ShowExcludedGameModes, addr 0x59d7a64, size 0x64, virtual false, abstract: false, final false
inline bool get_ShowExcludedGameModes() ;

/// @brief Method get_ShowGadgetPrefab, addr 0x59d7a00, size 0x64, virtual false, abstract: false, final false
inline bool get_ShowGadgetPrefab() ;

/// @brief Method get_ShowReleaseTier, addr 0x59d7ac8, size 0x64, virtual false, abstract: false, final false
inline bool get_ShowReleaseTier() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GadgetNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GadgetNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GadgetNode(GadgetNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GadgetNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GadgetNode(GadgetNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{297};

/// [Node::Input((XNode.Node::ShowBackingValue)1, (XNode.Node::ConnectionType)0, (XNode.Node::TypeConstraint)0, false)]
/// @brief Field input, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::TechTreeNodeBase_Empty*  ___input;

/// [Node::Output((XNode.Node::ShowBackingValue)0, (XNode.Node::ConnectionType)0, (XNode.Node::TypeConstraint)0, false)]
/// @brief Field output, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::TechTreeNodeBase_Empty*  ___output;

/// @brief Field upgradeType, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeType  ___upgradeType;

/// @brief Field nickName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___nickName;

/// [TextArea]
/// @brief Field description, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___description;

/// @brief Field nodeCost, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SIResource_ResourceCost>  ___nodeCost;

/// @brief Field costOverride, offset: 0x60, size: 0x1, def value: None
 bool  ___costOverride;

/// [Header("Prefab")]
/// @brief Field unlockedGadgetPrefab, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___unlockedGadgetPrefab;

/// @brief Field excludedGameModes, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::ESuperGameModes  ___excludedGameModes;

/// @brief Field releaseTier, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::EAssetReleaseTier  ___releaseTier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GadgetNode, ___input) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___output) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___upgradeType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___nickName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___description) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___nodeCost) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___costOverride) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___unlockedGadgetPrefab) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___excludedGameModes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GadgetNode, ___releaseTier) == 0x74, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GadgetNode) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies SIUpgradeType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GadgetNode/<>c__DisplayClass23_0
class CORDL_TYPE GadgetNode___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field id, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::GlobalNamespace::SIUpgradeType  id;

static inline ::GlobalNamespace::GadgetNode___c__DisplayClass23_0* New_ctor() ;

/// @brief Method <AssignParentUpgrades>b__0, addr 0x59d9368, size 0x8c, virtual false, abstract: false, final false
inline bool _AssignParentUpgrades_b__0(::XNode::Node*  n) ;

constexpr ::GlobalNamespace::SIUpgradeType const& __cordl_internal_get_id() const;

constexpr ::GlobalNamespace::SIUpgradeType& __cordl_internal_get_id() ;

constexpr void __cordl_internal_set_id(::GlobalNamespace::SIUpgradeType  value) ;

/// @brief Method .ctor, addr 0x59d7e1c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GadgetNode___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GadgetNode___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GadgetNode___c__DisplayClass23_0(GadgetNode___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GadgetNode___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GadgetNode___c__DisplayClass23_0(GadgetNode___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{296};

/// @brief Field id, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeType  ___id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GadgetNode___c__DisplayClass23_0, ___id) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GadgetNode___c__DisplayClass23_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GadgetNode/<>c
class CORDL_TYPE GadgetNode___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GadgetNode___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>*  __9__24_0;

static inline ::GlobalNamespace::GadgetNode___c* New_ctor() ;

/// @brief Method <GetParentUpgradeTypes>b__24_0, addr 0x59d9354, size 0x14, virtual false, abstract: false, final false
inline ::UnityW<::XNode::Node> _GetParentUpgradeTypes_b__24_0(::XNode::NodePort*  n) ;

/// @brief Method .ctor, addr 0x59d934c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GadgetNode___c* getStaticF___9() ;

static inline ::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>* getStaticF___9__24_0() ;

static inline void setStaticF___9(::GlobalNamespace::GadgetNode___c*  value) ;

static inline void setStaticF___9__24_0(::System::Func_2<::XNode::NodePort*,::UnityW<::XNode::Node>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GadgetNode___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GadgetNode___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GadgetNode___c(GadgetNode___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GadgetNode___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GadgetNode___c(GadgetNode___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GadgetNode___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
