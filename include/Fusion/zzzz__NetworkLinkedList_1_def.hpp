#pragma once
// IWYU pragma private; include "Fusion/NetworkLinkedList_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkLinkedList_1)
namespace Fusion {
template<typename T>
class DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0;
}
namespace Fusion {
template<typename T>
class IElementReaderWriter_1;
}
namespace Fusion {
class INetworkLinkedList;
}
namespace Fusion {
template<typename T>
class NetworkLinkedList_1_DebuggerProxy;
}
namespace GlobalNamespace {
template<typename T>
struct NetworkLinkedList_1_Enumerator;
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
template<typename T>
class DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0;
}
namespace Fusion {
template<typename T>
class NetworkLinkedList_1_DebuggerProxy;
}
namespace Fusion {
template<typename T>
struct NetworkLinkedList_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0);
MARK_GEN_REF_T_PTR(::Fusion::NetworkLinkedList_1_DebuggerProxy);
MARK_GEN_VAL_T(::Fusion::NetworkLinkedList_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0, "Fusion", "NetworkLinkedList`1/DebuggerProxy/<>c__DisplayClass0_0");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NetworkLinkedList_1_DebuggerProxy, "Fusion", "NetworkLinkedList`1/DebuggerProxy");
DEFINE_IL2CPP_GEN_CLASS(::Fusion::NetworkLinkedList_1, "Fusion", "NetworkLinkedList`1");
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkLinkedList`1/DebuggerProxy<T>
class CORDL_TYPE NetworkLinkedList_1_DebuggerProxy : public ::System::Object {
public:
// Declarations
using __c__DisplayClass0_0 = ::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>;

/// @brief [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)3)]
 __declspec(property(get=get_Items)) ::ArrayW<T>  Items;

/// @brief Field _items, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__items, put=__cordl_internal_set__items)) ::System::Lazy_1<::ArrayW<T>>*  _items;

static inline ::Fusion::NetworkLinkedList_1_DebuggerProxy<T>* New_ctor(::Fusion::NetworkLinkedList_1<T>  list) ;

constexpr ::System::Lazy_1<::ArrayW<T>>* const& __cordl_internal_get__items() const;

constexpr ::System::Lazy_1<::ArrayW<T>>*& __cordl_internal_get__items() ;

constexpr void __cordl_internal_set__items(::System::Lazy_1<::ArrayW<T>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Fusion::NetworkLinkedList_1<T>  list) ;

/// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> get_Items() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkLinkedList_1_DebuggerProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkLinkedList_1_DebuggerProxy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkLinkedList_1_DebuggerProxy(NetworkLinkedList_1_DebuggerProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkLinkedList_1_DebuggerProxy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkLinkedList_1_DebuggerProxy(NetworkLinkedList_1_DebuggerProxy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19072};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field _items, offset: 0x10, size: 0x8, def value: None
 ::System::Lazy_1<::ArrayW<T>>*  ____items;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.NetworkLinkedList`1<T>, System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NetworkLinkedList`1/DebuggerProxy/<>c__DisplayClass0_0<T>
class CORDL_TYPE DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field list, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get_list, put=__cordl_internal_set_list)) ::Fusion::NetworkLinkedList_1<T>  list;

static inline ::Fusion::DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0<T>* New_ctor() ;

constexpr ::Fusion::NetworkLinkedList_1<T> const& __cordl_internal_get_list() const;

constexpr ::Fusion::NetworkLinkedList_1<T>& __cordl_internal_get_list() ;

constexpr void __cordl_internal_set_list(::Fusion::NetworkLinkedList_1<T>  value) ;

/// @brief Method <.ctor>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::ArrayW<T> __ctor_b__0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0(DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0(DebuggerProxy_NetworkLinkedList_1___c__DisplayClass0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19071};

/// @brief Field list, offset: 0x10, size: 0x18, def value: None
 ::Fusion::NetworkLinkedList_1<T>  ___list;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion
// [DefaultMember("Item")]
// [DebuggerDisplay("Count = {Count}")]
// [DebuggerTypeProxy(typeof(Fusion.NetworkLinkedList`1::DebuggerProxy<T>))]
// Dependencies 
namespace Fusion {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.NetworkLinkedList`1<T>
struct CORDL_TYPE NetworkLinkedList_1 {
public:
// Declarations
using DebuggerProxy = ::Fusion::NetworkLinkedList_1_DebuggerProxy<T>;

using Enumerator = ::GlobalNamespace::NetworkLinkedList_1_Enumerator<T>;

 __declspec(property(get=get_Capacity)) int32_t  Capacity;

 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Head, put=set_Head)) int32_t  Head;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

 __declspec(property(get=get_Tail, put=set_Tail)) int32_t  Tail;

/// @brief Convert operator to "::Fusion::INetworkLinkedList"
constexpr operator  ::Fusion::INetworkLinkedList*() ;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() ;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() ;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Add(T  value) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  value) ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  comparer) ;

/// @brief Method Entry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t* Entry(int32_t  index) ;

/// @brief Method FindFreeEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t* FindFreeEntry(::by_ref<int32_t>  index) ;

/// @brief Method Fusion.INetworkLinkedList.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Fusion_INetworkLinkedList_Add(::System::Object*  item) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Get(int32_t  index) ;

/// @brief Method GetEntryByListIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t* GetEntryByListIndex(int32_t  listIndex) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::NetworkLinkedList_1_Enumerator<T> GetEnumerator() ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  value) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t IndexOf(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  equalityComparer) ;

/// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Read(int32_t*  entry) ;

/// @brief Method Remap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Fusion::NetworkLinkedList_1<T> Remap(void*  list) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(T  value) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Remove(T  value, ::System::Collections::Generic::IEqualityComparer_1<T>*  equalityComparer) ;

/// @brief Method RemoveEntry, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RemoveEntry(int32_t*  entry, int32_t  entryIndex) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Set(int32_t  index, T  value) ;

/// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Write(int32_t*  entry, T  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(uint8_t*  data, int32_t  capacity, ::Fusion::IElementReaderWriter_1<T>*  rw) ;

/// @brief Method get_Capacity, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Capacity() ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Head, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Head() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// @brief Method get_Tail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Tail() ;

/// @brief Convert to "::Fusion::INetworkLinkedList"
constexpr ::Fusion::INetworkLinkedList* i___Fusion__INetworkLinkedList() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() ;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() ;

/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_Head, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Head(int32_t  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

/// @brief Method set_Tail, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Tail(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkLinkedList_1() ;

// Ctor Parameters [CppParam { name: "_data", ty: "int32_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_stride", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_rw", ty: "::Fusion::IElementReaderWriter_1<T>*", modifiers: "", def_value: None, comment: None }]
constexpr NetworkLinkedList_1(int32_t*  _data, int32_t  _stride, int32_t  _capacity, ::Fusion::IElementReaderWriter_1<T>*  _rw) noexcept;

/// @brief Field COUNT offset 0xffffffff size 0x4
static constexpr int32_t  COUNT{static_cast<int32_t>(0x0)};

/// @brief Field ELEMENT_WORDS offset 0xffffffff size 0x4
static constexpr int32_t  ELEMENT_WORDS{static_cast<int32_t>(0x2)};

/// @brief Field HEAD offset 0xffffffff size 0x4
static constexpr int32_t  HEAD{static_cast<int32_t>(0x1)};

/// @brief Field INVALID offset 0xffffffff size 0x4
static constexpr int32_t  INVALID{static_cast<int32_t>(0x0)};

/// @brief Field META_WORDS offset 0xffffffff size 0x4
static constexpr int32_t  META_WORDS{static_cast<int32_t>(0x3)};

/// @brief Field NEXT offset 0xffffffff size 0x4
static constexpr int32_t  NEXT{static_cast<int32_t>(0x1)};

/// @brief Field OFFSET offset 0xffffffff size 0x4
static constexpr int32_t  OFFSET{static_cast<int32_t>(0x1)};

/// @brief Field PREV offset 0xffffffff size 0x4
static constexpr int32_t  PREV{static_cast<int32_t>(0x0)};

/// @brief Field TAIL offset 0xffffffff size 0x4
static constexpr int32_t  TAIL{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19074};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _data, offset: 0x0, size: 0x8, def value: None
 int32_t*  _data;

/// @brief Field _stride, offset: 0x8, size: 0x4, def value: None
 int32_t  _stride;

/// @brief Field _capacity, offset: 0xc, size: 0x4, def value: None
 int32_t  _capacity;

/// @brief Field _rw, offset: 0x10, size: 0x8, def value: None
 ::Fusion::IElementReaderWriter_1<T>*  _rw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Fusion
