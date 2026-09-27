#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/PaginationObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PaginationObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct PaginationObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::PaginationObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::PaginationObject, "Modio.API.SchemaDefinitions", "PaginationObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.PaginationObject
struct CORDL_TYPE PaginationObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fedfe4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int64_t  per_page, ::StringW  current_page, int64_t  next_page_url, int64_t  prev_page_url) ;

// Ctor Parameters []
// @brief default ctor
constexpr PaginationObject() ;

// Ctor Parameters [CppParam { name: "PerPage", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "CurrentPage", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NextPageUrl", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PrevPageUrl", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr PaginationObject(int64_t  PerPage, ::StringW  CurrentPage, int64_t  NextPageUrl, int64_t  PrevPageUrl) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18161};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field PerPage, offset: 0x0, size: 0x8, def value: None
 int64_t  PerPage;

/// @brief Field CurrentPage, offset: 0x8, size: 0x8, def value: None
 ::StringW  CurrentPage;

/// @brief Field NextPageUrl, offset: 0x10, size: 0x8, def value: None
 int64_t  NextPageUrl;

/// @brief Field PrevPageUrl, offset: 0x18, size: 0x8, def value: None
 int64_t  PrevPageUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::PaginationObject, PerPage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PaginationObject, CurrentPage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PaginationObject, NextPageUrl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::PaginationObject, PrevPageUrl) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::PaginationObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
