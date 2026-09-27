#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStream__WriteAsyncCore_d__49.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoStream__WriteAsyncCore_d__49)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Security::Cryptography {
class CryptoStream;
}
// Forward declare root types
namespace GlobalNamespace {
struct CryptoStream__WriteAsyncCore_d__49;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, "System.Security.Cryptography", "CryptoStream/<WriteAsyncCore>d__49");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ValueTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Security.Cryptography.CryptoStream/<WriteAsyncCore>d__49
struct CORDL_TYPE CryptoStream__WriteAsyncCore_d__49 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa15f0a0, size 0xe40, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa15fee0, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CryptoStream__WriteAsyncCore_d__49() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "useAsync", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_bytesToWrite_5__2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentInputIndex_5__3", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numOutputBytes_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::ValueTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "_numWholeBlocksInBytes_5__5", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_tempOutputBuffer_5__6", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }]
constexpr CryptoStream__WriteAsyncCore_d__49(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, int32_t  count, int32_t  offset, ::System::Security::Cryptography::CryptoStream*  __4__this, ::ArrayW<uint8_t>  buffer, bool  useAsync, ::System::Threading::CancellationToken  cancellationToken, int32_t  _bytesToWrite_5__2, int32_t  _currentInputIndex_5__3, int32_t  _numOutputBytes_5__4, ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1, int32_t  _numWholeBlocksInBytes_5__5, ::ArrayW<uint8_t>  _tempOutputBuffer_5__6) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6057};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field count, offset: 0x20, size: 0x4, def value: None
 int32_t  count;

/// @brief Field offset, offset: 0x24, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::System::Security::Cryptography::CryptoStream*  __4__this;

/// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field useAsync, offset: 0x38, size: 0x1, def value: None
 bool  useAsync;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <bytesToWrite>5__2, offset: 0x48, size: 0x4, def value: None
 int32_t  _bytesToWrite_5__2;

/// @brief Field <currentInputIndex>5__3, offset: 0x4c, size: 0x4, def value: None
 int32_t  _currentInputIndex_5__3;

/// @brief Field <numOutputBytes>5__4, offset: 0x50, size: 0x4, def value: None
 int32_t  _numOutputBytes_5__4;

/// @brief Field <>u__1, offset: 0x58, size: 0x10, def value: None
 ::System::Runtime::CompilerServices::ValueTaskAwaiter  __u__1;

/// @brief Field <numWholeBlocksInBytes>5__5, offset: 0x68, size: 0x4, def value: None
 int32_t  _numWholeBlocksInBytes_5__5;

/// @brief Field <tempOutputBuffer>5__6, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _tempOutputBuffer_5__6;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, count) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, offset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, useAsync) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, cancellationToken) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, _bytesToWrite_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, _currentInputIndex_5__3) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, _numOutputBytes_5__4) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, __u__1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, _numWholeBlocksInBytes_5__5) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49, _tempOutputBuffer_5__6) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CryptoStream__WriteAsyncCore_d__49) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
