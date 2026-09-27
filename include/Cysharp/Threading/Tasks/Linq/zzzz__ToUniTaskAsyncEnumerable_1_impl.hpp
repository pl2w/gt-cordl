#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ToUniTaskAsyncEnumerable_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ToUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1<T>::ToUniTaskAsyncEnumerable_1()   {
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_set_source(::System::Collections::Generic::IEnumerable_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>*& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* const& Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::__cordl_internal_set_enumerator(::System::Collections::Generic::IEnumerator_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::_ctor(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::New_ctor(::System::Collections::Generic::IEnumerable_1<T>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable<T>::ToUniTaskAsyncEnumerable_1__ToUniTaskAsyncEnumerable()   {
}
