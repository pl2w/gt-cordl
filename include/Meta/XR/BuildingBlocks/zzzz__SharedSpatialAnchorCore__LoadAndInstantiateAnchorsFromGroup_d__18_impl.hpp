#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::*)()>(&::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x9ec6a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ec6e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Guid  groupUuid, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this, ::UnityW<::UnityEngine::GameObject>  prefab, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->groupUuid = groupUuid;
this->__4__this = __4__this;
this->prefab = prefab;
this->_unboundAnchorsPoolHandle_5__2 = _unboundAnchorsPoolHandle_5__2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18()   {
}
