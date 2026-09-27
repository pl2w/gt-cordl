#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/RatingObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RatingObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct RatingObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::RatingObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::RatingObject, "Modio.API.SchemaDefinitions", "RatingObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.RatingObject
struct CORDL_TYPE RatingObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee184, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int64_t  game_id, int64_t  mod_id, int64_t  rating, int64_t  date_added) ;

// Ctor Parameters []
// @brief default ctor
constexpr RatingObject() ;

// Ctor Parameters [CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rating", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr RatingObject(int64_t  GameId, int64_t  ModId, int64_t  Rating, int64_t  DateAdded) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18166};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field GameId, offset: 0x0, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field ModId, offset: 0x8, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field Rating, offset: 0x10, size: 0x8, def value: None
 int64_t  Rating;

/// @brief Field DateAdded, offset: 0x18, size: 0x8, def value: None
 int64_t  DateAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::RatingObject, GameId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::RatingObject, ModId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::RatingObject, Rating) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::RatingObject, DateAdded) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::RatingObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
