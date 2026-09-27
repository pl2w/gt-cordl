#pragma once
// IWYU pragma private; include "Mono/Net/Security/MonoTlsStream__CreateStream_d__18.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoTlsStream__CreateStream_d__18)
namespace Mono::Net::Security {
class MonoTlsStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net::Sockets {
class Socket;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct MonoTlsStream__CreateStream_d__18;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonoTlsStream__CreateStream_d__18);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, "Mono.Net.Security", "MonoTlsStream/<CreateStream>d__18");
// [CompilerGenerated]
// Dependencies System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Net.Security.MonoTlsStream/<CreateStream>d__18
struct CORDL_TYPE MonoTlsStream__CreateStream_d__18 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xa8dc3a4, size 0x7a0, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xa8dcb44, size 0x7c, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr MonoTlsStream__CreateStream_d__18() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::Mono::Net::Security::MonoTlsStream*", modifiers: "", def_value: None, comment: None }, CppParam { name: "tunnel", ty: "::System::Net::WebConnectionTunnel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_socket_5__2", ty: "::System::Net::Sockets::Socket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr MonoTlsStream__CreateStream_d__18(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder, ::Mono::Net::Security::MonoTlsStream*  __4__this, ::System::Net::WebConnectionTunnel*  tunnel, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::Sockets::Socket*  _socket_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9895};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::IO::Stream*>  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Mono::Net::Security::MonoTlsStream*  __4__this;

/// @brief Field tunnel, offset: 0x28, size: 0x8, def value: None
 ::System::Net::WebConnectionTunnel*  tunnel;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <socket>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Net::Sockets::Socket*  _socket_5__2;

/// @brief Field <>u__1, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, tunnel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, cancellationToken) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, _socket_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18, __u__1) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonoTlsStream__CreateStream_d__18) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
