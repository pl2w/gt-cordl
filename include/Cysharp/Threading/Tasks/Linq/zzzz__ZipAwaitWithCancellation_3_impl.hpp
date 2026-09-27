#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/ZipAwaitWithCancellation_3.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ZipAwaitWithCancellation_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ZipAwaitWithCancellation_3_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__ZipAwaitWithCancellation`3__ZipAwaitWithCancellation__DisposeAsync_d__21_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_get_second()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_get_second() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___second = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::__cordl_internal_set_resultSelector(::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*>(), ::i2c::type_of<::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, second, resultSelector);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(this, ___internal_method, cancellationToken);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>*>(first, second, resultSelector));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TFirst,typename TSecond,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>"
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TResult>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3<TFirst,TSecond,TResult>::ZipAwaitWithCancellation_3()   {
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_first()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_first() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___first;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_first(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___first = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_second()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_second() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___second;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_second(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___second = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_resultSelector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_resultSelector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultSelector;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_resultSelector(::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultSelector = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_firstEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstEnumerator;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_firstEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstEnumerator;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_firstEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TFirst>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstEnumerator = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>*& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_secondEnumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondEnumerator;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>* const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_secondEnumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondEnumerator;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_secondEnumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSecond>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondEnumerator = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_firstAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstAwaiter;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_firstAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstAwaiter;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_firstAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstAwaiter = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_secondAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondAwaiter;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_secondAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondAwaiter;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_secondAwaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondAwaiter = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult>& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_resultAwaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAwaiter;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<TResult> const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get_resultAwaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resultAwaiter;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set_resultAwaiter(::GlobalNamespace::UniTask_1_Awaiter<TResult>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resultAwaiter = value;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr TResult& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr TResult const& Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TFirst,typename TSecond,typename TResult>
constexpr void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::__cordl_internal_set__Current_k__BackingField(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::setStaticF_firstMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "firstMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::getStaticF_firstMoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "firstMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>();
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::setStaticF_secondMoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "secondMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::getStaticF_secondMoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "secondMoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>();
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::setStaticF_resultAwaitCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "resultAwaitCoreDelegate", ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::getStaticF_resultAwaitCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "resultAwaitCoreDelegate", ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>();
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*>(), ::i2c::type_of<::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, first, second, resultSelector, cancellationToken);
}
template<typename TFirst,typename TSecond,typename TResult>
inline TResult Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::set_Current(TResult  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"set_Current", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::FirstMoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"FirstMoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::SecondMoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"SecondMoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TFirst,typename TSecond,typename TResult>
inline void Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::ResultAwaitCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"ResultAwaitCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TFirst,typename TSecond,typename TResult>
inline ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TFirst>*  first, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSecond>*  second, ::System::Func_4<TFirst,TSecond,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<TResult>>*  resultSelector, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>*>(first, second, resultSelector, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TFirst,typename TSecond,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>"
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TResult_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TResult>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TFirst,typename TSecond,typename TResult>
constexpr  Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TFirst,typename TSecond,typename TResult>
constexpr ::Cysharp::Threading::Tasks::Linq::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation<TFirst,TSecond,TResult>::ZipAwaitWithCancellation_3__ZipAwaitWithCancellation()   {
}
