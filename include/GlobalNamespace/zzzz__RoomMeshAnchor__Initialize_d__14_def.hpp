#pragma once
// IWYU pragma private; include "GlobalNamespace/RoomMeshAnchor__Initialize_d__14.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_def.hpp"
#include "GlobalNamespace/zzzz__OVRTriangleMesh_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RoomMeshAnchor__Initialize_d__14)
namespace GlobalNamespace {
class RoomMeshAnchor;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct RoomMeshAnchor__Initialize_d__14;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, "", "RoomMeshAnchor/<Initialize>d__14");
// [CompilerGenerated]
// Dependencies OVRAnchor, OVRSemanticLabels, OVRTriangleMesh, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter`1<TResult>
namespace GlobalNamespace {
// Is value type: true
// CS Name: RoomMeshAnchor/<Initialize>d__14
struct CORDL_TYPE RoomMeshAnchor__Initialize_d__14 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ec11a4, size 0x570, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ec1714, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr RoomMeshAnchor__Initialize_d__14() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::RoomMeshAnchor>", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchor", ty: "::GlobalNamespace::OVRAnchor", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh>", modifiers: "", def_value: None, comment: None }]
constexpr RoomMeshAnchor__Initialize_d__14(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::GlobalNamespace::RoomMeshAnchor>  __4__this, ::GlobalNamespace::OVRAnchor  anchor, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31431};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RoomMeshAnchor>  __4__this;

/// @brief Field anchor, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::OVRAnchor  anchor;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRSemanticLabels>  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::OVRTriangleMesh>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, anchor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RoomMeshAnchor__Initialize_d__14) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
