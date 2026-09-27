#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorManager_ToolPurchaseStationAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorManager_ToolPurchaseStationAction)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorManager_ToolPurchaseStationAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction, "", "GhostReactorManager/ToolPurchaseStationAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorManager/ToolPurchaseStationAction
struct CORDL_TYPE GhostReactorManager_ToolPurchaseStationAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorManager_ToolPurchaseStationAction_Unwrapped
enum struct __GhostReactorManager_ToolPurchaseStationAction_Unwrapped : int32_t {
__E_ShiftLeft = static_cast<int32_t>(0x0),
__E_ShiftRight = static_cast<int32_t>(0x1),
__E_TryPurchase = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorManager_ToolPurchaseStationAction_Unwrapped () const noexcept {
return static_cast<__GhostReactorManager_ToolPurchaseStationAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorManager_ToolPurchaseStationAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorManager_ToolPurchaseStationAction(int32_t  value__) noexcept;

/// @brief Field ShiftLeft value: I32(0)
static ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction const ShiftLeft;

/// @brief Field ShiftRight value: I32(1)
static ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction const ShiftRight;

/// @brief Field TryPurchase value: I32(2)
static ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction const TryPurchase;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
