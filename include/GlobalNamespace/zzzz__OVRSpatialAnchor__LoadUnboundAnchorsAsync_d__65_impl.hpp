#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchOptions_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::*)()>(&::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x87c;
  constexpr static std::size_t addrs = 0xa648634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa648eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "unboundAnchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "resultsHandler", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fetchOptions", ty: "::GlobalNamespace::OVRAnchor_FetchOptions", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65(int32_t  __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __t__builder, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  unboundAnchors, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,int32_t>*  resultsHandler, ::GlobalNamespace::OVRAnchor_FetchOptions  fetchOptions, ::GlobalNamespace::OVRSpatialAnchor___c__DisplayClass65_0*  __8__1, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>  __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->unboundAnchors = unboundAnchors;
this->resultsHandler = resultsHandler;
this->fetchOptions = fetchOptions;
this->__8__1 = __8__1;
this->__7__wrap1 = __7__wrap1;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65::OVRSpatialAnchor__LoadUnboundAnchorsAsync_d__65()   {
}
