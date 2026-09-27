#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/TakeUntil_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TakeUntil_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TakeUntil_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TakeUntil`1__TakeUntil__RunOther_d__17_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::UniTask& Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_get_other()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___other;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::UniTask const& Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_get_other() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___other;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_set_other(::Cysharp::Threading::Tasks::UniTask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___other = value;
}
template<typename TSource>
constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*& Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_get_other2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___other2;
}
template<typename TSource>
constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>* const& Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_get_other2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___other2;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::__cordl_internal_set_other2(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___other2 = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, other, other2);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  other2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>*>(source, other, other2));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::TakeUntil_1<TSource>::TakeUntil_1()   {
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_cancellationToken1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_cancellationToken1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken1 = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_cancellationTokenRegistration1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration1;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_cancellationTokenRegistration1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration1;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_cancellationTokenRegistration1(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration1 = value;
}
template<typename TSource>
constexpr bool& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
template<typename TSource>
constexpr bool const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
template<typename TSource>
constexpr ::System::Exception*& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_exception()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
template<typename TSource>
constexpr ::System::Exception* const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_exception() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exception;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_exception(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exception = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TSource>
constexpr TSource& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::__cordl_internal_set__Current_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::setStaticF_CancelDelegate1(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate1", ::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::getStaticF_CancelDelegate1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate1", ::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::getStaticF_MoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Threading::CancellationToken  cancellationToken1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, other, cancellationToken1);
}
template<typename TSource>
inline TSource Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::set_Current(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"set_Current", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::SourceMoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"SourceMoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::MoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"MoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::RunOther(::Cysharp::Threading::Tasks::UniTask  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"RunOther", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, other);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::OnCanceled1(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"OnCanceled1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::Cysharp::Threading::Tasks::UniTask  other, ::System::Threading::CancellationToken  cancellationToken1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>*>(source, other, cancellationToken1));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::TakeUntil_1__TakeUntil<TSource>::TakeUntil_1__TakeUntil()   {
}
