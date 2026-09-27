#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor__FetchTrackablesAsync_d__66.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_HashSetScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_TaskScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor__FetchTrackablesAsync_d__66_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::*)()>(&::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::MoveNext)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0xa572ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa573504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trackableTypes", ty: "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::OVRAnchor__FetchTrackablesAsync_d__66(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback, ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>  __7__wrap1, ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>  __7__wrap2, ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>  __7__wrap3, ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->anchors = anchors;
this->trackableTypes = trackableTypes;
this->incrementalResultsCallback = incrementalResultsCallback;
this->__7__wrap1 = __7__wrap1;
this->__7__wrap2 = __7__wrap2;
this->__7__wrap3 = __7__wrap3;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::OVRAnchor__FetchTrackablesAsync_d__66()   {
}
