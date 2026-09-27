#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TradeStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TradeStatus)
// Forward declare root types
namespace PlayFab::ClientModels {
struct TradeStatus;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::TradeStatus);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TradeStatus, "PlayFab.ClientModels", "TradeStatus");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.TradeStatus
struct CORDL_TYPE TradeStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TradeStatus_Unwrapped
enum struct __TradeStatus_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Opening = static_cast<int32_t>(0x1),
__E_Open = static_cast<int32_t>(0x2),
__E_Accepting = static_cast<int32_t>(0x3),
__E_Accepted = static_cast<int32_t>(0x4),
__E_Filled = static_cast<int32_t>(0x5),
__E_Cancelled = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TradeStatus_Unwrapped () const noexcept {
return static_cast<__TradeStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TradeStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TradeStatus(int32_t  value__) noexcept;

/// @brief Field Accepted value: I32(4)
static ::PlayFab::ClientModels::TradeStatus const Accepted;

/// @brief Field Accepting value: I32(3)
static ::PlayFab::ClientModels::TradeStatus const Accepting;

/// @brief Field Cancelled value: I32(6)
static ::PlayFab::ClientModels::TradeStatus const Cancelled;

/// @brief Field Filled value: I32(5)
static ::PlayFab::ClientModels::TradeStatus const Filled;

/// @brief Field Invalid value: I32(0)
static ::PlayFab::ClientModels::TradeStatus const Invalid;

/// @brief Field Open value: I32(2)
static ::PlayFab::ClientModels::TradeStatus const Open;

/// @brief Field Opening value: I32(1)
static ::PlayFab::ClientModels::TradeStatus const Opening;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20240};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TradeStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TradeStatus) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
