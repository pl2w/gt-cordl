#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SharedTableCollectionMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedTableCollectionMetadata)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Metadata {
class SharedTableCollectionMetadata_Item;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class SharedTableCollectionMetadata;
}
namespace UnityEngine::Localization::Metadata {
class SharedTableCollectionMetadata_Item;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*);
MARK_REF_T(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata*, "UnityEngine.Localization.Metadata", "SharedTableCollectionMetadata");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*, "UnityEngine.Localization.Metadata", "SharedTableCollectionMetadata/Item");
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.SharedTableCollectionMetadata
class CORDL_TYPE SharedTableCollectionMetadata : public ::System::Object {
public:
// Declarations
using Item = ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item;

 __declspec(property(get=get_EntriesLookup, put=set_EntriesLookup)) ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  EntriesLookup;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

/// @brief Field <EntriesLookup>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__EntriesLookup_k__BackingField, put=__cordl_internal_set__EntriesLookup_k__BackingField)) ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  _EntriesLookup_k__BackingField;

/// @brief Field m_Entries, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Entries, put=__cordl_internal_set_m_Entries)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>*  m_Entries;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

/// @brief Method AddEntry, addr 0xb050b78, size 0x10c, virtual false, abstract: false, final false
inline void AddEntry(int64_t  keyId, ::StringW  code) ;

/// @brief Method Contains, addr 0xb050a78, size 0x58, virtual false, abstract: false, final false
inline bool Contains(int64_t  keyId) ;

/// @brief Method Contains, addr 0xb050ad0, size 0xa8, virtual false, abstract: false, final false
inline bool Contains(int64_t  keyId, ::StringW  code) ;

static inline ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb04f9e0, size 0x210, virtual true, abstract: false, final false
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb04f698, size 0x28c, virtual true, abstract: false, final false
inline void OnBeforeSerialize() ;

/// @brief Method RemoveEntry, addr 0xb050c84, size 0xe0, virtual false, abstract: false, final false
inline void RemoveEntry(int64_t  keyId, ::StringW  code) ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>* const& __cordl_internal_get__EntriesLookup_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*& __cordl_internal_get__EntriesLookup_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>* const& __cordl_internal_get_m_Entries() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>*& __cordl_internal_get_m_Entries() ;

constexpr void __cordl_internal_set__EntriesLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>*  value) ;

/// @brief Method .ctor, addr 0xb04fbf4, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_EntriesLookup, addr 0xb050a0c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>* get_EntriesLookup() ;

/// @brief Method get_IsEmpty, addr 0xb050a1c, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

/// [CompilerGenerated]
/// @brief Method set_EntriesLookup, addr 0xb050a14, size 0x8, virtual false, abstract: false, final false
inline void set_EntriesLookup(::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedTableCollectionMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedTableCollectionMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedTableCollectionMetadata(SharedTableCollectionMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedTableCollectionMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedTableCollectionMetadata(SharedTableCollectionMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25344};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_Entries, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item*>*  ___m_Entries;

/// [CompilerGenerated]
/// @brief Field <EntriesLookup>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::System::Collections::Generic::HashSet_1<::StringW>*>*  ____EntriesLookup_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata, ___m_Entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata, ____EntriesLookup_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.SharedTableCollectionMetadata/Item
class CORDL_TYPE SharedTableCollectionMetadata_Item : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_KeyId, put=set_KeyId)) int64_t  KeyId;

 __declspec(property(get=get_Tables, put=set_Tables)) ::System::Collections::Generic::List_1<::StringW>*  Tables;

/// @brief Field m_KeyId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyId, put=__cordl_internal_set_m_KeyId)) int64_t  m_KeyId;

/// @brief Field m_TableCodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableCodes, put=__cordl_internal_set_m_TableCodes)) ::System::Collections::Generic::List_1<::StringW>*  m_TableCodes;

static inline ::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_m_KeyId() const;

constexpr int64_t& __cordl_internal_get_m_KeyId() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_TableCodes() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_TableCodes() ;

constexpr void __cordl_internal_set_m_KeyId(int64_t  value) ;

constexpr void __cordl_internal_set_m_TableCodes(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xb050d64, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_KeyId, addr 0xb050dec, size 0x8, virtual false, abstract: false, final false
inline int64_t get_KeyId() ;

/// @brief Method get_Tables, addr 0xb050dfc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_Tables() ;

/// @brief Method set_KeyId, addr 0xb050df4, size 0x8, virtual false, abstract: false, final false
inline void set_KeyId(int64_t  value) ;

/// @brief Method set_Tables, addr 0xb050e04, size 0x8, virtual false, abstract: false, final false
inline void set_Tables(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedTableCollectionMetadata_Item() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedTableCollectionMetadata_Item", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedTableCollectionMetadata_Item(SharedTableCollectionMetadata_Item && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedTableCollectionMetadata_Item", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedTableCollectionMetadata_Item(SharedTableCollectionMetadata_Item const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25343};

/// [SerializeField]
/// @brief Field m_KeyId, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_KeyId;

/// [SerializeField]
/// @brief Field m_TableCodes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_TableCodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item, ___m_KeyId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item, ___m_TableCodes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::SharedTableCollectionMetadata_Item) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
