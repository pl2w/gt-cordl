#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/IMetadataCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
CORDL_MODULE_EXPORT(IMetadataCollection)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class IMetadataCollection;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::IMetadataCollection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::IMetadataCollection*, "UnityEngine.Localization.Metadata", "IMetadataCollection");
// Dependencies UnityEngine.Localization.Metadata.IMetadata
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.IMetadataCollection
class CORDL_TYPE IMetadataCollection {
public:
// Declarations
 __declspec(property(get=get_MetadataEntries)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  MetadataEntries;

/// @brief Method AddMetadata, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool Contains(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method GetMetadata, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline TObject GetMetadata() ;

/// @brief Method GetMetadatas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline ::System::Collections::Generic::IList_1<TObject>* GetMetadatas() ;

/// @brief Method GetMetadatas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline void GetMetadatas(::System::Collections::Generic::IList_1<TObject>*  foundItems) ;

/// @brief Method RemoveMetadata, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method get_MetadataEntries, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* get_MetadataEntries() ;

// Ctor Parameters [CppParam { name: "", ty: "IMetadataCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMetadataCollection(IMetadataCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Metadata
