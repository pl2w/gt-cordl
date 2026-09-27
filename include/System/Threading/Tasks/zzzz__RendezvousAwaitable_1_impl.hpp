#pragma once
// IWYU pragma private; include "System/Threading/Tasks/RendezvousAwaitable_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__RendezvousAwaitable_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__RendezvousAwaitable_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
template<typename TResult>
constexpr ::System::Action*& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__continuation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continuation;
}
template<typename TResult>
constexpr ::System::Action* const& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__continuation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____continuation;
}
template<typename TResult>
constexpr void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_set__continuation(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____continuation = value;
}
template<typename TResult>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename TResult>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
template<typename TResult>
constexpr void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_set__error(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
template<typename TResult>
constexpr TResult& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename TResult>
constexpr TResult const& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename TResult>
constexpr void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_set__result(TResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
template<typename TResult>
constexpr bool& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__RunContinuationsAsynchronously_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunContinuationsAsynchronously_k__BackingField;
}
template<typename TResult>
constexpr bool const& System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_get__RunContinuationsAsynchronously_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RunContinuationsAsynchronously_k__BackingField;
}
template<typename TResult>
constexpr void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::__cordl_internal_set__RunContinuationsAsynchronously_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RunContinuationsAsynchronously_k__BackingField = value;
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::setStaticF_s_completionSentinel(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "s_completionSentinel", ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(std::forward<::System::Action*>(value));
}
template<typename TResult>
inline ::System::Action* System::Threading::Tasks::RendezvousAwaitable_1<TResult>::getStaticF_s_completionSentinel()  {
return ::cordl_internals::getStaticField<::System::Action*, "s_completionSentinel", ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>();
}
template<typename TResult>
inline bool System::Threading::Tasks::RendezvousAwaitable_1<TResult>::get_RunContinuationsAsynchronously()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"get_RunContinuationsAsynchronously", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::set_RunContinuationsAsynchronously(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"set_RunContinuationsAsynchronously", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TResult>
inline ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>* System::Threading::Tasks::RendezvousAwaitable_1<TResult>::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(this, ___internal_method);
}
template<typename TResult>
inline bool System::Threading::Tasks::RendezvousAwaitable_1<TResult>::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TResult>
inline TResult System::Threading::Tasks::RendezvousAwaitable_1<TResult>::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TResult>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::SetResult(TResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"SetResult", {}, {::i2c::type_of<TResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::NotifyAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"NotifyAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>* System::Threading::Tasks::RendezvousAwaitable_1<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::RendezvousAwaitable_1<TResult>*>());
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename TResult>
constexpr  System::Threading::Tasks::RendezvousAwaitable_1<TResult>::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*() noexcept {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* System::Threading::Tasks::RendezvousAwaitable_1<TResult>::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion() noexcept {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename TResult>
constexpr  System::Threading::Tasks::RendezvousAwaitable_1<TResult>::operator ::System::Runtime::CompilerServices::INotifyCompletion*() noexcept {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
template<typename TResult>
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* System::Threading::Tasks::RendezvousAwaitable_1<TResult>::i___System__Runtime__CompilerServices__INotifyCompletion() noexcept {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Threading::Tasks::RendezvousAwaitable_1<TResult>::RendezvousAwaitable_1()   {
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>::setStaticF___9(::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*  value)  {
::cordl_internals::setStaticField<::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*, "<>9", ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*>(std::forward<::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*>(value));
}
template<typename TResult>
inline ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>* System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*, "<>9", ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*>();
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline void System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>::__cctor_b__20_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*>(),
                        {"<.cctor>b__20_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TResult>
inline ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>* System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>*>());
}
// Ctor Parameters []
template<typename TResult>
constexpr ::System::Threading::Tasks::RendezvousAwaitable_1___c<TResult>::RendezvousAwaitable_1___c()   {
}
