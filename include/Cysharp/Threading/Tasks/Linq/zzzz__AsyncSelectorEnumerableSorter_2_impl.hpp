#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncSelectorEnumerableSorter_2.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncSelectorEnumerableSorter_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncSelectorEnumerableSorter`2__ComputeKeysAsync_d__6_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TElement,typename TKey>
constexpr ::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TElement,typename TKey>
constexpr ::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>* const& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_set_keySelector(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TElement,typename TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TElement,typename TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TElement,typename TKey>
constexpr bool& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_descending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descending;
}
template<typename TElement,typename TKey>
constexpr bool const& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_descending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descending;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_set_descending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descending = value;
}
template<typename TElement,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename TElement,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* const& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_set_next(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
template<typename TElement,typename TKey>
constexpr ::ArrayW<TKey>& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
template<typename TElement,typename TKey>
constexpr ::ArrayW<TKey> const& Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_get_keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::__cordl_internal_set_keys(::ArrayW<TKey>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keys = value;
}
template<typename TElement,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::_ctor(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keySelector, comparer, descending, next);
}
template<typename TElement,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::ComputeKeysAsync(::ArrayW<TElement>  elements, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, elements, count);
}
template<typename TElement,typename TKey>
inline int32_t Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::CompareKeys(int32_t  index1, int32_t  index2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index1, index2);
}
template<typename TElement,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>* Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::New_ctor(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>*>(keySelector, comparer, descending, next));
}
// Ctor Parameters []
template<typename TElement,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<TElement,TKey>::AsyncSelectorEnumerableSorter_2()   {
}
