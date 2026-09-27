#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/AgreementVersionObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__UserObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AgreementVersionObject)
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct AgreementVersionObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::AgreementVersionObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::AgreementVersionObject, "Modio.API.SchemaDefinitions", "AgreementVersionObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.UserObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.AgreementVersionObject
struct CORDL_TYPE AgreementVersionObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec414, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, bool  is_active, bool  is_latest, int64_t  type, ::Modio::API::SchemaDefinitions::UserObject  user, int64_t  date_added, int64_t  date_updated, int64_t  date_live, ::StringW  name, ::StringW  changelog, ::StringW  description, ::Newtonsoft::Json::Linq::JObject*  adjacent_versions) ;

// Ctor Parameters []
// @brief default ctor
constexpr AgreementVersionObject() ;

// Ctor Parameters [CppParam { name: "Id", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsActive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsLatest", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "User", ty: "::Modio::API::SchemaDefinitions::UserObject", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateLive", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Changelog", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Description", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "AdjacentVersions", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None, comment: None }]
constexpr AgreementVersionObject(int64_t  Id, bool  IsActive, bool  IsLatest, int64_t  Type, ::Modio::API::SchemaDefinitions::UserObject  User, int64_t  DateAdded, int64_t  DateUpdated, int64_t  DateLive, ::StringW  Name, ::StringW  Changelog, ::StringW  Description, ::Newtonsoft::Json::Linq::JObject*  AdjacentVersions) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field Id, offset: 0x0, size: 0x8, def value: None
 int64_t  Id;

/// @brief Field IsActive, offset: 0x8, size: 0x1, def value: None
 bool  IsActive;

/// @brief Field IsLatest, offset: 0x9, size: 0x1, def value: None
 bool  IsLatest;

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 int64_t  Type;

/// @brief Field User, offset: 0x18, size: 0x68, def value: None
 ::Modio::API::SchemaDefinitions::UserObject  User;

/// @brief Field DateAdded, offset: 0x80, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x88, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field DateLive, offset: 0x90, size: 0x8, def value: None
 int64_t  DateLive;

/// @brief Field Name, offset: 0x98, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field Changelog, offset: 0xa0, size: 0x8, def value: None
 ::StringW  Changelog;

/// @brief Field Description, offset: 0xa8, size: 0x8, def value: None
 ::StringW  Description;

/// @brief Field AdjacentVersions, offset: 0xb0, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  AdjacentVersions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, IsActive) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, IsLatest) == 0x9, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, User) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, DateAdded) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, DateUpdated) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, DateLive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, Name) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, Changelog) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, Description) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::AgreementVersionObject, AdjacentVersions) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::AgreementVersionObject) == 0xb8, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
