#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/GameTagOptionObject_EmbeddedTagsLocalization.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameTagOptionObject_EmbeddedTagsLocalization)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameTagOptionObject_EmbeddedTagsLocalization;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization, "Modio.API.SchemaDefinitions", "GameTagOptionObject/EmbeddedTagsLocalization");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.GameTagOptionObject/EmbeddedTagsLocalization
struct CORDL_TYPE GameTagOptionObject_EmbeddedTagsLocalization {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fecd48, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  tag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  translations) ;

// Ctor Parameters []
// @brief default ctor
constexpr GameTagOptionObject_EmbeddedTagsLocalization() ;

// Ctor Parameters [CppParam { name: "Tag", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Translations", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: None, comment: None }]
constexpr GameTagOptionObject_EmbeddedTagsLocalization(::StringW  Tag, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Translations) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18129};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Tag, offset: 0x0, size: 0x8, def value: None
 ::StringW  Tag;

/// @brief Field Translations, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Translations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization, Tag) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization, Translations) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameTagOptionObject_EmbeddedTagsLocalization) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
