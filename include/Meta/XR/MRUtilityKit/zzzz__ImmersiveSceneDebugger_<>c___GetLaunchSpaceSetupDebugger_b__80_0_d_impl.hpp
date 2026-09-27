#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/ImmersiveSceneDebugger_<>c___GetLaunchSpaceSetupDebugger_b__80_0_d.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUK_LoadDeviceResult_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__ImmersiveSceneDebugger_<>c___GetLaunchSpaceSetupDebugger_b__80_0_d_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::*)()>(&::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x9f1efa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f1f440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MRUK_LoadDeviceResult>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d::__c_ImmersiveSceneDebugger___GetLaunchSpaceSetupDebugger_b__80_0_d()   {
}
