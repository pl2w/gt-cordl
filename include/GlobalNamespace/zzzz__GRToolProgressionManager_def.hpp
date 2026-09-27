#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolProgressionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolProgressionManager)
namespace GlobalNamespace {
class GRResearchStation;
}
namespace GlobalNamespace {
struct GRToolProgressionManager_EmployeeMetadata;
}
namespace GlobalNamespace {
struct GRToolProgressionManager_ToolParts;
}
namespace GlobalNamespace {
class GRToolProgressionManager_ToolProgressionMetaData;
}
namespace GlobalNamespace {
struct GRToolProgressionTree_EmployeeLevelRequirement;
}
namespace GlobalNamespace {
class GRToolProgressionTree_GRToolProgressionNode;
}
namespace GlobalNamespace {
class GRToolProgressionTree;
}
namespace GlobalNamespace {
class GRToolUpgradeStation;
}
namespace GlobalNamespace {
struct GRTool_GRToolType;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace GlobalNamespace {
struct ProgressionManager_DrillUpgradeLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolProgressionManager;
}
namespace GlobalNamespace {
class GRToolProgressionManager_ToolProgressionMetaData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolProgressionManager*);
MARK_REF_T(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionManager*, "", "GRToolProgressionManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*, "", "GRToolProgressionManager/ToolProgressionMetaData");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolProgressionManager
class CORDL_TYPE GRToolProgressionManager : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using EmployeeMetadata = ::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata;

using ToolParts = ::GlobalNamespace::GRToolProgressionManager_ToolParts;

using ToolProgressionMetaData = ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData;

/// @brief Field OnProgressionUpdated, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProgressionUpdated, put=__cordl_internal_set_OnProgressionUpdated)) ::System::Action*  OnProgressionUpdated;

/// @brief Field employeeLevelMetadata, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_employeeLevelMetadata, put=__cordl_internal_set_employeeLevelMetadata)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*  employeeLevelMetadata;

/// @brief Field partMetadata, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_partMetadata, put=__cordl_internal_set_partMetadata)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*  partMetadata;

/// @brief Field pendingTreeToProcess, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingTreeToProcess, put=__cordl_internal_set_pendingTreeToProcess)) bool  pendingTreeToProcess;

/// @brief Field pendingUpdateInventory, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingUpdateInventory, put=__cordl_internal_set_pendingUpdateInventory)) bool  pendingUpdateInventory;

/// @brief Field reactor, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field researchStations, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_researchStations, put=__cordl_internal_set_researchStations)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>*  researchStations;

/// @brief Field sendUpdate, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendUpdate, put=__cordl_internal_set_sendUpdate)) bool  sendUpdate;

/// @brief Field toolProgressionTree, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolProgressionTree, put=__cordl_internal_set_toolProgressionTree)) ::GlobalNamespace::GRToolProgressionTree*  toolProgressionTree;

/// @brief Field toolUpgradeStations, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_toolUpgradeStations, put=__cordl_internal_set_toolUpgradeStations)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>*  toolUpgradeStations;

/// @brief Method AttemptToUnlockPart, addr 0x58c164c, size 0xd0, virtual false, abstract: false, final false
inline void AttemptToUnlockPart(::GlobalNamespace::GRToolProgressionManager_ToolParts  part) ;

/// @brief Method GetCurrentEmployeeLevel, addr 0x58c17d0, size 0x18, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement GetCurrentEmployeeLevel() ;

/// @brief Method GetDrillLevel, addr 0x58c1c68, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::ProgressionManager_DrillUpgradeLevel GetDrillLevel() ;

/// @brief Method GetDropPodChasisLevel, addr 0x58c1be8, size 0x80, virtual false, abstract: false, final false
inline int32_t GetDropPodChasisLevel() ;

/// @brief Method GetDropPodLevel, addr 0x58c1bbc, size 0x2c, virtual false, abstract: false, final false
inline int32_t GetDropPodLevel() ;

/// @brief Method GetEmployeeLevelDisplayName, addr 0x58c1428, size 0x58, virtual false, abstract: false, final false
inline ::StringW GetEmployeeLevelDisplayName(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  employeeLevel) ;

/// @brief Method GetJuiceCostForDrillUpgrade, addr 0x58c1d0c, size 0x2c, virtual false, abstract: false, final false
inline int32_t GetJuiceCostForDrillUpgrade(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  upgradeLevel) ;

/// @brief Method GetNumberOfResearchPoints, addr 0x58c1480, size 0x18, virtual false, abstract: false, final false
inline int32_t GetNumberOfResearchPoints() ;

/// @brief Method GetPartMetadata, addr 0x58bf6f8, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* GetPartMetadata(::GlobalNamespace::GRToolProgressionManager_ToolParts  part) ;

/// @brief Method GetPartUnlockEmployeeRequiredLevel, addr 0x58c1794, size 0x3c, virtual false, abstract: false, final false
inline bool GetPartUnlockEmployeeRequiredLevel(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement>  level) ;

/// @brief Method GetPartUnlockJuiceCost, addr 0x58c1758, size 0x3c, virtual false, abstract: false, final false
inline bool GetPartUnlockJuiceCost(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<int32_t>  juiceCost) ;

/// @brief Method GetPartUnlockRequiredParentParts, addr 0x58c17e8, size 0x224, virtual false, abstract: false, final false
inline bool GetPartUnlockRequiredParentParts(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionManager_ToolParts>*>  requiredParts) ;

/// @brief Method GetPlayerShiftCredit, addr 0x58c1a0c, size 0x198, virtual false, abstract: false, final false
inline bool GetPlayerShiftCredit(::by_ref<int32_t>  playerShiftCredit) ;

/// @brief Method GetRecycleShiftCredit, addr 0x58c14c8, size 0xd0, virtual false, abstract: false, final false
inline int32_t GetRecycleShiftCredit(::GlobalNamespace::GRTool_GRToolType  tool) ;

/// @brief Method GetRequiredEmployeeLevel, addr 0x58c13c8, size 0x60, virtual false, abstract: false, final false
inline int32_t GetRequiredEmployeeLevel(::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement  employeeLevel) ;

/// @brief Method GetSRCostForDrillUpgradeLevel, addr 0x58c1d38, size 0x24, virtual false, abstract: false, final false
inline int32_t GetSRCostForDrillUpgradeLevel(::GlobalNamespace::ProgressionManager_DrillUpgradeLevel  level) ;

/// @brief Method GetShiftCreditCost, addr 0x58c1598, size 0xb4, virtual false, abstract: false, final false
inline bool GetShiftCreditCost(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<int32_t>  shiftCreditCost) ;

/// @brief Method GetSupportedTools, addr 0x58c1498, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRTool_GRToolType>* GetSupportedTools() ;

/// @brief Method GetToolUpgrades, addr 0x58c14b0, size 0x18, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolProgressionTree_GRToolProgressionNode*>* GetToolUpgrades(::GlobalNamespace::GRTool_GRToolType  tool) ;

/// @brief Method GetTreeId, addr 0x58c1ba4, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetTreeId() ;

/// @brief Method Init, addr 0x58bf228, size 0x284, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  ghostReactor) ;

/// @brief Method IsPartUnlocked, addr 0x58c171c, size 0x3c, virtual false, abstract: false, final false
inline bool IsPartUnlocked(::GlobalNamespace::GRToolProgressionManager_ToolParts  part, ::by_ref<bool>  unlocked) ;

static inline ::GlobalNamespace::GRToolProgressionManager* New_ctor() ;

/// @brief Method PopulateClubPartMetadata, addr 0x58bf768, size 0x304, virtual false, abstract: false, final false
inline void PopulateClubPartMetadata() ;

/// @brief Method PopulateCollectorPartMetadata, addr 0x58bfd70, size 0x304, virtual false, abstract: false, final false
inline void PopulateCollectorPartMetadata() ;

/// @brief Method PopulateDirectionalShieldPartMetadata, addr 0x58c067c, size 0x304, virtual false, abstract: false, final false
inline void PopulateDirectionalShieldPartMetadata() ;

/// @brief Method PopulateDockWristPartMetadata, addr 0x58c0d64, size 0x25c, virtual false, abstract: false, final false
inline void PopulateDockWristPartMetadata() ;

/// @brief Method PopulateDropPodPartMetadata, addr 0x58c0fc0, size 0x304, virtual false, abstract: false, final false
inline void PopulateDropPodPartMetadata() ;

/// @brief Method PopulateEmployeeLevelMetadata, addr 0x58bf50c, size 0x170, virtual false, abstract: false, final false
inline void PopulateEmployeeLevelMetadata() ;

/// @brief Method PopulateEnergyEfficiencyPartMetadata, addr 0x58c0980, size 0x2e0, virtual false, abstract: false, final false
inline void PopulateEnergyEfficiencyPartMetadata() ;

/// @brief Method PopulateFlashPartMetadata, addr 0x58bfa6c, size 0x304, virtual false, abstract: false, final false
inline void PopulateFlashPartMetadata() ;

/// @brief Method PopulateHocketStickMetadata, addr 0x58c12c4, size 0x104, virtual false, abstract: false, final false
inline void PopulateHocketStickMetadata() ;

/// @brief Method PopulateLanternPartMetadata, addr 0x58c0074, size 0x304, virtual false, abstract: false, final false
inline void PopulateLanternPartMetadata() ;

/// @brief Method PopulateRevivePartMetadata, addr 0x58c0c60, size 0x104, virtual false, abstract: false, final false
inline void PopulateRevivePartMetadata() ;

/// @brief Method PopulateShieldGunPartMetadata, addr 0x58c0378, size 0x304, virtual false, abstract: false, final false
inline void PopulateShieldGunPartMetadata() ;

/// @brief Method PopulateToolPartMetadata, addr 0x58bf4ac, size 0x60, virtual false, abstract: false, final false
inline void PopulateToolPartMetadata() ;

/// @brief Method SendMothershipUpdated, addr 0x58bf6ec, size 0xc, virtual false, abstract: false, final false
inline void SendMothershipUpdated() ;

/// @brief Method SetPendingTreeToProcess, addr 0x58bf210, size 0xc, virtual false, abstract: false, final false
inline void SetPendingTreeToProcess() ;

/// @brief Method Tick, addr 0x58bf67c, size 0x70, virtual true, abstract: false, final false
inline void Tick() ;

/// @brief Method UpdateInventory, addr 0x58bf21c, size 0xc, virtual false, abstract: false, final false
inline void UpdateInventory() ;

constexpr ::System::Action* const& __cordl_internal_get_OnProgressionUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnProgressionUpdated() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>* const& __cordl_internal_get_employeeLevelMetadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*& __cordl_internal_get_employeeLevelMetadata() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>* const& __cordl_internal_get_partMetadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*& __cordl_internal_get_partMetadata() ;

constexpr bool const& __cordl_internal_get_pendingTreeToProcess() const;

constexpr bool& __cordl_internal_get_pendingTreeToProcess() ;

constexpr bool const& __cordl_internal_get_pendingUpdateInventory() const;

constexpr bool& __cordl_internal_get_pendingUpdateInventory() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>* const& __cordl_internal_get_researchStations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>*& __cordl_internal_get_researchStations() ;

constexpr bool const& __cordl_internal_get_sendUpdate() const;

constexpr bool& __cordl_internal_get_sendUpdate() ;

constexpr ::GlobalNamespace::GRToolProgressionTree* const& __cordl_internal_get_toolProgressionTree() const;

constexpr ::GlobalNamespace::GRToolProgressionTree*& __cordl_internal_get_toolProgressionTree() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>* const& __cordl_internal_get_toolUpgradeStations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>*& __cordl_internal_get_toolUpgradeStations() ;

constexpr void __cordl_internal_set_OnProgressionUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_employeeLevelMetadata(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*  value) ;

constexpr void __cordl_internal_set_partMetadata(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*  value) ;

constexpr void __cordl_internal_set_pendingTreeToProcess(bool  value) ;

constexpr void __cordl_internal_set_pendingUpdateInventory(bool  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_researchStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>*  value) ;

constexpr void __cordl_internal_set_sendUpdate(bool  value) ;

constexpr void __cordl_internal_set_toolProgressionTree(::GlobalNamespace::GRToolProgressionTree*  value) ;

constexpr void __cordl_internal_set_toolUpgradeStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>*  value) ;

/// @brief Method .ctor, addr 0x58c1d5c, size 0x114, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnProgressionUpdated, addr 0x58bf0d8, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProgressionUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProgressionUpdated, addr 0x58bf174, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProgressionUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolProgressionManager(GRToolProgressionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolProgressionManager(GRToolProgressionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2073};

/// @brief Field employeeLevelMetadata, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionTree_EmployeeLevelRequirement,::GlobalNamespace::GRToolProgressionManager_EmployeeMetadata>*  ___employeeLevelMetadata;

/// @brief Field partMetadata, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRToolProgressionManager_ToolParts,::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData*>*  ___partMetadata;

/// @brief Field toolProgressionTree, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::GRToolProgressionTree*  ___toolProgressionTree;

/// @brief Field reactor, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

/// [SerializeField]
/// @brief Field researchStations, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRResearchStation>>*  ___researchStations;

/// [SerializeField]
/// @brief Field toolUpgradeStations, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradeStation>>*  ___toolUpgradeStations;

/// @brief Field pendingTreeToProcess, offset: 0x58, size: 0x1, def value: None
 bool  ___pendingTreeToProcess;

/// @brief Field pendingUpdateInventory, offset: 0x59, size: 0x1, def value: None
 bool  ___pendingUpdateInventory;

/// [CompilerGenerated]
/// @brief Field OnProgressionUpdated, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___OnProgressionUpdated;

/// @brief Field sendUpdate, offset: 0x68, size: 0x1, def value: None
 bool  ___sendUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___employeeLevelMetadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___partMetadata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___toolProgressionTree) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___reactor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___researchStations) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___toolUpgradeStations) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___pendingTreeToProcess) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___pendingUpdateInventory) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___OnProgressionUpdated) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager, ___sendUpdate) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionManager) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolProgressionManager/ToolProgressionMetaData
class CORDL_TYPE GRToolProgressionManager_ToolProgressionMetaData : public ::System::Object {
public:
// Declarations
/// @brief Field annotation, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_annotation, put=__cordl_internal_set_annotation)) ::StringW  annotation;

/// @brief Field description, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_description, put=__cordl_internal_set_description)) ::StringW  description;

/// @brief Field name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field shiftCreditCost, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_shiftCreditCost, put=__cordl_internal_set_shiftCreditCost)) int32_t  shiftCreditCost;

static inline ::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_annotation() const;

constexpr ::StringW& __cordl_internal_get_annotation() ;

constexpr ::StringW const& __cordl_internal_get_description() const;

constexpr ::StringW& __cordl_internal_get_description() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr int32_t const& __cordl_internal_get_shiftCreditCost() const;

constexpr int32_t& __cordl_internal_get_shiftCreditCost() ;

constexpr void __cordl_internal_set_annotation(::StringW  value) ;

constexpr void __cordl_internal_set_description(::StringW  value) ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_shiftCreditCost(int32_t  value) ;

/// @brief Method .ctor, addr 0x58c1e70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolProgressionManager_ToolProgressionMetaData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionManager_ToolProgressionMetaData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolProgressionManager_ToolProgressionMetaData(GRToolProgressionManager_ToolProgressionMetaData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolProgressionManager_ToolProgressionMetaData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolProgressionManager_ToolProgressionMetaData(GRToolProgressionManager_ToolProgressionMetaData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2070};

/// @brief Field name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field description, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___description;

/// @brief Field annotation, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___annotation;

/// @brief Field shiftCreditCost, offset: 0x28, size: 0x4, def value: None
 int32_t  ___shiftCreditCost;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData, ___description) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData, ___annotation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData, ___shiftCreditCost) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolProgressionManager_ToolProgressionMetaData) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
