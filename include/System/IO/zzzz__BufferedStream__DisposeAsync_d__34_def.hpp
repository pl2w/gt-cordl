#pragma once
// IWYU pragma private; include "System/IO/BufferedStream__DisposeAsync_d__34.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferedStream__DisposeAsync_d__34)
namespace System::IO {
class BufferedStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct BufferedStream__DisposeAsync_d__34;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BufferedStream__DisposeAsync_d__34);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, "System.IO", "BufferedStream/<DisposeAsync>d__34");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.BufferedStream/<DisposeAsync>d__34
struct CORDL_TYPE BufferedStream__DisposeAsync_d__34 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa29fa3c, size 0x544, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa29ffec, size 0xc, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr BufferedStream__DisposeAsync_d__34() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::BufferedStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap1", ty: "::System::Object*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__7__wrap2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr BufferedStream__DisposeAsync_d__34(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder, ::System::IO::BufferedStream*  __4__this, ::System::Object*  __7__wrap1, int32_t  __7__wrap2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7036};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::BufferedStream*  __4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  __7__wrap1;

/// @brief Field <>7__wrap2, offset: 0x38, size: 0x4, def value: None
 int32_t  __7__wrap2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __7__wrap1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __7__wrap2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __u__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BufferedStream__DisposeAsync_d__34) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
