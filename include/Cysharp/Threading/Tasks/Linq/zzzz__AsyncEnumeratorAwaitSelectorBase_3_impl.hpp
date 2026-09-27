#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/AsyncEnumeratorAwaitSelectorBase_3.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorAwaitSelectorBase_3_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_sourceMoveNext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMoveNext;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_sourceMoveNext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sourceMoveNext;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set_sourceMoveNext(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sourceMoveNext = value;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TAwait>& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_resultAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAwaiter;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TAwait> const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get_resultAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAwaiter;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set_resultAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TAwait>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAwaiter = value;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr TSource& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get__SourceCurrent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SourceCurrent_k__BackingField;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get__SourceCurrent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SourceCurrent_k__BackingField;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set__SourceCurrent_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SourceCurrent_k__BackingField = value;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr TResult& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr TResult const& Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource,typename TResult,typename TAwait>
constexpr void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::__cordl_internal_set__Current_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::setStaticF_moveNextCallbackDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "moveNextCallbackDelegate", ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TResult,typename TAwait>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::getStaticF_moveNextCallbackDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "moveNextCallbackDelegate", ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>();
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::setStaticF_setCurrentCallbackDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "setCurrentCallbackDelegate", ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource,typename TResult,typename TAwait>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::getStaticF_setCurrentCallbackDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "setCurrentCallbackDelegate", ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>();
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::Cysharp::Threading::Tasks::UniTask_1<TAwait> Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::TransformAsync(TSource  sourceCurrent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<TAwait>>(this, ___internal_method, sourceCurrent);
}
template<typename TSource,typename TResult,typename TAwait>
inline bool Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::TrySetCurrentCore(TAwait  awaitResult, ::by_ref<bool>  terminateIteration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, awaitResult, terminateIteration);
}
template<typename TSource,typename TResult,typename TAwait>
inline TSource Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::get_SourceCurrent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"get_SourceCurrent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::set_SourceCurrent(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"set_SourceCurrent", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::System::ValueTuple_2<bool,bool> Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::ActionCompleted(bool  trySetCurrentResult, ::by_ref<bool>  moveNextResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"ActionCompleted", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,bool>>(this, ___internal_method, trySetCurrentResult, moveNextResult);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::System::ValueTuple_2<bool,bool> Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::WaitAwaitCallback(::by_ref<bool>  moveNextResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"WaitAwaitCallback", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,bool>>(this, ___internal_method, moveNextResult);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::System::ValueTuple_2<bool,bool> Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::IterateFinished(::by_ref<bool>  moveNextResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"IterateFinished", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,bool>>(this, ___internal_method, moveNextResult);
}
template<typename TSource,typename TResult,typename TAwait>
inline TResult Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::set_Current(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"set_Current", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::SourceMoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"SourceMoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::System::ValueTuple_2<bool,bool> Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::TryMoveNextCore(bool  sourceHasCurrent, ::by_ref<bool>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"TryMoveNextCore", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool,bool>>(this, ___internal_method, sourceHasCurrent, result);
}
template<typename TSource,typename TResult,typename TAwait>
inline bool Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::UnwarapTask(::Cysharp::Threading::Tasks::UniTask_1<TAwait>  taskResult, ::by_ref<TAwait>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"UnwarapTask", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask_1<TAwait>>(), ::i2c::type_of<::by_ref<TAwait>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, taskResult, result);
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::MoveNextCallBack(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"MoveNextCallBack", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TResult,typename TAwait>
inline void Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::SetCurrentCallBack(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(),
                        {"SetCurrentCallBack", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::DisposeAsync()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource,typename TResult,typename TAwait>
inline ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>* Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TResult,typename TAwait>
constexpr  Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TResult,typename TAwait>
constexpr  Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource,typename TResult,typename TAwait>
constexpr ::Cysharp::Threading::Tasks::Linq::AsyncEnumeratorAwaitSelectorBase_3<TSource,TResult,TAwait>::AsyncEnumeratorAwaitSelectorBase_3()   {
}
