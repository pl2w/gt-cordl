#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker_AsyncLock__AcquireAsync_d__3.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock__AcquireAsync_d__3_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::*)()>(&::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa56ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa56ee70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>  __t__builder, ::GlobalNamespace::OVRAnchor_Tracker*  tracker, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->tracker = tracker;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3()   {
}
