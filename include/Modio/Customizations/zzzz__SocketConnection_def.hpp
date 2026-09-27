#pragma once
// IWYU pragma private; include "Modio/Customizations/SocketConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SocketConnection)
namespace GlobalNamespace {
struct SocketConnection__CloseConnection_d__13;
}
namespace GlobalNamespace {
struct SocketConnection__ReceiveMessages_d__14;
}
namespace GlobalNamespace {
struct SocketConnection__SendData_d__15;
}
namespace GlobalNamespace {
struct SocketConnection__SetupConnection_d__12;
}
namespace Modio::Customizations {
class ISocketConnection;
}
namespace Modio::Customizations {
struct WssMessages;
}
namespace Modio {
class Error;
}
namespace System::Net::WebSockets {
class ClientWebSocket;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class Mutex;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Modio::Customizations {
class SocketConnection;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::SocketConnection*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::SocketConnection*, "Modio.Customizations", "SocketConnection");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.SocketConnection
class CORDL_TYPE SocketConnection : public ::System::Object {
public:
// Declarations
using _CloseConnection_d__13 = ::GlobalNamespace::SocketConnection__CloseConnection_d__13;

using _ReceiveMessages_d__14 = ::GlobalNamespace::SocketConnection__ReceiveMessages_d__14;

using _SendData_d__15 = ::GlobalNamespace::SocketConnection__SendData_d__15;

using _SetupConnection_d__12 = ::GlobalNamespace::SocketConnection__SetupConnection_d__12;

 __declspec(property(get=get_Disconnect, put=set_Disconnect)) ::System::Action*  Disconnect;

 __declspec(property(get=get_Receive, put=set_Receive)) ::System::Action_1<::Modio::Customizations::WssMessages>*  Receive;

/// @brief Field <Disconnect>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Disconnect_k__BackingField, put=__cordl_internal_set__Disconnect_k__BackingField)) ::System::Action*  _Disconnect_k__BackingField;

/// @brief Field <Receive>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Receive_k__BackingField, put=__cordl_internal_set__Receive_k__BackingField)) ::System::Action_1<::Modio::Customizations::WssMessages>*  _Receive_k__BackingField;

/// @brief Field _sending, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__sending, put=__cordl_internal_set__sending)) ::System::Threading::Mutex*  _sending;

/// @brief Field closingConnection, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_closingConnection, put=__cordl_internal_set_closingConnection)) bool  closingConnection;

/// @brief Field webSocket, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_webSocket, put=__cordl_internal_set_webSocket)) ::System::Net::WebSockets::ClientWebSocket*  webSocket;

/// @brief Convert operator to "::Modio::Customizations::ISocketConnection"
constexpr operator  ::Modio::Customizations::ISocketConnection*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Customizations.SocketConnection::<CloseConnection>d__13))]
/// @brief Method CloseConnection, addr 0xa05e800, size 0xd8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* CloseConnection() ;

/// @brief Method Connected, addr 0xa05e688, size 0x28, virtual true, abstract: false, final true
inline bool Connected() ;

static inline ::Modio::Customizations::SocketConnection* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.Customizations.SocketConnection::<ReceiveMessages>d__14))]
/// @brief Method ReceiveMessages, addr 0xa05e8d8, size 0xac, virtual false, abstract: false, final false
inline void ReceiveMessages() ;

/// [AsyncStateMachine(typeof(Modio.Customizations.SocketConnection::<SendData>d__15))]
/// @brief Method SendData, addr 0xa05e984, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SendData(::Modio::Customizations::WssMessages  message) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.SocketConnection::<SetupConnection>d__12))]
/// @brief Method SetupConnection, addr 0xa05e6b0, size 0x150, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SetupConnection(::StringW  url, ::System::Action_1<::Modio::Customizations::WssMessages>*  onReceive, ::System::Action*  onDisconnect) ;

constexpr ::System::Action* const& __cordl_internal_get__Disconnect_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__Disconnect_k__BackingField() ;

constexpr ::System::Action_1<::Modio::Customizations::WssMessages>* const& __cordl_internal_get__Receive_k__BackingField() const;

constexpr ::System::Action_1<::Modio::Customizations::WssMessages>*& __cordl_internal_get__Receive_k__BackingField() ;

constexpr ::System::Threading::Mutex* const& __cordl_internal_get__sending() const;

constexpr ::System::Threading::Mutex*& __cordl_internal_get__sending() ;

constexpr bool const& __cordl_internal_get_closingConnection() const;

constexpr bool& __cordl_internal_get_closingConnection() ;

constexpr ::System::Net::WebSockets::ClientWebSocket* const& __cordl_internal_get_webSocket() const;

constexpr ::System::Net::WebSockets::ClientWebSocket*& __cordl_internal_get_webSocket() ;

constexpr void __cordl_internal_set__Disconnect_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__Receive_k__BackingField(::System::Action_1<::Modio::Customizations::WssMessages>*  value) ;

constexpr void __cordl_internal_set__sending(::System::Threading::Mutex*  value) ;

constexpr void __cordl_internal_set_closingConnection(bool  value) ;

constexpr void __cordl_internal_set_webSocket(::System::Net::WebSockets::ClientWebSocket*  value) ;

/// @brief Method .ctor, addr 0xa05c9e0, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Disconnect, addr 0xa05e678, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_Disconnect() ;

/// [CompilerGenerated]
/// @brief Method get_Receive, addr 0xa05e668, size 0x8, virtual false, abstract: false, final false
inline ::System::Action_1<::Modio::Customizations::WssMessages>* get_Receive() ;

/// @brief Convert to "::Modio::Customizations::ISocketConnection"
constexpr ::Modio::Customizations::ISocketConnection* i___Modio__Customizations__ISocketConnection() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Disconnect, addr 0xa05e680, size 0x8, virtual false, abstract: false, final false
inline void set_Disconnect(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Receive, addr 0xa05e670, size 0x8, virtual false, abstract: false, final false
inline void set_Receive(::System::Action_1<::Modio::Customizations::WssMessages>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketConnection(SocketConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketConnection(SocketConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17756};

/// @brief Field webSocket, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebSockets::ClientWebSocket*  ___webSocket;

/// @brief Field _sending, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::Mutex*  ____sending;

/// [CompilerGenerated]
/// @brief Field <Receive>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Modio::Customizations::WssMessages>*  ____Receive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Disconnect>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ____Disconnect_k__BackingField;

/// @brief Field closingConnection, offset: 0x30, size: 0x1, def value: None
 bool  ___closingConnection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::SocketConnection, ___webSocket) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::SocketConnection, ____sending) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::SocketConnection, ____Receive_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::SocketConnection, ____Disconnect_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::SocketConnection, ___closingConnection) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::SocketConnection) == 0x38, "Size mismatch!");

} // namespace end def Modio::Customizations
