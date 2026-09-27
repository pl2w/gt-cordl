#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__KIDServerWebRequestNoResponse_d__141_1.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__KIDServerWebRequestNoResponse_d__141_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename Q>
inline void GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename Q>
inline void GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Q>
constexpr  GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename Q>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endpoint", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "operationType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestData", ty: "Q", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxRetries", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "responseCodeIsRetryable", ty: "::System::Func_2<int64_t,bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename Q>
constexpr ::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>::KIDManager__KIDServerWebRequestNoResponse_d__141_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int64_t>  __t__builder, ::StringW  endpoint, ::StringW  operationType, Q  requestData, int32_t  maxRetries, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_3<int64_t,::System::Object*,::StringW>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->endpoint = endpoint;
this->operationType = operationType;
this->requestData = requestData;
this->maxRetries = maxRetries;
this->responseCodeIsRetryable = responseCodeIsRetryable;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename Q>
constexpr ::GlobalNamespace::KIDManager__KIDServerWebRequestNoResponse_d__141_1<Q>::KIDManager__KIDServerWebRequestNoResponse_d__141_1()   {
}
