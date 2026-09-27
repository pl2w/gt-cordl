#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Repeat_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Repeat_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Repeat_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename TElement>
constexpr TElement& Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::__cordl_internal_get_element()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___element;
}
template<typename TElement>
constexpr TElement const& Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::__cordl_internal_get_element() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___element;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::__cordl_internal_set_element(TElement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___element = value;
}
template<typename TElement>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
template<typename TElement>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::_ctor(TElement  element, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<TElement>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, count);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(this, ___internal_method, cancellationToken);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>* Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::New_ctor(TElement  element, int32_t  count)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>*>(element, count));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TElement_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::Repeat_1<TElement>::Repeat_1()   {
}
template<typename TElement>
constexpr TElement& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_element()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___element;
}
template<typename TElement>
constexpr TElement const& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_element() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___element;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_set_element(TElement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___element = value;
}
template<typename TElement>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
template<typename TElement>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___count;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_set_count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___count = value;
}
template<typename TElement>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_remaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remaining;
}
template<typename TElement>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_remaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remaining;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_set_remaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remaining = value;
}
template<typename TElement>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TElement>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::_ctor(TElement  element, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<TElement>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element, count, cancellationToken);
}
template<typename TElement>
inline TElement Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>* Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::New_ctor(TElement  element, int32_t  count, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>*>(element, count, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TElement_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::Repeat_1__Repeat<TElement>::Repeat_1__Repeat()   {
}
