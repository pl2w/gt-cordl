#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/IEntryOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IEntryOverride)
namespace UnityEngine::Localization::Metadata {
struct EntryOverrideType;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class IEntryOverride;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::IEntryOverride*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::IEntryOverride*, "UnityEngine.Localization.Metadata", "IEntryOverride");
// Dependencies 
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.IEntryOverride
class CORDL_TYPE IEntryOverride {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

/// @brief Method GetOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Localization::Metadata::EntryOverrideType GetOverride(::by_ref<::UnityEngine::Localization::Tables::TableReference>  tableReference, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>  tableEntryReference) ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IEntryOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IEntryOverride(IEntryOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Metadata
