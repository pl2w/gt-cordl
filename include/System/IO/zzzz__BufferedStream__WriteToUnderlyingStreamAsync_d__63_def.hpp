#pragma once
// IWYU pragma private; include "System/IO/BufferedStream__WriteToUnderlyingStreamAsync_d__63.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStream__WriteToUnderlyingStreamAsync_d__63)
namespace System::IO {
class BufferedStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
struct BufferedStream__WriteToUnderlyingStreamAsync_d__63;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, "System.IO", "BufferedStream/<WriteToUnderlyingStreamAsync>d__63");
// [CompilerGenerated]
// Dependencies System.ReadOnlyMemory`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.BufferedStream/<WriteToUnderlyingStreamAsync>d__63
struct CORDL_TYPE BufferedStream__WriteToUnderlyingStreamAsync_d__63 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa2a1548, size 0xca4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa2a21ec, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BufferedStream__WriteToUnderlyingStreamAsync_d__63() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::System::ReadOnlyMemory_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BufferedStream__WriteToUnderlyingStreamAsync_d__63(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Threading::Tasks::Task*  semaphoreLockTask, ::System::IO::BufferedStream*  __4__this, ::System::ReadOnlyMemory_1<uint8_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field semaphoreLockTask, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  semaphoreLockTask;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::BufferedStream*  __4__this;

/// @brief Field buffer, offset: 0x30, size: 0x10, def value: None
 ::System::ReadOnlyMemory_1<uint8_t>  buffer;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x58, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, semaphoreLockTask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63, __u__2) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BufferedStream__WriteToUnderlyingStreamAsync_d__63) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
