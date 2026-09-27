#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/DistinctUntilChanged_2.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__DistinctUntilChanged_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__DistinctUntilChanged_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_2<TSource,TKey>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_2<TSource,TKey>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, comparer);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>* Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>*>(source, keySelector, comparer));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource,typename TKey>
constexpr  Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2<TSource,TKey>::DistinctUntilChanged_2()   {
}
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_2<TSource,TKey>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_keySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr ::System::Func_2<TSource,TKey>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_keySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keySelector;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_keySelector(::System::Func_2<TSource,TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keySelector = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_comparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TKey>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_comparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comparer;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_comparer(::System::Collections::Generic::IEqualityComparer_1<TKey>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comparer = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TKey>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource,typename TKey>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
template<typename TSource,typename TKey>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource,typename TKey>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource,typename TKey>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TSource,typename TKey>
constexpr ::System::Action*& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_moveNextAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveNextAction;
}
template<typename TSource,typename TKey>
constexpr ::System::Action* const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_moveNextAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveNextAction;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_moveNextAction(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveNextAction = value;
}
template<typename TSource,typename TKey>
constexpr TKey& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_prev()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename TSource,typename TKey>
constexpr TKey const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get_prev() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prev;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set_prev(TKey  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prev = value;
}
template<typename TSource,typename TKey>
constexpr TSource& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TKey>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TKey>
constexpr void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::__cordl_internal_set__Current_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_2<TSource,TKey>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TKey>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, keySelector, comparer, cancellationToken);
}
template<typename TSource,typename TKey>
inline TSource Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::set_Current(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(),
                        {"set_Current", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline void Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource,typename TKey>
inline ::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>* Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_2<TSource,TKey>*  keySelector, ::System::Collections::Generic::IEqualityComparer_1<TKey>*  comparer, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>*>(source, keySelector, comparer, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource,typename TKey>
constexpr  Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TKey>
constexpr  Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TKey>
constexpr ::Cysharp::Threading::Tasks::Linq::DistinctUntilChanged_2__DistinctUntilChanged<TSource,TKey>::DistinctUntilChanged_2__DistinctUntilChanged()   {
}
