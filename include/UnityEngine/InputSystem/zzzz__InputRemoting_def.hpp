#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputRemoting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_Flags_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_RemoteSender_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputRemoting)
namespace GlobalNamespace {
struct ChangeUsageMsg_InputRemoting_Data;
}
namespace GlobalNamespace {
struct InputRemoting_Flags;
}
namespace GlobalNamespace {
struct InputRemoting_MessageType;
}
namespace GlobalNamespace {
struct InputRemoting_Message;
}
namespace GlobalNamespace {
struct InputRemoting_RemoteInputDevice;
}
namespace GlobalNamespace {
struct InputRemoting_RemoteSender;
}
namespace GlobalNamespace {
struct NewDeviceMsg_InputRemoting_Data;
}
namespace GlobalNamespace {
struct NewLayoutMsg_InputRemoting_Data;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
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
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem {
class ChangeUsageMsg_InputRemoting___c;
}
namespace UnityEngine::InputSystem {
struct InputControlLayoutChange;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class InputManager;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ConnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_DisconnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_Subscriber;
}
namespace UnityEngine::InputSystem {
class NewDeviceMsg_InputRemoting___c;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class ChangeUsageMsg_InputRemoting___c;
}
namespace UnityEngine::InputSystem {
class InputRemoting;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ChangeUsageMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_ConnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_DisconnectMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewEventsMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_NewLayoutMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_RemoveDeviceMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StartSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_StopSendingMsg;
}
namespace UnityEngine::InputSystem {
class InputRemoting_Subscriber;
}
namespace UnityEngine::InputSystem {
class NewDeviceMsg_InputRemoting___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_ConnectMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_DisconnectMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_StartSendingMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_StopSendingMsg*);
MARK_REF_T(::UnityEngine::InputSystem::InputRemoting_Subscriber*);
MARK_REF_T(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting*, "UnityEngine.InputSystem", "InputRemoting");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg*, "UnityEngine.InputSystem", "InputRemoting/ChangeUsageMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_ConnectMsg*, "UnityEngine.InputSystem", "InputRemoting/ConnectMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_DisconnectMsg*, "UnityEngine.InputSystem", "InputRemoting/DisconnectMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_NewEventsMsg*, "UnityEngine.InputSystem", "InputRemoting/NewEventsMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg*, "UnityEngine.InputSystem", "InputRemoting/NewLayoutMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg*, "UnityEngine.InputSystem", "InputRemoting/RemoveDeviceMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_StartSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StartSendingMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_StopSendingMsg*, "UnityEngine.InputSystem", "InputRemoting/StopSendingMsg");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputRemoting_Subscriber*, "UnityEngine.InputSystem", "InputRemoting/Subscriber");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*, "UnityEngine.InputSystem", "InputRemoting/NewDeviceMsg/<>c");
// Dependencies System.Object, UnityEngine.InputSystem.InputRemoting::Flags, UnityEngine.InputSystem.InputRemoting::RemoteSender, UnityEngine.InputSystem.InputRemoting::Subscriber
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting
class CORDL_TYPE InputRemoting : public ::System::Object {
public:
// Declarations
using Flags = ::GlobalNamespace::InputRemoting_Flags;

using Message = ::GlobalNamespace::InputRemoting_Message;

using MessageType = ::GlobalNamespace::InputRemoting_MessageType;

using RemoteInputDevice = ::GlobalNamespace::InputRemoting_RemoteInputDevice;

using RemoteSender = ::GlobalNamespace::InputRemoting_RemoteSender;

using ChangeUsageMsg = ::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg;

using ConnectMsg = ::UnityEngine::InputSystem::InputRemoting_ConnectMsg;

using DisconnectMsg = ::UnityEngine::InputSystem::InputRemoting_DisconnectMsg;

using NewDeviceMsg = ::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg;

using NewEventsMsg = ::UnityEngine::InputSystem::InputRemoting_NewEventsMsg;

using NewLayoutMsg = ::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg;

using RemoveDeviceMsg = ::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg;

using StartSendingMsg = ::UnityEngine::InputSystem::InputRemoting_StartSendingMsg;

using StopSendingMsg = ::UnityEngine::InputSystem::InputRemoting_StopSendingMsg;

using Subscriber = ::UnityEngine::InputSystem::InputRemoting_Subscriber;

/// @brief Field m_Flags, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Flags, put=__cordl_internal_set_m_Flags)) ::GlobalNamespace::InputRemoting_Flags  m_Flags;

/// @brief Field m_LocalManager, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalManager, put=__cordl_internal_set_m_LocalManager)) ::UnityEngine::InputSystem::InputManager*  m_LocalManager;

/// @brief Field m_Senders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Senders, put=__cordl_internal_set_m_Senders)) ::ArrayW<::GlobalNamespace::InputRemoting_RemoteSender>  m_Senders;

/// @brief Field m_Subscribers, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Subscribers, put=__cordl_internal_set_m_Subscribers)) ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*>  m_Subscribers;

 __declspec(property(get=get_manager)) ::UnityEngine::InputSystem::InputManager*  manager;

 __declspec(property(get=get_sending, put=set_sending)) bool  sending;

/// @brief Convert operator to "::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>"
constexpr operator  ::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>*() noexcept;

/// @brief Convert operator to "::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>"
constexpr operator  ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*() noexcept;

/// @brief Method BuildLayoutNamespace, addr 0xafa3b10, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::InternedString BuildLayoutNamespace(int32_t  senderId) ;

/// @brief Method DeserializeData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TData>
static inline TData DeserializeData(::ArrayW<uint8_t>  data) ;

/// @brief Method FindLocalDeviceId, addr 0xafa3b9c, size 0x6c, virtual false, abstract: false, final false
inline int32_t FindLocalDeviceId(int32_t  remoteDeviceId, int32_t  senderIndex) ;

/// @brief Method FindOrCreateSenderRecord, addr 0xafa3a70, size 0xa0, virtual false, abstract: false, final false
inline int32_t FindOrCreateSenderRecord(int32_t  senderId) ;

static inline ::UnityEngine::InputSystem::InputRemoting* New_ctor(::UnityEngine::InputSystem::InputManager*  manager, bool  startSendingOnConnect) ;

/// @brief Method RemoveRemoteDevices, addr 0xafa3cb0, size 0xfc, virtual false, abstract: false, final false
inline void RemoveRemoteDevices(int32_t  participantId) ;

/// @brief Method Send, addr 0xafa2f78, size 0x104, virtual false, abstract: false, final false
inline void Send(::GlobalNamespace::InputRemoting_Message  msg) ;

/// @brief Method SendAllDevices, addr 0xafa2ab8, size 0x158, virtual false, abstract: false, final false
inline void SendAllDevices() ;

/// @brief Method SendAllGeneratedLayouts, addr 0xafa2968, size 0x150, virtual false, abstract: false, final false
inline void SendAllGeneratedLayouts() ;

/// @brief Method SendDevice, addr 0xafa30e4, size 0x84, virtual false, abstract: false, final false
inline void SendDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method SendDeviceChange, addr 0xafa360c, size 0xc8, virtual false, abstract: false, final false
inline void SendDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change) ;

/// @brief Method SendEvent, addr 0xafa34b8, size 0x64, virtual false, abstract: false, final false
inline void SendEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method SendInitialMessages, addr 0xafa1980, size 0x18, virtual false, abstract: false, final false
inline void SendInitialMessages() ;

/// @brief Method SendLayout, addr 0xafa2c10, size 0xa4, virtual false, abstract: false, final false
inline void SendLayout(::StringW  layoutName) ;

/// @brief Method SendLayoutChange, addr 0xafa3980, size 0xf0, virtual false, abstract: false, final false
inline void SendLayoutChange(::StringW  layout, ::UnityEngine::InputSystem::InputControlLayoutChange  change) ;

/// @brief Method SerializeData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TData>
static inline ::ArrayW<uint8_t> SerializeData(TData  data) ;

/// @brief Method StartSending, addr 0xafa1714, size 0x164, virtual false, abstract: false, final false
inline void StartSending() ;

/// @brief Method StopSending, addr 0xafa1998, size 0x14c, virtual false, abstract: false, final false
inline void StopSending() ;

/// @brief Method Subscribe, addr 0xafa2864, size 0xfc, virtual true, abstract: false, final true
inline ::System::IDisposable* Subscribe(::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  observer) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnCompleted, addr 0xafa2860, size 0x4, virtual true, abstract: false, final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnCompleted() ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnError, addr 0xafa285c, size 0x4, virtual true, abstract: false, final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnError(::System::Exception*  error) ;

/// @brief Method System.IObserver<UnityEngine.InputSystem.InputRemoting.Message>.OnNext, addr 0xafa1bec, size 0xc0, virtual true, abstract: false, final true
inline void System_IObserver_UnityEngine_InputSystem_InputRemoting_Message__OnNext(::GlobalNamespace::InputRemoting_Message  msg) ;

/// @brief Method TryGetDeviceByRemoteId, addr 0xafa3c08, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* TryGetDeviceByRemoteId(int32_t  remoteDeviceId, int32_t  senderIndex) ;

constexpr ::GlobalNamespace::InputRemoting_Flags const& __cordl_internal_get_m_Flags() const;

constexpr ::GlobalNamespace::InputRemoting_Flags& __cordl_internal_get_m_Flags() ;

constexpr ::UnityEngine::InputSystem::InputManager* const& __cordl_internal_get_m_LocalManager() const;

constexpr ::UnityEngine::InputSystem::InputManager*& __cordl_internal_get_m_LocalManager() ;

constexpr ::ArrayW<::GlobalNamespace::InputRemoting_RemoteSender> const& __cordl_internal_get_m_Senders() const;

constexpr ::ArrayW<::GlobalNamespace::InputRemoting_RemoteSender>& __cordl_internal_get_m_Senders() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*> const& __cordl_internal_get_m_Subscribers() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*>& __cordl_internal_get_m_Subscribers() ;

constexpr void __cordl_internal_set_m_Flags(::GlobalNamespace::InputRemoting_Flags  value) ;

constexpr void __cordl_internal_set_m_LocalManager(::UnityEngine::InputSystem::InputManager*  value) ;

constexpr void __cordl_internal_set_m_Senders(::ArrayW<::GlobalNamespace::InputRemoting_RemoteSender>  value) ;

constexpr void __cordl_internal_set_m_Subscribers(::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*>  value) ;

/// @brief Method .ctor, addr 0xafa1680, size 0x94, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::InputSystem::InputManager*  manager, bool  startSendingOnConnect) ;

/// @brief Method get_manager, addr 0xafa3ca8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputManager* get_manager() ;

/// @brief Method get_sending, addr 0xafa1664, size 0xc, virtual false, abstract: false, final false
inline bool get_sending() ;

/// @brief Convert to "::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>"
constexpr ::System::IObservable_1<::GlobalNamespace::InputRemoting_Message>* i___System__IObservable_1___GlobalNamespace__InputRemoting_Message_() noexcept;

/// @brief Convert to "::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>"
constexpr ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>* i___System__IObserver_1___GlobalNamespace__InputRemoting_Message_() noexcept;

/// @brief Method set_sending, addr 0xafa1670, size 0x10, virtual false, abstract: false, final false
inline void set_sending(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting(InputRemoting && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting(InputRemoting const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13484};

/// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::InputRemoting_Flags  ___m_Flags;

/// @brief Field m_LocalManager, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputManager*  ___m_LocalManager;

/// @brief Field m_Subscribers, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputRemoting_Subscriber*>  ___m_Subscribers;

/// @brief Field m_Senders, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::InputRemoting_RemoteSender>  ___m_Senders;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_LocalManager) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Subscribers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting, ___m_Senders) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/RemoveDeviceMsg
class CORDL_TYPE InputRemoting_RemoveDeviceMsg : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0xafa36d4, size 0x4c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process, addr 0xafa27d0, size 0x6c, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::GlobalNamespace::InputRemoting_Message  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_RemoveDeviceMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_RemoveDeviceMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_RemoveDeviceMsg(InputRemoting_RemoveDeviceMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_RemoveDeviceMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_RemoveDeviceMsg(InputRemoting_RemoveDeviceMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13483};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_RemoveDeviceMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg
class CORDL_TYPE InputRemoting_ChangeUsageMsg : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::ChangeUsageMsg_InputRemoting_Data;

using __c = ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c;

/// @brief Method Create, addr 0xafa3720, size 0x1d8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process, addr 0xafa24d0, size 0x300, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::GlobalNamespace::InputRemoting_Message  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_ChangeUsageMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ChangeUsageMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_ChangeUsageMsg(InputRemoting_ChangeUsageMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ChangeUsageMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_ChangeUsageMsg(InputRemoting_ChangeUsageMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13482};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_ChangeUsageMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/ChangeUsageMsg/<>c
class CORDL_TYPE ChangeUsageMsg_InputRemoting___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  __9__1_0;

static inline ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* New_ctor() ;

/// @brief Method <Create>b__1_0, addr 0xafa4c78, size 0x24, virtual false, abstract: false, final false
inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method .ctor, addr 0xafa4c70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChangeUsageMsg_InputRemoting___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChangeUsageMsg_InputRemoting___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChangeUsageMsg_InputRemoting___c(ChangeUsageMsg_InputRemoting___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChangeUsageMsg_InputRemoting___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChangeUsageMsg_InputRemoting___c(ChangeUsageMsg_InputRemoting___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13481};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::ChangeUsageMsg_InputRemoting___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewEventsMsg
class CORDL_TYPE InputRemoting_NewEventsMsg : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0xafa351c, size 0xf0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputRemoting_Message Create(::UnityEngine::InputSystem::LowLevel::InputEvent*  events, int32_t  eventCount) ;

/// @brief Method CreateResetEvent, addr 0xafa38f8, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputRemoting_Message CreateResetEvent(::UnityEngine::InputSystem::InputDevice*  device, bool  isHardReset) ;

/// @brief Method CreateStateEvent, addr 0xafa33c8, size 0xf0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputRemoting_Message CreateStateEvent(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process, addr 0xafa2410, size 0xc0, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::GlobalNamespace::InputRemoting_Message  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_NewEventsMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewEventsMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_NewEventsMsg(InputRemoting_NewEventsMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewEventsMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_NewEventsMsg(InputRemoting_NewEventsMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13479};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_NewEventsMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg
class CORDL_TYPE InputRemoting_NewDeviceMsg : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::NewDeviceMsg_InputRemoting_Data;

using __c = ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c;

/// @brief Method Create, addr 0xafa3168, size 0x260, virtual false, abstract: false, final false
static inline ::GlobalNamespace::InputRemoting_Message Create(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method Process, addr 0xafa1e80, size 0x590, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::GlobalNamespace::InputRemoting_Message  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_NewDeviceMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewDeviceMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_NewDeviceMsg(InputRemoting_NewDeviceMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewDeviceMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_NewDeviceMsg(InputRemoting_NewDeviceMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13478};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewDeviceMsg/<>c
class CORDL_TYPE NewDeviceMsg_InputRemoting___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  __9__1_0;

static inline ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* New_ctor() ;

/// @brief Method <Create>b__1_0, addr 0xafa4ab4, size 0x24, virtual false, abstract: false, final false
inline ::StringW _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString  x) ;

/// @brief Method .ctor, addr 0xafa4aac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c* getStaticF___9() ;

static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c*  value) ;

static inline void setStaticF___9__1_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NewDeviceMsg_InputRemoting___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NewDeviceMsg_InputRemoting___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NewDeviceMsg_InputRemoting___c(NewDeviceMsg_InputRemoting___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NewDeviceMsg_InputRemoting___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NewDeviceMsg_InputRemoting___c(NewDeviceMsg_InputRemoting___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13477};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::NewDeviceMsg_InputRemoting___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/NewLayoutMsg
class CORDL_TYPE InputRemoting_NewLayoutMsg : public ::System::Object {
public:
// Declarations
using Data = ::GlobalNamespace::NewLayoutMsg_InputRemoting_Data;

/// @brief Method Create, addr 0xafa2cb4, size 0x2c4, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::InputRemoting_Message> Create(::UnityEngine::InputSystem::InputRemoting*  sender, ::StringW  layoutName) ;

/// @brief Method Process, addr 0xafa1d84, size 0xfc, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::GlobalNamespace::InputRemoting_Message  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_NewLayoutMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewLayoutMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_NewLayoutMsg(InputRemoting_NewLayoutMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_NewLayoutMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_NewLayoutMsg(InputRemoting_NewLayoutMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13475};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_NewLayoutMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/DisconnectMsg
class CORDL_TYPE InputRemoting_DisconnectMsg : public ::System::Object {
public:
// Declarations
/// @brief Method Process, addr 0xafa1cf0, size 0x94, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver, ::GlobalNamespace::InputRemoting_Message  msg) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_DisconnectMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_DisconnectMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_DisconnectMsg(InputRemoting_DisconnectMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_DisconnectMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_DisconnectMsg(InputRemoting_DisconnectMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13473};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_DisconnectMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/StopSendingMsg
class CORDL_TYPE InputRemoting_StopSendingMsg : public ::System::Object {
public:
// Declarations
/// @brief Method Process, addr 0xafa284c, size 0x10, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_StopSendingMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StopSendingMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_StopSendingMsg(InputRemoting_StopSendingMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StopSendingMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_StopSendingMsg(InputRemoting_StopSendingMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_StopSendingMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/StartSendingMsg
class CORDL_TYPE InputRemoting_StartSendingMsg : public ::System::Object {
public:
// Declarations
/// @brief Method Process, addr 0xafa283c, size 0x10, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_StartSendingMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StartSendingMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_StartSendingMsg(InputRemoting_StartSendingMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_StartSendingMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_StartSendingMsg(InputRemoting_StartSendingMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13471};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_StartSendingMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/ConnectMsg
class CORDL_TYPE InputRemoting_ConnectMsg : public ::System::Object {
public:
// Declarations
/// @brief Method Process, addr 0xafa1cac, size 0x44, virtual false, abstract: false, final false
static inline void Process(::UnityEngine::InputSystem::InputRemoting*  receiver) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_ConnectMsg() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ConnectMsg", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_ConnectMsg(InputRemoting_ConnectMsg && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_ConnectMsg", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_ConnectMsg(InputRemoting_ConnectMsg const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_ConnectMsg) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputRemoting/Subscriber
class CORDL_TYPE InputRemoting_Subscriber : public ::System::Object {
public:
// Declarations
/// @brief Field observer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_observer, put=__cordl_internal_set_observer)) ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  observer;

/// @brief Field owner, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::UnityEngine::InputSystem::InputRemoting*  owner;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0xafa4298, size 0x58, virtual true, abstract: false, final true
inline void Dispose() ;

static inline ::UnityEngine::InputSystem::InputRemoting_Subscriber* New_ctor() ;

constexpr ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>* const& __cordl_internal_get_observer() const;

constexpr ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*& __cordl_internal_get_observer() ;

constexpr ::UnityEngine::InputSystem::InputRemoting* const& __cordl_internal_get_owner() const;

constexpr ::UnityEngine::InputSystem::InputRemoting*& __cordl_internal_get_owner() ;

constexpr void __cordl_internal_set_observer(::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  value) ;

constexpr void __cordl_internal_set_owner(::UnityEngine::InputSystem::InputRemoting*  value) ;

/// @brief Method .ctor, addr 0xafa2960, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputRemoting_Subscriber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_Subscriber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputRemoting_Subscriber(InputRemoting_Subscriber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputRemoting_Subscriber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputRemoting_Subscriber(InputRemoting_Subscriber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13469};

/// @brief Field owner, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputRemoting*  ___owner;

/// @brief Field observer, offset: 0x18, size: 0x8, def value: None
 ::System::IObserver_1<::GlobalNamespace::InputRemoting_Message>*  ___observer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Subscriber, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputRemoting_Subscriber, ___observer) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputRemoting_Subscriber) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
