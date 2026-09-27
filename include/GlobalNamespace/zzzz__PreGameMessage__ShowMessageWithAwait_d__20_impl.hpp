#pragma once
// IWYU pragma private; include "GlobalNamespace/PreGameMessage__ShowMessageWithAwait_d__20.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__PreGameMessage__ShowMessageWithAwait_d__20_def.hpp"
#include "GlobalNamespace/zzzz__PreGameMessage_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::*)()>(&::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5a42fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5a43354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::PreGameMessage>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messageTitle", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messageBody", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "messageConfirmation", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onConfirmationAction", ty: "::System::Action*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "bodyFontSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::PreGameMessage__ShowMessageWithAwait_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::PreGameMessage>  __4__this, ::StringW  messageTitle, ::StringW  messageBody, ::StringW  messageConfirmation, ::System::Action*  onConfirmationAction, float_t  bodyFontSize, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->messageTitle = messageTitle;
this->messageBody = messageBody;
this->messageConfirmation = messageConfirmation;
this->onConfirmationAction = onConfirmationAction;
this->bodyFontSize = bodyFontSize;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PreGameMessage__ShowMessageWithAwait_d__20::PreGameMessage__ShowMessageWithAwait_d__20()   {
}
