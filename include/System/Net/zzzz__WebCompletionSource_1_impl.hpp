#pragma once
// IWYU pragma private; include "System/Net/WebCompletionSource_1.hpp"
#include "System/Net/zzzz__WebCompletionSource`1_Status_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebCompletionSource_1_def.hpp"
#include "System/Net/zzzz__WebCompletionSource`1_Status_def.hpp"
#include "System/Net/zzzz__WebCompletionSource`1__WaitForCompletion_d__15_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__OperationCanceledException_def.hpp"
template<typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>*& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_completion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
template<typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>* const& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_completion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completion;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1<T>::__cordl_internal_set_completion(::System::Threading::Tasks::TaskCompletionSource_1<::System::Net::WebCompletionSource_1_Result<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completion = value;
}
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Result<T>*& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_currentResult()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResult;
}
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Result<T>* const& System::Net::WebCompletionSource_1<T>::__cordl_internal_get_currentResult() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentResult;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1<T>::__cordl_internal_set_currentResult(::System::Net::WebCompletionSource_1_Result<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentResult = value;
}
template<typename T>
inline void System::Net::WebCompletionSource_1<T>::_ctor(bool  runAsync)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runAsync);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Result<T>* System::Net::WebCompletionSource_1<T>::get_CurrentResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"get_CurrentResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::WebCompletionSource_1_Result<T>*>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::WebCompletionSource_1_Status<T> System::Net::WebCompletionSource_1<T>::get_CurrentStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"get_CurrentStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WebCompletionSource_1_Status<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task* System::Net::WebCompletionSource_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted(T  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"TrySetCompleted", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, argument);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"TrySetCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"TrySetCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetCanceled(::System::OperationCanceledException*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"TrySetCanceled", {}, {::i2c::type_of<::System::OperationCanceledException*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1<T>::TrySetException(::System::Exception*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"TrySetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error);
}
template<typename T>
inline void System::Net::WebCompletionSource_1<T>::ThrowOnError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"ThrowOnError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* System::Net::WebCompletionSource_1<T>::WaitForCompletion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1<T>*>(),
                        {"WaitForCompletion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1<T>* System::Net::WebCompletionSource_1<T>::New_ctor(bool  runAsync)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebCompletionSource_1<T>*>(runAsync));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::WebCompletionSource_1<T>::WebCompletionSource_1()   {
}
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T>& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Status_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
template<typename T>
constexpr ::GlobalNamespace::WebCompletionSource_1_Status<T> const& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Status_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Status_k__BackingField;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_set__Status_k__BackingField(::GlobalNamespace::WebCompletionSource_1_Status<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Status_k__BackingField = value;
}
template<typename T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Error_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Error_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Error_k__BackingField;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_set__Error_k__BackingField(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Error_k__BackingField = value;
}
template<typename T>
constexpr T& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Argument_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Argument_k__BackingField;
}
template<typename T>
constexpr T const& System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_get__Argument_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Argument_k__BackingField;
}
template<typename T>
constexpr void System::Net::WebCompletionSource_1_Result<T>::__cordl_internal_set__Argument_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Argument_k__BackingField = value;
}
template<typename T>
inline ::GlobalNamespace::WebCompletionSource_1_Status<T> System::Net::WebCompletionSource_1_Result<T>::get_Status()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1_Result<T>*>(),
                        {"get_Status", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::WebCompletionSource_1_Status<T>>(this, ___internal_method);
}
template<typename T>
inline bool System::Net::WebCompletionSource_1_Result<T>::get_Success()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1_Result<T>*>(),
                        {"get_Success", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Net::WebCompletionSource_1_Result<T>::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1_Result<T>*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>(this, ___internal_method);
}
template<typename T>
inline T System::Net::WebCompletionSource_1_Result<T>::get_Argument()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1_Result<T>*>(),
                        {"get_Argument", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void System::Net::WebCompletionSource_1_Result<T>::_ctor(T  argument)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1_Result<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argument);
}
template<typename T>
inline void System::Net::WebCompletionSource_1_Result<T>::_ctor(::GlobalNamespace::WebCompletionSource_1_Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::WebCompletionSource_1_Result<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::WebCompletionSource_1_Status<T>>(), ::i2c::type_of<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, error);
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Result<T>* System::Net::WebCompletionSource_1_Result<T>::New_ctor(T  argument)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebCompletionSource_1_Result<T>*>(argument));
}
template<typename T>
inline ::System::Net::WebCompletionSource_1_Result<T>* System::Net::WebCompletionSource_1_Result<T>::New_ctor(::GlobalNamespace::WebCompletionSource_1_Status<T>  state, ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  error)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::WebCompletionSource_1_Result<T>*>(state, error));
}
// Ctor Parameters []
template<typename T>
constexpr ::System::Net::WebCompletionSource_1_Result<T>::WebCompletionSource_1_Result()   {
}
