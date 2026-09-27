#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDManager__KIDServerWebRequest_d__140_2.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__ValueTuple_3_impl.hpp"
#include "GlobalNamespace/zzzz__KIDManager__KIDServerWebRequest_d__140_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
template<typename T,typename Q>
inline void GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename T,typename Q>
inline void GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T,typename Q>
constexpr  GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename T,typename Q>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<int64_t,T,::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endpoint", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "queryParams", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "operationType", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestData", ty: "Q", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "responseCodeIsRetryable", ty: "::System::Func_2<int64_t,bool>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxRetries", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_retryCount_5__2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_URL_5__3", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_request_5__4", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_json_5__5", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T,typename Q>
constexpr ::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>::KIDManager__KIDServerWebRequest_d__140_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_3<int64_t,T,::StringW>>  __t__builder, ::StringW  endpoint, ::StringW  queryParams, ::StringW  operationType, Q  requestData, ::System::Func_2<int64_t,bool>*  responseCodeIsRetryable, int32_t  maxRetries, int32_t  _retryCount_5__2, ::StringW  _URL_5__3, ::UnityEngine::Networking::UnityWebRequest*  _request_5__4, ::StringW  _json_5__5, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::Networking::UnityWebRequest*>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->endpoint = endpoint;
this->queryParams = queryParams;
this->operationType = operationType;
this->requestData = requestData;
this->responseCodeIsRetryable = responseCodeIsRetryable;
this->maxRetries = maxRetries;
this->_retryCount_5__2 = _retryCount_5__2;
this->_URL_5__3 = _URL_5__3;
this->_request_5__4 = _request_5__4;
this->_json_5__5 = _json_5__5;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
template<typename T,typename Q>
constexpr ::GlobalNamespace::KIDManager__KIDServerWebRequest_d__140_2<T,Q>::KIDManager__KIDServerWebRequest_d__140_2()   {
}
