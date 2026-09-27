#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/WalletObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WalletObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct WalletObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::WalletObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::WalletObject, "Modio.API.SchemaDefinitions", "WalletObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.WalletObject
struct CORDL_TYPE WalletObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee84c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::StringW  type, ::StringW  payment_method_id, ::StringW  game_id, ::StringW  currency, int64_t  balance, int64_t  pending_balance, int64_t  deficit, int64_t  monetization_status) ;

// Ctor Parameters []
// @brief default ctor
constexpr WalletObject() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "PaymentMethodId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Currency", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Balance", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PendingBalance", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Deficit", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationStatus", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr WalletObject(::StringW  Type, ::StringW  PaymentMethodId, ::StringW  GameId, ::StringW  Currency, int64_t  Balance, int64_t  PendingBalance, int64_t  Deficit, int64_t  MonetizationStatus) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field Type, offset: 0x0, size: 0x8, def value: None
 ::StringW  Type;

/// @brief Field PaymentMethodId, offset: 0x8, size: 0x8, def value: None
 ::StringW  PaymentMethodId;

/// @brief Field GameId, offset: 0x10, size: 0x8, def value: None
 ::StringW  GameId;

/// @brief Field Currency, offset: 0x18, size: 0x8, def value: None
 ::StringW  Currency;

/// @brief Field Balance, offset: 0x20, size: 0x8, def value: None
 int64_t  Balance;

/// @brief Field PendingBalance, offset: 0x28, size: 0x8, def value: None
 int64_t  PendingBalance;

/// @brief Field Deficit, offset: 0x30, size: 0x8, def value: None
 int64_t  Deficit;

/// @brief Field MonetizationStatus, offset: 0x38, size: 0x8, def value: None
 int64_t  MonetizationStatus;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, PaymentMethodId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, GameId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, Currency) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, Balance) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, PendingBalance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, Deficit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletObject, MonetizationStatus) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::WalletObject) == 0x40, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
