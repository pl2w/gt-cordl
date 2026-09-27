#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::*)()>(&::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x9ec65c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ec6a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Collections::Generic::List_1<::System::Guid>*  uuids, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this, ::UnityW<::UnityEngine::GameObject>  prefab, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uuids = uuids;
this->__4__this = __4__this;
this->prefab = prefab;
this->_unboundAnchorsPoolHandle_5__2 = _unboundAnchorsPoolHandle_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17()   {
}
