#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
CORDL_MODULE_EXPORT(MetadataCollection)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadataCollection;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class MetadataCollection;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::MetadataCollection*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::MetadataCollection*, "UnityEngine.Localization.Metadata", "MetadataCollection");
// Dependencies System.Object, UnityEngine.Localization.Metadata.IMetadata
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.MetadataCollection
class CORDL_TYPE MetadataCollection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HasData)) bool  HasData;

 __declspec(property(get=get_MetadataEntries)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  MetadataEntries;

/// @brief Field m_Items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Items, put=__cordl_internal_set_m_Items)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>*  m_Items;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadataCollection*() noexcept;

/// @brief Method AddMetadata, addr 0xb050004, size 0xac, virtual true, abstract: false, final true
inline void AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method Contains, addr 0xb050108, size 0x58, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method GetMetadata, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline TObject GetMetadata() ;

/// @brief Method GetMetadatas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline ::System::Collections::Generic::IList_1<TObject>* GetMetadatas() ;

/// @brief Method GetMetadatas, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline void GetMetadatas(::System::Collections::Generic::IList_1<TObject>*  foundItems) ;

/// @brief Method HasMetadata, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Localization::Metadata::IMetadata*>)
inline bool HasMetadata() ;

static inline ::UnityEngine::Localization::Metadata::MetadataCollection* New_ctor() ;

/// @brief Method RemoveMetadata, addr 0xb0500b0, size 0x58, virtual true, abstract: false, final true
inline bool RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>* const& __cordl_internal_get_m_Items() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>*& __cordl_internal_get_m_Items() ;

constexpr void __cordl_internal_set_m_Items(::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>*  value) ;

/// @brief Method .ctor, addr 0xb050160, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_HasData, addr 0xb04ff54, size 0xb0, virtual false, abstract: false, final false
inline bool get_HasData() ;

/// @brief Method get_MetadataEntries, addr 0xb04ff4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* get_MetadataEntries() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr ::UnityEngine::Localization::Metadata::IMetadataCollection* i___UnityEngine__Localization__Metadata__IMetadataCollection() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MetadataCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MetadataCollection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MetadataCollection(MetadataCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MetadataCollection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MetadataCollection(MetadataCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25336};

/// [SerializeReference]
/// @brief Field m_Items, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::IMetadata*>*  ___m_Items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::MetadataCollection, ___m_Items) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::MetadataCollection) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
