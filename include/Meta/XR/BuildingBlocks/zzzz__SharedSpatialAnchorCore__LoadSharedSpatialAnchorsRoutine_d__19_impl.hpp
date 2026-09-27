#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::*)()>(&::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x9ec6e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ec77b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "result", ty: "::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_loadedAnchors_5__3", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchor_5__6", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>  result, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this, ::UnityW<::UnityEngine::GameObject>  prefab, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  _unboundAnchors_5__2, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _loadedAnchors_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  __7__wrap3, int32_t  _i_5__5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  _unboundAnchor_5__6, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->result = result;
this->__4__this = __4__this;
this->prefab = prefab;
this->_unboundAnchors_5__2 = _unboundAnchors_5__2;
this->_loadedAnchors_5__3 = _loadedAnchors_5__3;
this->__7__wrap3 = __7__wrap3;
this->_i_5__5 = _i_5__5;
this->_unboundAnchor_5__6 = _unboundAnchor_5__6;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19()   {
}
