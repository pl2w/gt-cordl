#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTagOptionObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__GameTagOptionObject_EmbeddedTagsLocalization_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameTagOptionObject)
namespace GlobalNamespace {
struct GameTagOptionObject_EmbeddedTagsLocalization;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct GameTagOptionObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::GameTagOptionObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::GameTagOptionObject, "Modio.API.SchemaDefinitions", "GameTagOptionObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.GameTagOptionObject::EmbeddedTagsLocalization
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameTagOptionObject
struct CORDL_TYPE GameTagOptionObject {
public:
// Declarations
using EmbeddedTagsLocalization = ::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecc9c, size 0xac, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  name_localization, ::StringW  type, ::ArrayW<::StringW>  tags, ::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>  tags_localization, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  tag_count_map, bool  hidden, bool  locked) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameTagOptionObject() ;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "NameLocalization", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Type", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Tags", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TagsLocalization", ty: "::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>", modifiers: "", def_value: None, comment: None }, CppParam { name: "TagCountMap", ty: "::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hidden", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Locked", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GameTagOptionObject(::StringW  Name, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  NameLocalization, ::StringW  Type, ::ArrayW<::StringW>  Tags, ::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>  TagsLocalization, ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  TagCountMap, bool  Hidden, bool  Locked) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18130};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field Name, offset: 0x0, size: 0x8, def value: None
 ::StringW  Name;

/// @brief Field NameLocalization, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  NameLocalization;

/// @brief Field Type, offset: 0x10, size: 0x8, def value: None
 ::StringW  Type;

/// @brief Field Tags, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW>  Tags;

/// @brief Field TagsLocalization, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization>  TagsLocalization;

/// @brief Field TagCountMap, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  TagCountMap;

/// @brief Field Hidden, offset: 0x30, size: 0x1, def value: None
 bool  Hidden;

/// @brief Field Locked, offset: 0x31, size: 0x1, def value: None
 bool  Locked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, Name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, NameLocalization) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, Tags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, TagsLocalization) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, TagCountMap) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, Hidden) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::GameTagOptionObject, Locked) == 0x31, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::GameTagOptionObject) == 0x38, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
