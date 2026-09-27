#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/LocalizationTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizationTable)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadataCollection;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Metadata {
class MetadataCollection;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData;
}
namespace UnityEngine::Localization::Tables {
class TableEntryData;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class LocalizationTable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::LocalizationTable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::LocalizationTable*, "UnityEngine.Localization.Tables", "LocalizationTable");
// Dependencies UnityEngine.Localization.LocaleIdentifier, UnityEngine.Localization.Metadata.IMetadata, UnityEngine.ScriptableObject
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.LocalizationTable
class CORDL_TYPE LocalizationTable : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_LocaleIdentifier, put=set_LocaleIdentifier)) ::UnityEngine::Localization::LocaleIdentifier  LocaleIdentifier;

 __declspec(property(get=get_MetadataEntries)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  MetadataEntries;

 __declspec(property(get=get_SharedData, put=set_SharedData)) ::UnityW<::UnityEngine::Localization::Tables::SharedTableData>  SharedData;

 __declspec(property(get=get_TableCollectionName)) ::StringW  TableCollectionName;

 __declspec(property(get=get_TableData)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*  TableData;

/// @brief Field m_LocaleId, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_LocaleId, put=__cordl_internal_set_m_LocaleId)) ::UnityEngine::Localization::LocaleIdentifier  m_LocaleId;

/// @brief Field m_Metadata, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metadata, put=__cordl_internal_set_m_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  m_Metadata;

/// @brief Field m_SharedData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SharedData, put=__cordl_internal_set_m_SharedData)) ::UnityW<::UnityEngine::Localization::Tables::SharedTableData>  m_SharedData;

/// @brief Field m_TableData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableData, put=__cordl_internal_set_m_TableData)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*  m_TableData;

/// @brief Convert operator to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>"
constexpr operator  ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadataCollection*() noexcept;

/// @brief Method AddMetadata, addr 0xb017790, size 0x18, virtual true, abstract: false, final true
inline void AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method CompareTo, addr 0xb018154, size 0xa0, virtual true, abstract: false, final true
inline int32_t CompareTo(::UnityEngine::Localization::Tables::LocalizationTable*  other) ;

/// @brief Method Contains, addr 0xb017778, size 0x18, virtual true, abstract: false, final true
inline bool Contains(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method CreateEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CreateEmpty(::UnityEngine::Localization::Tables::TableEntryReference  entryReference) ;

/// @brief Method FindKeyId, addr 0xb018034, size 0x38, virtual false, abstract: false, final false
inline int64_t FindKeyId(::StringW  key, bool  addKey) ;

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

static inline ::UnityEngine::Localization::Tables::LocalizationTable* New_ctor() ;

/// @brief Method RemoveMetadata, addr 0xb017910, size 0x18, virtual true, abstract: false, final true
inline bool RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method ToString, addr 0xb0180b8, size 0x9c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method VerifySharedTableDataIsNotNull, addr 0xb017f20, size 0xe4, virtual false, abstract: false, final false
inline void VerifySharedTableDataIsNotNull() ;

constexpr ::UnityEngine::Localization::LocaleIdentifier const& __cordl_internal_get_m_LocaleId() const;

constexpr ::UnityEngine::Localization::LocaleIdentifier& __cordl_internal_get_m_LocaleId() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& __cordl_internal_get_m_Metadata() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& __cordl_internal_get_m_Metadata() ;

constexpr ::UnityW<::UnityEngine::Localization::Tables::SharedTableData> const& __cordl_internal_get_m_SharedData() const;

constexpr ::UnityW<::UnityEngine::Localization::Tables::SharedTableData>& __cordl_internal_get_m_SharedData() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>* const& __cordl_internal_get_m_TableData() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*& __cordl_internal_get_m_TableData() ;

constexpr void __cordl_internal_set_m_LocaleId(::UnityEngine::Localization::LocaleIdentifier  value) ;

constexpr void __cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

constexpr void __cordl_internal_set_m_SharedData(::UnityW<::UnityEngine::Localization::Tables::SharedTableData>  value) ;

constexpr void __cordl_internal_set_m_TableData(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*  value) ;

/// @brief Method .ctor, addr 0xb0181f4, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LocaleIdentifier, addr 0xb017ee4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocaleIdentifier get_LocaleIdentifier() ;

/// @brief Method get_MetadataEntries, addr 0xb01801c, size 0x18, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* get_MetadataEntries() ;

/// @brief Method get_SharedData, addr 0xb018004, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Tables::SharedTableData> get_SharedData() ;

/// @brief Method get_TableCollectionName, addr 0xb017efc, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_TableCollectionName() ;

/// @brief Method get_TableData, addr 0xb018014, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>* get_TableData() ;

/// @brief Convert to "::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>"
constexpr ::System::IComparable_1<::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>>* i___System__IComparable_1___UnityW___UnityEngine__Localization__Tables__LocalizationTable__() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr ::UnityEngine::Localization::Metadata::IMetadataCollection* i___UnityEngine__Localization__Metadata__IMetadataCollection() noexcept;

/// @brief Method set_LocaleIdentifier, addr 0xb017ef0, size 0xc, virtual false, abstract: false, final false
inline void set_LocaleIdentifier(::UnityEngine::Localization::LocaleIdentifier  value) ;

/// @brief Method set_SharedData, addr 0xb01800c, size 0x8, virtual false, abstract: false, final false
inline void set_SharedData(::UnityEngine::Localization::Tables::SharedTableData*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationTable(LocalizationTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationTable(LocalizationTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25080};

/// [SerializeField]
/// @brief Field m_LocaleId, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Localization::LocaleIdentifier  ___m_LocaleId;

/// [FormerlySerializedAs("m_KeyDatabase")]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_SharedData, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Tables::SharedTableData>  ___m_SharedData;

/// [SerializeField]
/// @brief Field m_Metadata, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::MetadataCollection*  ___m_Metadata;

/// [SerializeField]
/// @brief Field m_TableData, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::TableEntryData*>*  ___m_TableData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::LocalizationTable, ___m_LocaleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::LocalizationTable, ___m_SharedData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::LocalizationTable, ___m_Metadata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::LocalizationTable, ___m_TableData) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::LocalizationTable) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
