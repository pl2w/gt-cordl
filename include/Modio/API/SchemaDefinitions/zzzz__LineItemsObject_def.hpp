#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/LineItemsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineItemsObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct LineItemsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::LineItemsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::LineItemsObject, "Modio.API.SchemaDefinitions", "LineItemsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.LineItemsObject
struct CORDL_TYPE LineItemsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed108, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int64_t  game_id, int64_t  buyer_id, ::StringW  game_name, ::StringW  buyer_name, ::StringW  token_name, int64_t  token_pack_id, ::StringW  token_pack_name) ;

// Ctor Parameters []
// @brief default ctor
constexpr LineItemsObject() ;

// Ctor Parameters [CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "BuyerId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "BuyerName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenPackId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "TokenPackName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr LineItemsObject(int64_t  GameId, int64_t  BuyerId, ::StringW  GameName, ::StringW  BuyerName, ::StringW  TokenName, int64_t  TokenPackId, ::StringW  TokenPackName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field GameId, offset: 0x0, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field BuyerId, offset: 0x8, size: 0x8, def value: None
 int64_t  BuyerId;

/// @brief Field GameName, offset: 0x10, size: 0x8, def value: None
 ::StringW  GameName;

/// @brief Field BuyerName, offset: 0x18, size: 0x8, def value: None
 ::StringW  BuyerName;

/// @brief Field TokenName, offset: 0x20, size: 0x8, def value: None
 ::StringW  TokenName;

/// @brief Field TokenPackId, offset: 0x28, size: 0x8, def value: None
 int64_t  TokenPackId;

/// @brief Field TokenPackName, offset: 0x30, size: 0x8, def value: None
 ::StringW  TokenPackName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, GameId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, BuyerId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, GameName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, BuyerName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, TokenName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, TokenPackId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::LineItemsObject, TokenPackName) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::LineItemsObject) == 0x38, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
