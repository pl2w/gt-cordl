#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock__WaitForInit_d__22.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialAnchorCoreBuildingBlock__WaitForInit_d__22)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorCoreBuildingBlock;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__WaitForInit_d__22;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<WaitForInit>d__22");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.YieldAwaitable::YieldAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<WaitForInit>d__22
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__WaitForInit_d__22 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9eca128, size 0x3bc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9eca4e4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorCoreBuildingBlock__WaitForInit_d__22() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_timeoutThreshold_5__2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_startTime_5__3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr SpatialAnchorCoreBuildingBlock__WaitForInit_d__22(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor, float_t  _timeoutThreshold_5__2, float_t  _startTime_5__3, ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31463};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this;

/// @brief Field anchor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor;

/// @brief Field <timeoutThreshold>5__2, offset: 0x30, size: 0x4, def value: None
 float_t  _timeoutThreshold_5__2;

/// @brief Field <startTime>5__3, offset: 0x34, size: 0x4, def value: None
 float_t  _startTime_5__3;

/// @brief Field <>u__1, offset: 0x38, size: 0x1, def value: None
 ::GlobalNamespace::YieldAwaitable_YieldAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, anchor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, _timeoutThreshold_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, _startTime_5__3) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
