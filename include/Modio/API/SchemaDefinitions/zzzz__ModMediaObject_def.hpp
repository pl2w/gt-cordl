#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/ModMediaObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__ImageObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ModMediaObject)
namespace Modio::API::SchemaDefinitions {
struct ImageObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct ModMediaObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::ModMediaObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::ModMediaObject, "Modio.API.SchemaDefinitions", "ModMediaObject");
// [IsReadOnly]
// [JsonObject((Newtonsoft.Json.MemberSerialization)2)]
// Dependencies Modio.API.SchemaDefinitions.ImageObject
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.ModMediaObject
struct CORDL_TYPE ModMediaObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fed668, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::StringW>  youtube, ::ArrayW<::StringW>  sketchfab, ::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>  images) ;

// Ctor Parameters []
// @brief default ctor
constexpr ModMediaObject() ;

// Ctor Parameters [CppParam { name: "Youtube", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Sketchfab", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Images", ty: "::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>", modifiers: "", def_value: None, comment: None }]
constexpr ModMediaObject(::ArrayW<::StringW>  Youtube, ::ArrayW<::StringW>  Sketchfab, ::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>  Images) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18152};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Youtube, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::StringW>  Youtube;

/// @brief Field Sketchfab, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW>  Sketchfab;

/// @brief Field Images, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::Modio::API::SchemaDefinitions::ImageObject>  Images;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::ModMediaObject, Youtube) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModMediaObject, Sketchfab) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::ModMediaObject, Images) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::ModMediaObject) == 0x18, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
