#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModTagObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModTagObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModTagObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModTagObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModTagObject, "Modio.API.SchemaDefinitions", "ModTagObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModTagObject
struct CORDL_TYPE ModTagObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fede74, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  name_localized, int64_t  date_added) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModTagObject() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameLocalized", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr ModTagObject(::StringW  Name, ::StringW  NameLocalized, int64_t  DateAdded) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18156};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameLocalized, offset: 0x8, size: 0x8, def value: None
 ::StringW  NameLocalized;

/// @brief Field DateAdded, offset: 0x10, size: 0x8, def value: None
 int64_t  DateAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModTagObject, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModTagObject, NameLocalized) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModTagObject, DateAdded) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModTagObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
