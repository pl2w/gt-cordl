#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolProgressionTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionTree_EmployeeLevelRequirement_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolProgressionTree)
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
class GRToolProgressionManager_ToolProgressionMetaData;
}
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
struct GRToolProgressionTree_EmployeeLevelRequirement;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionNode;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionRawNode;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
class UserHydratedNodeDefinition;
}
namespace GlobalNamespace {
class UserHydratedProgressionTreeResponse;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolProgressionTree;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionNode;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionRawNode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolProgressionTree*);
MARK_REF_T(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*);
MARK_REF_T(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionTree*, "", "GRToolProgressionTree");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*, "", "GRToolProgressionTree/GRToolProgressionNode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*, "", "GRToolProgressionTree/GRToolProgressionRawNode");
// Dependencies GRToolProgressionManager::ToolParts, GRToolProgressionTree::EmployeeLevelRequirement, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolProgressionTree
class CORDL_TYPE GRToolProgressionTree : public ::System::Object {
public:
// Declarations
using EmployeeLevelRequirement = ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement;

using GRToolProgressionNode = ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode;

using GRToolProgressionRawNode = ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode;

/// @brief Field autoUnlockNodeId, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_autoUnlockNodeId, put=__cordl_internal_set_autoUnlockNodeId)) ::StringW  autoUnlockNodeId;

/// @brief Field currentEmploymentLevel, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentEmploymentLevel, put=__cordl_internal_set_currentEmploymentLevel)) ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  currentEmploymentLevel;

/// @brief Field currentResearchPoints, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentResearchPoints, put=__cordl_internal_set_currentResearchPoints)) int32_t  currentResearchPoints;

/// @brief Field fullTimeEntitlement, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_fullTimeEntitlement, put=__cordl_internal_set_fullTimeEntitlement)) ::StringW  fullTimeEntitlement;

/// @brief Field internEntitlement, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_internEntitlement, put=__cordl_internal_set_internEntitlement)) ::StringW  internEntitlement;

/// @brief Field manager, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_manager, put=__cordl_internal_set_manager)) ::UnityW<::GlobalNamespace::GRToolProgressionManager>  manager;

/// @brief Field nodeTree, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeTree, put=__cordl_internal_set_nodeTree)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*  nodeTree;

/// @brief Field partMapping, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_partMapping, put=__cordl_internal_set_partMapping)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>*  partMapping;

/// @brief Field partTimeEntitlement, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_partTimeEntitlement, put=__cordl_internal_set_partTimeEntitlement)) ::StringW  partTimeEntitlement;

/// @brief Field partTree, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_partTree, put=__cordl_internal_set_partTree)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  partTree;

/// @brief Field pendingPartUnlock, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_pendingPartUnlock, put=__cordl_internal_set_pendingPartUnlock)) ::GlobalNamespace::GRToolProgressionManager_ToolParts  pendingPartUnlock;

/// @brief Field reactor, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field researchPointsEntitlement, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_researchPointsEntitlement, put=__cordl_internal_set_researchPointsEntitlement)) ::StringW  researchPointsEntitlement;

/// @brief Field toolMapping, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolMapping, put=__cordl_internal_set_toolMapping)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>*  toolMapping;

/// @brief Field toolTree, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolTree, put=__cordl_internal_set_toolTree)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  toolTree;

/// @brief Field treeId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeId, put=__cordl_internal_set_treeId)) ::StringW  treeId;

/// @brief Field treeName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeName, put=__cordl_internal_set_treeName)) ::StringW  treeName;

/// @brief Method AddFakeNodes, addr 0x58c397c, size 0x514, virtual false, abstract: false, final false
inline void AddFakeNodes() ;

/// @brief Method AddToolProgressionChildren, addr 0x58c3150, size 0x1cc, virtual false, abstract: false, final false
inline void AddToolProgressionChildren(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  currentNode, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*>  list) ;

/// @brief Method AttemptToUnlockPart, addr 0x58c52cc, size 0xe4, virtual false, abstract: false, final false
inline void AttemptToUnlockPart(::GlobalNamespace::GRToolProgressionManager_ToolParts  part) ;

/// @brief Method GetCurrentEmploymentLevel, addr 0x58c396c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetCurrentEmploymentLevel() ;

/// @brief Method GetEmployeeLevel, addr 0x58c4548, size 0x1e0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetEmployeeLevel(::System::Collections::Generic::List_1<::StringW>*  rawRequiredEntitlements) ;

/// @brief Method GetNumberOfResearchPoints, addr 0x58c3974, size 0x8, virtual false, abstract: false, final false
inline int32_t GetNumberOfResearchPoints() ;

/// @brief Method GetPartNode, addr 0x58c33b0, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GetPartNode(::GlobalNamespace::GRToolProgressionManager_ToolParts  part) ;

/// @brief Method GetSupportedTools, addr 0x58c2e98, size 0x1f4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* GetSupportedTools() ;

/// @brief Method GetToolNode, addr 0x58c331c, size 0x94, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* GetToolNode(::GlobalNamespace::GRTool_GRToolType  tool) ;

/// @brief Method GetToolUpgrades, addr 0x58c308c, size 0xc4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetToolUpgrades(::GlobalNamespace::GRTool_GRToolType  tool) ;

/// @brief Method GetTreeId, addr 0x58c2e90, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetTreeId() ;

/// @brief Method Init, addr 0x58c2c34, size 0x1c4, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  ghostReactor, ::GlobalNamespace::GRToolProgressionManager*  toolManager) ;

/// @brief Method InitializeClubPartMapping, addr 0x58c2384, size 0xf0, virtual false, abstract: false, final false
inline void InitializeClubPartMapping() ;

/// @brief Method InitializeCollectorPartMapping, addr 0x58c25d0, size 0xf0, virtual false, abstract: false, final false
inline void InitializeCollectorPartMapping() ;

/// @brief Method InitializeDirectionalShieldPartMapping, addr 0x58c28a0, size 0xf0, virtual false, abstract: false, final false
inline void InitializeDirectionalShieldPartMapping() ;

/// @brief Method InitializeDockWristPartMapping, addr 0x58c2a80, size 0xc4, virtual false, abstract: false, final false
inline void InitializeDockWristPartMapping() ;

/// @brief Method InitializeDropPodPartMapping, addr 0x58c2b44, size 0xf0, virtual false, abstract: false, final false
inline void InitializeDropPodPartMapping() ;

/// @brief Method InitializeEnergyEfficiencyPartMapping, addr 0x58c2990, size 0xf0, virtual false, abstract: false, final false
inline void InitializeEnergyEfficiencyPartMapping() ;

/// @brief Method InitializeFlashPartMapping, addr 0x58c2474, size 0xf0, virtual false, abstract: false, final false
inline void InitializeFlashPartMapping() ;

/// @brief Method InitializeLanternPartMapping, addr 0x58c26c0, size 0xf0, virtual false, abstract: false, final false
inline void InitializeLanternPartMapping() ;

/// @brief Method InitializeRevivePartMapping, addr 0x58c2564, size 0x6c, virtual false, abstract: false, final false
inline void InitializeRevivePartMapping() ;

/// @brief Method InitializeShieldGunPartMapping, addr 0x58c27b0, size 0xf0, virtual false, abstract: false, final false
inline void InitializeShieldGunPartMapping() ;

/// @brief Method InitializeToolMapping, addr 0x58c218c, size 0x1f8, virtual false, abstract: false, final false
inline void InitializeToolMapping() ;

static inline ::GlobalNamespace::GRToolProgressionTree* New_ctor() ;

/// @brief Method OnInventoryUpdated, addr 0x58c37f0, size 0x17c, virtual false, abstract: false, final false
inline void OnInventoryUpdated() ;

/// @brief Method OnProgressionTreeUpdate, addr 0x58c3444, size 0x88, virtual false, abstract: false, final false
inline void OnProgressionTreeUpdate() ;

/// @brief Method PopulateMetadata, addr 0x58c4728, size 0x17c, virtual false, abstract: false, final false
inline void PopulateMetadata() ;

/// @brief Method ProcessNodes, addr 0x58c3f3c, size 0x60c, virtual false, abstract: false, final false
inline void ProcessNodes() ;

/// @brief Method ProcessToolProgressionTree, addr 0x58c34cc, size 0x324, virtual false, abstract: false, final false
inline void ProcessToolProgressionTree(::GlobalNamespace::UserHydratedProgressionTreeResponse*  tree) ;

/// @brief Method ProcessTreeNode, addr 0x58c48a4, size 0x948, virtual false, abstract: false, final false
inline void ProcessTreeNode(::GlobalNamespace::UserHydratedNodeDefinition*  treeNode) ;

/// @brief Method RefreshProgressionTree, addr 0x58c2df8, size 0x4c, virtual false, abstract: false, final false
inline void RefreshProgressionTree() ;

/// @brief Method RefreshUserInventory, addr 0x58c2e44, size 0x4c, virtual false, abstract: false, final false
inline void RefreshUserInventory() ;

constexpr ::StringW const& __cordl_internal_get_autoUnlockNodeId() const;

constexpr ::StringW& __cordl_internal_get_autoUnlockNodeId() ;

constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const& __cordl_internal_get_currentEmploymentLevel() const;

constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement& __cordl_internal_get_currentEmploymentLevel() ;

constexpr int32_t const& __cordl_internal_get_currentResearchPoints() const;

constexpr int32_t& __cordl_internal_get_currentResearchPoints() ;

constexpr ::StringW const& __cordl_internal_get_fullTimeEntitlement() const;

constexpr ::StringW& __cordl_internal_get_fullTimeEntitlement() ;

constexpr ::StringW const& __cordl_internal_get_internEntitlement() const;

constexpr ::StringW& __cordl_internal_get_internEntitlement() ;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& __cordl_internal_get_manager() const;

constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& __cordl_internal_get_manager() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>* const& __cordl_internal_get_nodeTree() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*& __cordl_internal_get_nodeTree() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>* const& __cordl_internal_get_partMapping() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>*& __cordl_internal_get_partMapping() ;

constexpr ::StringW const& __cordl_internal_get_partTimeEntitlement() const;

constexpr ::StringW& __cordl_internal_get_partTimeEntitlement() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& __cordl_internal_get_partTree() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& __cordl_internal_get_partTree() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& __cordl_internal_get_pendingPartUnlock() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& __cordl_internal_get_pendingPartUnlock() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::StringW const& __cordl_internal_get_researchPointsEntitlement() const;

constexpr ::StringW& __cordl_internal_get_researchPointsEntitlement() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>* const& __cordl_internal_get_toolMapping() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>*& __cordl_internal_get_toolMapping() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& __cordl_internal_get_toolTree() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& __cordl_internal_get_toolTree() ;

constexpr ::StringW const& __cordl_internal_get_treeId() const;

constexpr ::StringW& __cordl_internal_get_treeId() ;

constexpr ::StringW const& __cordl_internal_get_treeName() const;

constexpr ::StringW& __cordl_internal_get_treeName() ;

constexpr void __cordl_internal_set_autoUnlockNodeId(::StringW  value) ;

constexpr void __cordl_internal_set_currentEmploymentLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  value) ;

constexpr void __cordl_internal_set_currentResearchPoints(int32_t  value) ;

constexpr void __cordl_internal_set_fullTimeEntitlement(::StringW  value) ;

constexpr void __cordl_internal_set_internEntitlement(::StringW  value) ;

constexpr void __cordl_internal_set_manager(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value) ;

constexpr void __cordl_internal_set_nodeTree(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*  value) ;

constexpr void __cordl_internal_set_partMapping(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>*  value) ;

constexpr void __cordl_internal_set_partTimeEntitlement(::StringW  value) ;

constexpr void __cordl_internal_set_partTree(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value) ;

constexpr void __cordl_internal_set_pendingPartUnlock(::GlobalNamespace::GRToolProgressionManager_ToolParts  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_researchPointsEntitlement(::StringW  value) ;

constexpr void __cordl_internal_set_toolMapping(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>*  value) ;

constexpr void __cordl_internal_set_toolTree(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value) ;

constexpr void __cordl_internal_set_treeId(::StringW  value) ;

constexpr void __cordl_internal_set_treeName(::StringW  value) ;

/// @brief Method .ctor, addr 0x58c1e78, size 0x314, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolProgressionTree(GRToolProgressionTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolProgressionTree(GRToolProgressionTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2077};

/// @brief Field treeName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___treeName;

/// @brief Field treeId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___treeId;

/// @brief Field researchPointsEntitlement, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___researchPointsEntitlement;

/// @brief Field toolTree, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRTool_GRToolType,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  ___toolTree;

/// @brief Field partTree, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  ___partTree;

/// @brief Field nodeTree, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode*>*  ___nodeTree;

/// @brief Field toolMapping, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRTool_GRToolType>*  ___toolMapping;

/// @brief Field partMapping, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::GRToolProgressionManager_ToolParts>*  ___partMapping;

/// @brief Field autoUnlockNodeId, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___autoUnlockNodeId;

/// @brief Field currentResearchPoints, offset: 0x58, size: 0x4, def value: None
 int32_t  ___currentResearchPoints;

/// @brief Field reactor, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// @brief Field manager, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRToolProgressionManager>  ___manager;

/// @brief Field currentEmploymentLevel, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  ___currentEmploymentLevel;

/// @brief Field internEntitlement, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___internEntitlement;

/// @brief Field partTimeEntitlement, offset: 0x80, size: 0x8, def value: None
 ::StringW  ___partTimeEntitlement;

/// @brief Field fullTimeEntitlement, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___fullTimeEntitlement;

/// @brief Field pendingPartUnlock, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolParts  ___pendingPartUnlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___treeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___treeId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___researchPointsEntitlement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___toolTree) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___partTree) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___nodeTree) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___toolMapping) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___partMapping) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___autoUnlockNodeId) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___currentResearchPoints) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___reactor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___manager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___currentEmploymentLevel) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___internEntitlement) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___partTimeEntitlement) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___fullTimeEntitlement) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree, ___pendingPartUnlock) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionTree) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolProgressionTree/GRToolProgressionRawNode
class CORDL_TYPE GRToolProgressionTree_GRToolProgressionRawNode : public ::System::Object {
public:
// Declarations
/// @brief Field progressionNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressionNode, put=__cordl_internal_set_progressionNode)) ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  progressionNode;

/// @brief Field requiredByIds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_requiredByIds, put=__cordl_internal_set_requiredByIds)) ::System::Collections::Generic::List_1<::StringW>*  requiredByIds;

/// @brief Field requiredEntitlements, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_requiredEntitlements, put=__cordl_internal_set_requiredEntitlements)) ::System::Collections::Generic::List_1<::StringW>*  requiredEntitlements;

static inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode* New_ctor() ;

constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* const& __cordl_internal_get_progressionNode() const;

constexpr ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*& __cordl_internal_get_progressionNode() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_requiredByIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_requiredByIds() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_requiredEntitlements() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_requiredEntitlements() ;

constexpr void __cordl_internal_set_progressionNode(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  value) ;

constexpr void __cordl_internal_set_requiredByIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_requiredEntitlements(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x58c51ec, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionTree_GRToolProgressionRawNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionTree_GRToolProgressionRawNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolProgressionTree_GRToolProgressionRawNode(GRToolProgressionTree_GRToolProgressionRawNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionTree_GRToolProgressionRawNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolProgressionTree_GRToolProgressionRawNode(GRToolProgressionTree_GRToolProgressionRawNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2076};

/// @brief Field progressionNode, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*  ___progressionNode;

/// @brief Field requiredByIds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___requiredByIds;

/// @brief Field requiredEntitlements, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___requiredEntitlements;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode, ___progressionNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode, ___requiredByIds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode, ___requiredEntitlements) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionRawNode) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRToolProgressionManager::ToolParts, GRToolProgressionTree::EmployeeLevelRequirement, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolProgressionTree/GRToolProgressionNode
class CORDL_TYPE GRToolProgressionTree_GRToolProgressionNode : public ::System::Object {
public:
// Declarations
/// @brief Field children, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_children, put=__cordl_internal_set_children)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  children;

/// @brief Field id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field parents, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_parents, put=__cordl_internal_set_parents)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  parents;

/// @brief Field partMetadata, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_partMetadata, put=__cordl_internal_set_partMetadata)) ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  partMetadata;

/// @brief Field requiredEmployeeLevel, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredEmployeeLevel, put=__cordl_internal_set_requiredEmployeeLevel)) ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  requiredEmployeeLevel;

/// @brief Field researchCost, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_researchCost, put=__cordl_internal_set_researchCost)) int32_t  researchCost;

/// @brief Field rootNode, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_rootNode, put=__cordl_internal_set_rootNode)) bool  rootNode;

/// @brief Field type, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::GRToolProgressionManager_ToolParts  type;

/// @brief Field unlocked, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_unlocked, put=__cordl_internal_set_unlocked)) bool  unlocked;

static inline ::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& __cordl_internal_get_children() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& __cordl_internal_get_children() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* const& __cordl_internal_get_parents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*& __cordl_internal_get_parents() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* const& __cordl_internal_get_partMetadata() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*& __cordl_internal_get_partMetadata() ;

constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement const& __cordl_internal_get_requiredEmployeeLevel() const;

constexpr ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement& __cordl_internal_get_requiredEmployeeLevel() ;

constexpr int32_t const& __cordl_internal_get_researchCost() const;

constexpr int32_t& __cordl_internal_get_researchCost() ;

constexpr bool const& __cordl_internal_get_rootNode() const;

constexpr bool& __cordl_internal_get_rootNode() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& __cordl_internal_get_type() ;

constexpr bool const& __cordl_internal_get_unlocked() const;

constexpr bool& __cordl_internal_get_unlocked() ;

constexpr void __cordl_internal_set_children(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_parents(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  value) ;

constexpr void __cordl_internal_set_partMetadata(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  value) ;

constexpr void __cordl_internal_set_requiredEmployeeLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  value) ;

constexpr void __cordl_internal_set_researchCost(int32_t  value) ;

constexpr void __cordl_internal_set_rootNode(bool  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::GRToolProgressionManager_ToolParts  value) ;

constexpr void __cordl_internal_set_unlocked(bool  value) ;

/// @brief Method .ctor, addr 0x58c3e90, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionTree_GRToolProgressionNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionTree_GRToolProgressionNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolProgressionTree_GRToolProgressionNode(GRToolProgressionTree_GRToolProgressionNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionTree_GRToolProgressionNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolProgressionTree_GRToolProgressionNode(GRToolProgressionTree_GRToolProgressionNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2075};

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field unlocked, offset: 0x20, size: 0x1, def value: None
 bool  ___unlocked;

/// @brief Field researchCost, offset: 0x24, size: 0x4, def value: None
 int32_t  ___researchCost;

/// @brief Field rootNode, offset: 0x28, size: 0x1, def value: None
 bool  ___rootNode;

/// @brief Field type, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolParts  ___type;

/// @brief Field partMetadata, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*  ___partMetadata;

/// @brief Field children, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  ___children;

/// @brief Field parents, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>*  ___parents;

/// @brief Field requiredEmployeeLevel, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  ___requiredEmployeeLevel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___unlocked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___researchCost) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___rootNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___type) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___partMetadata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___children) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___parents) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode, ___requiredEmployeeLevel) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
