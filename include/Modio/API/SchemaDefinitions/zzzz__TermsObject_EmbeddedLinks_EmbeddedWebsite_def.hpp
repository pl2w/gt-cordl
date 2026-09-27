#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedLinks_EmbeddedWebsite.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TermsObject_EmbeddedLinks_EmbeddedWebsite)
// Forward declare root types
namespace GlobalNamespace {
struct EmbeddedLinks_TermsObject_EmbeddedWebsite;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite, "Modio.API.SchemaDefinitions", "TermsObject/EmbeddedLinks/EmbeddedWebsite");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TermsObject/EmbeddedLinks/EmbeddedWebsite
struct CORDL_TYPE EmbeddedLinks_TermsObject_EmbeddedWebsite {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee4a4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  text, ::StringW  url, bool  required) ;

// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedLinks_TermsObject_EmbeddedWebsite() ;

// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Required", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr EmbeddedLinks_TermsObject_EmbeddedWebsite(::StringW  Text, ::StringW  Url, bool  Required) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18174};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Text, offset: 0x0, size: 0x8, def value: None
 ::StringW  Text;

/// @brief Field Url, offset: 0x8, size: 0x8, def value: None
 ::StringW  Url;

/// @brief Field Required, offset: 0x10, size: 0x1, def value: None
 bool  Required;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite, Text) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite, Url) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite, Required) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
