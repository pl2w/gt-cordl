#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PreviewObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PreviewObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct PreviewObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::PreviewObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::PreviewObject, "Modio.API.SchemaDefinitions", "PreviewObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.PreviewObject
struct CORDL_TYPE PreviewObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee150, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::StringW  resource_url, int64_t  date_added, int64_t  date_updated) ;

// Ctor Parameters []
// @brief default ctor
constexpr PreviewObject() ;

// Ctor Parameters [CppParam { name: "ResourceUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateUpdated", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr PreviewObject(::StringW  ResourceUrl, int64_t  DateAdded, int64_t  DateUpdated) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field ResourceUrl, offset: 0x0, size: 0x8, def value: None
 ::StringW  ResourceUrl;

/// @brief Field DateAdded, offset: 0x8, size: 0x8, def value: None
 int64_t  DateAdded;

/// @brief Field DateUpdated, offset: 0x10, size: 0x8, def value: None
 int64_t  DateUpdated;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::PreviewObject, ResourceUrl) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PreviewObject, DateAdded) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PreviewObject, DateUpdated) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::PreviewObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
