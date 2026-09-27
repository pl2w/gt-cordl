#pragma once
// IWYU pragma private; include "Modio/TermsOfUseLink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__LinkType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TermsOfUseLink)
// Forward declare root types
namespace Modio {
struct TermsOfUseLink;
}
// Write type traits
MARK_VAL_T(::Modio::TermsOfUseLink);
DEFINE_IL2CPP_CLASS(::Modio::TermsOfUseLink, "Modio", "TermsOfUseLink");
// Dependencies Modio.LinkType
namespace Modio {
// Is value type: true
// CS Name: Modio.TermsOfUseLink
struct CORDL_TYPE TermsOfUseLink {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TermsOfUseLink() ;

// Ctor Parameters [CppParam { name: "type", ty: "::Modio::LinkType", modifiers: "", def_value: None, comment: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "url", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "required", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr TermsOfUseLink(::Modio::LinkType  type, ::StringW  text, ::StringW  url, bool  required) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field type, offset: 0x0, size: 0x4, def value: None
 ::Modio::LinkType  type;

/// @brief Field text, offset: 0x8, size: 0x8, def value: None
 ::StringW  text;

/// @brief Field url, offset: 0x10, size: 0x8, def value: None
 ::StringW  url;

/// @brief Field required, offset: 0x18, size: 0x1, def value: None
 bool  required;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::TermsOfUseLink, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Modio::TermsOfUseLink, text) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Modio::TermsOfUseLink, url) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::TermsOfUseLink, required) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::TermsOfUseLink) == 0x20, "Size mismatch!");

} // namespace end def Modio
