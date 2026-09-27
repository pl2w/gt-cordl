#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModEventObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModEventObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModEventObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModEventObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModEventObject, "Modio.API.SchemaDefinitions", "ModEventObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModEventObject
struct CORDL_TYPE ModEventObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed4d0, size 0x14, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, int64_t  mod_id, int64_t  user_id, int64_t  date_added, ::StringW  event_type) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModEventObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "UserId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "EventType", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ModEventObject(int64_t  Id, int64_t  ModId, int64_t  UserId, int64_t  DateAdded, ::StringW  EventType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18148};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field ModId, offset: 0x8, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field UserId, offset: 0x10, size: 0x8, def value: None
 int64_t  UserId;

/// @brief Field DateAdded, offset: 0x18, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field EventType, offset: 0x20, size: 0x8, def value: None
 ::StringW  EventType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModEventObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModEventObject, ModId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModEventObject, UserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModEventObject, DateAdded) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModEventObject, EventType) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModEventObject) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
