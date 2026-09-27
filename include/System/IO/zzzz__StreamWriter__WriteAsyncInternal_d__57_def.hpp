#pragma once
// IWYU pragma private; include "System/IO/StreamWriter__WriteAsyncInternal_d__57.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter__WriteAsyncInternal_d__57)
namespace System::IO {
class StreamWriter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamWriter__WriteAsyncInternal_d__57;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, "System.IO", "StreamWriter/<WriteAsyncInternal>d__57");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.StreamWriter/<WriteAsyncInternal>d__57
struct CORDL_TYPE StreamWriter__WriteAsyncInternal_d__57 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa28ff68, size 0x4d0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa290438, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter__WriteAsyncInternal_d__57() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "charLen", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "char16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "appendNewLine", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "coreNewLine", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "autoFlush", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_i_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StreamWriter__WriteAsyncInternal_d__57(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  charPos, int32_t  charLen, ::System::IO::StreamWriter*  _this, ::ArrayW<char16_t>  charBuffer, char16_t  value, bool  appendNewLine, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, int32_t  _i_5__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7008};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

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

/// @brief Field value, offset: 0x38, size: 0x2, def value: None
 char16_t  value;

/// @brief Field appendNewLine, offset: 0x3a, size: 0x1, def value: None
 bool  appendNewLine;

/// @brief Field coreNewLine, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<char16_t>  coreNewLine;

/// @brief Field autoFlush, offset: 0x48, size: 0x1, def value: None
 bool  autoFlush;

/// @brief Field <>u__1, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <i>5__2, offset: 0x60, size: 0x4, def value: None
 int32_t  _i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, charPos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, charLen) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, _this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, charBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, appendNewLine) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, coreNewLine) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, autoFlush) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, __u__1) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57, _i_5__2) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
