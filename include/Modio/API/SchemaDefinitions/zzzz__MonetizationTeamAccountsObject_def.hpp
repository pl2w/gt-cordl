#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MonetizationTeamAccountsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonetizationTeamAccountsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct MonetizationTeamAccountsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, "Modio.API.SchemaDefinitions", "MonetizationTeamAccountsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.MonetizationTeamAccountsObject
struct CORDL_TYPE MonetizationTeamAccountsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fedf28, size 0x58, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, ::StringW  name_id, ::StringW  username, int64_t  monetization_status, int64_t  monetization_options, int64_t  split) ;

// Ctor Parameters []
// @brief default ctor
constexpr MonetizationTeamAccountsObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Username", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationStatus", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MonetizationOptions", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Split", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr MonetizationTeamAccountsObject(int64_t  Id, ::StringW  NameId, ::StringW  Username, int64_t  MonetizationStatus, int64_t  MonetizationOptions, int64_t  Split) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field NameId, offset: 0x8, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Username, offset: 0x10, size: 0x8, def value: None
 ::StringW  Username;

/// @brief Field MonetizationStatus, offset: 0x18, size: 0x8, def value: None
 int64_t  MonetizationStatus;

/// @brief Field MonetizationOptions, offset: 0x20, size: 0x8, def value: None
 int64_t  MonetizationOptions;

/// @brief Field Split, offset: 0x28, size: 0x8, def value: None
 int64_t  Split;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, NameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, Username) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, MonetizationStatus) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, MonetizationOptions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject, Split) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::MonetizationTeamAccountsObject) == 0x30, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
