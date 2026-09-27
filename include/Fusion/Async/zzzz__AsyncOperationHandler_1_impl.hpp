#pragma once
// IWYU pragma private; include "Fusion/Async/AsyncOperationHandler_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Async/zzzz__AsyncOperationHandler_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Exception_def.hpp"
template<typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_get__result()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename T>
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_get__result() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____result;
}
template<typename T>
constexpr void Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_set__result(::System::Threading::Tasks::TaskCompletionSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____result = value;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenSource*& Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_get__cancellation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellation;
}
template<typename T>
constexpr ::System::Threading::CancellationTokenSource* const& Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_get__cancellation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cancellation;
}
template<typename T>
constexpr void Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_set__cancellation(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cancellation = value;
}
template<typename T>
constexpr ::StringW& Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_get__customTimeoutMsg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customTimeoutMsg;
}
template<typename T>
constexpr ::StringW const& Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_get__customTimeoutMsg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customTimeoutMsg;
}
template<typename T>
constexpr void Fusion::Async::AsyncOperationHandler_1<T>::__cordl_internal_set__customTimeoutMsg(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customTimeoutMsg = value;
}
template<typename T>
inline ::System::Threading::Tasks::Task_1<T>* Fusion::Async::AsyncOperationHandler_1<T>::get_Task()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::AsyncOperationHandler_1<T>*>(),
                        {"get_Task", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Fusion::Async::AsyncOperationHandler_1<T>::_ctor(::System::Threading::CancellationToken  externalCancellationToken, float_t  operationTimeout, ::StringW  customTimeoutMsg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::AsyncOperationHandler_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, externalCancellationToken, operationTimeout, customTimeoutMsg);
}
template<typename T>
inline void Fusion::Async::AsyncOperationHandler_1<T>::SetResult(T  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::AsyncOperationHandler_1<T>*>(),
                        {"SetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
template<typename T>
inline void Fusion::Async::AsyncOperationHandler_1<T>::SetException(::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::AsyncOperationHandler_1<T>*>(),
                        {"SetException", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
template<typename T>
inline void Fusion::Async::AsyncOperationHandler_1<T>::Expire()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::AsyncOperationHandler_1<T>*>(),
                        {"Expire", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Fusion::Async::AsyncOperationHandler_1<T>::Cancel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Async::AsyncOperationHandler_1<T>*>(),
                        {"Cancel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::Async::AsyncOperationHandler_1<T>* Fusion::Async::AsyncOperationHandler_1<T>::New_ctor(::System::Threading::CancellationToken  externalCancellationToken, float_t  operationTimeout, ::StringW  customTimeoutMsg)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Async::AsyncOperationHandler_1<T>*>(externalCancellationToken, operationTimeout, customTimeoutMsg));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::Async::AsyncOperationHandler_1<T>::AsyncOperationHandler_1()   {
}
