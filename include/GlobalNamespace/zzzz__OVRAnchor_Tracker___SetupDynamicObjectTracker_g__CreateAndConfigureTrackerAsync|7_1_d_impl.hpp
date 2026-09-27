#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync|7_1_d.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync|7_1_d_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::*)()>(&::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::MoveNext)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0xa56eec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa56f50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tracker", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __t__builder, uint64_t  tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config, uint64_t  __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>  __u__1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tracker = tracker;
this->config = config;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_7_1_d()   {
}
