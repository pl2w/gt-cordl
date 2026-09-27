#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/TTSService__LoadAsync_d__54.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService__LoadAsync_d__54_def.hpp"
#include "Meta/WitAi/TTS/Data/zzzz__TTSClipData_def.hpp"
#include "Meta/WitAi/TTS/zzzz__TTSService_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TTSService__LoadAsync_d__54.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TTSService__LoadAsync_d__54::*)()>(&::GlobalNamespace::TTSService__LoadAsync_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x8a8;
  constexpr static std::size_t addrs = 0x9e4d6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSService__LoadAsync_d__54>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TTSService__LoadAsync_d__54.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TTSService__LoadAsync_d__54::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::TTSService__LoadAsync_d__54::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e4df6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSService__LoadAsync_d__54>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TTSService__LoadAsync_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSService__LoadAsync_d__54>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::TTSService__LoadAsync_d__54::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TTSService__LoadAsync_d__54>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::TTSService__LoadAsync_d__54::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::TTSService__LoadAsync_d__54::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clipData", ty: "::Meta::WitAi::TTS::Data::TTSClipData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::WitAi::TTS::TTSService>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onStreamComplete", ty: "::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onStreamReady", ty: "::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TTSService__LoadAsync_d__54::TTSService__LoadAsync_d__54(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Meta::WitAi::TTS::Data::TTSClipData*  clipData, ::UnityW<::Meta::WitAi::TTS::TTSService>  __4__this, ::System::Action_2<::Meta::WitAi::TTS::Data::TTSClipData*,::StringW>*  onStreamComplete, ::System::Action_1<::Meta::WitAi::TTS::Data::TTSClipData*>*  onStreamReady, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->clipData = clipData;
this->__4__this = __4__this;
this->onStreamComplete = onStreamComplete;
this->onStreamReady = onStreamReady;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TTSService__LoadAsync_d__54::TTSService__LoadAsync_d__54()   {
}
