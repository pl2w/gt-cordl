#pragma once
// IWYU pragma private; include "Oculus/Voice/AppVoiceExperience__Activate_d__37.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Oculus/Voice/zzzz__AppVoiceExperience__Activate_d__37_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRequestOptions_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequestEvents_def.hpp"
#include "Meta/WitAi/Requests/zzzz__VoiceServiceRequest_def.hpp"
#include "Oculus/Voice/zzzz__AppVoiceExperience_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppVoiceExperience__Activate_d__37.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppVoiceExperience__Activate_d__37::*)()>(&::GlobalNamespace::AppVoiceExperience__Activate_d__37::MoveNext)> {
  constexpr static std::size_t size = 0x604;
  constexpr static std::size_t addrs = 0xb947db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AppVoiceExperience__Activate_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AppVoiceExperience__Activate_d__37.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AppVoiceExperience__Activate_d__37::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AppVoiceExperience__Activate_d__37::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb9483bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AppVoiceExperience__Activate_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AppVoiceExperience__Activate_d__37::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AppVoiceExperience__Activate_d__37>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AppVoiceExperience__Activate_d__37::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AppVoiceExperience__Activate_d__37>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AppVoiceExperience__Activate_d__37::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AppVoiceExperience__Activate_d__37::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VoiceServiceRequest*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "text", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Oculus::Voice::AppVoiceExperience>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestOptions", ty: "::Meta::WitAi::Configuration::WitRequestOptions*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requestEvents", ty: "::Meta::WitAi::Requests::VoiceServiceRequestEvents*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VoiceServiceRequest*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AppVoiceExperience__Activate_d__37::AppVoiceExperience__Activate_d__37(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VoiceServiceRequest*>  __t__builder, ::StringW  text, ::UnityW<::Oculus::Voice::AppVoiceExperience>  __4__this, ::Meta::WitAi::Configuration::WitRequestOptions*  requestOptions, ::Meta::WitAi::Requests::VoiceServiceRequestEvents*  requestEvents, ::Oculus::Voice::AppVoiceExperience___c__DisplayClass37_1*  __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VoiceServiceRequest*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->text = text;
this->__4__this = __4__this;
this->requestOptions = requestOptions;
this->requestEvents = requestEvents;
this->__8__1 = __8__1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AppVoiceExperience__Activate_d__37::AppVoiceExperience__Activate_d__37()   {
}
