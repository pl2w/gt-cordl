#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/PriorityQueue_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__PriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename TPriority,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*& DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::__cordl_internal_get__baseHeap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseHeap;
}
template<typename TPriority,typename TValue>
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* const& DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::__cordl_internal_get__baseHeap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____baseHeap;
}
template<typename TPriority,typename TValue>
constexpr void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::__cordl_internal_set__baseHeap(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____baseHeap = value;
}
template<typename TPriority,typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TPriority>*& DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::__cordl_internal_get__comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparer;
}
template<typename TPriority,typename TValue>
constexpr ::System::Collections::Generic::IComparer_1<TPriority>* const& DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::__cordl_internal_get__comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____comparer;
}
template<typename TPriority,typename TValue>
constexpr void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::__cordl_internal_set__comparer(::System::Collections::Generic::IComparer_1<TPriority>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____comparer = value;
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::_ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, comparer);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::_ctor(::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, comparer);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, comparer);
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::MergeQueues(::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq1, ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"MergeQueues", {}, {::i2c::type_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(nullptr, ___internal_method, pq1, pq2);
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::MergeQueues(::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq1, ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*  pq2, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"MergeQueues", {}, {::i2c::type_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(), ::i2c::type_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TPriority>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(nullptr, ___internal_method, pq1, pq2, comparer);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Enqueue(TPriority  priority, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Enqueue", {}, {::i2c::type_of<TPriority>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority, value);
}
template<typename TPriority,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TPriority,TValue> DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline TValue DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::DequeueValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"DequeueValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline ::System::Collections::Generic::KeyValuePair_2<TPriority,TValue> DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline TValue DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::PeekValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"PeekValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline bool DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::ExchangeElements(int32_t  pos1, int32_t  pos2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"ExchangeElements", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos1, pos2);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Insert(TPriority  priority, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Insert", {}, {::i2c::type_of<TPriority>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, priority, value);
}
template<typename TPriority,typename TValue>
inline int32_t DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::HeapifyFromEndToBeginning(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"HeapifyFromEndToBeginning", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, pos);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::DeleteRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"DeleteRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::HeapifyFromBeginningToEnd(int32_t  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"HeapifyFromBeginningToEnd", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Add(::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline bool DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Contains(::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TPriority,typename TValue>
inline bool DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::TryFindValue(TPriority  item, ::by_ref<TValue>  foundVersion)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"TryFindValue", {}, {::i2c::type_of<TPriority>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item, foundVersion);
}
template<typename TPriority,typename TValue>
inline int32_t DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline void DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename TPriority,typename TValue>
inline bool DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline bool DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::Remove(::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TPriority,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>());
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(capacity));
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::New_ctor(int32_t  capacity, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(capacity, comparer));
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::New_ctor(::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(comparer));
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(data));
}
template<typename TPriority,typename TValue>
inline ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*  data, ::System::Collections::Generic::IComparer_1<TPriority>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>*>(data, comparer));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
template<typename TPriority,typename TValue>
constexpr  DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
template<typename TPriority,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TPriority_TValue__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
template<typename TPriority,typename TValue>
constexpr  DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>"
template<typename TPriority,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TPriority_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TPriority,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TPriority,typename TValue>
constexpr  DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TPriority,typename TValue>
constexpr ::System::Collections::IEnumerable* DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TPriority,typename TValue>
constexpr ::DigitalOpus::MB::Core::PriorityQueue_2<TPriority,TValue>::PriorityQueue_2()   {
}
