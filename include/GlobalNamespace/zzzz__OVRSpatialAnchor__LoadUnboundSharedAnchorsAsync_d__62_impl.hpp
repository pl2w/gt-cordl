#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Result_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Guid_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::*)()>(&::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::MoveNext)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0xa648f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa6496d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_anchorBuff_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __t__builder, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*  _anchorBuff_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->uuids = uuids;
this->unboundAnchors = unboundAnchors;
this->_anchorBuff_5__2 = _anchorBuff_5__2;
this->__7__wrap2 = __7__wrap2;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62::OVRSpatialAnchor__LoadUnboundSharedAnchorsAsync_d__62()   {
}
