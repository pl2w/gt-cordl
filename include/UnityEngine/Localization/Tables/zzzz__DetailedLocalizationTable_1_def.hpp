#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/DetailedLocalizationTable_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DetailedLocalizationTable_1)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine::Localization::Tables {
template<typename TEntry>
class DetailedLocalizationTable_1___c;
}
namespace UnityEngine::Localization::Tables {
struct MissingEntryAction;
}
namespace UnityEngine::Localization::Tables {
class TableEntryData;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
template<typename TEntry>
class DetailedLocalizationTable_1;
}
namespace UnityEngine::Localization::Tables {
template<typename TEntry>
class DetailedLocalizationTable_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Tables::DetailedLocalizationTable_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Tables::DetailedLocalizationTable_1, "UnityEngine.Localization.Tables", "DetailedLocalizationTable`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c, "UnityEngine.Localization.Tables", "DetailedLocalizationTable`1/<>c");
// [DefaultMember("Item")]
// Dependencies UnityEngine.Localization.Tables.LocalizationTable
namespace UnityEngine::Localization::Tables {
// cpp template
template<typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.DetailedLocalizationTable`1<TEntry>
class CORDL_TYPE DetailedLocalizationTable_1 : public ::UnityEngine::Localization::Tables::LocalizationTable {
public:
// Declarations
using __c = ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) TEntry  Item[];

 __declspec(property(get=get_Item, put=set_Item)) TEntry  Item[];

 __declspec(property(get=System_Collections_Generic_IDictionary_System_Int64_TEntry__get_Keys)) ::System::Collections::Generic::ICollection_1<int64_t>*  System_Collections_Generic_IDictionary_System_Int64_TEntry__Keys;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::ICollection_1<TEntry>*  Values;

/// @brief Field m_TableEntries, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableEntries, put=__cordl_internal_set_m_TableEntries)) ::System::Collections::Generic::Dictionary_2<int64_t,TEntry>*  m_TableEntries;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<int64_t,TEntry>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<int64_t,TEntry>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(int64_t  keyId, TEntry  value) ;

/// @brief Method AddEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry AddEntry(::StringW  key, ::StringW  localized) ;

/// @brief Method AddEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TEntry AddEntry(int64_t  keyId, ::StringW  localized) ;

/// @brief Method AddEntryFromReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry AddEntryFromReference(::UnityEngine::Localization::Tables::TableEntryReference  entryReference, ::StringW  localized) ;

/// @brief Method CheckForMissingSharedTableDataEntries, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<TEntry>* CheckForMissingSharedTableDataEntries(::UnityEngine::Localization::Tables::MissingEntryAction  action) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  item) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(int64_t  keyId) ;

/// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsValue(::StringW  localized) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>  array, int32_t  arrayIndex) ;

/// @brief Method CreateEmpty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void CreateEmpty(::UnityEngine::Localization::Tables::TableEntryReference  entryReference) ;

/// @brief Method CreateTableEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TEntry CreateTableEntry() ;

/// @brief Method CreateTableEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry CreateTableEntry(::UnityEngine::Localization::Tables::TableEntryData*  data) ;

/// @brief Method GetEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry GetEntry(::StringW  key) ;

/// @brief Method GetEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TEntry GetEntry(int64_t  keyId) ;

/// @brief Method GetEntryFromReference, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry GetEntryFromReference(::UnityEngine::Localization::Tables::TableEntryReference  entryReference) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>* GetEnumerator() ;

static inline ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<TEntry>* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  item) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(int64_t  keyId) ;

/// @brief Method RemoveEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool RemoveEntry(::StringW  key) ;

/// @brief Method RemoveEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool RemoveEntry(int64_t  keyId) ;

/// @brief Method System.Collections.Generic.IDictionary<System.Int64,TEntry>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<int64_t>* System_Collections_Generic_IDictionary_System_Int64_TEntry__get_Keys() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(int64_t  keyId, ::by_ref<TEntry>  value) ;

/// [CompilerGenerated]
/// @brief Method <CheckForMissingSharedTableDataEntries>b__33_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _CheckForMissingSharedTableDataEntries_b__33_0(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  e) ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEntry>* const& __cordl_internal_get_m_TableEntries() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,TEntry>*& __cordl_internal_get_m_TableEntries() ;

constexpr void __cordl_internal_set_m_TableEntries(::System::Collections::Generic::Dictionary_2<int64_t,TEntry>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TEntry get_Item(int64_t  key) ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry get_Item(::StringW  keyName) ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TEntry>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_int64_t_TEntry__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<int64_t,TEntry>"
constexpr ::System::Collections::Generic::IDictionary_2<int64_t,TEntry>* i___System__Collections__Generic__IDictionary_2_int64_t_TEntry_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_int64_t_TEntry__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(int64_t  key, TEntry  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(::StringW  keyName, TEntry  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailedLocalizationTable_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailedLocalizationTable_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailedLocalizationTable_1(DetailedLocalizationTable_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailedLocalizationTable_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailedLocalizationTable_1(DetailedLocalizationTable_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25076};

/// @brief Field m_TableEntries, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,TEntry>*  ___m_TableEntries;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Tables
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Tables {
// cpp template
template<typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.DetailedLocalizationTable`1/<>c<TEntry>
class CORDL_TYPE DetailedLocalizationTable_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*  __9;

/// @brief Field <>9__33_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_1, put=setStaticF___9__33_1)) ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>*  __9__33_1;

/// @brief Field <>9__41_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__41_0, put=setStaticF___9__41_0)) ::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>*  __9__41_0;

static inline ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>* New_ctor() ;

/// @brief Method <CheckForMissingSharedTableDataEntries>b__33_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEntry _CheckForMissingSharedTableDataEntries_b__33_1(::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>  e) ;

/// @brief Method <OnAfterDeserialize>b__41_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int64_t _OnAfterDeserialize_b__41_0(::UnityEngine::Localization::Tables::TableEntryData*  o) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>* getStaticF___9__33_1() ;

static inline ::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>* getStaticF___9__41_0() ;

static inline void setStaticF___9(::UnityEngine::Localization::Tables::DetailedLocalizationTable_1___c<TEntry>*  value) ;

static inline void setStaticF___9__33_1(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int64_t,TEntry>,TEntry>*  value) ;

static inline void setStaticF___9__41_0(::System::Func_2<::UnityEngine::Localization::Tables::TableEntryData*,int64_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DetailedLocalizationTable_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DetailedLocalizationTable_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DetailedLocalizationTable_1___c(DetailedLocalizationTable_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DetailedLocalizationTable_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DetailedLocalizationTable_1___c(DetailedLocalizationTable_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25075};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Tables
