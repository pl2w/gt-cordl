#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/SharedTableData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedTableData)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
namespace UnityEngine::Localization::Metadata {
class MetadataCollection;
}
namespace UnityEngine::Localization::Tables {
class IKeyGenerator;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData_SharedTableEntry;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class SharedTableData;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData_SharedTableEntry;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::SharedTableData*);
MARK_REF_T(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::SharedTableData*, "UnityEngine.Localization.Tables", "SharedTableData");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*, "UnityEngine.Localization.Tables", "SharedTableData/SharedTableEntry");
// Dependencies System.Guid, UnityEngine.ScriptableObject
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.SharedTableData
class CORDL_TYPE SharedTableData : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using SharedTableEntry = ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry;

 __declspec(property(get=get_Entries, put=set_Entries)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  Entries;

 __declspec(property(get=get_KeyGenerator, put=set_KeyGenerator)) ::UnityEngine::Localization::Tables::IKeyGenerator*  KeyGenerator;

 __declspec(property(get=get_Metadata, put=set_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  Metadata;

 __declspec(property(get=get_TableCollectionName, put=set_TableCollectionName)) ::StringW  TableCollectionName;

 __declspec(property(get=get_TableCollectionNameGuid, put=set_TableCollectionNameGuid)) ::System::Guid  TableCollectionNameGuid;

/// @brief Field m_Entries, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Entries, put=__cordl_internal_set_m_Entries)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  m_Entries;

/// @brief Field m_IdDictionary, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_IdDictionary, put=__cordl_internal_set_m_IdDictionary)) ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  m_IdDictionary;

/// @brief Field m_KeyDictionary, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyDictionary, put=__cordl_internal_set_m_KeyDictionary)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  m_KeyDictionary;

/// @brief Field m_KeyGenerator, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyGenerator, put=__cordl_internal_set_m_KeyGenerator)) ::UnityEngine::Localization::Tables::IKeyGenerator*  m_KeyGenerator;

/// @brief Field m_Metadata, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metadata, put=__cordl_internal_set_m_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  m_Metadata;

/// @brief Field m_TableCollectionName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableCollectionName, put=__cordl_internal_set_m_TableCollectionName)) ::StringW  m_TableCollectionName;

/// @brief Field m_TableCollectionNameGuid, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_TableCollectionNameGuid, put=__cordl_internal_set_m_TableCollectionNameGuid)) ::System::Guid  m_TableCollectionNameGuid;

/// @brief Field m_TableCollectionNameGuidString, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableCollectionNameGuidString, put=__cordl_internal_set_m_TableCollectionNameGuidString)) ::StringW  m_TableCollectionNameGuidString;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method AddKey, addr 0xb018cd4, size 0xf4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* AddKey(::StringW  key) ;

/// @brief Method AddKey, addr 0xb018ae4, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* AddKey(::StringW  key, int64_t  id) ;

/// @brief Method AddKeyInternal, addr 0xb0187fc, size 0x298, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* AddKeyInternal(::StringW  key) ;

/// @brief Method AddKeyInternal, addr 0xb018b2c, size 0x1a8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* AddKeyInternal(::StringW  key, int64_t  id) ;

/// @brief Method Clear, addr 0xb018348, size 0xac, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ComputeLevenshteinDistance, addr 0xb0192c0, size 0x250, virtual false, abstract: false, final false
static inline int32_t ComputeLevenshteinDistance(::StringW  a, ::StringW  b) ;

/// @brief Method Contains, addr 0xb018ab4, size 0x18, virtual false, abstract: false, final false
inline bool Contains(int64_t  id) ;

/// @brief Method Contains, addr 0xb018acc, size 0x18, virtual false, abstract: false, final false
inline bool Contains(::StringW  key) ;

/// [Obsolete("FindSimilarKey will be removed in the future, please use Unity Search. See TableEntrySearchData class for further details.")]
/// @brief Method FindSimilarKey, addr 0xb0190fc, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* FindSimilarKey(::StringW  text, ::by_ref<int32_t>  distance) ;

/// @brief Method FindWithId, addr 0xb018450, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* FindWithId(int64_t  id) ;

/// @brief Method FindWithKey, addr 0xb018638, size 0x1c4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* FindWithKey(::StringW  key) ;

/// @brief Method GetEntry, addr 0xb017644, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* GetEntry(int64_t  id) ;

/// @brief Method GetEntry, addr 0xb018ab0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* GetEntry(::StringW  key) ;

/// @brief Method GetEntryFromReference, addr 0xb018a94, size 0x1c, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* GetEntryFromReference(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference) ;

/// @brief Method GetId, addr 0xb018620, size 0x18, virtual false, abstract: false, final false
inline int64_t GetId(::StringW  key) ;

/// @brief Method GetId, addr 0xb01806c, size 0x4c, virtual false, abstract: false, final false
inline int64_t GetId(::StringW  key, bool  addNewKey) ;

/// @brief Method GetKey, addr 0xb018438, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetKey(int64_t  id) ;

static inline ::UnityEngine::Localization::Tables::SharedTableData* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb019770, size 0xbc, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb0195c8, size 0x6c, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method RemapId, addr 0xb019034, size 0xc8, virtual false, abstract: false, final false
inline bool RemapId(int64_t  currentId, int64_t  newId) ;

/// @brief Method RemoveKey, addr 0xb018dc8, size 0x28, virtual false, abstract: false, final false
inline void RemoveKey(int64_t  id) ;

/// @brief Method RemoveKey, addr 0xb018ef8, size 0x28, virtual false, abstract: false, final false
inline void RemoveKey(::StringW  key) ;

/// @brief Method RemoveKeyInternal, addr 0xb018df0, size 0x108, virtual false, abstract: false, final false
inline void RemoveKeyInternal(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  entry) ;

/// @brief Method RenameKey, addr 0xb017690, size 0x3c, virtual false, abstract: false, final false
inline void RenameKey(int64_t  id, ::StringW  newValue) ;

/// @brief Method RenameKey, addr 0xb018ff8, size 0x3c, virtual false, abstract: false, final false
inline void RenameKey(::StringW  oldValue, ::StringW  newValue) ;

/// @brief Method RenameKeyInternal, addr 0xb018f20, size 0xd8, virtual false, abstract: false, final false
inline void RenameKeyInternal(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*  entry, ::StringW  newValue) ;

/// @brief Method ToString, addr 0xb01957c, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* const& __cordl_internal_get_m_Entries() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*& __cordl_internal_get_m_Entries() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* const& __cordl_internal_get_m_IdDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*& __cordl_internal_get_m_IdDictionary() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* const& __cordl_internal_get_m_KeyDictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*& __cordl_internal_get_m_KeyDictionary() ;

constexpr ::UnityEngine::Localization::Tables::IKeyGenerator* const& __cordl_internal_get_m_KeyGenerator() const;

constexpr ::UnityEngine::Localization::Tables::IKeyGenerator*& __cordl_internal_get_m_KeyGenerator() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& __cordl_internal_get_m_Metadata() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& __cordl_internal_get_m_Metadata() ;

constexpr ::StringW const& __cordl_internal_get_m_TableCollectionName() const;

constexpr ::StringW& __cordl_internal_get_m_TableCollectionName() ;

constexpr ::System::Guid const& __cordl_internal_get_m_TableCollectionNameGuid() const;

constexpr ::System::Guid& __cordl_internal_get_m_TableCollectionNameGuid() ;

constexpr ::StringW const& __cordl_internal_get_m_TableCollectionNameGuidString() const;

constexpr ::StringW& __cordl_internal_get_m_TableCollectionNameGuidString() ;

constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value) ;

constexpr void __cordl_internal_set_m_IdDictionary(::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value) ;

constexpr void __cordl_internal_set_m_KeyDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value) ;

constexpr void __cordl_internal_set_m_KeyGenerator(::UnityEngine::Localization::Tables::IKeyGenerator*  value) ;

constexpr void __cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

constexpr void __cordl_internal_set_m_TableCollectionName(::StringW  value) ;

constexpr void __cordl_internal_set_m_TableCollectionNameGuid(::System::Guid  value) ;

constexpr void __cordl_internal_set_m_TableCollectionNameGuidString(::StringW  value) ;

/// @brief Method .ctor, addr 0xb01982c, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Entries, addr 0xb0182b4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>* get_Entries() ;

/// @brief Method get_KeyGenerator, addr 0xb018428, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::IKeyGenerator* get_KeyGenerator() ;

/// @brief Method get_Metadata, addr 0xb018418, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataCollection* get_Metadata() ;

/// @brief Method get_TableCollectionName, addr 0xb0183f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TableCollectionName() ;

/// @brief Method get_TableCollectionNameGuid, addr 0xb018404, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_TableCollectionNameGuid() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_Entries, addr 0xb0182bc, size 0x8c, virtual false, abstract: false, final false
inline void set_Entries(::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  value) ;

/// @brief Method set_KeyGenerator, addr 0xb018430, size 0x8, virtual false, abstract: false, final false
inline void set_KeyGenerator(::UnityEngine::Localization::Tables::IKeyGenerator*  value) ;

/// @brief Method set_Metadata, addr 0xb018420, size 0x8, virtual false, abstract: false, final false
inline void set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

/// @brief Method set_TableCollectionName, addr 0xb0183fc, size 0x8, virtual false, abstract: false, final false
inline void set_TableCollectionName(::StringW  value) ;

/// @brief Method set_TableCollectionNameGuid, addr 0xb018410, size 0x8, virtual false, abstract: false, final false
inline void set_TableCollectionNameGuid(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedTableData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedTableData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedTableData(SharedTableData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedTableData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedTableData(SharedTableData const& ) = delete;

/// @brief Field EmptyId offset 0xffffffff size 0x8
static constexpr int64_t  EmptyId{static_cast<int64_t>(0x0)};

/// @brief Field NewEntryKey offset 0xffffffff size 0x8
static constexpr ::ConstString  NewEntryKey{u"New Entry"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25082};

/// [FormerlySerializedAs("m_TableName")]
/// [SerializeField]
/// @brief Field m_TableCollectionName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_TableCollectionName;

/// [FormerlySerializedAs("m_TableNameGuidString")]
/// [SerializeField]
/// @brief Field m_TableCollectionNameGuidString, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_TableCollectionNameGuidString;

/// [SerializeField]
/// @brief Field m_Entries, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  ___m_Entries;

/// [SerializeField]
/// [MetadataType((UnityEngine.Localization.Metadata.MetadataType)2)]
/// @brief Field m_Metadata, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::MetadataCollection*  ___m_Metadata;

/// [SerializeReference]
/// @brief Field m_KeyGenerator, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::Tables::IKeyGenerator*  ___m_KeyGenerator;

/// @brief Field m_TableCollectionNameGuid, offset: 0x40, size: 0x10, def value: None
 ::System::Guid  ___m_TableCollectionNameGuid;

/// @brief Field m_IdDictionary, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  ___m_IdDictionary;

/// @brief Field m_KeyDictionary, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry*>*  ___m_KeyDictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_TableCollectionName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_TableCollectionNameGuidString) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_Entries) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_Metadata) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_KeyGenerator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_TableCollectionNameGuid) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_IdDictionary) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData, ___m_KeyDictionary) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::SharedTableData) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
// Dependencies System.Object
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.SharedTableData/SharedTableEntry
class CORDL_TYPE SharedTableData_SharedTableEntry : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Id, put=set_Id)) int64_t  Id;

 __declspec(property(get=get_Key, put=set_Key)) ::StringW  Key;

 __declspec(property(get=get_Metadata, put=set_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  Metadata;

/// @brief Field m_Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Id, put=__cordl_internal_set_m_Id)) int64_t  m_Id;

/// @brief Field m_Key, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Key, put=__cordl_internal_set_m_Key)) ::StringW  m_Key;

/// @brief Field m_Metadata, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metadata, put=__cordl_internal_set_m_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  m_Metadata;

static inline ::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry* New_ctor() ;

/// @brief Method ToString, addr 0xb019a00, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int64_t const& __cordl_internal_get_m_Id() const;

constexpr int64_t& __cordl_internal_get_m_Id() ;

constexpr ::StringW const& __cordl_internal_get_m_Key() const;

constexpr ::StringW& __cordl_internal_get_m_Key() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& __cordl_internal_get_m_Metadata() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& __cordl_internal_get_m_Metadata() ;

constexpr void __cordl_internal_set_m_Id(int64_t  value) ;

constexpr void __cordl_internal_set_m_Key(::StringW  value) ;

constexpr void __cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

/// @brief Method .ctor, addr 0xb019510, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Id, addr 0xb0199d0, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Id() ;

/// @brief Method get_Key, addr 0xb0199e0, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_Metadata, addr 0xb0199f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataCollection* get_Metadata() ;

/// @brief Method set_Id, addr 0xb0199d8, size 0x8, virtual false, abstract: false, final false
inline void set_Id(int64_t  value) ;

/// @brief Method set_Key, addr 0xb0199e8, size 0x8, virtual false, abstract: false, final false
inline void set_Key(::StringW  value) ;

/// @brief Method set_Metadata, addr 0xb0199f8, size 0x8, virtual false, abstract: false, final false
inline void set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedTableData_SharedTableEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedTableData_SharedTableEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedTableData_SharedTableEntry(SharedTableData_SharedTableEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedTableData_SharedTableEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedTableData_SharedTableEntry(SharedTableData_SharedTableEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25081};

/// [SerializeField]
/// @brief Field m_Id, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_Id;

/// [SerializeField]
/// @brief Field m_Key, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_Key;

/// [SerializeField]
/// @brief Field m_Metadata, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::MetadataCollection*  ___m_Metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry, ___m_Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry, ___m_Key) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry, ___m_Metadata) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::SharedTableData_SharedTableEntry) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
