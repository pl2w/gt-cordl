#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_FetchResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Collections/Generic/zzzz__List`1_Enumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27)
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::BuildingBlocks {
class SpatialAnchorCoreBuildingBlock;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
struct Guid;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, "Meta.XR.BuildingBlocks", "SpatialAnchorCoreBuildingBlock/<LoadAnchorsAsync>d__27");
// [CompilerGenerated]
// Dependencies OVRAnchor::FetchResult, OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>, System.Collections.Generic.List`1::Enumerator<T>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SpatialAnchorCoreBuildingBlock/<LoadAnchorsAsync>d__27
struct CORDL_TYPE SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec8f30, size 0xbf0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ec9b20, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "uuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unboundAnchors_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "___5__4", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_loadedAnchors_5__5", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap5", ty: "::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unboundAnchor_5__7", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids, ::UnityW<::UnityEngine::GameObject>  prefab, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  _unboundAnchors_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  ___5__4, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _loadedAnchors_5__5, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1, ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  __7__wrap5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  _unboundAnchor_5__7, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31461};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc0};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field uuids, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerable_1<::System::Guid>*  uuids;

/// @brief Field prefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>  __4__this;

/// @brief Field <unboundAnchorsPoolHandle>5__2, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2;

/// @brief Field <unboundAnchors>5__3, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  _unboundAnchors_5__3;

/// @brief Field <_>5__4, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  ___5__4;

/// @brief Field <loadedAnchors>5__5, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _loadedAnchors_5__5;

/// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>  __u__1;

/// @brief Field <>7__wrap5, offset: 0x70, size: 0x18, def value: None
 ::GlobalNamespace::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  __7__wrap5;

/// @brief Field <unboundAnchor>5__7, offset: 0x88, size: 0x18, def value: None
 ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  _unboundAnchor_5__7;

/// @brief Field <>u__2, offset: 0xa0, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__2;

/// @brief Size padding 0xc0 - 0xb0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, uuids) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, prefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _unboundAnchorsPoolHandle_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _unboundAnchors_5__3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, ___5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _loadedAnchors_5__5) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __7__wrap5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, _unboundAnchor_5__7) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27, __u__2) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27) == 0xc0, "Size mismatch!");

} // namespace end def GlobalNamespace
