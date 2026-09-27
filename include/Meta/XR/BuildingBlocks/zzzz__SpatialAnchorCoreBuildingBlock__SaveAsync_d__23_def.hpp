#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock__SaveAsync_d__23.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_SaveResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialAnchorCoreBuildingBlock__SaveAsync_d__23)
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
struct SpatialAnchorCoreBuildingBlock__SaveAsync_d__23;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<SaveAsync>d__23");
// [CompilerGenerated]
// Dependencies OVRAnchor::SaveResult, OVRObjectPool::ListScope`1<T>, OVRResult`1<TStatus>, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<SaveAsync>d__23
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__SaveAsync_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec9b2c, size 0x594, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9eca0c0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorCoreBuildingBlock__SaveAsync_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None, comment: None }, CppParam { name: "___5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>", modifiers: "", def_value: None, comment: None }]
constexpr SpatialAnchorCoreBuildingBlock__SaveAsync_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this, ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  ___5__2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31462};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field anchor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this;

/// @brief Field <_>5__2, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  ___5__2;

/// @brief Field <>u__1, offset: 0x38, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, anchor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, ___5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
