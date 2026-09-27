#pragma once
// IWYU pragma private; include "System/Net/WebSockets/ManagedWebSocket__ReceiveAsyncPrivate_d__61_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/WebSockets/zzzz__ManagedWebSocket_MessageHeader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncValueTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_ConfiguredTaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredValueTaskAwaitable`1_ConfiguredValueTaskAwaiter_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Memory_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ManagedWebSocket__ReceiveAsyncPrivate_d__61_2)
namespace System::Net::WebSockets {
class ManagedWebSocket;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
struct ManagedWebSocket__ReceiveAsyncPrivate_d__61_2;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::ManagedWebSocket__ReceiveAsyncPrivate_d__61_2, "System.Net.WebSockets", "ManagedWebSocket/<ReceiveAsyncPrivate>d__61`2");
// [CompilerGenerated]
// Dependencies System.Memory`1<T>, System.Net.WebSockets.ManagedWebSocket::MessageHeader, System.Runtime.CompilerServices.AsyncValueTaskMethodBuilder`1<TResult>, System.Runtime.CompilerServices.ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable`1::ConfiguredValueTaskAwaiter<TResult>, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace GlobalNamespace {
// cpp template
template<typename TWebSocketReceiveResultGetter,typename TWebSocketReceiveResult>
// Is value type: true
// CS Name: System.Net.WebSockets.ManagedWebSocket/<ReceiveAsyncPrivate>d__61`2<TWebSocketReceiveResultGetter,TWebSocketReceiveResult>
struct CORDL_TYPE ManagedWebSocket__ReceiveAsyncPrivate_d__61_2 {
public:
// Declarations
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void MoveNext() ;

/// [DebuggerHidden]
/// @brief Method SetStateMachine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine() ;

// Ctor Parameters []
// @brief default ctor
constexpr ManagedWebSocket__ReceiveAsyncPrivate_d__61_2() ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>", modifiers: "", def_value: None, comment: None }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::System::Net::WebSockets::ManagedWebSocket*", modifiers: "", def_value: None, comment: None }, CppParam { name: "resultGetter", ty: "TWebSocketReceiveResultGetter", modifiers: "", def_value: None, comment: None }, CppParam { name: "payloadBuffer", ty: "::System::Memory_1<uint8_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_registration_5__2", ty: "::System::Threading::CancellationTokenRegistration", modifiers: "", def_value: None, comment: None }, CppParam { name: "_header_5__3", ty: "::GlobalNamespace::ManagedWebSocket_MessageHeader", modifiers: "", def_value: None, comment: None }, CppParam { name: "_totalBytesReceived_5__4", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__1", ty: "::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter", modifiers: "", def_value: None, comment: None }, CppParam { name: "__u__2", ty: "::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr ManagedWebSocket__ReceiveAsyncPrivate_d__61_2(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>  __t__builder, ::System::Threading::CancellationToken  cancellationToken, ::System::Net::WebSockets::ManagedWebSocket*  __4__this, TWebSocketReceiveResultGetter  resultGetter, ::System::Memory_1<uint8_t>  payloadBuffer, ::System::Threading::CancellationTokenRegistration  _registration_5__2, ::GlobalNamespace::ManagedWebSocket_MessageHeader  _header_5__3, int32_t  _totalBytesReceived_5__4, ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1, ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10893};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb8};

/// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
 int32_t  __1__state;

/// @brief Field <>t__builder, offset: 0x8, size: 0x28, def value: None
 ::System::Runtime::CompilerServices::AsyncValueTaskMethodBuilder_1<TWebSocketReceiveResult>  __t__builder;

/// @brief Field cancellationToken, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field <>4__this, offset: 0x38, size: 0x8, def value: None
 ::System::Net::WebSockets::ManagedWebSocket*  __4__this;

/// @brief Field resultGetter, offset: 0x40, size: 0x8, def value: None
 TWebSocketReceiveResultGetter  resultGetter;

/// @brief Field payloadBuffer, offset: 0x48, size: 0x10, def value: None
 ::System::Memory_1<uint8_t>  payloadBuffer;

/// @brief Field <registration>5__2, offset: 0x58, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  _registration_5__2;

/// @brief Field <header>5__3, offset: 0x70, size: 0x18, def value: None
 ::GlobalNamespace::ManagedWebSocket_MessageHeader  _header_5__3;

/// @brief Field <totalBytesReceived>5__4, offset: 0x88, size: 0x4, def value: None
 int32_t  _totalBytesReceived_5__4;

/// @brief Field <>u__1, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter  __u__1;

/// @brief Field <>u__2, offset: 0xa0, size: 0x18, def value: None
 ::GlobalNamespace::ConfiguredValueTaskAwaitable_1_ConfiguredValueTaskAwaiter<int32_t>  __u__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
