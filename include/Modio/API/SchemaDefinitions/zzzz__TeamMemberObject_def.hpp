#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TeamMemberObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TeamMemberObject)
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct TeamMemberObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::TeamMemberObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::TeamMemberObject, "Modio.API.SchemaDefinitions", "TeamMemberObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TeamMemberObject
struct CORDL_TYPE TeamMemberObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee2c8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  level, int64_t  date_added, ::StringW  position, int64_t  invite_pending) ;

// Ctor Parameters []
// @brief default ctor
constexpr TeamMemberObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "Level", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Position", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "InvitePending", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr TeamMemberObject(int64_t  Id, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  Level, int64_t  DateAdded, ::StringW  Position, int64_t  InvitePending) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18170};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field User, offset: 0x8, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field Level, offset: 0x70, size: 0x8, def value: None
 int64_t  Level;

/// @brief Field DateAdded, offset: 0x78, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field Position, offset: 0x80, size: 0x8, def value: None
 ::StringW  Position;

/// @brief Field InvitePending, offset: 0x88, size: 0x8, def value: None
 int64_t  InvitePending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::TeamMemberObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TeamMemberObject, User) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TeamMemberObject, Level) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TeamMemberObject, DateAdded) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TeamMemberObject, Position) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TeamMemberObject, InvitePending) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::TeamMemberObject) == 0x90, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
