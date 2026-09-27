#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTagOptionLocalizedObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameTagOptionLocalizedObject)
namespace Newtonsoft::Json::Linq {
class JObject;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameTagOptionLocalizedObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, "Modio.API.SchemaDefinitions", "GameTagOptionLocalizedObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies 
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameTagOptionLocalizedObject
struct CORDL_TYPE GameTagOptionLocalizedObject {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecbf0, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  name_localized, ::StringW  type, ::ArrayW<::StringW>  tags, ::Newtonsoft::Json::Linq::JObject*  tags_localized, ::Newtonsoft::Json::Linq::JObject*  tag_count_map, bool  hidden, bool  locked) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameTagOptionLocalizedObject() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameLocalized", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TagsLocalized", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None, comment: None }, CppParam { name: "TagCountMap", ty: "::Newtonsoft::Json::Linq::JObject*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hidden", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Locked", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GameTagOptionLocalizedObject(::StringW  Name, ::StringW  NameLocalized, ::StringW  Type, ::ArrayW<::StringW>  Tags, ::Newtonsoft::Json::Linq::JObject*  TagsLocalized, ::Newtonsoft::Json::Linq::JObject*  TagCountMap, bool  Hidden, bool  Locked) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameLocalized, offset: 0x8, size: 0x8, def value: None
 ::StringW  NameLocalized;

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::StringW  Type;

/// @brief Field Tags, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  Tags;

/// @brief Field TagsLocalized, offset: 0x20, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  TagsLocalized;

/// @brief Field TagCountMap, offset: 0x28, size: 0x8, def value: None
 ::Newtonsoft::Json::Linq::JObject*  TagCountMap;

/// @brief Field Hidden, offset: 0x30, size: 0x1, def value: None
 bool  Hidden;

/// @brief Field Locked, offset: 0x31, size: 0x1, def value: None
 bool  Locked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, NameLocalized) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, Tags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, TagsLocalized) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, TagCountMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, Hidden) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject, Locked) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameTagOptionLocalizedObject) == 0x38, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
