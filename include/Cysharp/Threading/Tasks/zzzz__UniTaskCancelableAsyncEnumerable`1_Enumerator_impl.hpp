#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancelableAsyncEnumerable`1_Enumerator.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancelableAsyncEnumerable`1_Enumerator_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
template<typename T>
inline void GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerator);
}
template<typename T>
inline T GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(*this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enumerator", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::UniTaskCancelableAsyncEnumerable_1_Enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  enumerator) noexcept  {
this->enumerator = enumerator;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>::UniTaskCancelableAsyncEnumerable_1_Enumerator()   {
}
