#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager__CreateAnchor_d__20.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_OperationResult_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedAnchorManager__CreateAnchor_d__20)
namespace GlobalNamespace {
class OVRSpatialAnchor;
}
namespace Meta::XR::MultiplayerBlocks::Colocation {
class SharedAnchorManager;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct SharedAnchorManager__CreateAnchor_d__20;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, "Meta.XR.MultiplayerBlocks.Colocation", "SharedAnchorManager/<CreateAnchor>d__20");
// [CompilerGenerated]
// Dependencies OVRSpatialAnchor::OperationResult, System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>, System.ValueTuple`2<T1, T2>, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MultiplayerBlocks.Colocation.SharedAnchorManager/<CreateAnchor>d__20
struct CORDL_TYPE SharedAnchorManager__CreateAnchor_d__20 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9f78aac, size 0x4cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9f78f78, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SharedAnchorManager__CreateAnchor_d__20() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "", def_value: None, comment: None }]
constexpr SharedAnchorManager__CreateAnchor_d__20(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  orientation, ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30689};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*  __4__this;

/// @brief Field position, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field orientation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  orientation;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, position) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, orientation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedAnchorManager__CreateAnchor_d__20) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
