#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/QueueOperator_1.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__QueueOperator_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__QueueOperator_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__QueueOperator`1__Queue__ConsumeAll_d__10_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__QueueOperator`1__Queue__DisposeAsync_d__11_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ChannelWriter_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__Channel_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>* Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::QueueOperator_1<TSource>::QueueOperator_1()   {
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Channel_1<TSource>*& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Channel_1<TSource>* const& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_set_channel(::Cysharp::Threading::Tasks::Channel_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_channelEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelEnumerator;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_channelEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelEnumerator;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_set_channelEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelEnumerator = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_sourceEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceEnumerator;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_sourceEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceEnumerator;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_set_sourceEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceEnumerator = value;
}
template<typename TSource>
constexpr bool& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_channelClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelClosed;
}
template<typename TSource>
constexpr bool const& Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_get_channelClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channelClosed;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::__cordl_internal_set_channelClosed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channelClosed = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline TSource Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::ConsumeAll(::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*  self, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  enumerator, ::Cysharp::Threading::Tasks::ChannelWriter_1<TSource>*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(),
                        {"ConsumeAll", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::ChannelWriter_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(nullptr, ___internal_method, self, enumerator, writer);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>* Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::QueueOperator_1__Queue<TSource>::QueueOperator_1__Queue()   {
}
