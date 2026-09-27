#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__SharedTableEntryMetadata_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TableEntry)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadataCollection;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Metadata {
class SharedTableCollectionMetadata;
}
namespace UnityEngine::Localization::Metadata {
class SharedTableEntryMetadata;
}
namespace UnityEngine::Localization::Tables {
class LocalizationTable;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData_SharedTableEntry;
}
namespace UnityEngine::Localization::Tables {
class TableEntryData;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class TableEntry;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::TableEntry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::TableEntry*, "UnityEngine.Localization.Tables", "TableEntry");
// Dependencies System.Object, UnityEngine.Localization.Metadata.IMetadata, UnityEngine.Localization.Metadata.SharedTableEntryMetadata
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.TableEntry
class CORDL_TYPE TableEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Data, put=set_Data)) ::UnityEngine::Localization::Tables::TableEntryData*  Data;

 __declspec(property(get=get_Key, put=set_Key)) ::StringW  Key;

 __declspec(property(get=get_KeyId)) int64_t  KeyId;

 __declspec(property(get=get_LocalizedValue)) ::StringW  LocalizedValue;

 __declspec(property(get=get_MetadataEntries)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>*  MetadataEntries;

 __declspec(property(get=get_SharedEntry)) ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  SharedEntry;

 __declspec(property(get=get_Table, put=set_Table)) ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  Table;

/// @brief Field <Data>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::UnityEngine::Localization::Tables::TableEntryData*  _Data_k__BackingField;

/// @brief Field <Table>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Table_k__BackingField, put=__cordl_internal_set__Table_k__BackingField)) ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  _Table_k__BackingField;

/// @brief Field m_SharedTableEntry, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SharedTableEntry, put=__cordl_internal_set_m_SharedTableEntry)) ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  m_SharedTableEntry;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadataCollection*() noexcept;

/// @brief Method AddMetadata, addr 0xb0177a8, size 0x24, virtual true, abstract: false, final true
inline void AddMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method AddSharedMetadata, addr 0xb0177cc, size 0x8c, virtual false, abstract: false, final false
inline void AddSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*  md) ;

/// @brief Method AddSharedMetadata, addr 0xb0176e4, size 0x94, virtual false, abstract: false, final false
inline void AddSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*  md) ;

/// @brief Method AddTagMetadata, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TShared>
requires(::cordl_internals::type_constraint<TShared, ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*> && ::cordl_internals::default_constructor_constraint<TShared>)
inline void AddTagMetadata() ;

/// @brief Method Contains, addr 0xb0179ac, size 0x24, virtual true, abstract: false, final true
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

/// @brief Method HasTagMetadata, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TShared>
requires(::cordl_internals::type_constraint<TShared, ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>)
inline bool HasTagMetadata() ;

static inline ::UnityEngine::Localization::Tables::TableEntry* New_ctor() ;

/// @brief Method RemoveMetadata, addr 0xb0178ec, size 0x24, virtual true, abstract: false, final true
inline bool RemoveMetadata(::UnityEngine::Localization::Metadata::IMetadata*  md) ;

/// @brief Method RemoveSharedMetadata, addr 0xb017928, size 0x84, virtual false, abstract: false, final false
inline void RemoveSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*  md) ;

/// @brief Method RemoveSharedMetadata, addr 0xb017858, size 0x94, virtual false, abstract: false, final false
inline void RemoveSharedMetadata(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*  md) ;

/// @brief Method RemoveTagMetadata, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TShared>
requires(::cordl_internals::type_constraint<TShared, ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*>)
inline void RemoveTagMetadata() ;

/// @brief Method ToString, addr 0xb0179d0, size 0x84, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::Localization::Tables::TableEntryData* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::UnityEngine::Localization::Tables::TableEntryData*& __cordl_internal_get__Data_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> const& __cordl_internal_get__Table_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>& __cordl_internal_get__Table_k__BackingField() ;

constexpr ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* const& __cordl_internal_get_m_SharedTableEntry() const;

constexpr ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*& __cordl_internal_get_m_SharedTableEntry() ;

constexpr void __cordl_internal_set__Data_k__BackingField(::UnityEngine::Localization::Tables::TableEntryData*  value) ;

constexpr void __cordl_internal_set__Table_k__BackingField(::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  value) ;

constexpr void __cordl_internal_set_m_SharedTableEntry(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  value) ;

/// @brief Method .ctor, addr 0xb016420, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0xb0175e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableEntryData* get_Data() ;

/// @brief Method get_Key, addr 0xb017648, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_KeyId, addr 0xb0165b8, size 0x18, virtual false, abstract: false, final false
inline int64_t get_KeyId() ;

/// @brief Method get_LocalizedValue, addr 0xb0176cc, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_LocalizedValue() ;

/// @brief Method get_MetadataEntries, addr 0xb014198, size 0x24, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Metadata::IMetadata*>* get_MetadataEntries() ;

/// @brief Method get_SharedEntry, addr 0xb0175f0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* get_SharedEntry() ;

/// [CompilerGenerated]
/// @brief Method get_Table, addr 0xb0175d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable> get_Table() ;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadataCollection"
constexpr ::UnityEngine::Localization::Metadata::IMetadataCollection* i___UnityEngine__Localization__Metadata__IMetadataCollection() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0xb0175e8, size 0x8, virtual false, abstract: false, final false
inline void set_Data(::UnityEngine::Localization::Tables::TableEntryData*  value) ;

/// @brief Method set_Key, addr 0xb017660, size 0x30, virtual false, abstract: false, final false
inline void set_Key(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Table, addr 0xb0175d8, size 0x8, virtual false, abstract: false, final false
inline void set_Table(::UnityEngine::Localization::Tables::LocalizationTable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TableEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TableEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TableEntry(TableEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TableEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TableEntry(TableEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25073};

/// @brief Field m_SharedTableEntry, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  ___m_SharedTableEntry;

/// [CompilerGenerated]
/// @brief Field <Table>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Tables::LocalizationTable>  ____Table_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::Tables::TableEntryData*  ____Data_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntry, ___m_SharedTableEntry) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntry, ____Table_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntry, ____Data_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::TableEntry) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
