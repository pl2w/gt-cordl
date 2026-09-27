#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Reverse_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Reverse_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Reverse_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Reverse`1__Reverse__MoveNextAsync_d__9_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>* Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Reverse_1<TSource>::Reverse_1()   {
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource>
constexpr ::ArrayW<TSource>& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_array()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename TSource>
constexpr ::ArrayW<TSource> const& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_array() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___array;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_set_array(::ArrayW<TSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___array = value;
}
template<typename TSource>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename TSource>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
template<typename TSource>
constexpr TSource& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::__cordl_internal_set__Current_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline TSource Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::set_Current(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*>(),
                        {"set_Current", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>* Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Reverse_1__Reverse<TSource>::Reverse_1__Reverse()   {
}
