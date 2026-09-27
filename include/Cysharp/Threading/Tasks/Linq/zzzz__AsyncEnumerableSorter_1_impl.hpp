#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncEnumerableSorter_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter`1__SortAsync_d__2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::ComputeKeysAsync(::ArrayW<TElement>  elements, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, elements, count);
}
template<typename TElement>
inline int32_t Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::CompareKeys(int32_t  index1, int32_t  index2)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index1, index2);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<int32_t>> Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::SortAsync(::ArrayW<TElement>  elements, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(),
                        {"SortAsync", {}, {::i2c::type_of<::ArrayW<TElement>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<int32_t>>>(this, ___internal_method, elements, count);
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::QuickSort(::ArrayW<int32_t>  map, int32_t  left, int32_t  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(),
                        {"QuickSort", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, map, left, right);
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>());
}
// Ctor Parameters []
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>::AsyncEnumerableSorter_1()   {
}
