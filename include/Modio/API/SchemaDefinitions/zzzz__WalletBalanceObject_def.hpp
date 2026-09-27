#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/WalletBalanceObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WalletBalanceObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct WalletBalanceObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::WalletBalanceObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::WalletBalanceObject, "Modio.API.SchemaDefinitions", "WalletBalanceObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.WalletBalanceObject
struct CORDL_TYPE WalletBalanceObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee844, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int64_t  balance) ;

// Ctor Parameters []
// @brief default ctor
constexpr WalletBalanceObject() ;

// Ctor Parameters [CppParam { name: "Balance", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr WalletBalanceObject(int64_t  Balance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18189};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Balance, offset: 0x0, size: 0x8, def value: None
 int64_t  Balance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::WalletBalanceObject, Balance) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::WalletBalanceObject) == 0x8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
