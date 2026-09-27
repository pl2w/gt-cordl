#pragma once
// IWYU pragma private; include "Modio/Customizations/WssHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WssHandler)
namespace GlobalNamespace {
struct WssHandler__Disconnected_d__15;
}
namespace GlobalNamespace {
template<typename T>
struct WssHandler__DoMessageHandshake_d__7_1;
}
namespace GlobalNamespace {
struct WssHandler__EnsureConnection_d__11;
}
namespace GlobalNamespace {
struct WssHandler__Send_d__12;
}
namespace GlobalNamespace {
struct WssHandler__Shutdown_d__10;
}
namespace GlobalNamespace {
struct WssHandler__WaitForMessage_d__6;
}
namespace Modio::Customizations {
class ISocketConnection;
}
namespace Modio::Customizations {
struct WssMessage;
}
namespace Modio::Customizations {
struct WssMessages;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Customizations {
class WssHandler;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::WssHandler*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::WssHandler*, "Modio.Customizations", "WssHandler");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.WssHandler
class CORDL_TYPE WssHandler : public ::System::Object {
public:
// Declarations
using _Disconnected_d__15 = ::GlobalNamespace::WssHandler__Disconnected_d__15;

template<typename T>
using _DoMessageHandshake_d__7_1 = ::GlobalNamespace::WssHandler__DoMessageHandshake_d__7_1<T>;

using _EnsureConnection_d__11 = ::GlobalNamespace::WssHandler__EnsureConnection_d__11;

using _Send_d__12 = ::GlobalNamespace::WssHandler__Send_d__12;

using _Shutdown_d__10 = ::GlobalNamespace::WssHandler__Shutdown_d__10;

using _WaitForMessage_d__6 = ::GlobalNamespace::WssHandler__WaitForMessage_d__6;

/// @brief Field Socket, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Socket, put=setStaticF_Socket)) ::Modio::Customizations::ISocketConnection*  Socket;

/// @brief Field SubscribedMessageListeners, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SubscribedMessageListeners, put=setStaticF_SubscribedMessageListeners)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>*  SubscribedMessageListeners;

/// @brief Field UnhandledMessages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnhandledMessages, put=setStaticF_UnhandledMessages)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>*  UnhandledMessages;

/// @brief Field WaitingForMessages, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WaitingForMessages, put=setStaticF_WaitingForMessages)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>*  WaitingForMessages;

/// @brief Method CancelAllAwaitingMessages, addr 0xa05bb50, size 0x1f0, virtual false, abstract: false, final false
static inline void CancelAllAwaitingMessages() ;

/// @brief Method CancelWaitingFor, addr 0xa05ab6c, size 0x134, virtual false, abstract: false, final false
static inline void CancelWaitingFor(::StringW  messageOperation) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.WssHandler::<Disconnected>d__15))]
/// @brief Method Disconnected, addr 0xa05c7d0, size 0x90, virtual false, abstract: false, final false
static inline void Disconnected() ;

/// [AsyncStateMachine(typeof(Modio.Customizations.WssHandler::<DoMessageHandshake>d__7`1<T>))]
/// @brief Method DoMessageHandshake, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,T>>* DoMessageHandshake(::Modio::Customizations::WssMessage  message) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.WssHandler::<EnsureConnection>d__11))]
/// @brief Method EnsureConnection, addr 0xa05bd40, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* EnsureConnection() ;

/// @brief Method ProcessErrorObject, addr 0xa05c28c, size 0x544, virtual false, abstract: false, final false
static inline void ProcessErrorObject(::Modio::Customizations::WssMessage  message) ;

/// @brief Method Receive, addr 0xa05bf38, size 0x354, virtual false, abstract: false, final false
static inline void Receive(::Modio::Customizations::WssMessages  messages) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.WssHandler::<Send>d__12))]
/// @brief Method Send, addr 0xa05be2c, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Send(::Modio::Customizations::WssMessage  message) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.WssHandler::<Shutdown>d__10))]
/// @brief Method Shutdown, addr 0xa05b8f4, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* Shutdown() ;

/// [AsyncStateMachine(typeof(Modio.Customizations.WssHandler::<WaitForMessage>d__6))]
/// @brief Method WaitForMessage, addr 0xa05b7dc, size 0x118, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::WssMessage>>* WaitForMessage(::StringW  messageOperation, bool  checkPreviousUnhandledMessages) ;

static inline ::Modio::Customizations::ISocketConnection* getStaticF_Socket() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>* getStaticF_SubscribedMessageListeners() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>* getStaticF_UnhandledMessages() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>* getStaticF_WaitingForMessages() ;

/// @brief Method get_GatewayUrl, addr 0xa05ba34, size 0x11c, virtual false, abstract: false, final false
static inline ::StringW get_GatewayUrl() ;

static inline void setStaticF_Socket(::Modio::Customizations::ISocketConnection*  value) ;

static inline void setStaticF_SubscribedMessageListeners(::System::Collections::Generic::Dictionary_2<::StringW,::System::Action_1<::Modio::Customizations::WssMessage>*>*  value) ;

static inline void setStaticF_UnhandledMessages(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Customizations::WssMessage>*  value) ;

static inline void setStaticF_WaitingForMessages(::System::Collections::Generic::Dictionary_2<::StringW,::System::Threading::Tasks::TaskCompletionSource_1<::Modio::Customizations::WssMessage>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WssHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WssHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WssHandler(WssHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WssHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WssHandler(WssHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17740};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Customizations::WssHandler) == 0x10, "Size mismatch!");

} // namespace end def Modio::Customizations
