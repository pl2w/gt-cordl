#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15)
namespace Meta::XR::BuildingBlocks {
class SharedSpatialAnchorCore;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, "Meta.XR.BuildingBlocks", "SharedSpatialAnchorCore/<InstantiateSpatialAnchor>d__15");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.BuildingBlocks.SharedSpatialAnchorCore/<InstantiateSpatialAnchor>d__15
struct CORDL_TYPE SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec62ac, size 0x308, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ec65b4, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::UnityEngine::GameObject>  prefab, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31452};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field prefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  prefab;

/// @brief Field position, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  position;

/// @brief Field rotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field <>4__this, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>  __4__this;

/// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, prefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, position) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, rotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __4__this) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15, __u__1) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
