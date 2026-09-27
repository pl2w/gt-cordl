#pragma once
// IWYU pragma private; include "Modio/API/SchemaDefinitions/TermsObject_EmbeddedLinks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedManage_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedPrivacy_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedRefund_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedTerms_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__TermsObject_EmbeddedLinks_EmbeddedWebsite_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TermsObject_EmbeddedLinks)
namespace GlobalNamespace {
struct EmbeddedLinks_TermsObject_EmbeddedManage;
}
namespace GlobalNamespace {
struct EmbeddedLinks_TermsObject_EmbeddedPrivacy;
}
namespace GlobalNamespace {
struct EmbeddedLinks_TermsObject_EmbeddedRefund;
}
namespace GlobalNamespace {
struct EmbeddedLinks_TermsObject_EmbeddedTerms;
}
namespace GlobalNamespace {
struct EmbeddedLinks_TermsObject_EmbeddedWebsite;
}
// Forward declare root types
namespace GlobalNamespace {
struct TermsObject_EmbeddedLinks;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TermsObject_EmbeddedLinks);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TermsObject_EmbeddedLinks, "Modio.API.SchemaDefinitions", "TermsObject/EmbeddedLinks");
// [IsReadOnly]
// [JsonObject(NamingStrategyType = typeof(Newtonsoft.Json.Serialization.SnakeCaseNamingStrategy))]
// Dependencies Modio.API.SchemaDefinitions.TermsObject::EmbeddedLinks::EmbeddedManage, Modio.API.SchemaDefinitions.TermsObject::EmbeddedLinks::EmbeddedPrivacy, Modio.API.SchemaDefinitions.TermsObject::EmbeddedLinks::EmbeddedRefund, Modio.API.SchemaDefinitions.TermsObject::EmbeddedLinks::EmbeddedTerms, Modio.API.SchemaDefinitions.TermsObject::EmbeddedLinks::EmbeddedWebsite
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.API.SchemaDefinitions.TermsObject/EmbeddedLinks
struct CORDL_TYPE TermsObject_EmbeddedLinks {
public:
// Declarations
using EmbeddedManage = ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage;

using EmbeddedPrivacy = ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy;

using EmbeddedRefund = ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund;

using EmbeddedTerms = ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms;

using EmbeddedWebsite = ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9fee3f0, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite  website, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms  terms, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy  privacy, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund  refund, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage  manage) ;

// Ctor Parameters []
// @brief default ctor
constexpr TermsObject_EmbeddedLinks() ;

// Ctor Parameters [CppParam { name: "Website", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite", modifiers: "", def_value: None, comment: None }, CppParam { name: "Terms", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms", modifiers: "", def_value: None, comment: None }, CppParam { name: "Privacy", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy", modifiers: "", def_value: None, comment: None }, CppParam { name: "Refund", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund", modifiers: "", def_value: None, comment: None }, CppParam { name: "Manage", ty: "::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage", modifiers: "", def_value: None, comment: None }]
constexpr TermsObject_EmbeddedLinks(::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite  Website, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms  Terms, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy  Privacy, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund  Refund, ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage  Manage) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18179};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field Website, offset: 0x0, size: 0x18, def value: None
 ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedWebsite  Website;

/// @brief Field Terms, offset: 0x18, size: 0x18, def value: None
 ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedTerms  Terms;

/// @brief Field Privacy, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedPrivacy  Privacy;

/// @brief Field Refund, offset: 0x48, size: 0x18, def value: None
 ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedRefund  Refund;

/// @brief Field Manage, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::EmbeddedLinks_TermsObject_EmbeddedManage  Manage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedLinks, Website) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedLinks, Terms) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedLinks, Privacy) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedLinks, Refund) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TermsObject_EmbeddedLinks, Manage) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TermsObject_EmbeddedLinks) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
