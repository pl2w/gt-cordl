#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker__SetupMarkerTracker_d__5.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker__SetupMarkerTracker_d__5_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::*)()>(&::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xa570c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa571008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::Tracker_OVRAnchor__SetupMarkerTracker_d__5(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>  __t__builder, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  config, ::GlobalNamespace::OVRAnchor_Tracker*  __4__this, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->config = config;
this->__4__this = __4__this;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor__SetupMarkerTracker_d__5::Tracker_OVRAnchor__SetupMarkerTracker_d__5()   {
}
