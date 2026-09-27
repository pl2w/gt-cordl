#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorManager_GRPlayerAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorManager_GRPlayerAction)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorManager_GRPlayerAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorManager_GRPlayerAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorManager_GRPlayerAction, "", "GhostReactorManager/GRPlayerAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorManager/GRPlayerAction
struct CORDL_TYPE GhostReactorManager_GRPlayerAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorManager_GRPlayerAction_Unwrapped
enum struct __GhostReactorManager_GRPlayerAction_Unwrapped : int32_t {
__E_ButtonShiftStart = static_cast<int32_t>(0x0),
__E_DelveDeeper = static_cast<int32_t>(0x1),
__E_DelveState = static_cast<int32_t>(0x2),
__E_ShuttleOpen = static_cast<int32_t>(0x3),
__E_ShuttleClose = static_cast<int32_t>(0x4),
__E_ShuttleLaunch = static_cast<int32_t>(0x5),
__E_ShuttleArrive = static_cast<int32_t>(0x6),
__E_ShuttleTargetLevelUp = static_cast<int32_t>(0x7),
__E_ShuttleTargetLevelDown = static_cast<int32_t>(0x8),
__E_SetPodLevel = static_cast<int32_t>(0x9),
__E_SetPodChassisLevel = static_cast<int32_t>(0xa),
__E_SeedExtractorOpenStation = static_cast<int32_t>(0xb),
__E_SeedExtractorCloseStation = static_cast<int32_t>(0xc),
__E_SeedExtractorCardSwipeFail = static_cast<int32_t>(0xd),
__E_SeedExtractorTryDepositSeed = static_cast<int32_t>(0xe),
__E_SeedExtractorDepositSeedSucceeded = static_cast<int32_t>(0xf),
__E_SeedExtractorDepositSeedFailed = static_cast<int32_t>(0x10),
__E_DEBUG_ResetDepth = static_cast<int32_t>(0x11),
__E_DEBUG_DelveDeeper = static_cast<int32_t>(0x12),
__E_DEBUG_DelveShallower = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorManager_GRPlayerAction_Unwrapped () const noexcept {
return static_cast<__GhostReactorManager_GRPlayerAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorManager_GRPlayerAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorManager_GRPlayerAction(int32_t  value__) noexcept;

/// @brief Field ButtonShiftStart value: I32(0)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ButtonShiftStart;

/// @brief Field DEBUG_DelveDeeper value: I32(18)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const DEBUG_DelveDeeper;

/// @brief Field DEBUG_DelveShallower value: I32(19)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const DEBUG_DelveShallower;

/// @brief Field DEBUG_ResetDepth value: I32(17)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const DEBUG_ResetDepth;

/// @brief Field DelveDeeper value: I32(1)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const DelveDeeper;

/// @brief Field DelveState value: I32(2)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const DelveState;

/// @brief Field SeedExtractorCardSwipeFail value: I32(13)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SeedExtractorCardSwipeFail;

/// @brief Field SeedExtractorCloseStation value: I32(12)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SeedExtractorCloseStation;

/// @brief Field SeedExtractorDepositSeedFailed value: I32(16)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SeedExtractorDepositSeedFailed;

/// @brief Field SeedExtractorDepositSeedSucceeded value: I32(15)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SeedExtractorDepositSeedSucceeded;

/// @brief Field SeedExtractorOpenStation value: I32(11)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SeedExtractorOpenStation;

/// @brief Field SeedExtractorTryDepositSeed value: I32(14)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SeedExtractorTryDepositSeed;

/// @brief Field SetPodChassisLevel value: I32(10)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SetPodChassisLevel;

/// @brief Field SetPodLevel value: I32(9)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const SetPodLevel;

/// @brief Field ShuttleArrive value: I32(6)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ShuttleArrive;

/// @brief Field ShuttleClose value: I32(4)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ShuttleClose;

/// @brief Field ShuttleLaunch value: I32(5)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ShuttleLaunch;

/// @brief Field ShuttleOpen value: I32(3)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ShuttleOpen;

/// @brief Field ShuttleTargetLevelDown value: I32(8)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ShuttleTargetLevelDown;

/// @brief Field ShuttleTargetLevelUp value: I32(7)
static ::GlobalNamespace::GhostReactorManager_GRPlayerAction const ShuttleTargetLevelUp;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorManager_GRPlayerAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorManager_GRPlayerAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
