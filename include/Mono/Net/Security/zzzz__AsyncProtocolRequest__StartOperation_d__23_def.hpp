#pragma once
// IWYU pragma private; include "Mono/Net/Security/AsyncProtocolRequest__StartOperation_d__23.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncProtocolRequest__StartOperation_d__23)
namespace Mono::Net::Security {
class AsyncProtocolRequest;
}
namespace Mono::Net::Security {
class AsyncProtocolResult;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct AsyncProtocolRequest__StartOperation_d__23;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23, "Mono.Net.Security", "AsyncProtocolRequest/<StartOperation>d__23");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Net.Security.AsyncProtocolRequest/<StartOperation>d__23
struct CORDL_TYPE AsyncProtocolRequest__StartOperation_d__23 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa8d4d10, size 0x3b4, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa8d5104, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr AsyncProtocolRequest__StartOperation_d__23() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::AsyncProtocolRequest*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr AsyncProtocolRequest__StartOperation_d__23(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>  __t__builder, ::Mono::Net::Security::AsyncProtocolRequest*  __4__this, ::System::Threading::CancellationToken  cancellationToken, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9871};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Mono::Net::Security::AsyncProtocolRequest*  __4__this;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23, cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23, __u__1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AsyncProtocolRequest__StartOperation_d__23) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
