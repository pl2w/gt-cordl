#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/IconObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IconObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct IconObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::IconObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::IconObject, "Modio.API.SchemaDefinitions", "IconObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.IconObject
struct CORDL_TYPE IconObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed004, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::StringW  original, ::StringW  thumb_64x64, ::StringW  thumb_128x128, ::StringW  thumb_256x256) ;

// Ctor Parameters []
// @brief default ctor
constexpr IconObject() ;

// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb64X64", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb128X128", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb256X256", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr IconObject(::StringW  Filename, ::StringW  Original, ::StringW  Thumb64X64, ::StringW  Thumb128X128, ::StringW  Thumb256X256) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18137};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Filename, offset: 0x0, size: 0x8, def value: None
 ::StringW  Filename;

/// @brief Field Original, offset: 0x8, size: 0x8, def value: None
 ::StringW  Original;

/// @brief Field Thumb64X64, offset: 0x10, size: 0x8, def value: None
 ::StringW  Thumb64X64;

/// @brief Field Thumb128X128, offset: 0x18, size: 0x8, def value: None
 ::StringW  Thumb128X128;

/// @brief Field Thumb256X256, offset: 0x20, size: 0x8, def value: None
 ::StringW  Thumb256X256;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::IconObject, Filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::IconObject, Original) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::IconObject, Thumb64X64) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::IconObject, Thumb128X128) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::IconObject, Thumb256X256) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::IconObject) == 0x28, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
