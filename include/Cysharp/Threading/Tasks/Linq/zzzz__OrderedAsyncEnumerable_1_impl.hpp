#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/OrderedAsyncEnumerable_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumerableSorter_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__OrderedAsyncEnumerable`1__OrderedAsyncEnumerator__CreateSortSource_d__11_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskOrderedAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename TElement>
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_2<TElement,TKey>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(),
                    {"CreateOrderedEnumerable", {::i2c::class_of<TKey>()}, {::i2c::type_of<::System::Func_2<TElement,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
template<typename TElement>
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(),
                    {"CreateOrderedEnumerable", {::i2c::class_of<TKey>()}, {::i2c::type_of<::System::Func_2<TElement,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
template<typename TElement>
template<typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::CreateOrderedEnumerable(::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*  keySelector, ::System::Collections::Generic::IComparer_1<TKey>*  comparer, bool  descending)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(),
                    {"CreateOrderedEnumerable", {::i2c::class_of<TKey>()}, {::i2c::type_of<::System::Func_3<TElement,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TKey>>*>(), ::i2c::type_of<::System::Collections::Generic::IComparer_1<TKey>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TKey>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(this, ___internal_method, keySelector, comparer, descending);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::GetAsyncEnumerableSorter(::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*  next, ::System::Threading::CancellationToken  cancellationToken)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<TElement>*>(this, ___internal_method, next, cancellationToken);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(this, ___internal_method, cancellationToken);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::i___Cysharp__Threading__Tasks__IUniTaskOrderedAsyncEnumerable_1_TElement_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskOrderedAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TElement_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TElement>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>::OrderedAsyncEnumerable_1()   {
}
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>* const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename TElement>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TElement>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TElement>
constexpr ::ArrayW<TElement>& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename TElement>
constexpr ::ArrayW<TElement> const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_set_buffer(::ArrayW<TElement>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
template<typename TElement>
constexpr ::ArrayW<int32_t>& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_map()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
template<typename TElement>
constexpr ::ArrayW<int32_t> const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_map() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___map;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_set_map(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___map = value;
}
template<typename TElement>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename TElement>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
template<typename TElement>
constexpr TElement& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TElement>
constexpr TElement const& Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TElement>
constexpr void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::__cordl_internal_set__Current_k__BackingField(TElement  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::_ctor(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, cancellationToken);
}
template<typename TElement>
inline TElement Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TElement>(this, ___internal_method);
}
template<typename TElement>
inline void Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::set_Current(TElement  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(),
                        {"set_Current", {}, {::i2c::type_of<TElement>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::CreateSortSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(),
                        {"CreateSortSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TElement>
inline ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::New_ctor(::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<TElement>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>*>(parent, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TElement_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TElement>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TElement>
constexpr  Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TElement>
constexpr ::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator<TElement>::OrderedAsyncEnumerable_1__OrderedAsyncEnumerator()   {
}
