#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Return_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Return_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Return_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename TValue>
constexpr TValue& Cysharp::Threading::Tasks::Linq::Return_1<TValue>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename TValue>
constexpr TValue const& Cysharp::Threading::Tasks::Linq::Return_1<TValue>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename TValue>
constexpr void Cysharp::Threading::Tasks::Linq::Return_1<TValue>::__cordl_internal_set_value(TValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename TValue>
inline void Cysharp::Threading::Tasks::Linq::Return_1<TValue>::_ctor(TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Return_1<TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>* Cysharp::Threading::Tasks::Linq::Return_1<TValue>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Return_1<TValue>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>*>(this, ___internal_method, cancellationToken);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::Linq::Return_1<TValue>* Cysharp::Threading::Tasks::Linq::Return_1<TValue>::New_ctor(TValue  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Return_1<TValue>*>(value));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>"
template<typename TValue>
constexpr  Cysharp::Threading::Tasks::Linq::Return_1<TValue>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>"
template<typename TValue>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>* Cysharp::Threading::Tasks::Linq::Return_1<TValue>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TValue_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TValue>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::Cysharp::Threading::Tasks::Linq::Return_1<TValue>::Return_1()   {
}
template<typename TValue>
constexpr TValue& Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename TValue>
constexpr TValue const& Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename TValue>
constexpr void Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_set_value(TValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename TValue>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TValue>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TValue>
constexpr void Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TValue>
constexpr bool& Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_get_called()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
template<typename TValue>
constexpr bool const& Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_get_called() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___called;
}
template<typename TValue>
constexpr void Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::__cordl_internal_set_called(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___called = value;
}
template<typename TValue>
inline void Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::_ctor(TValue  value, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<TValue>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, cancellationToken);
}
template<typename TValue>
inline TValue Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TValue>
inline ::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>* Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::New_ctor(TValue  value, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>*>(value, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>"
template<typename TValue>
constexpr  Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>"
template<typename TValue>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>* Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TValue_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TValue>
constexpr  Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TValue>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TValue>
constexpr ::Cysharp::Threading::Tasks::Linq::Return_1__Return<TValue>::Return_1__Return()   {
}
