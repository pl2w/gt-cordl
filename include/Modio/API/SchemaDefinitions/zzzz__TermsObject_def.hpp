#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedButtons_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TermsObject)
namespace GlobalNamespace {
struct TermsObject_EmbeddedButtons;
}
namespace GlobalNamespace {
struct TermsObject_EmbeddedLinks;
}
// Forward declare root types
namespace Modio::API::SchemaDefinitions {
struct TermsObject;
}
// Write type traits
MARK_VAL_T(::Modio::API::SchemaDefinitions::TermsObject);
DEFINE_IL2CPP_CLASS(::Modio::API::SchemaDefinitions::TermsObject, "Modio.API.SchemaDefinitions", "TermsObject");
// [IsReadOnly]
// [JsonObject]
// Dependencies Modio.API.SchemaDefinitions.TermsObject::EmbeddedButtons, Modio.API.SchemaDefinitions.TermsObject::EmbeddedLinks
namespace Modio::API::SchemaDefinitions {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TermsObject
struct CORDL_TYPE TermsObject {
public:
// Declarations
using EmbeddedButtons = ::GlobalNamespace::TermsObject_EmbeddedButtons;

using EmbeddedLinks = ::GlobalNamespace::TermsObject_EmbeddedLinks;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee33c, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::StringW  plaintext, ::StringW  html, ::GlobalNamespace::TermsObject_EmbeddedButtons  buttons, ::GlobalNamespace::TermsObject_EmbeddedLinks  links) ;

// Ctor Parameters []
// @brief default ctor
constexpr TermsObject() ;

// Ctor Parameters [CppParam { name: "Plaintext", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Html", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "Buttons", ty: "::GlobalNamespace::TermsObject_EmbeddedButtons", modifiers: "", def_value: None, comment: None }, CppParam { name: "Links", ty: "::GlobalNamespace::TermsObject_EmbeddedLinks", modifiers: "", def_value: None, comment: None }]
constexpr TermsObject(::StringW  Plaintext, ::StringW  Html, ::GlobalNamespace::TermsObject_EmbeddedButtons  Buttons, ::GlobalNamespace::TermsObject_EmbeddedLinks  Links) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18180};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field Plaintext, offset: 0x0, size: 0x8, def value: None
 ::StringW  Plaintext;

/// @brief Field Html, offset: 0x8, size: 0x8, def value: None
 ::StringW  Html;

/// @brief Field Buttons, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::TermsObject_EmbeddedButtons  Buttons;

/// @brief Field Links, offset: 0x20, size: 0x78, def value: None
 ::GlobalNamespace::TermsObject_EmbeddedLinks  Links;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::API::SchemaDefinitions::TermsObject, Plaintext) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TermsObject, Html) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TermsObject, Buttons) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::API::SchemaDefinitions::TermsObject, Links) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::API::SchemaDefinitions::TermsObject) == 0x98, "Size mismatch!");

} // namespace end def Modio::API::SchemaDefinitions
