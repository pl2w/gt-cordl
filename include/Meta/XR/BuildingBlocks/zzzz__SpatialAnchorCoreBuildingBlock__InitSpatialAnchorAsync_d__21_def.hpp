#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21)
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
struct SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<InitSpatialAnchorAsync>d__21");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<InitSpatialAnchorAsync>d__21
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec8c44, size 0x2e0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ec8f24, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this, ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31460};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this;

/// @brief Field anchor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRSpatialAnchor>  anchor;

/// @brief Field <>u__1, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, anchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21, __u__1) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
