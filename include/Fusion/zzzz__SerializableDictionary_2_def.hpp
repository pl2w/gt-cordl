#pragma once
// IWYU pragma private; include "Fusion/SerializableDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__SerializableDictionary_def.hpp"
#include "Fusion/zzzz__SerializableDictionary`2_Entry_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializableDictionary_2)
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct Dictionary_2_Enumerator;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
struct SerializableDictionary_2_Entry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2_KeyCollection;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2_ValueCollection;
}
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
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace Fusion {
template<typename TKey,typename TValue>
class SerializableDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::SerializableDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::SerializableDictionary_2, "Fusion", "SerializableDictionary`2");
// [DefaultMember("Item")]
// Dependencies Fusion.SerializableDictionary, Fusion.SerializableDictionary`2::Entry<TKey, TValue>
namespace Fusion {
// cpp template
template<typename TKey,typename TValue>
// Is value type: false
// CS Name: Fusion.SerializableDictionary`2<TKey,TValue>
class CORDL_TYPE SerializableDictionary_2 : public ::Fusion::SerializableDictionary {
public:
// Declarations
using Entry = ::GlobalNamespace::SerializableDictionary_2_Entry<TKey, TValue>;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_DictionaryAsCollection)) ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*  DictionaryAsCollection;

 __declspec(property(get=get_Inner)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  Inner;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) TValue  Item[];

 __declspec(property(get=get_Keys)) ::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>*  Keys;

 __declspec(property(get=System_Collections_Generic_IDictionary_TKey_TValue__get_Keys)) ::System::Collections::Generic::ICollection_1<TKey>*  System_Collections_Generic_IDictionary_TKey_TValue__Keys;

 __declspec(property(get=System_Collections_Generic_IDictionary_TKey_TValue__get_Values)) ::System::Collections::Generic::ICollection_1<TValue>*  System_Collections_Generic_IDictionary_TKey_TValue__Values;

 __declspec(property(get=get_Values)) ::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>*  Values;

/// @brief Field _dictionary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__dictionary, put=__cordl_internal_set__dictionary)) ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  _dictionary;

/// @brief Field _duplicatesAndNulls, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__duplicatesAndNulls, put=__cordl_internal_set__duplicatesAndNulls)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>*  _duplicatesAndNulls;

/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>>  _items;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(TKey  key, TValue  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(TKey  key) ;

/// @brief Method CreateDictionary, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* CreateDictionary() ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::Dictionary_2_Enumerator<TKey,TValue> GetEnumerator() ;

static inline ::Fusion::SerializableDictionary_2<TKey,TValue>* New_ctor() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(TKey  key) ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Store, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Store() ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  arrayIndex) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item) ;

/// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TKey>* System_Collections_Generic_IDictionary_TKey_TValue__get_Keys() ;

/// @brief Method System.Collections.Generic.IDictionary<TKey,TValue>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<TValue>* System_Collections_Generic_IDictionary_TKey_TValue__get_Values() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(TKey  key, ::by_ref<TValue>  value) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method Wrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::SerializableDictionary_2<TKey,TValue>* Wrap(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  dictionary) ;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* const& __cordl_internal_get__dictionary() const;

constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>*& __cordl_internal_get__dictionary() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>* const& __cordl_internal_get__duplicatesAndNulls() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>*& __cordl_internal_get__duplicatesAndNulls() ;

constexpr ::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>> const& __cordl_internal_get__items() const;

constexpr ::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>>& __cordl_internal_get__items() ;

constexpr void __cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value) ;

constexpr void __cordl_internal_set__duplicatesAndNulls(::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>*  value) ;

constexpr void __cordl_internal_set__items(::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_DictionaryAsCollection, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* get_DictionaryAsCollection() ;

/// @brief Method get_Inner, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<TKey,TValue>* get_Inner() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TValue get_Item(TKey  key) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2_KeyCollection<TKey,TValue>* get_Keys() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2_ValueCollection<TKey,TValue>* get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(TKey  key, TValue  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializableDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializableDictionary_2(SerializableDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializableDictionary_2(SerializableDictionary_2 const& ) = delete;

/// @brief Field EntryKeyPropertyPath offset 0xffffffff size 0x8
static constexpr ::ConstString  EntryKeyPropertyPath{u"Key"};

/// @brief Field ItemsPropertyPath offset 0xffffffff size 0x8
static constexpr ::ConstString  ItemsPropertyPath{u"_items"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19099};

/// [SerializeField]
/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>>  ____items;

/// @brief Field _duplicatesAndNulls, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_2<::GlobalNamespace::SerializableDictionary_2_Entry<TKey,TValue>,int32_t>>*  ____duplicatesAndNulls;

/// @brief Field _dictionary, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<TKey,TValue>*  ____dictionary;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
