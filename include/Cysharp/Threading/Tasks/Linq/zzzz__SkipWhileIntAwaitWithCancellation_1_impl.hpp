#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/SkipWhileIntAwaitWithCancellation_1.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__AsyncEnumeratorAwaitSelectorBase_3_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SkipWhileIntAwaitWithCancellation_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__SkipWhileIntAwaitWithCancellation_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::__cordl_internal_get_predicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
template<typename TSource>
constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>* const& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::__cordl_internal_get_predicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::__cordl_internal_set_predicate(::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predicate = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, predicate);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>* Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>*>(source, predicate));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1<TSource>::SkipWhileIntAwaitWithCancellation_1()   {
}
template<typename TSource>
constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::__cordl_internal_get_predicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
template<typename TSource>
constexpr ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>* const& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::__cordl_internal_get_predicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::__cordl_internal_set_predicate(::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predicate = value;
}
template<typename TSource>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename TSource>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, predicate, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::TransformAsync(TSource  sourceCurrent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method, sourceCurrent);
}
template<typename TSource>
inline bool Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::TrySetCurrentCore(bool  awaitResult, ::by_ref<bool>  terminateIteration)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, awaitResult, terminateIteration);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>* Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Func_4<TSource,int32_t,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask_1<bool>>*  predicate, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>*>(source, predicate, cancellationToken));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation<TSource>::SkipWhileIntAwaitWithCancellation_1__SkipWhileIntAwaitWithCancellation()   {
}
