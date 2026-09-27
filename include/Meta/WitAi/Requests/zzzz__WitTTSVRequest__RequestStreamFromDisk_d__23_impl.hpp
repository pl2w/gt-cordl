#pragma once
// IWYU pragma private; include "Meta/WitAi/Requests/WitTTSVRequest__RequestStreamFromDisk_d__23.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest__RequestStreamFromDisk_d__23_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioJsonDecodeDelegate_def.hpp"
#include "Meta/Voice/Audio/Decoding/zzzz__AudioSampleDecodeDelegate_def.hpp"
#include "Meta/WitAi/Requests/zzzz__WitTTSVRequest_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::*)()>(&::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x9e8fe88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e90388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::Requests::WitTTSVRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onSamplesDecoded", ty: "::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "diskPath", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "onJsonDecoded", ty: "::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::WitTTSVRequest__RequestStreamFromDisk_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __t__builder, ::Meta::WitAi::Requests::WitTTSVRequest*  __4__this, ::Meta::Voice::Audio::Decoding::AudioSampleDecodeDelegate*  onSamplesDecoded, ::StringW  diskPath, ::Meta::Voice::Audio::Decoding::AudioJsonDecodeDelegate*  onJsonDecoded, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->onSamplesDecoded = onSamplesDecoded;
this->diskPath = diskPath;
this->onJsonDecoded = onJsonDecoded;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WitTTSVRequest__RequestStreamFromDisk_d__23::WitTTSVRequest__RequestStreamFromDisk_d__23()   {
}
