#pragma once
// IWYU pragma private; include "GlobalNamespace/SynthesisArcadeObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SynthesisArcadeObject)
namespace GlobalNamespace {
class SynthesisArcadeObject_SynthesisCallbacks;
}
namespace GlobalNamespace {
class SynthesisArcadeObject__EnableLicensingCheckTask_d__43;
}
namespace GlobalNamespace {
class SynthesisArcadeObject___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class SynthesisArcadeObject___c__DisplayClass33_0;
}
namespace GlobalNamespace {
struct SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS;
}
namespace GlobalNamespace {
class SynthesisColumns;
}
namespace GlobalNamespace {
struct SynthesisUdpCommand;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class EventArgs;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0,typename T1>
class UnityEvent_2;
}
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine {
class Coroutine;
}
namespace WebSocketSharp {
class ErrorEventArgs;
}
namespace WebSocketSharp {
class MessageEventArgs;
}
namespace WebSocketSharp {
class WebSocket;
}
// Forward declare root types
namespace GlobalNamespace {
class SynthesisArcadeObject;
}
namespace GlobalNamespace {
class SynthesisArcadeObject_SynthesisCallbacks;
}
namespace GlobalNamespace {
class SynthesisArcadeObject__EnableLicensingCheckTask_d__43;
}
namespace GlobalNamespace {
class SynthesisArcadeObject___c__DisplayClass23_0;
}
namespace GlobalNamespace {
class SynthesisArcadeObject___c__DisplayClass33_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SynthesisArcadeObject*);
MARK_REF_T(::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*);
MARK_REF_T(::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*);
MARK_REF_T(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*);
MARK_REF_T(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisArcadeObject*, "", "SynthesisArcadeObject");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks*, "", "SynthesisArcadeObject/SynthesisCallbacks");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43*, "", "SynthesisArcadeObject/<EnableLicensingCheckTask>d__43");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0*, "", "SynthesisArcadeObject/<>c__DisplayClass23_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0*, "", "SynthesisArcadeObject/<>c__DisplayClass33_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisArcadeObject
class CORDL_TYPE SynthesisArcadeObject : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SynthesisCallbacks = ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks;

using _EnableLicensingCheckTask_d__43 = ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43;

using __c__DisplayClass23_0 = ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0;

using __c__DisplayClass33_0 = ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0;

/// @brief Field TAG, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TAG, put=__cordl_internal_set_TAG)) ::StringW  TAG;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::SynthesisArcadeObject>  _instance;

/// @brief Field allowEnteringTheLoop, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowEnteringTheLoop, put=__cordl_internal_set_allowEnteringTheLoop)) bool  allowEnteringTheLoop;

/// @brief Field co, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_co, put=__cordl_internal_set_co)) ::UnityEngine::Coroutine*  co;

/// @brief Field commandDefinitions, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_commandDefinitions, put=__cordl_internal_set_commandDefinitions)) ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>*  commandDefinitions;

/// @brief Field disableSynthesisDRMInUnityEditor, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableSynthesisDRMInUnityEditor, put=__cordl_internal_set_disableSynthesisDRMInUnityEditor)) bool  disableSynthesisDRMInUnityEditor;

/// @brief Field enableLiveInteractions, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableLiveInteractions, put=__cordl_internal_set_enableLiveInteractions)) bool  enableLiveInteractions;

/// @brief Field fallbackCommandProcessor, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallbackCommandProcessor, put=__cordl_internal_set_fallbackCommandProcessor)) ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>*  fallbackCommandProcessor;

/// @brief Field manualPpmTracking, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get_manualPpmTracking, put=__cordl_internal_set_manualPpmTracking)) bool  manualPpmTracking;

/// @brief Field quitGame, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_quitGame, put=__cordl_internal_set_quitGame)) bool  quitGame;

/// @brief Field successfulDrmChecks, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_successfulDrmChecks, put=__cordl_internal_set_successfulDrmChecks)) int32_t  successfulDrmChecks;

/// @brief Field svrInterfaceAndroid, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_svrInterfaceAndroid, put=__cordl_internal_set_svrInterfaceAndroid)) ::UnityEngine::AndroidJavaObject*  svrInterfaceAndroid;

/// @brief Field synchronizationAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_synchronizationAction, put=__cordl_internal_set_synchronizationAction)) ::System::Action_1<::StringW>*  synchronizationAction;

/// @brief Field synthesisCdnBuild, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_synthesisCdnBuild, put=__cordl_internal_set_synthesisCdnBuild)) bool  synthesisCdnBuild;

/// @brief Field synthesisFlags, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_synthesisFlags, put=__cordl_internal_set_synthesisFlags)) ::System::Collections::Generic::List_1<::StringW>*  synthesisFlags;

/// @brief Field synthesisGameId, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_synthesisGameId, put=__cordl_internal_set_synthesisGameId)) ::StringW  synthesisGameId;

/// @brief Field udpPort, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_udpPort, put=__cordl_internal_set_udpPort)) int32_t  udpPort;

/// @brief Field udpQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_udpQueue, put=setStaticF_udpQueue)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>*  udpQueue;

/// @brief Field unityActivity, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_unityActivity, put=__cordl_internal_set_unityActivity)) ::UnityEngine::AndroidJavaObject*  unityActivity;

/// @brief Field webSocketClientAddress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_webSocketClientAddress, put=__cordl_internal_set_webSocketClientAddress)) ::StringW  webSocketClientAddress;

/// @brief Field webSocketLastConnectionAttemptEpoch, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_webSocketLastConnectionAttemptEpoch, put=__cordl_internal_set_webSocketLastConnectionAttemptEpoch)) double_t  webSocketLastConnectionAttemptEpoch;

/// @brief Field wsclient, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wsclient, put=setStaticF_wsclient)) ::WebSocketSharp::WebSocket*  wsclient;

/// @brief Method AddToLeaderboard, addr 0x5b27204, size 0x17c, virtual false, abstract: false, final false
inline bool AddToLeaderboard(::StringW  data) ;

/// @brief Method AndroidConfigFileRead, addr 0x5b27da8, size 0x170, virtual false, abstract: false, final false
inline ::StringW AndroidConfigFileRead(::StringW  filename) ;

/// @brief Method AndroidConfigFileWrite, addr 0x5b27f18, size 0x1b4, virtual false, abstract: false, final false
inline bool AndroidConfigFileWrite(::StringW  filename, ::StringW  content) ;

/// @brief Method CancelMultiplayerSynchronization, addr 0x5b26b24, size 0x294, virtual false, abstract: false, final false
inline bool CancelMultiplayerSynchronization(::StringW  syncType) ;

/// @brief Method ConnectToWebSocket, addr 0x5b24ca8, size 0x4f0, virtual false, abstract: false, final false
inline void ConnectToWebSocket() ;

/// [IteratorStateMachine(typeof(SynthesisArcadeObject::<EnableLicensingCheckTask>d__43))]
/// @brief Method EnableLicensingCheckTask, addr 0x5b26758, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* EnableLicensingCheckTask() ;

static inline ::GlobalNamespace::SynthesisArcadeObject* New_ctor() ;

/// @brief Method OnApplicationPause, addr 0x5b247d4, size 0x4, virtual false, abstract: false, final false
inline void OnApplicationPause(bool  pauseStatus) ;

/// @brief Method OnDestroy, addr 0x5b25198, size 0x298, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ReadCommandLineArgument, addr 0x5b241c0, size 0x20c, virtual false, abstract: false, final false
inline ::StringW ReadCommandLineArgument(::StringW  name) ;

/// @brief Method Start, addr 0x5b25430, size 0x9b4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartMultiplayerSynchronization, addr 0x5b26884, size 0x2a0, virtual false, abstract: false, final false
inline bool StartMultiplayerSynchronization(::System::Action_1<::StringW>*  callbackAction, ::StringW  syncType) ;

/// @brief Method UdpHelloWorld, addr 0x5b24720, size 0xb4, virtual false, abstract: false, final false
inline void UdpHelloWorld(::StringW  args) ;

/// @brief Method Update, addr 0x5b247d8, size 0x4d0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WebsocketBroadcast, addr 0x5b267c4, size 0xc0, virtual false, abstract: false, final false
inline void WebsocketBroadcast(::StringW  sendmsg) ;

/// @brief Method Wsclient_OnClose, addr 0x5b27138, size 0xa4, virtual false, abstract: false, final false
inline void Wsclient_OnClose(::System::Object*  sender, ::System::EventArgs*  e) ;

/// @brief Method Wsclient_OnError, addr 0x5b27070, size 0xc8, virtual false, abstract: false, final false
inline void Wsclient_OnError(::System::Object*  sender, ::WebSocketSharp::ErrorEventArgs*  e) ;

/// @brief Method Wsclient_OnMessage, addr 0x5b26db8, size 0x2b0, virtual false, abstract: false, final false
inline void Wsclient_OnMessage(::System::Object*  sender, ::WebSocketSharp::MessageEventArgs*  e) ;

/// @brief Method Wsclient_OnOpen, addr 0x5b27068, size 0x4, virtual false, abstract: false, final false
inline void Wsclient_OnOpen(::System::Object*  sender, ::System::EventArgs*  e) ;

constexpr ::StringW const& __cordl_internal_get_TAG() const;

constexpr ::StringW& __cordl_internal_get_TAG() ;

constexpr bool const& __cordl_internal_get_allowEnteringTheLoop() const;

constexpr bool& __cordl_internal_get_allowEnteringTheLoop() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_co() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_co() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>* const& __cordl_internal_get_commandDefinitions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>*& __cordl_internal_get_commandDefinitions() ;

constexpr bool const& __cordl_internal_get_disableSynthesisDRMInUnityEditor() const;

constexpr bool& __cordl_internal_get_disableSynthesisDRMInUnityEditor() ;

constexpr bool const& __cordl_internal_get_enableLiveInteractions() const;

constexpr bool& __cordl_internal_get_enableLiveInteractions() ;

constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>* const& __cordl_internal_get_fallbackCommandProcessor() const;

constexpr ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>*& __cordl_internal_get_fallbackCommandProcessor() ;

constexpr bool const& __cordl_internal_get_manualPpmTracking() const;

constexpr bool& __cordl_internal_get_manualPpmTracking() ;

constexpr bool const& __cordl_internal_get_quitGame() const;

constexpr bool& __cordl_internal_get_quitGame() ;

constexpr int32_t const& __cordl_internal_get_successfulDrmChecks() const;

constexpr int32_t& __cordl_internal_get_successfulDrmChecks() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_svrInterfaceAndroid() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_svrInterfaceAndroid() ;

constexpr ::System::Action_1<::StringW>* const& __cordl_internal_get_synchronizationAction() const;

constexpr ::System::Action_1<::StringW>*& __cordl_internal_get_synchronizationAction() ;

constexpr bool const& __cordl_internal_get_synthesisCdnBuild() const;

constexpr bool& __cordl_internal_get_synthesisCdnBuild() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_synthesisFlags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_synthesisFlags() ;

constexpr ::StringW const& __cordl_internal_get_synthesisGameId() const;

constexpr ::StringW& __cordl_internal_get_synthesisGameId() ;

constexpr int32_t const& __cordl_internal_get_udpPort() const;

constexpr int32_t& __cordl_internal_get_udpPort() ;

constexpr ::UnityEngine::AndroidJavaObject* const& __cordl_internal_get_unityActivity() const;

constexpr ::UnityEngine::AndroidJavaObject*& __cordl_internal_get_unityActivity() ;

constexpr ::StringW const& __cordl_internal_get_webSocketClientAddress() const;

constexpr ::StringW& __cordl_internal_get_webSocketClientAddress() ;

constexpr double_t const& __cordl_internal_get_webSocketLastConnectionAttemptEpoch() const;

constexpr double_t& __cordl_internal_get_webSocketLastConnectionAttemptEpoch() ;

constexpr void __cordl_internal_set_TAG(::StringW  value) ;

constexpr void __cordl_internal_set_allowEnteringTheLoop(bool  value) ;

constexpr void __cordl_internal_set_co(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_commandDefinitions(::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>*  value) ;

constexpr void __cordl_internal_set_disableSynthesisDRMInUnityEditor(bool  value) ;

constexpr void __cordl_internal_set_enableLiveInteractions(bool  value) ;

constexpr void __cordl_internal_set_fallbackCommandProcessor(::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>*  value) ;

constexpr void __cordl_internal_set_manualPpmTracking(bool  value) ;

constexpr void __cordl_internal_set_quitGame(bool  value) ;

constexpr void __cordl_internal_set_successfulDrmChecks(int32_t  value) ;

constexpr void __cordl_internal_set_svrInterfaceAndroid(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set_synchronizationAction(::System::Action_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_synthesisCdnBuild(bool  value) ;

constexpr void __cordl_internal_set_synthesisFlags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_synthesisGameId(::StringW  value) ;

constexpr void __cordl_internal_set_udpPort(int32_t  value) ;

constexpr void __cordl_internal_set_unityActivity(::UnityEngine::AndroidJavaObject*  value) ;

constexpr void __cordl_internal_set_webSocketClientAddress(::StringW  value) ;

constexpr void __cordl_internal_set_webSocketLastConnectionAttemptEpoch(double_t  value) ;

/// @brief Method .ctor, addr 0x5b280cc, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method excludeFromDefaultBilling, addr 0x5b27874, size 0x170, virtual false, abstract: false, final false
inline void excludeFromDefaultBilling() ;

static inline ::UnityW<::GlobalNamespace::SynthesisArcadeObject> getStaticF__instance() ;

static inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>* getStaticF_udpQueue() ;

static inline ::WebSocketSharp::WebSocket* getStaticF_wsclient() ;

/// @brief Method get_Instance, addr 0x5b24168, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::SynthesisArcadeObject> get_Instance() ;

/// @brief Method onWsSend, addr 0x5b2706c, size 0x4, virtual false, abstract: false, final false
static inline void onWsSend(bool  status) ;

/// @brief Method processLiveCommand, addr 0x5b24498, size 0x1cc, virtual false, abstract: false, final false
inline void processLiveCommand(::StringW  interactionname, ::StringW  args) ;

/// @brief Method processLiveCommand, addr 0x5b243cc, size 0xcc, virtual false, abstract: false, final false
inline void processLiveCommand(::StringW  message) ;

/// @brief Method processUnknownLiveCommand, addr 0x5b2466c, size 0xb4, virtual false, abstract: false, final false
inline void processUnknownLiveCommand(::StringW  command, ::StringW  args) ;

/// @brief Method resetBillingSession, addr 0x5b27464, size 0x16c, virtual false, abstract: false, final false
inline bool resetBillingSession() ;

/// @brief Method sessionSecondsLeft, addr 0x5b27380, size 0xe4, virtual false, abstract: false, final false
inline int32_t sessionSecondsLeft() ;

/// @brief Method setEngineData, addr 0x5b275d0, size 0x2a4, virtual false, abstract: false, final false
inline void setEngineData(::StringW  _key, ::StringW  _value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::SynthesisArcadeObject>  value) ;

static inline void setStaticF_udpQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::SynthesisUdpCommand>*  value) ;

static inline void setStaticF_wsclient(::WebSocketSharp::WebSocket*  value) ;

/// @brief Method startManualPpmTracking, addr 0x5b279e4, size 0x23c, virtual false, abstract: false, final false
inline bool startManualPpmTracking() ;

/// @brief Method stopManualPpmTracking, addr 0x5b27c20, size 0x188, virtual false, abstract: false, final false
inline bool stopManualPpmTracking() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisArcadeObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisArcadeObject(SynthesisArcadeObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisArcadeObject(SynthesisArcadeObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3632};

/// @brief Field TAG, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TAG;

/// @brief Field co, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___co;

/// @brief Field synthesisGameId, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___synthesisGameId;

/// @brief Field synthesisCdnBuild, offset: 0x38, size: 0x1, def value: None
 bool  ___synthesisCdnBuild;

/// @brief Field disableSynthesisDRMInUnityEditor, offset: 0x39, size: 0x1, def value: None
 bool  ___disableSynthesisDRMInUnityEditor;

/// @brief Field quitGame, offset: 0x3a, size: 0x1, def value: None
 bool  ___quitGame;

/// @brief Field manualPpmTracking, offset: 0x3b, size: 0x1, def value: None
 bool  ___manualPpmTracking;

/// @brief Field webSocketClientAddress, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___webSocketClientAddress;

/// @brief Field webSocketLastConnectionAttemptEpoch, offset: 0x48, size: 0x8, def value: None
 double_t  ___webSocketLastConnectionAttemptEpoch;

/// @brief Field synchronizationAction, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::StringW>*  ___synchronizationAction;

/// @brief Field synthesisFlags, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___synthesisFlags;

/// @brief Field successfulDrmChecks, offset: 0x60, size: 0x4, def value: None
 int32_t  ___successfulDrmChecks;

/// @brief Field enableLiveInteractions, offset: 0x64, size: 0x1, def value: None
 bool  ___enableLiveInteractions;

/// [Range(1000, 65535)]
/// @brief Field udpPort, offset: 0x68, size: 0x4, def value: None
 int32_t  ___udpPort;

/// @brief Field commandDefinitions, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SynthesisUdpCommand>*  ___commandDefinitions;

/// @brief Field fallbackCommandProcessor, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_2<::StringW,::StringW>*  ___fallbackCommandProcessor;

/// @brief Field svrInterfaceAndroid, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___svrInterfaceAndroid;

/// @brief Field unityActivity, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::AndroidJavaObject*  ___unityActivity;

/// @brief Field allowEnteringTheLoop, offset: 0x90, size: 0x1, def value: None
 bool  ___allowEnteringTheLoop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___TAG) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___co) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___synthesisGameId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___synthesisCdnBuild) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___disableSynthesisDRMInUnityEditor) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___quitGame) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___manualPpmTracking) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___webSocketClientAddress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___webSocketLastConnectionAttemptEpoch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___synchronizationAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___synthesisFlags) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___successfulDrmChecks) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___enableLiveInteractions) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___udpPort) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___commandDefinitions) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___fallbackCommandProcessor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___svrInterfaceAndroid) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___unityActivity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject, ___allowEnteringTheLoop) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisArcadeObject) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisArcadeObject/<EnableLicensingCheckTask>d__43
class CORDL_TYPE SynthesisArcadeObject__EnableLicensingCheckTask_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::SynthesisArcadeObject>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5b288a8, size 0xa84, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5b2932c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5b29334, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5b2936c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5b288a4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::SynthesisArcadeObject> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::SynthesisArcadeObject>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::SynthesisArcadeObject>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5b271dc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisArcadeObject__EnableLicensingCheckTask_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject__EnableLicensingCheckTask_d__43", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisArcadeObject__EnableLicensingCheckTask_d__43(SynthesisArcadeObject__EnableLicensingCheckTask_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject__EnableLicensingCheckTask_d__43", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisArcadeObject__EnableLicensingCheckTask_d__43(SynthesisArcadeObject__EnableLicensingCheckTask_d__43 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3631};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SynthesisArcadeObject>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisArcadeObject__EnableLicensingCheckTask_d__43) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisArcadeObject/<>c__DisplayClass33_0
class CORDL_TYPE SynthesisArcadeObject___c__DisplayClass33_0 : public ::System::Object {
public:
// Declarations
/// @brief Field svrColumnsManager, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_svrColumnsManager, put=__cordl_internal_set_svrColumnsManager)) ::UnityW<::GlobalNamespace::SynthesisColumns>  svrColumnsManager;

static inline ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0* New_ctor() ;

/// @brief Method <Start>b__0, addr 0x5b2867c, size 0x228, virtual false, abstract: false, final false
inline void _Start_b__0(::StringW  json) ;

constexpr ::UnityW<::GlobalNamespace::SynthesisColumns> const& __cordl_internal_get_svrColumnsManager() const;

constexpr ::UnityW<::GlobalNamespace::SynthesisColumns>& __cordl_internal_get_svrColumnsManager() ;

constexpr void __cordl_internal_set_svrColumnsManager(::UnityW<::GlobalNamespace::SynthesisColumns>  value) ;

/// @brief Method .ctor, addr 0x5b25de4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisArcadeObject___c__DisplayClass33_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject___c__DisplayClass33_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisArcadeObject___c__DisplayClass33_0(SynthesisArcadeObject___c__DisplayClass33_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject___c__DisplayClass33_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisArcadeObject___c__DisplayClass33_0(SynthesisArcadeObject___c__DisplayClass33_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3630};

/// @brief Field svrColumnsManager, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SynthesisColumns>  ___svrColumnsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0, ___svrColumnsManager) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass33_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisArcadeObject/<>c__DisplayClass23_0
class CORDL_TYPE SynthesisArcadeObject___c__DisplayClass23_0 : public ::System::Object {
public:
// Declarations
/// @brief Field args, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_args, put=__cordl_internal_set_args)) ::StringW  args;

/// @brief Field interactionname, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionname, put=__cordl_internal_set_interactionname)) ::StringW  interactionname;

static inline ::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_args() const;

constexpr ::StringW& __cordl_internal_get_args() ;

constexpr ::StringW const& __cordl_internal_get_interactionname() const;

constexpr ::StringW& __cordl_internal_get_interactionname() ;

constexpr void __cordl_internal_set_args(::StringW  value) ;

constexpr void __cordl_internal_set_interactionname(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b24664, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <processLiveCommand>b__0, addr 0x5b28588, size 0x14, virtual false, abstract: false, final false
inline bool _processLiveCommand_b__0(::GlobalNamespace::SynthesisUdpCommand  el) ;

/// @brief Method <processLiveCommand>b__1, addr 0x5b2859c, size 0xe0, virtual false, abstract: false, final false
inline void _processLiveCommand_b__1(::GlobalNamespace::SynthesisUdpCommand  cmd) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisArcadeObject___c__DisplayClass23_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject___c__DisplayClass23_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisArcadeObject___c__DisplayClass23_0(SynthesisArcadeObject___c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject___c__DisplayClass23_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisArcadeObject___c__DisplayClass23_0(SynthesisArcadeObject___c__DisplayClass23_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3629};

/// @brief Field interactionname, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___interactionname;

/// @brief Field args, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___args;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0, ___interactionname) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0, ___args) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisArcadeObject___c__DisplayClass23_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.AndroidJavaProxy
namespace GlobalNamespace {
// Is value type: false
// CS Name: SynthesisArcadeObject/SynthesisCallbacks
class CORDL_TYPE SynthesisArcadeObject_SynthesisCallbacks : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
using DRM_STATUS = ::GlobalNamespace::SynthesisCallbacks_SynthesisArcadeObject_DRM_STATUS;

/// @brief Field TAG, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TAG, put=__cordl_internal_set_TAG)) ::StringW  TAG;

/// @brief Method InitCallbackResponse, addr 0x5b28338, size 0x1e8, virtual false, abstract: false, final false
inline void InitCallbackResponse(::StringW  jsonString) ;

static inline ::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks* New_ctor() ;

/// @brief Method ReceiveCommands, addr 0x5b28520, size 0x68, virtual false, abstract: false, final false
inline void ReceiveCommands(::StringW  message) ;

constexpr ::StringW const& __cordl_internal_get_TAG() const;

constexpr ::StringW& __cordl_internal_get_TAG() ;

constexpr void __cordl_internal_set_TAG(::StringW  value) ;

/// @brief Method .ctor, addr 0x5b2829c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SynthesisArcadeObject_SynthesisCallbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject_SynthesisCallbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SynthesisArcadeObject_SynthesisCallbacks(SynthesisArcadeObject_SynthesisCallbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SynthesisArcadeObject_SynthesisCallbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SynthesisArcadeObject_SynthesisCallbacks(SynthesisArcadeObject_SynthesisCallbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3628};

/// @brief Field TAG, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TAG;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks, ___TAG) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SynthesisArcadeObject_SynthesisCallbacks) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
