#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/TakeUntilCanceled_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TakeUntilCanceled_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__TakeUntilCanceled_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(this, ___internal_method, cancellationToken);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>*>(source, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1<TSource>::TakeUntilCanceled_1()   {
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>* const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationToken1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationToken1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken1;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_cancellationToken1(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken1 = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationToken2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken2;
}
template<typename TSource>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationToken2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken2;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_cancellationToken2(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken2 = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationTokenRegistration1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration1;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationTokenRegistration1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration1;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_cancellationTokenRegistration1(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration1 = value;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationTokenRegistration2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration2;
}
template<typename TSource>
constexpr ::System::Threading::CancellationTokenRegistration const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_cancellationTokenRegistration2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationTokenRegistration2;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_cancellationTokenRegistration2(::System::Threading::CancellationTokenRegistration  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationTokenRegistration2 = value;
}
template<typename TSource>
constexpr bool& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_isCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCanceled;
}
template<typename TSource>
constexpr bool const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_isCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isCanceled;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_isCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isCanceled = value;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename TSource>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool>& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_awaiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource>
constexpr ::GlobalNamespace::UniTask_1_Awaiter<bool> const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get_awaiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___awaiter;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___awaiter = value;
}
template<typename TSource>
constexpr TSource& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr TSource const& Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename TSource>
constexpr void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::__cordl_internal_set__Current_k__BackingField(TSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::setStaticF_CancelDelegate1(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate1", ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::getStaticF_CancelDelegate1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate1", ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::setStaticF_CancelDelegate2(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate2", ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::getStaticF_CancelDelegate2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "CancelDelegate2", ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::setStaticF_MoveNextCoreDelegate(::System::Action_1<::System::Object*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(std::forward<::System::Action_1<::System::Object*>*>(value));
}
template<typename TSource>
inline ::System::Action_1<::System::Object*>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::getStaticF_MoveNextCoreDelegate()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Object*>*, "MoveNextCoreDelegate", ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>();
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, cancellationToken1, cancellationToken2);
}
template<typename TSource>
inline TSource Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TSource>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::set_Current(TSource  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"set_Current", {}, {::i2c::type_of<TSource>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::SourceMoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"SourceMoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::MoveNextCore(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"MoveNextCore", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::OnCanceled1(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"OnCanceled1", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline void Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::OnCanceled2(::System::Object*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"OnCanceled2", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename TSource>
inline ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::New_ctor(::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<TSource>*  source, ::System::Threading::CancellationToken  cancellationToken1, ::System::Threading::CancellationToken  cancellationToken2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>*>(source, cancellationToken1, cancellationToken2));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_TSource_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<TSource>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr  Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TSource>
constexpr ::Cysharp::Threading::Tasks::Linq::TakeUntilCanceled_1__TakeUntilCanceled<TSource>::TakeUntilCanceled_1__TakeUntilCanceled()   {
}
