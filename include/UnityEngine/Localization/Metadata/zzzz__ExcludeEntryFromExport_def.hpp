#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/ExcludeEntryFromExport.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExcludeEntryFromExport)
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class ExcludeEntryFromExport;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::ExcludeEntryFromExport*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::ExcludeEntryFromExport*, "UnityEngine.Localization.Metadata", "ExcludeEntryFromExport");
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)192)]
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.ExcludeEntryFromExport
class CORDL_TYPE ExcludeEntryFromExport : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

static inline ::UnityEngine::Localization::Metadata::ExcludeEntryFromExport* New_ctor() ;

/// @brief Method .ctor, addr 0xb04fd40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExcludeEntryFromExport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExcludeEntryFromExport", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExcludeEntryFromExport(ExcludeEntryFromExport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeEntryFromExport", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExcludeEntryFromExport(ExcludeEntryFromExport const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25331};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Metadata::ExcludeEntryFromExport) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
