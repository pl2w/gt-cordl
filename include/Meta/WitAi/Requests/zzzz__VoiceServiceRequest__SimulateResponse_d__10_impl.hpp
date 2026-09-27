#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/VoiceServiceRequest__SimulateResponse_d__10.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest__SimulateResponse_d__10_def.hpp"
#include "Meta/WitAi/Data/zzzz__SimulatedResponseMessage_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::*)()>(&::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x5e4;
  constexpr static std::size_t addrs = 0x9e91788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e91d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::VoiceServiceRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lastMessage_5__2", ty: "::Meta::WitAi::Data::SimulatedResponseMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_message_5__4", ty: "::Meta::WitAi::Data::SimulatedResponseMessage*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::VoiceServiceRequest__SimulateResponse_d__10(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::Meta::WitAi::Requests::VoiceServiceRequest*  __4__this, ::Meta::WitAi::Data::SimulatedResponseMessage*  _lastMessage_5__2, int32_t  _i_5__3, ::Meta::WitAi::Data::SimulatedResponseMessage*  _message_5__4, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->_lastMessage_5__2 = _lastMessage_5__2;
this->_i_5__3 = _i_5__3;
this->_message_5__4 = _message_5__4;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VoiceServiceRequest__SimulateResponse_d__10::VoiceServiceRequest__SimulateResponse_d__10()   {
}
