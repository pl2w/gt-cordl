#pragma once
// IWYU pragma private; include "FastSurfaceNets/SurfaceNetsChunk__BuildChunk_d__13.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_Awaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Voxels/zzzz__SurfaceNetsBuffer_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SurfaceNetsChunk__BuildChunk_d__13)
namespace FastSurfaceNets {
class SurfaceNetsChunk;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct SurfaceNetsChunk__BuildChunk_d__13;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, "FastSurfaceNets", "SurfaceNetsChunk/<BuildChunk>d__13");
// [CompilerGenerated]
// Dependencies Cysharp.Threading.Tasks.YieldAwaitable::Awaiter, System.Runtime.CompilerServices.AsyncVoidMethodBuilder, Unity.Jobs.JobHandle, Voxels.SurfaceNetsBuffer
namespace GlobalNamespace {
// Is value type: true
// CS Name: FastSurfaceNets.SurfaceNetsChunk/<BuildChunk>d__13
struct CORDL_TYPE SurfaceNetsChunk__BuildChunk_d__13 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x5daa180, size 0xa88, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x5daac08, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr SurfaceNetsChunk__BuildChunk_d__13() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::FastSurfaceNets::SurfaceNetsChunk>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_buffer_5__2", ty: "::Voxels::SurfaceNetsBuffer", modifiers: "", def_value: None, comment: None }, CppParam { name: "_handle_5__3", ty: "::Unity::Jobs::JobHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::YieldAwaitable_Awaiter", modifiers: "", def_value: None, comment: None }]
constexpr SurfaceNetsChunk__BuildChunk_d__13(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  __4__this, ::Voxels::SurfaceNetsBuffer  _buffer_5__2, ::Unity::Jobs::JobHandle  _handle_5__3, ::GlobalNamespace::YieldAwaitable_Awaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4996};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x88};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::FastSurfaceNets::SurfaceNetsChunk>  __4__this;

/// @brief Field <buffer>5__2, offset: 0x30, size: 0x40, def value: None
 ::Voxels::SurfaceNetsBuffer  _buffer_5__2;

/// @brief Field <handle>5__3, offset: 0x70, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  _handle_5__3;

/// @brief Field <>u__1, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::YieldAwaitable_Awaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, _buffer_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, _handle_5__3) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13, __u__1) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SurfaceNetsChunk__BuildChunk_d__13) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
