#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/MultipartUploadPartObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultipartUploadPartObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct MultipartUploadPartObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::MultipartUploadPartObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::MultipartUploadPartObject, "Modio.API.SchemaDefinitions", "MultipartUploadPartObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.MultipartUploadPartObject
struct CORDL_TYPE MultipartUploadPartObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fedfa8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  upload_id, int64_t  part_number, int64_t  part_size, int64_t  date_added) ;

// Ctor Parameters []
// @brief default ctor
constexpr MultipartUploadPartObject() ;

// Ctor Parameters [CppParam { name: "UploadId", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "PartNumber", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PartSize", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DateAdded", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr MultipartUploadPartObject(::StringW  UploadId, int64_t  PartNumber, int64_t  PartSize, int64_t  DateAdded) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18160};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field UploadId, offset: 0x0, size: 0x8, def value: None
 ::StringW  UploadId;

/// @brief Field PartNumber, offset: 0x8, size: 0x8, def value: None
 int64_t  PartNumber;

/// @brief Field PartSize, offset: 0x10, size: 0x8, def value: None
 int64_t  PartSize;

/// @brief Field DateAdded, offset: 0x18, size: 0x8, def value: None
 int64_t  DateAdded;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::MultipartUploadPartObject, UploadId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MultipartUploadPartObject, PartNumber) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MultipartUploadPartObject, PartSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::MultipartUploadPartObject, DateAdded) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::MultipartUploadPartObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
