#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19)
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
}
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::BuildingBlocks {
class SharedSpatialAnchorCore;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore/<LoadSharedSpatialAnchorsRoutine>d__19");
// [CompilerGenerated]
// Dependencies OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<LoadSharedSpatialAnchorsRoutine>d__19
struct CORDL_TYPE SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec6e24, size 0x994, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ec77b8, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "result", ty: "::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unboundAnchors_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_loadedAnchors_5__3", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap3", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unboundAnchor_5__6", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: None, comment: None }]
constexpr SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>  result, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this, ::UnityW<::UnityEngine::GameObject>  prefab, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  _unboundAnchors_5__2, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _loadedAnchors_5__3, ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  __7__wrap3, int32_t  _i_5__5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  _unboundAnchor_5__6, ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31455};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x98};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field result, offset: 0x28, size: 0x20, def value: None
 ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>  result;

/// @brief Field <>4__this, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this;

/// @brief Field prefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field <unboundAnchors>5__2, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*  _unboundAnchors_5__2;

/// @brief Field <loadedAnchors>5__3, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*  _loadedAnchors_5__3;

/// @brief Field <>7__wrap3, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>  __7__wrap3;

/// @brief Field <i>5__5, offset: 0x70, size: 0x4, def value: None
 int32_t  _i_5__5;

/// @brief Field <unboundAnchor>5__6, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor  _unboundAnchor_5__6;

/// @brief Field <>u__1, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<bool>  __u__1;

/// @brief Size padding 0x98 - 0xa0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, result) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __4__this) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, prefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _unboundAnchors_5__2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _loadedAnchors_5__3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __7__wrap3) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _i_5__5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, _unboundAnchor_5__6) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19, __u__1) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
