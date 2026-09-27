#pragma once
// IWYU pragma private; include "System/IO/BufferedStream__ReadFromUnderlyingStreamAsync_d__51.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStream__ReadFromUnderlyingStreamAsync_d__51)
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
struct BufferedStream__ReadFromUnderlyingStreamAsync_d__51;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, "System.IO", "BufferedStream/<ReadFromUnderlyingStreamAsync>d__51");
// [CompilerGenerated]
// Dependencies System.Memory`1<T>, System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.BufferedStream/<ReadFromUnderlyingStreamAsync>d__51
struct CORDL_TYPE BufferedStream__ReadFromUnderlyingStreamAsync_d__51 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa2a0b48, size 0x9a8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa2a14f0, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BufferedStream__ReadFromUnderlyingStreamAsync_d__51() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "semaphoreLockTask", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bytesAlreadySatisfied", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr BufferedStream__ReadFromUnderlyingStreamAsync_d__51(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::Tasks::Task*  semaphoreLockTask, ::System::IO::BufferedStream*  __4__this, ::System::Memory_1<uint8_t>  buffer, int32_t  bytesAlreadySatisfied, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, int32_t  __7__wrap1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7039};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field semaphoreLockTask, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  semaphoreLockTask;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::System::IO::BufferedStream*  __4__this;

/// @brief Field buffer, offset: 0x40, size: 0x10, def value: None
 ::System::Memory_1<uint8_t>  buffer;

/// @brief Field bytesAlreadySatisfied, offset: 0x50, size: 0x4, def value: None
 int32_t  bytesAlreadySatisfied;

/// @brief Field cancellationToken, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>7__wrap1, offset: 0x70, size: 0x4, def value: None
 int32_t  __7__wrap1;

/// @brief Field <>u__2, offset: 0x78, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2;

/// @brief Size padding 0x80 - 0x90 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, semaphoreLockTask) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, __4__this) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, buffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, bytesAlreadySatisfied) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, cancellationToken) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, __u__1) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, __7__wrap1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51, __u__2) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BufferedStream__ReadFromUnderlyingStreamAsync_d__51) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
