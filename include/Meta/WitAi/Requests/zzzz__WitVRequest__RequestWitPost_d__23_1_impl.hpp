#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitVRequest__RequestWitPost_d__23_1.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest__RequestWitPost_d__23_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitVRequest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename TValue>
inline void GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TValue>
inline void GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TValue>
constexpr  GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TValue>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::WitVRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endpoint", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "urlParameters", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "payload", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onPartial", ty: "::System::Action_1<TValue>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TValue>
constexpr ::GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>::WitVRequest__RequestWitPost_d__23_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __t__builder, ::Meta::WitAi::Requests::WitVRequest*  __4__this, ::StringW  endpoint, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  urlParameters, ::StringW  payload, ::System::Action_1<TValue>*  onPartial, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TValue>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->endpoint = endpoint;
this->urlParameters = urlParameters;
this->payload = payload;
this->onPartial = onPartial;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TValue>
constexpr ::GlobalNamespace::WitVRequest__RequestWitPost_d__23_1<TValue>::WitVRequest__RequestWitPost_d__23_1()   {
}
