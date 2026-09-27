#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedButtons.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedAgree_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_EmbeddedDisagree_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TermsObject_EmbeddedButtons)
namespace GlobalNamespace {
struct EmbeddedButtons_TermsObject_EmbeddedAgree;
}
namespace GlobalNamespace {
struct EmbeddedButtons_TermsObject_EmbeddedDisagree;
}
// Forward declare root types
namespace GlobalNamespace {
struct TermsObject_EmbeddedButtons;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TermsObject_EmbeddedButtons);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TermsObject_EmbeddedButtons, "Modio.API.SchemaDefinitions", "TermsObject/EmbeddedButtons");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies Modio.API.SchemaDefinitions.TermsObject::EmbeddedButtons::EmbeddedAgree, Modio.API.SchemaDefinitions.TermsObject::EmbeddedButtons::EmbeddedDisagree
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TermsObject/EmbeddedButtons
struct CORDL_TYPE TermsObject_EmbeddedButtons {
public:
// Declarations
using EmbeddedAgree = ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree;

using EmbeddedDisagree = ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee3ac, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree  agree, ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree  disagree) ;

// Ctor Parameters []
// @brief default ctor
constexpr TermsObject_EmbeddedButtons() ;

// Ctor Parameters [CppParam { name: "Agree", ty: "::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree", modifiers: "", def_value: None, comment: None }, CppParam { name: "Disagree", ty: "::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree", modifiers: "", def_value: None, comment: None }]
constexpr TermsObject_EmbeddedButtons(::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree  Agree, ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree  Disagree) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18173};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Agree, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedAgree  Agree;

/// @brief Field Disagree, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::EmbeddedButtons_TermsObject_EmbeddedDisagree  Disagree;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedButtons, Agree) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedButtons, Disagree) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TermsObject_EmbeddedButtons) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
