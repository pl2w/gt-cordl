#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Empty_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Empty_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Empty_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Empty_1<T>::setStaticF_Instance(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Linq::Empty_1<T>*>(std::forward<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::Empty_1<T>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Linq::Empty_1<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Empty_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Empty_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::Empty_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Empty_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::Empty_1<T>* Cysharp::Threading::Tasks::Linq::Empty_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Empty_1<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Empty_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::Empty_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Empty_1<T>::Empty_1()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::setStaticF_Instance(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>(std::forward<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*, "Instance", ::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>* Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Empty_1__Empty<T>::Empty_1__Empty()   {
}
