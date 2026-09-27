#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedButtons_EmbeddedDisagree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TermsObject_EmbeddedButtons_EmbeddedDisagree)
// Forward declare root types
namespace GlobalNamespace {
struct EmbeddedButtons_TermsObject_EmbeddedDisagree;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree, "Modio.API.SchemaDefinitions", "TermsObject/EmbeddedButtons/EmbeddedDisagree");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TermsObject/EmbeddedButtons/EmbeddedDisagree
struct CORDL_TYPE EmbeddedButtons_TermsObject_EmbeddedDisagree {
public:
// Declarations
/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee3e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  text) ;

// Ctor Parameters []
// @brief default ctor
constexpr EmbeddedButtons_TermsObject_EmbeddedDisagree() ;

// Ctor Parameters [CppParam { name: "Text", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr EmbeddedButtons_TermsObject_EmbeddedDisagree(::StringW  Text) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18172};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Text, offset: 0x0, size: 0x8, def value: None
 ::StringW  Text;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree, Text) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
