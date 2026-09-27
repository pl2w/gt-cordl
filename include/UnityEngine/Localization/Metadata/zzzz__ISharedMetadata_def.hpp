#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/ISharedMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(ISharedMetadata)
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class ISharedMetadata;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::ISharedMetadata*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::ISharedMetadata*, "UnityEngine.Localization.Metadata", "ISharedMetadata");
// [HideInInspector]
// Dependencies 
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.ISharedMetadata
class CORDL_TYPE ISharedMetadata {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

/// @brief Method AddEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddEntry(int64_t  keyId) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Contains(int64_t  keyId) ;

/// @brief Method RemoveEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void RemoveEntry(int64_t  keyId) ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "ISharedMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISharedMetadata(ISharedMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25334};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Metadata
