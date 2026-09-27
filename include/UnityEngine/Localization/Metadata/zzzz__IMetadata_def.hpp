#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/IMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IMetadata)
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::IMetadata*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::IMetadata*, "UnityEngine.Localization.Metadata", "IMetadata");
// Dependencies 
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.IMetadata
class CORDL_TYPE IMetadata {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "IMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMetadata(IMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Metadata
