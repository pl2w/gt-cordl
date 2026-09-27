#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorManager_ToolPurchaseStationResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorManager_ToolPurchaseStationResponse)
// Forward declare root types
namespace GlobalNamespace {
struct GhostReactorManager_ToolPurchaseStationResponse;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse, "", "GhostReactorManager/ToolPurchaseStationResponse");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GhostReactorManager/ToolPurchaseStationResponse
struct CORDL_TYPE GhostReactorManager_ToolPurchaseStationResponse {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GhostReactorManager_ToolPurchaseStationResponse_Unwrapped
enum struct __GhostReactorManager_ToolPurchaseStationResponse_Unwrapped : int32_t {
__E_SelectionUpdate = static_cast<int32_t>(0x0),
__E_PurchaseSucceeded = static_cast<int32_t>(0x1),
__E_PurchaseFailed = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GhostReactorManager_ToolPurchaseStationResponse_Unwrapped () const noexcept {
return static_cast<__GhostReactorManager_ToolPurchaseStationResponse_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorManager_ToolPurchaseStationResponse() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GhostReactorManager_ToolPurchaseStationResponse(int32_t  value__) noexcept;

/// @brief Field PurchaseFailed value: I32(2)
static ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse const PurchaseFailed;

/// @brief Field PurchaseSucceeded value: I32(1)
static ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse const PurchaseSucceeded;

/// @brief Field SelectionUpdate value: I32(0)
static ::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse const SelectionUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1824};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GhostReactorManager_ToolPurchaseStationResponse) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
