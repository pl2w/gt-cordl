#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceCollection_ResourceCollectorTerminalState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIResourceCollection_ResourceCollectorTerminalState)
// Forward declare root types
namespace GlobalNamespace {
struct SIResourceCollection_ResourceCollectorTerminalState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, "", "SIResourceCollection/ResourceCollectorTerminalState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIResourceCollection/ResourceCollectorTerminalState
struct CORDL_TYPE SIResourceCollection_ResourceCollectorTerminalState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SIResourceCollection_ResourceCollectorTerminalState_Unwrapped
enum struct __SIResourceCollection_ResourceCollectorTerminalState_Unwrapped : int32_t {
__E_WaitingForScan = static_cast<int32_t>(0x0),
__E_CurrentResources = static_cast<int32_t>(0x1),
__E_HelpScreen = static_cast<int32_t>(0x2),
__E_PurchaseRemote = static_cast<int32_t>(0x3),
__E_PurchaseStart = static_cast<int32_t>(0x4),
__E_PurchaseInProgress = static_cast<int32_t>(0x5),
__E_PurchaseSuccess = static_cast<int32_t>(0x6),
__E_PurchaseFailure = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SIResourceCollection_ResourceCollectorTerminalState_Unwrapped () const noexcept {
return static_cast<__SIResourceCollection_ResourceCollectorTerminalState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SIResourceCollection_ResourceCollectorTerminalState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SIResourceCollection_ResourceCollectorTerminalState(int32_t  value__) noexcept;

/// @brief Field CurrentResources value: I32(1)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const CurrentResources;

/// @brief Field HelpScreen value: I32(2)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const HelpScreen;

/// @brief Field PurchaseFailure value: I32(7)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const PurchaseFailure;

/// @brief Field PurchaseInProgress value: I32(5)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const PurchaseInProgress;

/// @brief Field PurchaseRemote value: I32(3)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const PurchaseRemote;

/// @brief Field PurchaseStart value: I32(4)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const PurchaseStart;

/// @brief Field PurchaseSuccess value: I32(6)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const PurchaseSuccess;

/// @brief Field WaitingForScan value: I32(0)
static ::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState const WaitingForScan;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceCollection_ResourceCollectorTerminalState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
