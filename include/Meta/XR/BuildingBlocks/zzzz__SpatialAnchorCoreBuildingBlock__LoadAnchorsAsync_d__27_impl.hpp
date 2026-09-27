#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::*)()>(&::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x9ec8f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ec9b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchors_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "___5__4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_loadedAnchors_5__5", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchor_5__7", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::UnityW<::UnityEngine::GameObject>  prefab, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  _unboundAnchors_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  ___5__4, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _loadedAnchors_5__5, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1, ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  __7__wrap5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  _unboundAnchor_5__7, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uuids = uuids;
this->prefab = prefab;
this->__4__this = __4__this;
this->_unboundAnchorsPoolHandle_5__2 = _unboundAnchorsPoolHandle_5__2;
this->_unboundAnchors_5__3 = _unboundAnchors_5__3;
this->___5__4 = ___5__4;
this->_loadedAnchors_5__5 = _loadedAnchors_5__5;
this->__u__1 = __u__1;
this->__7__wrap5 = __7__wrap5;
this->_unboundAnchor_5__7 = _unboundAnchor_5__7;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27()   {
}
