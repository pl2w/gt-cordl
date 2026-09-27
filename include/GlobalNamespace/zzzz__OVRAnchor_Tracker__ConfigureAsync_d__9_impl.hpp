#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor_Tracker__ConfigureAsync_d__9.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_ConfigureTrackerResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackerConfiguration_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker_AsyncLock_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_TaskScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_Tracker__ConfigureAsync_d__9_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::*)()>(&::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0xa74;
  constexpr static std::size_t addrs = 0xa56faa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa570518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "configuration", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::Tracker_OVRAnchor_AsyncLock", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_results_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::Tracker_OVRAnchor__ConfigureAsync_d__9(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>  __t__builder, ::GlobalNamespace::OVRAnchor_Tracker*  __4__this, ::GlobalNamespace::OVRAnchor_TrackerConfiguration  configuration, ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock  __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>  __u__1, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*  _results_5__3, ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>  __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->configuration = configuration;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
this->_results_5__3 = _results_5__3;
this->__7__wrap3 = __7__wrap3;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__9::Tracker_OVRAnchor__ConfigureAsync_d__9()   {
}
