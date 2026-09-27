#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__CloseAsyncPrivate_d__68.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__WebSocketCloseStatus_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket__CloseAsyncPrivate_d__68)
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
struct ManagedWebSocket__CloseAsyncPrivate_d__68;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, "System.Net.WebSockets", "ManagedWebSocket/<CloseAsyncPrivate>d__68");
// [CompilerGenerated]
// Dependencies System.Net.WebSockets.WebSocketCloseStatus, System.Runtime.CompilerServices.AsyncTaskMethodBuilder, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Threading.CancellationToken
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/<CloseAsyncPrivate>d__68
struct CORDL_TYPE ManagedWebSocket__CloseAsyncPrivate_d__68 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0xaceb530, size 0x6cc, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0xacebbfc, size 0x68, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket__CloseAsyncPrivate_d__68() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "closeStatus", ty: "::System::Net::WebSockets::WebSocketCloseStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "statusDescription", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "_closeBuffer_5__2", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket__CloseAsyncPrivate_d__68(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, ::System::Net::WebSockets::WebSocketCloseStatus  closeStatus, ::StringW  statusDescription, ::System::Threading::CancellationToken  cancellationToken, ::ArrayW<uint8_t>  _closeBuffer_5__2, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10898};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
 ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder  __t__builder;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::System::Net::WebSockets::ManagedWebSocket*  __4__this;

/// @brief Field closeStatus, offset: 0x28, size: 0x4, def value: None
 ::System::Net::WebSockets::WebSocketCloseStatus  closeStatus;

/// @brief Field statusDescription, offset: 0x30, size: 0x8, def value: None
 ::StringW  statusDescription;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <closeBuffer>5__2, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint8_t>  _closeBuffer_5__2;

/// @brief Field <>u__1, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, closeStatus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, statusDescription) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, _closeBuffer_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68, __u__1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ManagedWebSocket__CloseAsyncPrivate_d__68) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
