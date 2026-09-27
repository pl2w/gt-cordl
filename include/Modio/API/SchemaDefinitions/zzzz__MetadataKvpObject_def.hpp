#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MetadataKvpObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MetadataKvpObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct MetadataKvpObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::MetadataKvpObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::MetadataKvpObject, "Modio.API.SchemaDefinitions", "MetadataKvpObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.MetadataKvpObject
struct CORDL_TYPE MetadataKvpObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed1fc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  metakey, ::StringW  metavalue) ;

// Ctor Parameters []
// @brief default ctor
constexpr MetadataKvpObject() ;

// Ctor Parameters [CppParam { name: "Metakey", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Metavalue", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr MetadataKvpObject(::StringW  Metakey, ::StringW  Metavalue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18143};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Metakey, offset: 0x0, size: 0x8, def value: None
 ::StringW  Metakey;

/// @brief Field Metavalue, offset: 0x8, size: 0x8, def value: None
 ::StringW  Metavalue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::MetadataKvpObject, Metakey) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MetadataKvpObject, Metavalue) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::MetadataKvpObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
