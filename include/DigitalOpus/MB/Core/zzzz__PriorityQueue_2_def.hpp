#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/PriorityQueue_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PriorityQueue_2)
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
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
// Forward declare root types
namespace DigitalOpus::MB::Core {
template<typename TPriority,typename TValue>
class PriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::DigitalOpus::MB::Core::PriorityQueue_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::DigitalOpus::MB::Core::PriorityQueue_2, "DigitalOpus.MB.Core", "PriorityQueue`2");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// cpp template
template<typename TPriority,typename TValue>
// Is value type: false
// CS Name: DigitalOpus.MB.Core.PriorityQueue`2<TPriority,TValue>
class CORDL_TYPE PriorityQueue_2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

/// @brief Field _baseHeap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseHeap, put=__cordl_internal_set__baseHeap)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  _baseHeap;

/// @brief Field _comparer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__comparer, put=__cordl_internal_set__comparer)) ::System::Collections::Generic::IComparer_1<TPriority>*  _comparer;

/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
constexpr operator  ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Add(::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>  item) ;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Contains(::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>  item) ;

/// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>  array, int32_t  arrayIndex) ;

/// @brief Method DeleteRoot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DeleteRoot() ;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::KeyValuePair_2<TPriority,TValue> Dequeue() ;

/// @brief Method DequeueValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue DequeueValue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(TPriority  priority, TValue  value) ;

/// @brief Method ExchangeElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ExchangeElements(int32_t  pos1, int32_t  pos2) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* GetEnumerator() ;

/// @brief Method HeapifyFromBeginningToEnd, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HeapifyFromBeginningToEnd(int32_t  pos) ;

/// @brief Method HeapifyFromEndToBeginning, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t HeapifyFromEndToBeginning(int32_t  pos) ;

/// @brief Method Insert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Insert(TPriority  priority, TValue  value) ;

/// @brief Method MergeQueues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* MergeQueues(::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq1, ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq2) ;

/// @brief Method MergeQueues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* MergeQueues(::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq1, ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq2, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* New_ctor() ;

static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* New_ctor(int32_t  capacity) ;

static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* New_ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* New_ctor(::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data) ;

static inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

/// @brief Method Peek, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::KeyValuePair_2<TPriority,TValue> Peek() ;

/// @brief Method PeekValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TValue PeekValue() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Remove(::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>  item) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method TryFindValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryFindValue(TPriority  item, ::by_ref<TValue>  foundVersion) ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* const& __cordl_internal_get__baseHeap() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*& __cordl_internal_get__baseHeap() ;

constexpr ::System::Collections::Generic::IComparer_1<TPriority>* const& __cordl_internal_get__comparer() const;

constexpr ::System::Collections::Generic::IComparer_1<TPriority>*& __cordl_internal_get__comparer() ;

constexpr void __cordl_internal_set__baseHeap(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  value) ;

constexpr void __cordl_internal_set__comparer(::System::Collections::Generic::IComparer_1<TPriority>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_IsEmpty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsReadOnly() ;

/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TPriority_TValue__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TPriority_TValue__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PriorityQueue_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PriorityQueue_2(PriorityQueue_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PriorityQueue_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PriorityQueue_2(PriorityQueue_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22729};

/// @brief Field _baseHeap, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  ____baseHeap;

/// @brief Field _comparer, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IComparer_1<TPriority>*  ____comparer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def DigitalOpus::MB::Core
