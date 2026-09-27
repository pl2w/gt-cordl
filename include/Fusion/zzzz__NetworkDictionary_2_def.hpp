#pragma once
// IWYU pragma private; include "Fusion/NetworkDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkDictionary_2)
namespace Fusion {
template<typename K,typename V>
class DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0;
}
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
class INetworkDictionary;
}
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionaryReadOnly_2;
}
namespace Fusion {
template<typename K,typename V>
class NetworkDictionary_2_DebuggerProxy;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NetworkDictionary_2_Enumerator;
}
namespace System::Collections::Generic {
template<typename T>
class EqualityComparer_1;
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
class IEqualityComparer_1;
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
template<typename T>
class Lazy_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
template<typename K,typename V>
class DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0;
}
namespace Fusion {
template<typename K,typename V>
class NetworkDictionary_2_DebuggerProxy;
}
namespace Fusion {
template<typename K,typename V>
struct NetworkDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0);
MARK_GEN_REF_T_PTR(::Fusion::NetworkDictionary_2_DebuggerProxy);
MARK_GEN_VAL_T(::Fusion::NetworkDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0, "Fusion", "NetworkDictionary`2/DebuggerProxy/<>c__DisplayClass0_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkDictionary_2_DebuggerProxy, "Fusion", "NetworkDictionary`2/DebuggerProxy");
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkDictionary_2, "Fusion", "NetworkDictionary`2");
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace Fusion {
// cpp template
template<typename K,typename V>
// Is value type: false
// CS Name: Fusion.NetworkDictionary`2/DebuggerProxy<K,V>
class CORDL_TYPE NetworkDictionary_2_DebuggerProxy : public ::System::Collections::Generic::Dictionary_2<K,V> {
public:
// Declarations
using __c__DisplayClass0_0 = ::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K, V>;

/// @brief [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)3)]
 __declspec(property(get=get_Items)) ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>  Items;

/// @brief Field _items, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>*  _items;

static inline ::Fusion::NetworkDictionary_2_DebuggerProxy<K,V>* New_ctor(::Fusion::NetworkDictionary_2<K,V>  dict) ;

constexpr ::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>* const& __cordl_internal_get__items() const;

constexpr ::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>*& __cordl_internal_get__items() ;

constexpr void __cordl_internal_set__items(::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkDictionary_2<K,V>  dict) ;

/// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>> get_Items() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkDictionary_2_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkDictionary_2_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkDictionary_2_DebuggerProxy(NetworkDictionary_2_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkDictionary_2_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkDictionary_2_DebuggerProxy(NetworkDictionary_2_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19065};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field _items, offset: 0x50, size: 0x8, def value: None
 ::System::Lazy_1<::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>>*  ____items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkDictionary`2<K, V>, System.Object
namespace Fusion {
// cpp template
template<typename K,typename V>
// Is value type: false
// CS Name: Fusion.NetworkDictionary`2/DebuggerProxy/<>c__DisplayClass0_0<K,V>
class CORDL_TYPE DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field dict, offset 0x10, size 0x40 
 __declspec(property(get=__cordl_internal_get_dict, put=__cordl_internal_set_dict)) ::Fusion::NetworkDictionary_2<K,V>  dict;

static inline ::Fusion::DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0<K,V>* New_ctor() ;

constexpr ::Fusion::NetworkDictionary_2<K,V> const& __cordl_internal_get_dict() const;

constexpr ::Fusion::NetworkDictionary_2<K,V>& __cordl_internal_get_dict() ;

constexpr void __cordl_internal_set_dict(::Fusion::NetworkDictionary_2<K,V>  value) ;

/// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>> __ctor_b__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0(DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0(DebuggerProxy_NetworkDictionary_2___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19064};

/// @brief Field dict, offset: 0x10, size: 0x40, def value: None
 ::Fusion::NetworkDictionary_2<K,V>  ___dict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [DefaultMember("Item")]
// [DebuggerDisplay("Count = {Count}")]
// [DebuggerTypeProxy(typeof(Fusion.NetworkDictionary`2::DebuggerProxy<K, V>))]
// Dependencies 
namespace Fusion {
// cpp template
template<typename K,typename V>
// Is value type: true
// CS Name: Fusion.NetworkDictionary`2<K,V>
struct CORDL_TYPE NetworkDictionary_2 {
public:
// Declarations
using DebuggerProxy = ::Fusion::NetworkDictionary_2_DebuggerProxy<K, V>;

using Enumerator = ::GlobalNamespace::NetworkDictionary_2_Enumerator<K, V>;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) V  Item[];

 __declspec(property(get=get__free, put=set__free)) int32_t  _free;

 __declspec(property(get=get__freeCount, put=set__freeCount)) int32_t  _freeCount;

 __declspec(property(get=get__usedCount, put=set__usedCount)) int32_t  _usedCount;

/// @brief Convert operator to "::Fusion::INetworkDictionary"
constexpr operator  ::Fusion::INetworkDictionary*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Add(K  key, V  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClrEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClrEntry(int32_t  entry) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsKey(K  key) ;

/// @brief Method ContainsValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ContainsValue(V  value, ::System::Collections::Generic::IEqualityComparer_1<V>*  equalityComparer) ;

/// @brief Method Find, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Find(K  key) ;

/// @brief Method Fusion.INetworkDictionary.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Fusion_INetworkDictionary_Add(::System::Object*  item) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline V Get(K  key) ;

/// @brief Method GetBucketFromHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t GetBucketFromHashCode(int32_t  hash) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkDictionary_2_Enumerator<K,V> GetEnumerator() ;

/// @brief Method GetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline K GetKey(int32_t  entry) ;

/// @brief Method GetKeyHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetKeyHashCode(K  key) ;

/// @brief Method GetNxt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t GetNxt(int32_t  entry) ;

/// @brief Method GetVal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline V GetVal(int32_t  entry) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t Insert(K  key, V  val) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(K  key) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(K  key, ::by_ref<V>  value) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline V Set(K  key, V  value) ;

/// @brief Method SetKey, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetKey(int32_t  entry, K  key) ;

/// @brief Method SetNxt, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetNxt(int32_t  entry, int32_t  next) ;

/// @brief Method SetVal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetVal(int32_t  entry, V  val) ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<K,V>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_K_V___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method ToReadOnly, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkDictionaryReadOnly_2<K,V> ToReadOnly() ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGet(K  key, ::by_ref<V>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<K>*  keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  valReaderWriter) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline V get_Item(K  key) ;

/// @brief Method get__free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get__free() ;

/// @brief Method get__freeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get__freeCount() ;

/// @brief Method get__usedCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get__usedCount() ;

/// @brief Convert to "::Fusion::INetworkDictionary"
constexpr ::Fusion::INetworkDictionary* i___Fusion__INetworkDictionary() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_K_V__() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Fusion::NetworkDictionaryReadOnly_2<K,V> op_Implicit___Fusion__NetworkDictionaryReadOnly_2_K_V_(::Fusion::NetworkDictionary_2<K,V>  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(K  key, V  value) ;

/// @brief Method set__free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set__free(int32_t  value) ;

/// @brief Method set__freeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set__freeCount(int32_t  value) ;

/// @brief Method set__usedCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set__usedCount(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkDictionary_2() ;

// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_nxtOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_keyOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_valOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entryStride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bucketsOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_entriesOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_keyReaderWriter", ty: "::Fusion::IElementReaderWriter_1<K>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_valReaderWriter", ty: "::Fusion::IElementReaderWriter_1<V>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_equalityComparer", ty: "::System::Collections::Generic::EqualityComparer_1<K>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkDictionary_2(int32_t*  _data, int32_t  _capacity, int32_t  _nxtOffset, int32_t  _keyOffset, int32_t  _valOffset, int32_t  _entryStride, int32_t  _bucketsOffset, int32_t  _entriesOffset, ::Fusion::IElementReaderWriter_1<K>*  _keyReaderWriter, ::Fusion::IElementReaderWriter_1<V>*  _valReaderWriter, ::System::Collections::Generic::EqualityComparer_1<K>*  _equalityComparer) noexcept;

/// @brief Field FREE_COUNT_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  FREE_COUNT_OFFSET{static_cast<int32_t>(0x1)};

/// @brief Field FREE_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  FREE_OFFSET{static_cast<int32_t>(0x0)};

/// @brief Field INVALID_ENTRY offset 0xffffffff size 0x4
static constexpr int32_t  INVALID_ENTRY{static_cast<int32_t>(0x0)};

/// @brief Field META_WORD_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  META_WORD_COUNT{static_cast<int32_t>(0x3)};

/// @brief Field USED_COUNT_OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  USED_COUNT_OFFSET{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19067};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field _data, offset: 0x0, size: 0x8, def value: None
 int32_t*  _data;

/// @brief Field _capacity, offset: 0x8, size: 0x4, def value: None
 int32_t  _capacity;

/// @brief Field _nxtOffset, offset: 0xc, size: 0x4, def value: None
 int32_t  _nxtOffset;

/// @brief Field _keyOffset, offset: 0x10, size: 0x4, def value: None
 int32_t  _keyOffset;

/// @brief Field _valOffset, offset: 0x14, size: 0x4, def value: None
 int32_t  _valOffset;

/// @brief Field _entryStride, offset: 0x18, size: 0x4, def value: None
 int32_t  _entryStride;

/// @brief Field _bucketsOffset, offset: 0x1c, size: 0x4, def value: None
 int32_t  _bucketsOffset;

/// @brief Field _entriesOffset, offset: 0x20, size: 0x4, def value: None
 int32_t  _entriesOffset;

/// @brief Field _keyReaderWriter, offset: 0x28, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<K>*  _keyReaderWriter;

/// @brief Field _valReaderWriter, offset: 0x30, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<V>*  _valReaderWriter;

/// @brief Field _equalityComparer, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::EqualityComparer_1<K>*  _equalityComparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion
