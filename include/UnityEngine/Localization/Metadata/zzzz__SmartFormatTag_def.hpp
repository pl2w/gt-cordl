#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SmartFormatTag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_def.hpp"
CORDL_MODULE_EXPORT(SmartFormatTag)
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class SmartFormatTag;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::SmartFormatTag*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::SmartFormatTag*, "UnityEngine.Localization.Metadata", "SmartFormatTag");
// [HideInInspector]
// Dependencies UnityEngine.Localization.Metadata.SharedTableEntryMetadata
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.SmartFormatTag
class CORDL_TYPE SmartFormatTag : public ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata {
public:
// Declarations
static inline ::UnityEngine::Localization::Metadata::SmartFormatTag* New_ctor() ;

/// @brief Method .ctor, addr 0xb051548, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SmartFormatTag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SmartFormatTag", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SmartFormatTag(SmartFormatTag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmartFormatTag", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmartFormatTag(SmartFormatTag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Metadata::SmartFormatTag) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
