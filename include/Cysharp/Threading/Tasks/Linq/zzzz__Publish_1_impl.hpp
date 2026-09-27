#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Publish_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TriggerEvent_1_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Publish_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Publish_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Publish`1__ConsumeEnumerator_d__8_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IConnectableUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITriggerHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenSource = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<TSource>& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_trigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::TriggerEvent_1<TSource> const& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_trigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trigger;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_set_trigger(::Cysharp::Threading::Tasks::TriggerEvent_1<TSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trigger = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource>
constexpr ::System::IDisposable*& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_connectedDisposable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedDisposable;
}
template<typename TSource>
constexpr ::System::IDisposable* const& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_connectedDisposable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedDisposable;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_set_connectedDisposable(::System::IDisposable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedDisposable = value;
}
template<typename TSource>
constexpr bool& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_isCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCompleted;
}
template<typename TSource>
constexpr bool const& Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_get_isCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCompleted;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::__cordl_internal_set_isCompleted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCompleted = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
template<typename TSource>
inline ::System::IDisposable* Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::Connect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*>(),
                        {"Connect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IDisposable*>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::ConsumeEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*>(),
                        {"ConsumeEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*>(source));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::operator ::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::i___Cysharp__Threading__Tasks__IConnectableUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IConnectableUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>::Publish_1()   {
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parent;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set_parent(::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parent = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_cancellationTokenRegistration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_cancellationTokenRegistration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set_cancellationTokenRegistration(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration = value;
}
template<typename TSource>
constexpr bool& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_isDisposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename TSource>
constexpr bool const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get_isDisposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDisposed;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set_isDisposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDisposed = value;
}
template<typename TSource>
constexpr TSource& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set__Current_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Prev_k__BackingField = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* const& Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_get__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::__cordl_internal_set__Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Cysharp_Threading_Tasks_ITriggerHandler_TSource__Next_k__BackingField = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::setStaticF_CancelDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate", ::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::getStaticF_CancelDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate", ::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::_ctor(::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parent, cancellationToken);
}
template<typename TSource>
inline TSource Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::set_Current(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"set_Current", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::Cysharp_Threading_Tasks_ITriggerHandler_TSource__get_Prev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<TSource>.get_Prev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::Cysharp_Threading_Tasks_ITriggerHandler_TSource__set_Prev(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<TSource>.set_Prev", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::Cysharp_Threading_Tasks_ITriggerHandler_TSource__get_Next()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<TSource>.get_Next", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::Cysharp_Threading_Tasks_ITriggerHandler_TSource__set_Next(::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"Cysharp.Threading.Tasks.ITriggerHandler<TSource>.set_Next", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::OnCanceled(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::OnNext(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"OnNext", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::OnCanceled(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"OnCanceled", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::OnCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"OnCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::OnError(::System::Exception*  ex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(),
                        {"OnError", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ex);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::New_ctor(::Cysharp::Threading::Tasks::Linq::Publish_1<TSource>*  parent, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>*>(parent, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::operator ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::i___Cysharp__Threading__Tasks__ITriggerHandler_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITriggerHandler_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1__Publish<TSource>::Publish_1__Publish()   {
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenSource*& Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::__cordl_internal_get_cancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenSource* const& Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::__cordl_internal_get_cancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenSource;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::__cordl_internal_set_cancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenSource = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::_ctor(::System::Threading::CancellationTokenSource*  cancellationTokenSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cancellationTokenSource);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>* Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::New_ctor(::System::Threading::CancellationTokenSource*  cancellationTokenSource)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>*>(cancellationTokenSource));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename TSource>
constexpr ::System::IDisposable* Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::Publish_1_ConnectDisposable<TSource>::Publish_1_ConnectDisposable()   {
}
