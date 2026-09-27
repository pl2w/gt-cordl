#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ImageObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ImageObject)
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ImageObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ImageObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ImageObject, "Modio.API.SchemaDefinitions", "ImageObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ImageObject
struct CORDL_TYPE ImageObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed078, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::StringW  filename, ::StringW  original, ::StringW  thumb_320x180, ::StringW  thumb_1280x720) ;

// Ctor Parameters []
// @brief default ctor
constexpr ImageObject() ;

// Ctor Parameters [CppParam { name: "Filename", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Original", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb320X180", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Thumb1280X720", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr ImageObject(::StringW  Filename, ::StringW  Original, ::StringW  Thumb320X180, ::StringW  Thumb1280X720) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18138};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field Filename, offset: 0x0, size: 0x8, def value: None
 ::StringW  Filename;

/// @brief Field Original, offset: 0x8, size: 0x8, def value: None
 ::StringW  Original;

/// @brief Field Thumb320X180, offset: 0x10, size: 0x8, def value: None
 ::StringW  Thumb320X180;

/// @brief Field Thumb1280X720, offset: 0x18, size: 0x8, def value: None
 ::StringW  Thumb1280X720;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ImageObject, Filename) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ImageObject, Original) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ImageObject, Thumb320X180) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ImageObject, Thumb1280X720) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ImageObject) == 0x20, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
