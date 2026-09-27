#pragma once
// IWYU pragma private; include "System/IO/StreamWriter__WriteAsyncInternal_d__62.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__ReadOnlyMemory_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter__WriteAsyncInternal_d__62)
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamWriter__WriteAsyncInternal_d__62;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, "System.IO", "StreamWriter/<WriteAsyncInternal>d__62");
// [CompilerGenerated]
// Dependencies System.ReadOnlyMemory`1<T>, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.StreamWriter/<WriteAsyncInternal>d__62
struct CORDL_TYPE StreamWriter__WriteAsyncInternal_d__62 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa290a28, size 0x67c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa2910a4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter__WriteAsyncInternal_d__62() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "charLen", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "source", ty: "::System::ReadOnlyMemory_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "appendNewLine", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "coreNewLine", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "autoFlush", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_copied_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StreamWriter__WriteAsyncInternal_d__62(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  charPos, int32_t  charLen, ::System::IO::StreamWriter*  _this, ::ArrayW<char16_t>  charBuffer, ::System::Threading::CancellationToken  cancellationToken, ::System::ReadOnlyMemory_1<char16_t>  source, bool  appendNewLine, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, int32_t  _copied_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, int32_t  _i_5__3) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7010};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field charPos, offset: 0x20, size: 0x4, def value: None
 int32_t  charPos;

/// @brief Field charLen, offset: 0x24, size: 0x4, def value: None
 int32_t  charLen;

/// @brief Field _this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _this;

/// @brief Field charBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<char16_t>  charBuffer;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field source, offset: 0x40, size: 0x10, def value: None
 ::System::ReadOnlyMemory_1<char16_t>  source;

/// @brief Field appendNewLine, offset: 0x50, size: 0x1, def value: None
 bool  appendNewLine;

/// @brief Field coreNewLine, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<char16_t>  coreNewLine;

/// @brief Field autoFlush, offset: 0x60, size: 0x1, def value: None
 bool  autoFlush;

/// @brief Field <copied>5__2, offset: 0x64, size: 0x4, def value: None
 int32_t  _copied_5__2;

/// @brief Field <>u__1, offset: 0x68, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <i>5__3, offset: 0x78, size: 0x4, def value: None
 int32_t  _i_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, charPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, charLen) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, _this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, charBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, source) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, appendNewLine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, coreNewLine) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, autoFlush) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, _copied_5__2) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, __u__1) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62, _i_5__3) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
