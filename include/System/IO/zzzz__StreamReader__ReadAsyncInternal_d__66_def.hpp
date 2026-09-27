#pragma once
// IWYU pragma private; include "System/IO/StreamReader__ReadAsyncInternal_d__66.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader__ReadAsyncInternal_d__66)
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct StreamReader__ReadAsyncInternal_d__66;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, "System.IO", "StreamReader/<ReadAsyncInternal>d__66");
// [CompilerGenerated]
// Dependencies System.Memory`1<T>, System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.IO.StreamReader/<ReadAsyncInternal>d__66
struct CORDL_TYPE StreamReader__ReadAsyncInternal_d__66 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa28a600, size 0xc6c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa28b26c, size 0x58, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr StreamReader__ReadAsyncInternal_d__66() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::IO::StreamReader*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::System::Memory_1<char16_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_charsRead_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_readToUserBuffer_5__3", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tmpByteBuffer_5__4", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tmpStream_5__5", ty: "::System::IO::Stream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "_count_5__6", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_n_5__7", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr StreamReader__ReadAsyncInternal_d__66(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder, ::System::IO::StreamReader*  __4__this, ::System::Memory_1<char16_t>  buffer, ::System::Threading::CancellationToken  cancellationToken, int32_t  _charsRead_5__2, bool  _readToUserBuffer_5__3, ::ArrayW<uint8_t>  _tmpByteBuffer_5__4, ::System::IO::Stream*  _tmpStream_5__5, int32_t  _count_5__6, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1, int32_t  _n_5__7, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7004};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x90};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::System::IO::StreamReader*  __4__this;

/// @brief Field buffer, offset: 0x38, size: 0x10, def value: None
 ::System::Memory_1<char16_t>  buffer;

/// @brief Field cancellationToken, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <charsRead>5__2, offset: 0x50, size: 0x4, def value: None
 int32_t  _charsRead_5__2;

/// @brief Field <readToUserBuffer>5__3, offset: 0x54, size: 0x1, def value: None
 bool  _readToUserBuffer_5__3;

/// @brief Field <tmpByteBuffer>5__4, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _tmpByteBuffer_5__4;

/// @brief Field <tmpStream>5__5, offset: 0x60, size: 0x8, def value: None
 ::System::IO::Stream*  _tmpStream_5__5;

/// @brief Field <count>5__6, offset: 0x68, size: 0x4, def value: None
 int32_t  _count_5__6;

/// @brief Field <>u__1, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

/// @brief Field <n>5__7, offset: 0x80, size: 0x4, def value: None
 int32_t  _n_5__7;

/// @brief Field <>u__2, offset: 0x88, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2;

/// @brief Size padding 0x90 - 0xa0 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, __4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, cancellationToken) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, _charsRead_5__2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, _readToUserBuffer_5__3) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, _tmpByteBuffer_5__4) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, _tmpStream_5__5) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, _count_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, __u__1) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, _n_5__7) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66, __u__2) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
