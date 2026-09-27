#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTokenPackObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameTokenPackObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameTokenPackObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameTokenPackObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameTokenPackObject, "Modio.API.SchemaDefinitions", "GameTokenPackObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameTokenPackObject
struct CORDL_TYPE GameTokenPackObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecd78, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  token_pack_id, int64_t  price, int64_t  amount, ::StringW  portal, ::StringW  sku, ::StringW  name, ::StringW  description, int64_t  date_added, int64_t  date_updated) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameTokenPackObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenPackId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Price", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Amount", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Portal", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sku", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr GameTokenPackObject(int64_t  Id, int64_t  TokenPackId, int64_t  Price, int64_t  Amount, ::StringW  Portal, ::StringW  Sku, ::StringW  Name, ::StringW  Description, int64_t  DateAdded, int64_t  DateUpdated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18131};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field TokenPackId, offset: 0x8, size: 0x8, def value: None
 int64_t  TokenPackId;

/// @brief Field Price, offset: 0x10, size: 0x8, def value: None
 int64_t  Price;

/// @brief Field Amount, offset: 0x18, size: 0x8, def value: None
 int64_t  Amount;

/// @brief Field Portal, offset: 0x20, size: 0x8, def value: None
 ::StringW  Portal;

/// @brief Field Sku, offset: 0x28, size: 0x8, def value: None
 ::StringW  Sku;

/// @brief Field Name, offset: 0x30, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Description, offset: 0x38, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field DateAdded, offset: 0x40, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x48, size: 0x8, def value: None
 int64_t  DateUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, TokenPackId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Price) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Amount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Portal) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Sku) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, Description) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, DateAdded) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTokenPackObject, DateUpdated) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameTokenPackObject) == 0x50, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
