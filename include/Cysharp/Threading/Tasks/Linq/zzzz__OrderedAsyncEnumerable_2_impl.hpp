#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable_2.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_1_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TElement,typename TKey>
constexpr ::System::Func_2<TElement,TKey>*& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TElement,typename TKey>
constexpr ::System::Func_2<TElement,TKey>* const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_set_keySelector(::System::Func_2<TElement,TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TElement,typename TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TElement,typename TKey>
constexpr ::System::Collections::Generic::IComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TElement,typename TKey>
constexpr bool& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_descending()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descending;
}
template<typename TElement,typename TKey>
constexpr bool const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_descending() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descending;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_set_descending(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descending = value;
}
template<typename TElement,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename TElement,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename TElement,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename TElement,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source, ::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(), ::i2c::type_of<::System::Func_2<TElement,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, comparer, descending, parent);
}
template<typename TElement,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::GetAsyncEnumerableSorter(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(this, ___internal_method, next, cancellationToken);
}
template<typename TElement,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source, ::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending, ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>*>(source, keySelector, comparer, descending, parent));
}
// Ctor Parameters []
template<typename TElement,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_2<TElement,TKey>::OrderedAsyncEnumerable_2()   {
}
