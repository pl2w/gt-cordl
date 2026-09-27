#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorManager_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorManager_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorManager_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorManager_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorManager_RPC, "", "GhostReactorManager/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorManager/RPC
struct CORDL_TYPE GhostReactorManager_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorManager_RPC_Unwrapped
enum struct __GhostReactorManager_RPC_Unwrapped : int32_t {
__E_ApplyCollectItem = static_cast<int32_t>(0x0),
__E_ApplyChargeTool = static_cast<int32_t>(0x1),
__E_ApplyDepositCurrency = static_cast<int32_t>(0x2),
__E_ApplyPlayerRevived = static_cast<int32_t>(0x3),
__E_GrantPlayerShield = static_cast<int32_t>(0x4),
__E_RequestFireProjectile = static_cast<int32_t>(0x5),
__E_ApplyShiftStart = static_cast<int32_t>(0x6),
__E_ApplyShiftEnd = static_cast<int32_t>(0x7),
__E_ToolPurchaseResponse = static_cast<int32_t>(0x8),
__E_ApplyBreakableBroken = static_cast<int32_t>(0x9),
__E_EntityEnteredDropZone = static_cast<int32_t>(0xa),
__E_PromotionBotResponse = static_cast<int32_t>(0xb),
__E_DistillItem = static_cast<int32_t>(0xc),
__E_ApplySentientCoreDestination = static_cast<int32_t>(0xd),
__E_Handprint = static_cast<int32_t>(0xe),
__E_ApplyRecycleItem = static_cast<int32_t>(0xf),
__E_ApplRecycleScanItem = static_cast<int32_t>(0x10),
__E_SeedExtractorAction = static_cast<int32_t>(0x11),
__E_ToolUpgradeStationAction = static_cast<int32_t>(0x12),
__E_SendMothershipId = static_cast<int32_t>(0x13),
__E_RefreshShiftCredit = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorManager_RPC_Unwrapped () const noexcept {
return static_cast<__GhostReactorManager_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorManager_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorManager_RPC(int32_t  value__) noexcept;

/// @brief Field ApplRecycleScanItem value: I32(16)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplRecycleScanItem;

/// @brief Field ApplyBreakableBroken value: I32(9)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyBreakableBroken;

/// @brief Field ApplyChargeTool value: I32(1)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyChargeTool;

/// @brief Field ApplyCollectItem value: I32(0)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyCollectItem;

/// @brief Field ApplyDepositCurrency value: I32(2)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyDepositCurrency;

/// @brief Field ApplyPlayerRevived value: I32(3)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyPlayerRevived;

/// @brief Field ApplyRecycleItem value: I32(15)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyRecycleItem;

/// @brief Field ApplySentientCoreDestination value: I32(13)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplySentientCoreDestination;

/// @brief Field ApplyShiftEnd value: I32(7)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyShiftEnd;

/// @brief Field ApplyShiftStart value: I32(6)
static ::GlobalNamespace::GhostReactorManager_RPC const ApplyShiftStart;

/// @brief Field DistillItem value: I32(12)
static ::GlobalNamespace::GhostReactorManager_RPC const DistillItem;

/// @brief Field EntityEnteredDropZone value: I32(10)
static ::GlobalNamespace::GhostReactorManager_RPC const EntityEnteredDropZone;

/// @brief Field GrantPlayerShield value: I32(4)
static ::GlobalNamespace::GhostReactorManager_RPC const GrantPlayerShield;

/// @brief Field Handprint value: I32(14)
static ::GlobalNamespace::GhostReactorManager_RPC const Handprint;

/// @brief Field PromotionBotResponse value: I32(11)
static ::GlobalNamespace::GhostReactorManager_RPC const PromotionBotResponse;

/// @brief Field RefreshShiftCredit value: I32(20)
static ::GlobalNamespace::GhostReactorManager_RPC const RefreshShiftCredit;

/// @brief Field RequestFireProjectile value: I32(5)
static ::GlobalNamespace::GhostReactorManager_RPC const RequestFireProjectile;

/// @brief Field SeedExtractorAction value: I32(17)
static ::GlobalNamespace::GhostReactorManager_RPC const SeedExtractorAction;

/// @brief Field SendMothershipId value: I32(19)
static ::GlobalNamespace::GhostReactorManager_RPC const SendMothershipId;

/// @brief Field ToolPurchaseResponse value: I32(8)
static ::GlobalNamespace::GhostReactorManager_RPC const ToolPurchaseResponse;

/// @brief Field ToolUpgradeStationAction value: I32(18)
static ::GlobalNamespace::GhostReactorManager_RPC const ToolUpgradeStationAction;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorManager_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorManager_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
