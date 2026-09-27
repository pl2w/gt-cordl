#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskCancelableAsyncEnumerable_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancelableAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCancelableAsyncEnumerable`1_Enumerator_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enumerable, cancellationToken);
}
template<typename T>
inline ::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T> Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::GetAsyncEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>>(),
                        {"GetAsyncEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UniTaskCancelableAsyncEnumerable_1_Enumerator<T>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "enumerable", ty: "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::UniTaskCancelableAsyncEnumerable_1(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  enumerable, ::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->enumerable = enumerable;
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCancelableAsyncEnumerable_1<T>::UniTaskCancelableAsyncEnumerable_1()   {
}
