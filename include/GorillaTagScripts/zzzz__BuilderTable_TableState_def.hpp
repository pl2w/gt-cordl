#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_TableState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTable_TableState)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_TableState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_TableState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_TableState, "GorillaTagScripts", "BuilderTable/TableState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/TableState
struct CORDL_TYPE BuilderTable_TableState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderTable_TableState_Unwrapped
enum struct __BuilderTable_TableState_Unwrapped : int32_t {
__E_WaitingForZoneAndRoom = static_cast<int32_t>(0x0),
__E_WaitingForInitalBuild = static_cast<int32_t>(0x1),
__E_ReceivingInitialBuild = static_cast<int32_t>(0x2),
__E_WaitForInitialBuildMaster = static_cast<int32_t>(0x3),
__E_WaitForMasterResync = static_cast<int32_t>(0x4),
__E_ReceivingMasterResync = static_cast<int32_t>(0x5),
__E_InitialBuild = static_cast<int32_t>(0x6),
__E_ExecuteQueuedCommands = static_cast<int32_t>(0x7),
__E_Ready = static_cast<int32_t>(0x8),
__E_BadData = static_cast<int32_t>(0x9),
__E_WaitingForSharedMapLoad = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderTable_TableState_Unwrapped () const noexcept {
return static_cast<__BuilderTable_TableState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_TableState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_TableState(int32_t  value__) noexcept;

/// @brief Field BadData value: I32(9)
static ::GlobalNamespace::BuilderTable_TableState const BadData;

/// @brief Field ExecuteQueuedCommands value: I32(7)
static ::GlobalNamespace::BuilderTable_TableState const ExecuteQueuedCommands;

/// @brief Field InitialBuild value: I32(6)
static ::GlobalNamespace::BuilderTable_TableState const InitialBuild;

/// @brief Field Ready value: I32(8)
static ::GlobalNamespace::BuilderTable_TableState const Ready;

/// @brief Field ReceivingInitialBuild value: I32(2)
static ::GlobalNamespace::BuilderTable_TableState const ReceivingInitialBuild;

/// @brief Field ReceivingMasterResync value: I32(5)
static ::GlobalNamespace::BuilderTable_TableState const ReceivingMasterResync;

/// @brief Field WaitForInitialBuildMaster value: I32(3)
static ::GlobalNamespace::BuilderTable_TableState const WaitForInitialBuildMaster;

/// @brief Field WaitForMasterResync value: I32(4)
static ::GlobalNamespace::BuilderTable_TableState const WaitForMasterResync;

/// @brief Field WaitingForInitalBuild value: I32(1)
static ::GlobalNamespace::BuilderTable_TableState const WaitingForInitalBuild;

/// @brief Field WaitingForSharedMapLoad value: I32(10)
static ::GlobalNamespace::BuilderTable_TableState const WaitingForSharedMapLoad;

/// @brief Field WaitingForZoneAndRoom value: I32(0)
static ::GlobalNamespace::BuilderTable_TableState const WaitingForZoneAndRoom;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3942};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_TableState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_TableState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
