#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWit__RequestStreamFromWebSocket_d__26.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit__RequestStreamFromWebSocket_d__26_def.hpp"
#include "Meta/Voice/Net/WebSockets/Requests/zzzz__WitWebSocketTtsRequest_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::*)()>(&::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x9e5af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e5b374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clipData", ty: "::Meta::WitAi::TTS::Data::TTSClipData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_wsRequest_5__2", ty: "::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::TTSWit__RequestStreamFromWebSocket_d__26(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::UnityW<::Meta::WitAi::TTS::Integrations::TTSWit>  __4__this, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::Meta::Voice::Net::WebSockets::Requests::WitWebSocketTtsRequest*  _wsRequest_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->clipData = clipData;
this->_wsRequest_5__2 = _wsRequest_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TTSWit__RequestStreamFromWebSocket_d__26::TTSWit__RequestStreamFromWebSocket_d__26()   {
}
