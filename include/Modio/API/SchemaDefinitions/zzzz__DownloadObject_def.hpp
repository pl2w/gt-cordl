#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/DownloadObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DownloadObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct DownloadObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::DownloadObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::DownloadObject, "Modio.API.SchemaDefinitions", "DownloadObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.DownloadObject
struct CORDL_TYPE DownloadObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fec5c0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::StringW  binary_url, int64_t  date_expires) ;

// Ctor Parameters []
// @brief default ctor
constexpr DownloadObject() ;

// Ctor Parameters [CppParam { name: "BinaryUrl", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateExpires", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr DownloadObject(::StringW  BinaryUrl, int64_t  DateExpires) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18114};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field BinaryUrl, offset: 0x0, size: 0x8, def value: None
 ::StringW  BinaryUrl;

/// @brief Field DateExpires, offset: 0x8, size: 0x8, def value: None
 int64_t  DateExpires;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::DownloadObject, BinaryUrl) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::DownloadObject, DateExpires) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::DownloadObject) == 0x10, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
