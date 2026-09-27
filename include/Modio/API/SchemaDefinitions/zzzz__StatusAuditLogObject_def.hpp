#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/StatusAuditLogObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StatusAuditLogObject)
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct StatusAuditLogObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::StatusAuditLogObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::StatusAuditLogObject, "Modio.API.SchemaDefinitions", "StatusAuditLogObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.StatusAuditLogObject
struct CORDL_TYPE StatusAuditLogObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee27c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int64_t  status_new, int64_t  status_old, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, ::StringW  reason) ;

// Ctor Parameters []
// @brief default ctor
constexpr StatusAuditLogObject() ;

// Ctor Parameters [CppParam { name: "StatusNew", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "StatusOld", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Reason", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr StatusAuditLogObject(int64_t  StatusNew, int64_t  StatusOld, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, ::StringW  Reason) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18169};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field StatusNew, offset: 0x0, size: 0x8, def value: None
 int64_t  StatusNew;

/// @brief Field StatusOld, offset: 0x8, size: 0x8, def value: None
 int64_t  StatusOld;

/// @brief Field User, offset: 0x10, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field DateAdded, offset: 0x78, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field Reason, offset: 0x80, size: 0x8, def value: None
 ::StringW  Reason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::StatusAuditLogObject, StatusNew) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::StatusAuditLogObject, StatusOld) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::StatusAuditLogObject, User) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::StatusAuditLogObject, DateAdded) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::StatusAuditLogObject, Reason) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::StatusAuditLogObject) == 0x88, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
