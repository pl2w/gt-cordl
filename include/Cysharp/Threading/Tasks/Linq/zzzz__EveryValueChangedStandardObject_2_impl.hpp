#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/EveryValueChangedStandardObject_2.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__EveryValueChangedStandardObject_2_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__EveryValueChangedStandardObject_2_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__WeakReference_1_def.hpp"
template<typename TTarget,typename TProperty>
constexpr ::System::WeakReference_1<TTarget>*& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
template<typename TTarget,typename TProperty>
constexpr ::System::WeakReference_1<TTarget>* const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_set_target(::System::WeakReference_1<TTarget>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Func_2<TTarget,TProperty>*& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_propertySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertySelector;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Func_2<TTarget,TProperty>* const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_propertySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertySelector;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_set_propertySelector(::System::Func_2<TTarget,TProperty>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertySelector = value;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>*& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_equalityComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equalityComparer;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>* const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_equalityComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equalityComparer;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_set_equalityComparer(::System::Collections::Generic::IEqualityComparer_1<TProperty>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equalityComparer = value;
}
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_monitorTiming()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitorTiming;
}
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::PlayerLoopTiming const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_get_monitorTiming() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monitorTiming;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::__cordl_internal_set_monitorTiming(::Cysharp::Threading::Tasks::PlayerLoopTiming  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monitorTiming = value;
}
template<typename TTarget,typename TProperty>
inline void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::_ctor(TTarget  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>*>(),
                        {".ctor", {}, {::i2c::type_of<TTarget>(), ::i2c::type_of<::System::Func_2<TTarget,TProperty>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TProperty>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, propertySelector, equalityComparer, monitorTiming);
}
template<typename TTarget,typename TProperty>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>*>(this, ___internal_method, cancellationToken);
}
template<typename TTarget,typename TProperty>
inline ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::New_ctor(TTarget  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>*>(target, propertySelector, equalityComparer, monitorTiming));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>"
template<typename TTarget,typename TProperty>
constexpr  Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>"
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TProperty_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TProperty>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2<TTarget,TProperty>::EveryValueChangedStandardObject_2()   {
}
template<typename TTarget,typename TProperty>
constexpr ::System::WeakReference_1<TTarget>*& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
template<typename TTarget,typename TProperty>
constexpr ::System::WeakReference_1<TTarget>* const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_target(::System::WeakReference_1<TTarget>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>*& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_equalityComparer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equalityComparer;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Collections::Generic::IEqualityComparer_1<TProperty>* const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_equalityComparer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equalityComparer;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_equalityComparer(::System::Collections::Generic::IEqualityComparer_1<TProperty>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equalityComparer = value;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Func_2<TTarget,TProperty>*& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_propertySelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertySelector;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Func_2<TTarget,TProperty>* const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_propertySelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propertySelector;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_propertySelector(::System::Func_2<TTarget,TProperty>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propertySelector = value;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TTarget,typename TProperty>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TTarget,typename TProperty>
constexpr bool& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
template<typename TTarget,typename TProperty>
constexpr bool const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_first(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
template<typename TTarget,typename TProperty>
constexpr TProperty& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_currentValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
template<typename TTarget,typename TProperty>
constexpr TProperty const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_currentValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentValue;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_currentValue(TProperty  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentValue = value;
}
template<typename TTarget,typename TProperty>
constexpr bool& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
template<typename TTarget,typename TProperty>
constexpr bool const& Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_get_disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disposed;
}
template<typename TTarget,typename TProperty>
constexpr void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::__cordl_internal_set_disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disposed = value;
}
template<typename TTarget,typename TProperty>
inline void Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::_ctor(::System::WeakReference_1<TTarget>*  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::WeakReference_1<TTarget>*>(), ::i2c::type_of<::System::Func_2<TTarget,TProperty>*>(), ::i2c::type_of<::System::Collections::Generic::IEqualityComparer_1<TProperty>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, propertySelector, equalityComparer, monitorTiming, cancellationToken);
}
template<typename TTarget,typename TProperty>
inline TProperty Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TProperty>(this, ___internal_method);
}
template<typename TTarget,typename TProperty>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TTarget,typename TProperty>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TTarget,typename TProperty>
inline bool Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TTarget,typename TProperty>
inline ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::New_ctor(::System::WeakReference_1<TTarget>*  target, ::System::Func_2<TTarget,TProperty>*  propertySelector, ::System::Collections::Generic::IEqualityComparer_1<TProperty>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>*>(target, propertySelector, equalityComparer, monitorTiming, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>"
template<typename TTarget,typename TProperty>
constexpr  Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>"
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TProperty_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TProperty>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TTarget,typename TProperty>
constexpr  Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
template<typename TTarget,typename TProperty>
constexpr  Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TTarget,typename TProperty>
constexpr ::Cysharp::Threading::Tasks::Linq::EveryValueChangedStandardObject_2__EveryValueChanged<TTarget,TProperty>::EveryValueChangedStandardObject_2__EveryValueChanged()   {
}
