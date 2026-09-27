#pragma once
// IWYU pragma private; include "System/Net/MonoChunkStream__ProcessReadAsync_d__7.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable`1_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoChunkStream__ProcessReadAsync_d__7)
namespace System::Net {
class MonoChunkStream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MonoChunkStream__ProcessReadAsync_d__7;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, "System.Net", "MonoChunkStream/<ProcessReadAsync>d__7");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable`1::ConfiguredTaskAwaiter<TResult>, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.MonoChunkStream/<ProcessReadAsync>d__7
struct CORDL_TYPE MonoChunkStream__ProcessReadAsync_d__7 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xacabc2c, size 0x45c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacac088, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MonoChunkStream__ProcessReadAsync_d__7() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::MonoChunkStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_moreBytes_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr MonoChunkStream__ProcessReadAsync_d__7(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::MonoChunkStream*  __4__this, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::ArrayW<uint8_t>  _moreBytes_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<int32_t>  __t__builder;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Net::MonoChunkStream*  __4__this;

/// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field offset, offset: 0x38, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field size, offset: 0x3c, size: 0x4, def value: None
 int32_t  size;

/// @brief Field <moreBytes>5__2, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _moreBytes_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<int32_t>  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, offset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, size) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, _moreBytes_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonoChunkStream__ProcessReadAsync_d__7) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
