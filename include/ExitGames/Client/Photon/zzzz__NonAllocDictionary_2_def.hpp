#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/NonAllocDictionary_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__NonAllocDictionary`2_Node_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NonAllocDictionary_2)
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_KeyIterator;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_Node;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_PairIterator;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_ValueIterator;
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
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
template<typename K,typename V>
class NonAllocDictionary_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::ExitGames::Client::Photon::NonAllocDictionary_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::ExitGames::Client::Photon::NonAllocDictionary_2, "ExitGames.Client.Photon", "NonAllocDictionary`2");
// [DefaultMember("Item")]
// Dependencies ExitGames.Client.Photon.NonAllocDictionary`2::Node<K, V>, System.Object
namespace ExitGames::Client::Photon {
// cpp template
template<typename K,typename V>
// Is value type: false
// CS Name: ExitGames.Client.Photon.NonAllocDictionary`2<K,V>
class CORDL_TYPE NonAllocDictionary_2 : public ::System::Object {
public:
// Declarations
using KeyIterator = ::GlobalNamespace::NonAllocDictionary_2_KeyIterator<K, V>;

using Node = ::GlobalNamespace::NonAllocDictionary_2_Node<K, V>;

using PairIterator = ::GlobalNamespace::NonAllocDictionary_2_PairIterator<K, V>;

using ValueIterator = ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K, V>;

 __declspec(property(get=get_Capacity)) uint32_t  Capacity;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Item, put=set_Item)) V  Item[];

 __declspec(property(get=get_Keys)) ::GlobalNamespace::NonAllocDictionary_2_KeyIterator<K,V>  Keys;

 __declspec(property(get=System_Collections_Generic_IDictionary_K_V__get_Keys)) ::System::Collections::Generic::ICollection_1<K>*  System_Collections_Generic_IDictionary_K_V__Keys;

 __declspec(property(get=System_Collections_Generic_IDictionary_K_V__get_Values)) ::System::Collections::Generic::ICollection_1<V>*  System_Collections_Generic_IDictionary_K_V__Values;

 __declspec(property(get=get_Values)) ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V>  Values;

/// @brief Field _buckets, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__buckets, put=__cordl_internal_set__buckets)) ::ArrayW<int32_t>  _buckets;

/// @brief Field _capacity, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__capacity, put=__cordl_internal_set__capacity)) uint32_t  _capacity;

/// @brief Field _freeCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__freeCount, put=__cordl_internal_set__freeCount)) int32_t  _freeCount;

/// @brief Field _freeHead, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__freeHead, put=__cordl_internal_set__freeHead)) int32_t  _freeHead;

/// @brief Field _nodes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodes, put=__cordl_internal_set__nodes)) ::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>>  _nodes;

/// @brief Field _primeTableUInt, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__primeTableUInt, put=setStaticF__primeTableUInt)) ::ArrayW<uint32_t>  _primeTableUInt;

/// @brief Field _usedCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__usedCount, put=__cordl_internal_set__usedCount)) int32_t  _usedCount;

/// @brief Field isReadOnly, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isReadOnly, put=__cordl_internal_set_isReadOnly)) bool  isReadOnly;

/// @brief Field keys, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_keys, put=__cordl_internal_set_keys)) ::System::Collections::Generic::ICollection_1<K>*  keys;

/// @brief Field values, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::System::Collections::Generic::ICollection_1<V>*  values;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<K,V>"
constexpr operator  ::System::Collections::Generic::IDictionary_2<K,V>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<K,V>  item) ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(K  key, V  val) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<K,V>  item) ;

/// @brief Method ContainsKey, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool ContainsKey(K  key) ;

/// @brief Method Expand, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Expand() ;

/// @brief Method FindNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t FindNode(K  key) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NonAllocDictionary_2_PairIterator<K,V> GetEnumerator() ;

/// @brief Method GetNextPrime, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline uint32_t GetNextPrime(uint32_t  value) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Insert(K  key, V  val) ;

/// @brief Method IsPrimeFromList, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool IsPrimeFromList(uint32_t  value) ;

static inline ::ExitGames::Client::Photon::NonAllocDictionary_2<K,V>* New_ctor(uint32_t  capacity) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<K,V>  item) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(K  key) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Set(K  key, V  val) ;

/// @brief Method System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<K,V>>.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_K_V___CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<K,V>>  array, int32_t  index) ;

/// @brief Method System.Collections.Generic.IDictionary<K,V>.get_Keys, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<K>* System_Collections_Generic_IDictionary_K_V__get_Keys() ;

/// @brief Method System.Collections.Generic.IDictionary<K,V>.get_Values, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::ICollection_1<V>* System_Collections_Generic_IDictionary_K_V__get_Values() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<K,V>>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_K_V___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryGetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetValue(K  key, ::by_ref<V>  val) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__buckets() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__buckets() ;

constexpr uint32_t const& __cordl_internal_get__capacity() const;

constexpr uint32_t& __cordl_internal_get__capacity() ;

constexpr int32_t const& __cordl_internal_get__freeCount() const;

constexpr int32_t& __cordl_internal_get__freeCount() ;

constexpr int32_t const& __cordl_internal_get__freeHead() const;

constexpr int32_t& __cordl_internal_get__freeHead() ;

constexpr ::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>> const& __cordl_internal_get__nodes() const;

constexpr ::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>>& __cordl_internal_get__nodes() ;

constexpr int32_t const& __cordl_internal_get__usedCount() const;

constexpr int32_t& __cordl_internal_get__usedCount() ;

constexpr bool const& __cordl_internal_get_isReadOnly() const;

constexpr bool& __cordl_internal_get_isReadOnly() ;

constexpr ::System::Collections::Generic::ICollection_1<K>* const& __cordl_internal_get_keys() const;

constexpr ::System::Collections::Generic::ICollection_1<K>*& __cordl_internal_get_keys() ;

constexpr ::System::Collections::Generic::ICollection_1<V>* const& __cordl_internal_get_values() const;

constexpr ::System::Collections::Generic::ICollection_1<V>*& __cordl_internal_get_values() ;

constexpr void __cordl_internal_set__buckets(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__capacity(uint32_t  value) ;

constexpr void __cordl_internal_set__freeCount(int32_t  value) ;

constexpr void __cordl_internal_set__freeHead(int32_t  value) ;

constexpr void __cordl_internal_set__nodes(::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>>  value) ;

constexpr void __cordl_internal_set__usedCount(int32_t  value) ;

constexpr void __cordl_internal_set_isReadOnly(bool  value) ;

constexpr void __cordl_internal_set_keys(::System::Collections::Generic::ICollection_1<K>*  value) ;

constexpr void __cordl_internal_set_values(::System::Collections::Generic::ICollection_1<V>*  value) ;

/// @brief Method Assert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void _cordl_Assert(bool  condition) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint32_t  capacity) ;

static inline ::ArrayW<uint32_t> getStaticF__primeTableUInt() ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline uint32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline V get_Item(K  key) ;

/// @brief Method get_Keys, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NonAllocDictionary_2_KeyIterator<K,V> get_Keys() ;

/// @brief Method get_Values, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<K,V> get_Values() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IDictionary_2<K,V>"
constexpr ::System::Collections::Generic::IDictionary_2<K,V>* i___System__Collections__Generic__IDictionary_2_K_V_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<K,V>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_K_V__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

static inline void setStaticF__primeTableUInt(::ArrayW<uint32_t>  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Item(K  key, V  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NonAllocDictionary_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NonAllocDictionary_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NonAllocDictionary_2(NonAllocDictionary_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NonAllocDictionary_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NonAllocDictionary_2(NonAllocDictionary_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26417};

/// @brief Field _freeHead, offset: 0x10, size: 0x4, def value: None
 int32_t  ____freeHead;

/// @brief Field _freeCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ____freeCount;

/// @brief Field _usedCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ____usedCount;

/// @brief Field _capacity, offset: 0x1c, size: 0x4, def value: None
 uint32_t  ____capacity;

/// @brief Field _buckets, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____buckets;

/// @brief Field _nodes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::NonAllocDictionary_2_Node<K,V>>  ____nodes;

/// @brief Field isReadOnly, offset: 0x30, size: 0x1, def value: None
 bool  ___isReadOnly;

/// @brief Field keys, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<K>*  ___keys;

/// @brief Field values, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<V>*  ___values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ExitGames::Client::Photon
