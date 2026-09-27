#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::*)()>(&::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x9ec8c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21.SetStateMachine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ec8f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>(),
                        {"SetStateMachine", {}, {::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->anchor = anchor;
this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21()   {
}
