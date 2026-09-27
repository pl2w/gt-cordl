#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Utils/AssemblyParser__LoadAssembliesMainThread_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyParser__LoadAssembliesMainThread_d__18)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AssemblyParser__LoadAssembliesMainThread_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18, "Meta.XR.ImmersiveDebugger.Utils", "AssemblyParser/<LoadAssembliesMainThread>d__18");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.Utils.AssemblyParser/<LoadAssembliesMainThread>d__18
struct CORDL_TYPE AssemblyParser__LoadAssembliesMainThread_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x9ed46c8, size 0x3ac, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x9ed4a74, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AssemblyParser__LoadAssembliesMainThread_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "ignorePrebakedAsset", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr AssemblyParser__LoadAssembliesMainThread_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  ignorePrebakedAsset, ::System::Runtime::CompilerServices::TaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27408};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field ignorePrebakedAsset, offset: 0x20, size: 0x1, def value: None
 bool  ignorePrebakedAsset;

/// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18, ignorePrebakedAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18, __u__1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssemblyParser__LoadAssembliesMainThread_d__18) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
