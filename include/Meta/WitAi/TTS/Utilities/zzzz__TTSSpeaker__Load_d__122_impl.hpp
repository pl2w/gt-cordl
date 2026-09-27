#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Utilities/TTSSpeaker__Load_d__122.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker__Load_d__122_def.hpp"
#include "Meta/WitAi/Json/zzzz__WitResponseNode_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSDiskCacheSettings_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeakerClipEvents_def.hpp"
#include "Meta/WitAi/TTS/Utilities/zzzz__TTSSpeaker_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TTSSpeaker__Load_d__122.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TTSSpeaker__Load_d__122::*)()>(&::GlobalNamespace::TTSSpeaker__Load_d__122::MoveNext)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x9e61fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSSpeaker__Load_d__122>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TTSSpeaker__Load_d__122.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TTSSpeaker__Load_d__122::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TTSSpeaker__Load_d__122::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e62614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSSpeaker__Load_d__122>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TTSSpeaker__Load_d__122::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSSpeaker__Load_d__122>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TTSSpeaker__Load_d__122::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSSpeaker__Load_d__122>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TTSSpeaker__Load_d__122::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TTSSpeaker__Load_d__122::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "responseNode", ty: "::Meta::WitAi::Json::WitResponseNode*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clearQueue", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playbackEvents", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "diskCacheSettings", ty: "::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_requestData_5__2", ty: "::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TTSSpeaker__Load_d__122::TTSSpeaker__Load_d__122(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::WitAi::TTS::Utilities::TTSSpeaker>  __4__this, ::Meta::WitAi::Json::WitResponseNode*  responseNode, bool  clearQueue, ::Meta::WitAi::TTS::Utilities::TTSSpeakerClipEvents*  playbackEvents, ::Meta::WitAi::TTS::Utilities::TTSSpeaker___c__DisplayClass122_0*  __8__1, ::Meta::WitAi::TTS::Data::TTSDiskCacheSettings*  diskCacheSettings, ::Meta::WitAi::TTS::Utilities::TTSSpeaker_TTSSpeakerRequestData*  _requestData_5__2, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->responseNode = responseNode;
this->clearQueue = clearQueue;
this->playbackEvents = playbackEvents;
this->__8__1 = __8__1;
this->diskCacheSettings = diskCacheSettings;
this->_requestData_5__2 = _requestData_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TTSSpeaker__Load_d__122::TTSSpeaker__Load_d__122()   {
}
