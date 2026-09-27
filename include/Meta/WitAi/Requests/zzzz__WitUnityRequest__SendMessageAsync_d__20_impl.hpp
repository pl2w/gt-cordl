#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitUnityRequest__SendMessageAsync_d__20.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitUnityRequest__SendMessageAsync_d__20_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitMessageVRequest_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitUnityRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::*)()>(&::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x9e947bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e94ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messageRequest", ty: "::Meta::WitAi::Requests::WitMessageVRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::WitUnityRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::WitUnityRequest__SendMessageAsync_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::Meta::WitAi::Requests::WitMessageVRequest*  messageRequest, ::Meta::WitAi::Requests::WitUnityRequest*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<::StringW>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->messageRequest = messageRequest;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WitUnityRequest__SendMessageAsync_d__20::WitUnityRequest__SendMessageAsync_d__20()   {
}
