#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRObjectPool_ListScope_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_UnboundAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask`1_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18)
namespace GlobalNamespace {
struct OVRSpatialAnchor_UnboundAnchor;
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
struct SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore/<LoadAndInstantiateAnchorsFromGroup>d__18");
// [CompilerGenerated]
// Dependencies OVRObjectPool::ListScope`1<T>, OVRResult`2<TValue, TStatus>, OVRSpatialAnchor::OperationResult, OVRSpatialAnchor::UnboundAnchor, OVRTask`1::Awaiter<TResult>, System.Guid, System.Runtime.CompilerServices.AsyncVoidMethodBuilder
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<LoadAndInstantiateAnchorsFromGroup>d__18
struct CORDL_TYPE SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec6a3c, size 0x3dc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ec6e18, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "", def_value: None, comment: None }]
constexpr SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::System::Guid  groupUuid, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this, ::UnityW<::UnityEngine::GameObject>  prefab, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31454};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field groupUuid, offset: 0x28, size: 0x10, def value: None
 ::System::Guid  groupUuid;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this;

/// @brief Field prefab, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field <unboundAnchorsPoolHandle>5__2, offset: 0x48, size: 0x8, def value: None
 ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>  _unboundAnchorsPoolHandle_5__2;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, groupUuid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, prefab) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, _unboundAnchorsPoolHandle_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18, __u__1) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
