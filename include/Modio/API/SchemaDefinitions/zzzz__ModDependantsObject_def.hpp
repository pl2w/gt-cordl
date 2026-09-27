#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModDependantsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__LogoObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModDependantsObject)
namespace Modio::API::SchemaDefinitions {
struct LogoObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModDependantsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModDependantsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModDependantsObject, "Modio.API.SchemaDefinitions", "ModDependantsObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies Modio.API.SchemaDefinitions.LogoObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModDependantsObject
struct CORDL_TYPE ModDependantsObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed22c, size 0x84, virtual false, abstract: false, final false
inline void _ctor(int64_t  mod_id, ::StringW  name, ::StringW  name_id, int64_t  status, int64_t  visible, int64_t  date_added, int64_t  date_updated, ::Modio::API::SchemaDefinitions::LogoObject  logo) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModDependantsObject() ;

// Ctor Parameters [CppParam { name: "ModId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Visible", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Logo", ty: "::Modio::API::SchemaDefinitions::LogoObject", modifiers: "", def_value: None, comment: None }]
constexpr ModDependantsObject(int64_t  ModId, ::StringW  Name, ::StringW  NameId, int64_t  Status, int64_t  Visible, int64_t  DateAdded, int64_t  DateUpdated, ::Modio::API::SchemaDefinitions::LogoObject  Logo) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18144};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field ModId, offset: 0x0, size: 0x8, def value: None
 int64_t  ModId;

/// @brief Field Name, offset: 0x8, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameId, offset: 0x10, size: 0x8, def value: None
 ::StringW  NameId;

/// @brief Field Status, offset: 0x18, size: 0x8, def value: None
 int64_t  Status;

/// @brief Field Visible, offset: 0x20, size: 0x8, def value: None
 int64_t  Visible;

/// @brief Field DateAdded, offset: 0x28, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x30, size: 0x8, def value: None
 int64_t  DateUpdated;

/// @brief Field Logo, offset: 0x38, size: 0x28, def value: None
 ::Modio::API::SchemaDefinitions::LogoObject  Logo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, ModId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, Name) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, NameId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, Status) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, Visible) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, DateAdded) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, DateUpdated) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModDependantsObject, Logo) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModDependantsObject) == 0x60, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
