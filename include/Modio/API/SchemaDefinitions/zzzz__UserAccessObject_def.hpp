#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/UserAccessObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserAccessObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct UserAccessObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::UserAccessObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::UserAccessObject, "Modio.API.SchemaDefinitions", "UserAccessObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.UserAccessObject
struct CORDL_TYPE UserAccessObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee7a4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  resource_type, int64_t  resource_id, int64_t  resource_name, ::StringW  resource_name_id, ::StringW  resource_url) ;

// Ctor Parameters []
// @brief default ctor
constexpr UserAccessObject() ;

// Ctor Parameters [CppParam { name: "ResourceType", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceName", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceNameId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr UserAccessObject(::StringW  ResourceType, int64_t  ResourceId, int64_t  ResourceName, ::StringW  ResourceNameId, ::StringW  ResourceUrl) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18185};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field ResourceType, offset: 0x0, size: 0x8, def value: None
 ::StringW  ResourceType;

/// @brief Field ResourceId, offset: 0x8, size: 0x8, def value: None
 int64_t  ResourceId;

/// @brief Field ResourceName, offset: 0x10, size: 0x8, def value: None
 int64_t  ResourceName;

/// @brief Field ResourceNameId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ResourceNameId;

/// @brief Field ResourceUrl, offset: 0x20, size: 0x8, def value: None
 ::StringW  ResourceUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::UserAccessObject, ResourceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserAccessObject, ResourceId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserAccessObject, ResourceName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserAccessObject, ResourceNameId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::UserAccessObject, ResourceUrl) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::UserAccessObject) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
