#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/TransactionStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransactionStatus)
// Forward declare root types
namespace PlayFab::ClientModels {
struct TransactionStatus;
}
// Write type traits
MARK_VAL_T(::PlayFab::ClientModels::TransactionStatus);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::TransactionStatus, "PlayFab.ClientModels", "TransactionStatus");
// Dependencies 
namespace PlayFab::ClientModels {
// Is value type: true
// CS Name: PlayFab.ClientModels.TransactionStatus
struct CORDL_TYPE TransactionStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TransactionStatus_Unwrapped
enum struct __TransactionStatus_Unwrapped : int32_t {
__E_CreateCart = static_cast<int32_t>(0x0),
__E_Init = static_cast<int32_t>(0x1),
__E_Approved = static_cast<int32_t>(0x2),
__E_Succeeded = static_cast<int32_t>(0x3),
__E_FailedByProvider = static_cast<int32_t>(0x4),
__E_DisputePending = static_cast<int32_t>(0x5),
__E_RefundPending = static_cast<int32_t>(0x6),
__E_Refunded = static_cast<int32_t>(0x7),
__E_RefundFailed = static_cast<int32_t>(0x8),
__E_ChargedBack = static_cast<int32_t>(0x9),
__E_FailedByUber = static_cast<int32_t>(0xa),
__E_FailedByPlayFab = static_cast<int32_t>(0xb),
__E_Revoked = static_cast<int32_t>(0xc),
__E_TradePending = static_cast<int32_t>(0xd),
__E_Traded = static_cast<int32_t>(0xe),
__E_Upgraded = static_cast<int32_t>(0xf),
__E_StackPending = static_cast<int32_t>(0x10),
__E_Stacked = static_cast<int32_t>(0x11),
__E_Other = static_cast<int32_t>(0x12),
__E_Failed = static_cast<int32_t>(0x13),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransactionStatus_Unwrapped () const noexcept {
return static_cast<__TransactionStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TransactionStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TransactionStatus(int32_t  value__) noexcept;

/// @brief Field Approved value: I32(2)
static ::PlayFab::ClientModels::TransactionStatus const Approved;

/// @brief Field ChargedBack value: I32(9)
static ::PlayFab::ClientModels::TransactionStatus const ChargedBack;

/// @brief Field CreateCart value: I32(0)
static ::PlayFab::ClientModels::TransactionStatus const CreateCart;

/// @brief Field DisputePending value: I32(5)
static ::PlayFab::ClientModels::TransactionStatus const DisputePending;

/// @brief Field Failed value: I32(19)
static ::PlayFab::ClientModels::TransactionStatus const Failed;

/// @brief Field FailedByPlayFab value: I32(11)
static ::PlayFab::ClientModels::TransactionStatus const FailedByPlayFab;

/// @brief Field FailedByProvider value: I32(4)
static ::PlayFab::ClientModels::TransactionStatus const FailedByProvider;

/// @brief Field FailedByUber value: I32(10)
static ::PlayFab::ClientModels::TransactionStatus const FailedByUber;

/// @brief Field Init value: I32(1)
static ::PlayFab::ClientModels::TransactionStatus const Init;

/// @brief Field Other value: I32(18)
static ::PlayFab::ClientModels::TransactionStatus const Other;

/// @brief Field RefundFailed value: I32(8)
static ::PlayFab::ClientModels::TransactionStatus const RefundFailed;

/// @brief Field RefundPending value: I32(6)
static ::PlayFab::ClientModels::TransactionStatus const RefundPending;

/// @brief Field Refunded value: I32(7)
static ::PlayFab::ClientModels::TransactionStatus const Refunded;

/// @brief Field Revoked value: I32(12)
static ::PlayFab::ClientModels::TransactionStatus const Revoked;

/// @brief Field StackPending value: I32(16)
static ::PlayFab::ClientModels::TransactionStatus const StackPending;

/// @brief Field Stacked value: I32(17)
static ::PlayFab::ClientModels::TransactionStatus const Stacked;

/// @brief Field Succeeded value: I32(3)
static ::PlayFab::ClientModels::TransactionStatus const Succeeded;

/// @brief Field TradePending value: I32(13)
static ::PlayFab::ClientModels::TransactionStatus const TradePending;

/// @brief Field Traded value: I32(14)
static ::PlayFab::ClientModels::TransactionStatus const Traded;

/// @brief Field Upgraded value: I32(15)
static ::PlayFab::ClientModels::TransactionStatus const Upgraded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20241};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::TransactionStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::TransactionStatus) == 0x4, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
