#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync|66_0_d.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_SpaceComponentType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync|66_0_d_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_TrackableType_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::*)()>(&::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x7e4;
  constexpr static std::size_t addrs = 0xa571060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa571844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "componentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "trackableTypes", ty: "::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_anchorsWithComponent_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>  __t__builder, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*  trackableTypes, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*  incrementalResultsCallback, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchorsWithComponent_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->componentType = componentType;
this->anchors = anchors;
this->trackableTypes = trackableTypes;
this->incrementalResultsCallback = incrementalResultsCallback;
this->_anchorsWithComponent_5__2 = _anchorsWithComponent_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d()   {
}
