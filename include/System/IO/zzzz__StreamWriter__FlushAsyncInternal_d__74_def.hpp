#pragma once
// IWYU pragma private; include "System/IO/StreamWriter__FlushAsyncInternal_d__74.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter__FlushAsyncInternal_d__74)
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamWriter__FlushAsyncInternal_d__74;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, "System.IO", "StreamWriter/<FlushAsyncInternal>d__74");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.StreamWriter/<FlushAsyncInternal>d__74
struct CORDL_TYPE StreamWriter__FlushAsyncInternal_d__74 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa29110c, size 0x5d8, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa2916e4, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter__FlushAsyncInternal_d__74() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "haveWrittenPreamble", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_this", ty: "::System::IO::StreamWriter*", modifiers: "", def_value: None, comment: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: None, comment: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "encoder", ty: "::System::Text::Encoder*", modifiers: "", def_value: None, comment: None }, CppParam { name: "charBuffer", ty: "::ArrayW<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "byteBuffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "flushEncoder", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "flushStream", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr StreamWriter__FlushAsyncInternal_d__74(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, bool  haveWrittenPreamble, ::System::IO::StreamWriter*  _this, ::System::Text::Encoding*  encoding, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken, ::System::Text::Encoder*  encoder, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, ::ArrayW<uint8_t>  byteBuffer, bool  flushEncoder, bool  flushStream, ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7011};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field haveWrittenPreamble, offset: 0x20, size: 0x1, def value: None
 bool  haveWrittenPreamble;

/// @brief Field _this, offset: 0x28, size: 0x8, def value: None
 ::System::IO::StreamWriter*  _this;

/// @brief Field encoding, offset: 0x30, size: 0x8, def value: None
 ::System::Text::Encoding*  encoding;

/// @brief Field stream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  stream;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field encoder, offset: 0x48, size: 0x8, def value: None
 ::System::Text::Encoder*  encoder;

/// @brief Field charBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<char16_t>  charBuffer;

/// @brief Field charPos, offset: 0x58, size: 0x4, def value: None
 int32_t  charPos;

/// @brief Field byteBuffer, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<uint8_t>  byteBuffer;

/// @brief Field flushEncoder, offset: 0x68, size: 0x1, def value: None
 bool  flushEncoder;

/// @brief Field flushStream, offset: 0x69, size: 0x1, def value: None
 bool  flushStream;

/// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_ConfiguredValueTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, haveWrittenPreamble) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, _this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, encoding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, stream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, encoder) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, charBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, charPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, byteBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, flushEncoder) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, flushStream) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74, __u__2) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
