#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserEventObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserEventObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct UserEventObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::UserEventObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::UserEventObject, "Modio.API.SchemaDefinitions", "UserEventObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.UserEventObject
struct CORDL_TYPE UserEventObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee82c, size 0x18, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  game_id, int64_t  mod_id, int64_t  user_id, int64_t  date_added, ::StringW  event_type) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserEventObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "EventType", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr UserEventObject(int64_t  Id, int64_t  GameId, int64_t  ModId, int64_t  UserId, int64_t  DateAdded, ::StringW  EventType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18187};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field GameId, offset: 0x8, size: 0x8, def value: None
 int64_t  GameId;

/// @brief Field ModId, offset: 0x10, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field UserId, offset: 0x18, size: 0x8, def value: None
 int64_t  UserId;

/// @brief Field DateAdded, offset: 0x20, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field EventType, offset: 0x28, size: 0x8, def value: None
 ::StringW  EventType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::UserEventObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserEventObject, GameId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserEventObject, ModId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserEventObject, UserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserEventObject, DateAdded) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserEventObject, EventType) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::UserEventObject) == 0x30, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
