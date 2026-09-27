#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VRequest__RequestJsonPost_d__127_1.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest__RequestJsonPost_d__127_1_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename TData>
inline void GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TData>
inline void GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TData>
constexpr  GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template<typename TData>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "postText", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onPartial", ty: "::System::Action_1<TData>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TData>
constexpr ::GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>::VRequest__RequestJsonPost_d__127_1(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>  __t__builder, ::StringW  postText, ::Meta::WitAi::Requests::VRequest*  __4__this, ::System::Action_1<TData>*  onPartial, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<TData>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->postText = postText;
this->__4__this = __4__this;
this->onPartial = onPartial;
this->__u__1 = __u__1;
}
// Ctor Parameters []
template<typename TData>
constexpr ::GlobalNamespace::VRequest__RequestJsonPost_d__127_1<TData>::VRequest__RequestJsonPost_d__127_1()   {
}
