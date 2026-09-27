#pragma once
// IWYU pragma private; include "System/Security/Cryptography/CryptoStream__WriteAsyncInternal_d__46.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Threading/Tasks/zzzz__ForceAsyncAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoStream__WriteAsyncInternal_d__46)
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Security::Cryptography {
class CryptoStream;
}
namespace System::Threading {
class SemaphoreSlim;
}
// Forward declare root types
namespace GlobalNamespace {
struct CryptoStream__WriteAsyncInternal_d__46;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, "System.Security.Cryptography", "CryptoStream/<WriteAsyncInternal>d__46");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.TaskAwaiter, System.Threading.CancellationToken, System.Threading.Tasks.ForceAsyncAwaiter
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Security.Cryptography.CryptoStream/<WriteAsyncInternal>d__46
struct CORDL_TYPE CryptoStream__WriteAsyncInternal_d__46 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa15ebec, size 0x44c, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa15f038, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr CryptoStream__WriteAsyncInternal_d__46() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Security::Cryptography::CryptoStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "buffer", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_semaphore_5__2", ty: "::System::Threading::SemaphoreSlim*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::System::Threading::Tasks::ForceAsyncAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr CryptoStream__WriteAsyncInternal_d__46(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Security::Cryptography::CryptoStream*  __4__this, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken, ::System::Threading::SemaphoreSlim*  _semaphore_5__2, ::System::Threading::Tasks::ForceAsyncAwaiter  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6056};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Security::Cryptography::CryptoStream*  __4__this;

/// @brief Field buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  buffer;

/// @brief Field offset, offset: 0x30, size: 0x4, def value: None
 int32_t  offset;

/// @brief Field count, offset: 0x34, size: 0x4, def value: None
 int32_t  count;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <semaphore>5__2, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim*  _semaphore_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::Tasks::ForceAsyncAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::CompilerServices::TaskAwaiter  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, offset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, count) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, _semaphore_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, __u__1) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46, __u__2) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CryptoStream__WriteAsyncInternal_d__46) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
