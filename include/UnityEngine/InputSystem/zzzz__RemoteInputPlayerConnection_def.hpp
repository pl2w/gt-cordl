#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/RemoteInputPlayerConnection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RemoteInputPlayerConnection)
namespace GlobalNamespace {
struct InputRemoting_MessageType;
}
namespace GlobalNamespace {
struct InputRemoting_Message;
}
namespace System {
class Exception;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObservable_1;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::InputSystem {
class RemoteInputPlayerConnection_Subscriber;
}
namespace UnityEngine::Networking::PlayerConnection {
class IEditorPlayerConnection;
}
namespace UnityEngine::Networking::PlayerConnection {
class MessageEventArgs;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class RemoteInputPlayerConnection;
}
namespace UnityEngine::InputSystem {
class RemoteInputPlayerConnection_Subscriber;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::RemoteInputPlayerConnection*);
MARK_REF_T(::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::RemoteInputPlayerConnection*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection/Subscriber");
// Dependencies System.Guid, UnityEngine.InputSystem.RemoteInputPlayerConnection::Subscriber, UnityEngine.ScriptableObject
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.RemoteInputPlayerConnection
class CORDL_TYPE RemoteInputPlayerConnection : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using Subscriber = ::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber;

/// @brief Field kChangeUsagesMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kChangeUsagesMsg, put=setStaticF_kChangeUsagesMsg)) ::System::Guid  kChangeUsagesMsg;

/// @brief Field kNewDeviceMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kNewDeviceMsg, put=setStaticF_kNewDeviceMsg)) ::System::Guid  kNewDeviceMsg;

/// @brief Field kNewEventsMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kNewEventsMsg, put=setStaticF_kNewEventsMsg)) ::System::Guid  kNewEventsMsg;

/// @brief Field kNewLayoutMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kNewLayoutMsg, put=setStaticF_kNewLayoutMsg)) ::System::Guid  kNewLayoutMsg;

/// @brief Field kRemoveDeviceMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kRemoveDeviceMsg, put=setStaticF_kRemoveDeviceMsg)) ::System::Guid  kRemoveDeviceMsg;

/// @brief Field kStartSendingMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kStartSendingMsg, put=setStaticF_kStartSendingMsg)) ::System::Guid  kStartSendingMsg;

/// @brief Field kStopSendingMsg, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_kStopSendingMsg, put=setStaticF_kStopSendingMsg)) ::System::Guid  kStopSendingMsg;

/// @brief Field m_ConnectedIds, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ConnectedIds, put=__cordl_internal_set_m_ConnectedIds)) ::ArrayW<int32_t>  m_ConnectedIds;

/// @brief Field m_Connection, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Connection, put=__cordl_internal_set_m_Connection)) ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  m_Connection;

/// @brief Field m_Subscribers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Subscribers, put=__cordl_internal_set_m_Subscribers)) ::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>  m_Subscribers;

/// @brief Convert operator to "::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>"
constexpr operator  ::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>*() noexcept;

/// @brief Convert operator to "::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>"
constexpr operator  ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*() noexcept;

/// @brief Method Bind, addr 0xafa4c9c, size 0x6d0, virtual false, abstract: false, final false
inline void Bind(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  connection, bool  isConnected) ;

static inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection* New_ctor() ;

/// @brief Method OnChangeUsages, addr 0xafa5840, size 0xc, virtual false, abstract: false, final false
inline void OnChangeUsages(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnConnected, addr 0xafa536c, size 0xdc, virtual false, abstract: false, final false
inline void OnConnected(int32_t  id) ;

/// @brief Method OnDisconnected, addr 0xafa5740, size 0xd0, virtual false, abstract: false, final false
inline void OnDisconnected(int32_t  id) ;

/// @brief Method OnNewDevice, addr 0xafa5810, size 0xc, virtual false, abstract: false, final false
inline void OnNewDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnNewEvents, addr 0xafa5828, size 0xc, virtual false, abstract: false, final false
inline void OnNewEvents(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnNewLayout, addr 0xafa581c, size 0xc, virtual false, abstract: false, final false
inline void OnNewLayout(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnRemoveDevice, addr 0xafa5834, size 0xc, virtual false, abstract: false, final false
inline void OnRemoveDevice(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnStartSending, addr 0xafa584c, size 0xc, virtual false, abstract: false, final false
inline void OnStartSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method OnStopSending, addr 0xafa5858, size 0xc, virtual false, abstract: false, final false
inline void OnStopSending(::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method SendToSubscribers, addr 0xafa5608, size 0x138, virtual false, abstract: false, final false
inline void SendToSubscribers(::GlobalNamespace::InputRemoting_MessageType  type, ::UnityEngine::Networking::PlayerConnection::MessageEventArgs*  args) ;

/// @brief Method Subscribe, addr 0xafa5448, size 0x1b8, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  observer) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted, addr 0xafa5b2c, size 0x4, virtual true, abstract: false, final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError, addr 0xafa5b28, size 0x4, virtual true, abstract: false, final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception*  error) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext, addr 0xafa5864, size 0x2c4, virtual true, abstract: false, final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::GlobalNamespace::InputRemoting_Message  msg) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_ConnectedIds() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_ConnectedIds() ;

constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection* const& __cordl_internal_get_m_Connection() const;

constexpr ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*& __cordl_internal_get_m_Connection() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*> const& __cordl_internal_get_m_Subscribers() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>& __cordl_internal_get_m_Subscribers() ;

constexpr void __cordl_internal_set_m_ConnectedIds(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_m_Connection(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  value) ;

constexpr void __cordl_internal_set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>  value) ;

/// @brief Method .ctor, addr 0xafa5b30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Guid getStaticF_kChangeUsagesMsg() ;

static inline ::System::Guid getStaticF_kNewDeviceMsg() ;

static inline ::System::Guid getStaticF_kNewEventsMsg() ;

static inline ::System::Guid getStaticF_kNewLayoutMsg() ;

static inline ::System::Guid getStaticF_kRemoveDeviceMsg() ;

static inline ::System::Guid getStaticF_kStartSendingMsg() ;

static inline ::System::Guid getStaticF_kStopSendingMsg() ;

/// @brief Convert to "::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>"
constexpr ::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>* i___System__IObservable_1___GlobalNamespace__InputRemoting_Message_() noexcept;

/// @brief Convert to "::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>"
constexpr ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>* i___System__IObserver_1___GlobalNamespace__InputRemoting_Message_() noexcept;

static inline void setStaticF_kChangeUsagesMsg(::System::Guid  value) ;

static inline void setStaticF_kNewDeviceMsg(::System::Guid  value) ;

static inline void setStaticF_kNewEventsMsg(::System::Guid  value) ;

static inline void setStaticF_kNewLayoutMsg(::System::Guid  value) ;

static inline void setStaticF_kRemoveDeviceMsg(::System::Guid  value) ;

static inline void setStaticF_kStartSendingMsg(::System::Guid  value) ;

static inline void setStaticF_kStopSendingMsg(::System::Guid  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteInputPlayerConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteInputPlayerConnection(RemoteInputPlayerConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteInputPlayerConnection(RemoteInputPlayerConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13486};

/// [SerializeField]
/// @brief Field m_Connection, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*  ___m_Connection;

/// @brief Field m_Subscribers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber*>  ___m_Subscribers;

/// [SerializeField]
/// @brief Field m_ConnectedIds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___m_ConnectedIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection, ___m_Connection) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection, ___m_Subscribers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection, ___m_ConnectedIds) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::RemoteInputPlayerConnection) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
class CORDL_TYPE RemoteInputPlayerConnection_Subscriber : public ::System::Object {
public:
// Declarations
/// @brief Field observer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_observer, put=__cordl_internal_set_observer)) ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  observer;

/// @brief Field owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>  owner;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xafa5d1c, size 0x58, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber* New_ctor() ;

constexpr ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>* const& __cordl_internal_get_observer() const;

constexpr ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*& __cordl_internal_get_observer() ;

constexpr ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection> const& __cordl_internal_get_owner() const;

constexpr ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>& __cordl_internal_get_owner() ;

constexpr void __cordl_internal_set_observer(::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  value) ;

constexpr void __cordl_internal_set_owner(::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>  value) ;

/// @brief Method .ctor, addr 0xafa5600, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteInputPlayerConnection_Subscriber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection_Subscriber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteInputPlayerConnection_Subscriber(RemoteInputPlayerConnection_Subscriber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteInputPlayerConnection_Subscriber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteInputPlayerConnection_Subscriber(RemoteInputPlayerConnection_Subscriber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13485};

/// @brief Field owner, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::RemoteInputPlayerConnection>  ___owner;

/// @brief Field observer, offset: 0x18, size: 0x8, def value: None
 ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  ___observer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber, ___observer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::RemoteInputPlayerConnection_Subscriber) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
