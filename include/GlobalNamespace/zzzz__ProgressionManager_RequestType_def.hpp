#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressionManager_RequestType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProgressionManager_RequestType)
// Forward declare root types
namespace GlobalNamespace {
struct ProgressionManager_RequestType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProgressionManager_RequestType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressionManager_RequestType, "", "ProgressionManager/RequestType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ProgressionManager/RequestType
struct CORDL_TYPE ProgressionManager_RequestType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProgressionManager_RequestType_Unwrapped
enum struct __ProgressionManager_RequestType_Unwrapped : int32_t {
__E_GetProgression = static_cast<int32_t>(0x0),
__E_SetProgression = static_cast<int32_t>(0x1),
__E_UnlockProgressionTreeNode = static_cast<int32_t>(0x2),
__E_IncrementSIResource = static_cast<int32_t>(0x3),
__E_CompleteSIQuest = static_cast<int32_t>(0x4),
__E_CompleteSIBonus = static_cast<int32_t>(0x5),
__E_CollectSIIdol = static_cast<int32_t>(0x6),
__E_GetActiveSIQuests = static_cast<int32_t>(0x7),
__E_GetSIQuestsStatus = static_cast<int32_t>(0x8),
__E_ResetSIQuestsStatus = static_cast<int32_t>(0x9),
__E_PurchaseTechPoints = static_cast<int32_t>(0xa),
__E_PurchaseResources = static_cast<int32_t>(0xb),
__E_PurchaseShiftCreditCapIncrease = static_cast<int32_t>(0xc),
__E_PurchaseShiftCredit = static_cast<int32_t>(0xd),
__E_RegisterToGRShift = static_cast<int32_t>(0xe),
__E_GetJuicerStatus = static_cast<int32_t>(0xf),
__E_DepositCore = static_cast<int32_t>(0x10),
__E_PurchaseOverdrive = static_cast<int32_t>(0x11),
__E_GetShiftCredit = static_cast<int32_t>(0x12),
__E_SubtractShiftCredit = static_cast<int32_t>(0x13),
__E_AdvanceDockWristUpgrade = static_cast<int32_t>(0x14),
__E_GetDockWristUpgradeStatus = static_cast<int32_t>(0x15),
__E_PurchaseDrillUpgrade = static_cast<int32_t>(0x16),
__E_RecycleTool = static_cast<int32_t>(0x17),
__E_StartOfShift = static_cast<int32_t>(0x18),
__E_EndOfShiftReward = static_cast<int32_t>(0x19),
__E_GetGhostReactorStats = static_cast<int32_t>(0x1a),
__E_GetGhostReactorInventory = static_cast<int32_t>(0x1b),
__E_SetGhostReactorInventory = static_cast<int32_t>(0x1c),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProgressionManager_RequestType_Unwrapped () const noexcept {
return static_cast<__ProgressionManager_RequestType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProgressionManager_RequestType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProgressionManager_RequestType(int32_t  value__) noexcept;

/// @brief Field AdvanceDockWristUpgrade value: I32(20)
static ::GlobalNamespace::ProgressionManager_RequestType const AdvanceDockWristUpgrade;

/// @brief Field CollectSIIdol value: I32(6)
static ::GlobalNamespace::ProgressionManager_RequestType const CollectSIIdol;

/// @brief Field CompleteSIBonus value: I32(5)
static ::GlobalNamespace::ProgressionManager_RequestType const CompleteSIBonus;

/// @brief Field CompleteSIQuest value: I32(4)
static ::GlobalNamespace::ProgressionManager_RequestType const CompleteSIQuest;

/// @brief Field DepositCore value: I32(16)
static ::GlobalNamespace::ProgressionManager_RequestType const DepositCore;

/// @brief Field EndOfShiftReward value: I32(25)
static ::GlobalNamespace::ProgressionManager_RequestType const EndOfShiftReward;

/// @brief Field GetActiveSIQuests value: I32(7)
static ::GlobalNamespace::ProgressionManager_RequestType const GetActiveSIQuests;

/// @brief Field GetDockWristUpgradeStatus value: I32(21)
static ::GlobalNamespace::ProgressionManager_RequestType const GetDockWristUpgradeStatus;

/// @brief Field GetGhostReactorInventory value: I32(27)
static ::GlobalNamespace::ProgressionManager_RequestType const GetGhostReactorInventory;

/// @brief Field GetGhostReactorStats value: I32(26)
static ::GlobalNamespace::ProgressionManager_RequestType const GetGhostReactorStats;

/// @brief Field GetJuicerStatus value: I32(15)
static ::GlobalNamespace::ProgressionManager_RequestType const GetJuicerStatus;

/// @brief Field GetProgression value: I32(0)
static ::GlobalNamespace::ProgressionManager_RequestType const GetProgression;

/// @brief Field GetSIQuestsStatus value: I32(8)
static ::GlobalNamespace::ProgressionManager_RequestType const GetSIQuestsStatus;

/// @brief Field GetShiftCredit value: I32(18)
static ::GlobalNamespace::ProgressionManager_RequestType const GetShiftCredit;

/// @brief Field IncrementSIResource value: I32(3)
static ::GlobalNamespace::ProgressionManager_RequestType const IncrementSIResource;

/// @brief Field PurchaseDrillUpgrade value: I32(22)
static ::GlobalNamespace::ProgressionManager_RequestType const PurchaseDrillUpgrade;

/// @brief Field PurchaseOverdrive value: I32(17)
static ::GlobalNamespace::ProgressionManager_RequestType const PurchaseOverdrive;

/// @brief Field PurchaseResources value: I32(11)
static ::GlobalNamespace::ProgressionManager_RequestType const PurchaseResources;

/// @brief Field PurchaseShiftCredit value: I32(13)
static ::GlobalNamespace::ProgressionManager_RequestType const PurchaseShiftCredit;

/// @brief Field PurchaseShiftCreditCapIncrease value: I32(12)
static ::GlobalNamespace::ProgressionManager_RequestType const PurchaseShiftCreditCapIncrease;

/// @brief Field PurchaseTechPoints value: I32(10)
static ::GlobalNamespace::ProgressionManager_RequestType const PurchaseTechPoints;

/// @brief Field RecycleTool value: I32(23)
static ::GlobalNamespace::ProgressionManager_RequestType const RecycleTool;

/// @brief Field RegisterToGRShift value: I32(14)
static ::GlobalNamespace::ProgressionManager_RequestType const RegisterToGRShift;

/// @brief Field ResetSIQuestsStatus value: I32(9)
static ::GlobalNamespace::ProgressionManager_RequestType const ResetSIQuestsStatus;

/// @brief Field SetGhostReactorInventory value: I32(28)
static ::GlobalNamespace::ProgressionManager_RequestType const SetGhostReactorInventory;

/// @brief Field SetProgression value: I32(1)
static ::GlobalNamespace::ProgressionManager_RequestType const SetProgression;

/// @brief Field StartOfShift value: I32(24)
static ::GlobalNamespace::ProgressionManager_RequestType const StartOfShift;

/// @brief Field SubtractShiftCredit value: I32(19)
static ::GlobalNamespace::ProgressionManager_RequestType const SubtractShiftCredit;

/// @brief Field UnlockProgressionTreeNode value: I32(2)
static ::GlobalNamespace::ProgressionManager_RequestType const UnlockProgressionTreeNode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2402};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressionManager_RequestType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressionManager_RequestType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
