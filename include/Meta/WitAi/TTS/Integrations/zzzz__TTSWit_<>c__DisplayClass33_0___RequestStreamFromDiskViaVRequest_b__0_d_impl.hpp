#pragma once
// IWYU pragma private; include "Meta/WitAi/TTS/Integrations/TTSWit_<>c__DisplayClass33_0___RequestStreamFromDiskViaVRequest_b__0_d.hpp"
#include "Meta/WitAi/Requests/zzzz__VRequestResponse_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_<>c__DisplayClass33_0___RequestStreamFromDiskViaVRequest_b__0_d_def.hpp"
#include "Meta/WitAi/TTS/Integrations/zzzz__TTSWit_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::*)()>(&::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::MoveNext)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9e5905c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e59460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>  __t__builder, ::Meta::WitAi::TTS::Integrations::TTSWit___c__DisplayClass33_0*  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::Meta::WitAi::Requests::VRequestResponse_1<bool>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d::__c__DisplayClass33_0_TTSWit___RequestStreamFromDiskViaVRequest_b__0_d()   {
}
