#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GetTransactions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__PaginationObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TransactionObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GetTransactions)
namespace Modio::API::SchemaDefinitions {
struct PaginationObject;
}
namespace Modio::API::SchemaDefinitions {
struct TransactionObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GetTransactions;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GetTransactions);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GetTransactions, "Modio.API.SchemaDefinitions", "GetTransactions");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.PaginationObject, Modio.API.SchemaDefinitions.TransactionObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GetTransactions
struct CORDL_TYPE GetTransactions {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fe8bb4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>  data, ::Modio::API::SchemaDefinitions::PaginationObject  download) ;

// Ctor Parameters []
// @brief default ctor
constexpr GetTransactions() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Download", ty: "::Modio::API::SchemaDefinitions::PaginationObject", modifiers: "", def_value: None, comment: None }]
constexpr GetTransactions(::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>  Data, ::Modio::API::SchemaDefinitions::PaginationObject  Download) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18079};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Data, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::TransactionObject>  Data;

/// @brief Field Download, offset: 0x8, size: 0x20, def value: None
 ::Modio::API::SchemaDefinitions::PaginationObject  Download;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GetTransactions, Data) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GetTransactions, Download) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GetTransactions) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
