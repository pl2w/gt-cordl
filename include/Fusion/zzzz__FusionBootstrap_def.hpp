#pragma once
// IWYU pragma private; include "Fusion/FusionBootstrap.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "Fusion/zzzz__FusionBootstrap_Stage_def.hpp"
#include "Fusion/zzzz__FusionBootstrap_StartModes_def.hpp"
#include "Fusion/zzzz__FusionMppmCommand_def.hpp"
#include "Fusion/zzzz__GameMode_def.hpp"
#include "Fusion/zzzz__SceneRef_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionBootstrap)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion {
class FusionBootstrap_StartCommand;
}
namespace Fusion {
class FusionBootstrap__StartClients_d__63;
}
namespace Fusion {
class FusionBootstrap__StartWithClients_d__58;
}
namespace Fusion {
class FusionBootstrap__StartWithMppmVirtualInstance_d__59;
}
namespace Fusion {
class FusionBootstrap___c;
}
namespace Fusion {
struct GameMode;
}
namespace Fusion {
class INetworkRunnerUpdater;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct SceneRef;
}
namespace GlobalNamespace {
struct FusionBootstrap_Stage;
}
namespace GlobalNamespace {
struct FusionBootstrap_StartModes;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
class FusionBootstrap;
}
namespace Fusion {
class FusionBootstrap_StartCommand;
}
namespace Fusion {
class FusionBootstrap__StartClients_d__63;
}
namespace Fusion {
class FusionBootstrap__StartWithClients_d__58;
}
namespace Fusion {
class FusionBootstrap__StartWithMppmVirtualInstance_d__59;
}
namespace Fusion {
class FusionBootstrap___c;
}
// Write type traits
MARK_REF_T(::Fusion::FusionBootstrap*);
MARK_REF_T(::Fusion::FusionBootstrap_StartCommand*);
MARK_REF_T(::Fusion::FusionBootstrap__StartClients_d__63*);
MARK_REF_T(::Fusion::FusionBootstrap__StartWithClients_d__58*);
MARK_REF_T(::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*);
MARK_REF_T(::Fusion::FusionBootstrap___c*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrap*, "Fusion", "FusionBootstrap");
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrap_StartCommand*, "Fusion", "FusionBootstrap/StartCommand");
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrap__StartClients_d__63*, "Fusion", "FusionBootstrap/<StartClients>d__63");
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrap__StartWithClients_d__58*, "Fusion", "FusionBootstrap/<StartWithClients>d__58");
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59*, "Fusion", "FusionBootstrap/<StartWithMppmVirtualInstance>d__59");
DEFINE_IL2CPP_CLASS(::Fusion::FusionBootstrap___c*, "Fusion", "FusionBootstrap/<>c");
// [DisallowMultipleComponent]
// [AddComponentMenu("Fusion/Fusion Bootstrap")]
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)7)]
// Dependencies Fusion.Behaviour, Fusion.FusionBootstrap::Stage, Fusion.FusionBootstrap::StartModes, Fusion.GameMode
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrap
class CORDL_TYPE FusionBootstrap : public ::Fusion::Behaviour {
public:
// Declarations
using StartCommand = ::Fusion::FusionBootstrap_StartCommand;

using _StartClients_d__63 = ::Fusion::FusionBootstrap__StartClients_d__63;

using _StartWithClients_d__58 = ::Fusion::FusionBootstrap__StartWithClients_d__58;

using _StartWithMppmVirtualInstance_d__59 = ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59;

using __c = ::Fusion::FusionBootstrap___c;

using Stage = ::GlobalNamespace::FusionBootstrap_Stage;

using StartModes = ::GlobalNamespace::FusionBootstrap_StartModes;

/// @brief Field AutoClients, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_AutoClients, put=__cordl_internal_set_AutoClients)) int32_t  AutoClients;

/// @brief Field AutoConnectVirtualInstances, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoConnectVirtualInstances, put=__cordl_internal_set_AutoConnectVirtualInstances)) bool  AutoConnectVirtualInstances;

/// @brief Field AutoHideGUI, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoHideGUI, put=__cordl_internal_set_AutoHideGUI)) bool  AutoHideGUI;

/// @brief Field AutoStartAs, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_AutoStartAs, put=__cordl_internal_set_AutoStartAs)) ::Fusion::GameMode  AutoStartAs;

 __declspec(property(get=get_CanAddClients)) bool  CanAddClients;

 __declspec(property(get=get_CanAddSharedClients)) bool  CanAddSharedClients;

/// @brief Field ClientStartDelay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClientStartDelay, put=__cordl_internal_set_ClientStartDelay)) float_t  ClientStartDelay;

 __declspec(property(get=get_CurrentServerMode, put=set_CurrentServerMode)) ::Fusion::GameMode  CurrentServerMode;

 __declspec(property(get=get_CurrentStage, put=set_CurrentStage)) ::GlobalNamespace::FusionBootstrap_Stage  CurrentStage;

/// @brief Field DefaultRoomName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultRoomName, put=__cordl_internal_set_DefaultRoomName)) ::StringW  DefaultRoomName;

/// @brief Field InitialScenePath, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_InitialScenePath, put=__cordl_internal_set_InitialScenePath)) ::StringW  InitialScenePath;

 __declspec(property(get=get_IsShutdown)) bool  IsShutdown;

 __declspec(property(get=get_IsShutdownAndMultiPeer)) bool  IsShutdownAndMultiPeer;

 __declspec(property(get=get_LastCreatedClientIndex, put=set_LastCreatedClientIndex)) int32_t  LastCreatedClientIndex;

/// @brief Field RunnerPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_RunnerPrefab, put=__cordl_internal_set_RunnerPrefab)) ::UnityW<::Fusion::NetworkRunner>  RunnerPrefab;

/// @brief Field ServerPort, offset 0x3c, size 0x2 
 __declspec(property(get=__cordl_internal_get_ServerPort, put=__cordl_internal_set_ServerPort)) uint16_t  ServerPort;

 __declspec(property(get=get_ShouldShowGUI)) bool  ShouldShowGUI;

 __declspec(property(get=get_ShowAutoClients)) bool  ShowAutoClients;

/// @brief Field StartMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartMode, put=__cordl_internal_set_StartMode)) ::GlobalNamespace::FusionBootstrap_StartModes  StartMode;

 __declspec(property(get=get_UsingMultiPeerMode)) bool  UsingMultiPeerMode;

/// @brief Field VirtualInstanceConnectDelay, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_VirtualInstanceConnectDelay, put=__cordl_internal_set_VirtualInstanceConnectDelay)) float_t  VirtualInstanceConnectDelay;

/// @brief Field <CurrentServerMode>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentServerMode_k__BackingField, put=__cordl_internal_set__CurrentServerMode_k__BackingField)) ::Fusion::GameMode  _CurrentServerMode_k__BackingField;

/// @brief Field <LastCreatedClientIndex>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastCreatedClientIndex_k__BackingField, put=__cordl_internal_set__LastCreatedClientIndex_k__BackingField)) int32_t  _LastCreatedClientIndex_k__BackingField;

/// @brief Field _currentStage, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentStage, put=__cordl_internal_set__currentStage)) ::GlobalNamespace::FusionBootstrap_Stage  _currentStage;

/// @brief Field _initialScenePath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__initialScenePath, put=setStaticF__initialScenePath)) ::StringW  _initialScenePath;

/// @brief Field _server, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__server, put=__cordl_internal_set__server)) ::UnityW<::Fusion::NetworkRunner>  _server;

/// @brief Method AddClient, addr 0x60eb3ec, size 0x1bc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* AddClient(::Fusion::GameMode  serverMode, ::Fusion::SceneRef  sceneRef) ;

/// [EditorButton("Add Additional Client", (Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("CanAddClients", Hide = true)]
/// @brief Method AddClient, addr 0x60eb3ac, size 0x40, virtual false, abstract: false, final false
inline void AddClient() ;

/// [EditorButton("Add Additional Shared Client", (Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("CanAddSharedClients", Hide = true)]
/// @brief Method AddSharedClient, addr 0x60eb5a8, size 0x40, virtual false, abstract: false, final false
inline void AddSharedClient() ;

/// @brief Method InitializeNetworkRunner, addr 0x60eb6a0, size 0x380, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitializeNetworkRunner(::Fusion::NetworkRunner*  runner, ::Fusion::GameMode  gameMode, ::Fusion::Sockets::NetAddress  address, ::Fusion::SceneRef  scene, ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  onGameStarted, ::Fusion::INetworkRunnerUpdater*  updater) ;

static inline ::Fusion::FusionBootstrap* New_ctor() ;

/// @brief Method ShowUserInterface, addr 0x60ea980, size 0xac, virtual false, abstract: false, final false
inline void ShowUserInterface() ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("CurrentStage", Hide = true)]
/// @brief Method Shutdown, addr 0x60eacfc, size 0x4, virtual false, abstract: false, final false
inline void Shutdown() ;

/// @brief Method ShutdownAll, addr 0x60ead00, size 0x2cc, virtual false, abstract: false, final false
inline void ShutdownAll() ;

/// @brief Method Start, addr 0x60ea428, size 0x384, virtual true, abstract: false, final false
inline void Start() ;

/// [EditorButton("Start Auto Host Or Client", (Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartAutoClient, addr 0x60eaba8, size 0x54, virtual true, abstract: false, final false
inline void StartAutoClient() ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartClient, addr 0x60eab28, size 0x2c, virtual true, abstract: false, final false
inline void StartClient() ;

/// [IteratorStateMachine(typeof(Fusion.FusionBootstrap::<StartClients>d__63))]
/// @brief Method StartClients, addr 0x60eb5e8, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartClients(int32_t  clientCount, ::Fusion::GameMode  serverMode, ::Fusion::SceneRef  sceneRef) ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartHost, addr 0x60eaad4, size 0x54, virtual true, abstract: false, final false
inline void StartHost() ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartHostPlusClients, addr 0x60eac10, size 0x8, virtual false, abstract: false, final false
inline void StartHostPlusClients() ;

/// @brief Method StartHostPlusClients, addr 0x60eac18, size 0xe4, virtual false, abstract: false, final false
inline void StartHostPlusClients(int32_t  clientCount) ;

/// @brief Method StartMultipleAutoClients, addr 0x60eb278, size 0xe4, virtual false, abstract: false, final false
inline void StartMultipleAutoClients(int32_t  clientCount) ;

/// @brief Method StartMultipleClients, addr 0x60eb0b0, size 0xe4, virtual false, abstract: false, final false
inline void StartMultipleClients(int32_t  clientCount) ;

/// @brief Method StartMultipleSharedClients, addr 0x60eb194, size 0xe4, virtual false, abstract: false, final false
inline void StartMultipleSharedClients(int32_t  clientCount) ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartServer, addr 0x60eaa80, size 0x54, virtual true, abstract: false, final false
inline void StartServer() ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartServerPlusClients, addr 0x60eabfc, size 0x14, virtual true, abstract: false, final false
inline void StartServerPlusClients() ;

/// @brief Method StartServerPlusClients, addr 0x60eafcc, size 0xe4, virtual true, abstract: false, final false
inline void StartServerPlusClients(int32_t  clientCount) ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartSharedClient, addr 0x60eab54, size 0x54, virtual true, abstract: false, final false
inline void StartSharedClient() ;

/// [EditorButton((Fusion.EditorButtonVisibility)0, 0, false)]
/// [DrawIf("IsShutdown", Hide = true)]
/// @brief Method StartSinglePlayer, addr 0x60eaa2c, size 0x54, virtual true, abstract: false, final false
inline void StartSinglePlayer() ;

/// [IteratorStateMachine(typeof(Fusion.FusionBootstrap::<StartWithClients>d__58))]
/// @brief Method StartWithClients, addr 0x60ea8f0, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartWithClients(::Fusion::GameMode  serverMode, ::Fusion::SceneRef  sceneRef, int32_t  clientCount) ;

/// [IteratorStateMachine(typeof(Fusion.FusionBootstrap::<StartWithMppmVirtualInstance>d__59))]
/// @brief Method StartWithMppmVirtualInstance, addr 0x60ea7ac, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* StartWithMppmVirtualInstance() ;

/// @brief Method TryGetSceneRef, addr 0x60ea818, size 0xd8, virtual false, abstract: false, final false
inline bool TryGetSceneRef(::by_ref<::Fusion::SceneRef>  sceneRef) ;

constexpr int32_t const& __cordl_internal_get_AutoClients() const;

constexpr int32_t& __cordl_internal_get_AutoClients() ;

constexpr bool const& __cordl_internal_get_AutoConnectVirtualInstances() const;

constexpr bool& __cordl_internal_get_AutoConnectVirtualInstances() ;

constexpr bool const& __cordl_internal_get_AutoHideGUI() const;

constexpr bool& __cordl_internal_get_AutoHideGUI() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get_AutoStartAs() const;

constexpr ::Fusion::GameMode& __cordl_internal_get_AutoStartAs() ;

constexpr float_t const& __cordl_internal_get_ClientStartDelay() const;

constexpr float_t& __cordl_internal_get_ClientStartDelay() ;

constexpr ::StringW const& __cordl_internal_get_DefaultRoomName() const;

constexpr ::StringW& __cordl_internal_get_DefaultRoomName() ;

constexpr ::StringW const& __cordl_internal_get_InitialScenePath() const;

constexpr ::StringW& __cordl_internal_get_InitialScenePath() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get_RunnerPrefab() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get_RunnerPrefab() ;

constexpr uint16_t const& __cordl_internal_get_ServerPort() const;

constexpr uint16_t& __cordl_internal_get_ServerPort() ;

constexpr ::GlobalNamespace::FusionBootstrap_StartModes const& __cordl_internal_get_StartMode() const;

constexpr ::GlobalNamespace::FusionBootstrap_StartModes& __cordl_internal_get_StartMode() ;

constexpr float_t const& __cordl_internal_get_VirtualInstanceConnectDelay() const;

constexpr float_t& __cordl_internal_get_VirtualInstanceConnectDelay() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get__CurrentServerMode_k__BackingField() const;

constexpr ::Fusion::GameMode& __cordl_internal_get__CurrentServerMode_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LastCreatedClientIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastCreatedClientIndex_k__BackingField() ;

constexpr ::GlobalNamespace::FusionBootstrap_Stage const& __cordl_internal_get__currentStage() const;

constexpr ::GlobalNamespace::FusionBootstrap_Stage& __cordl_internal_get__currentStage() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__server() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__server() ;

constexpr void __cordl_internal_set_AutoClients(int32_t  value) ;

constexpr void __cordl_internal_set_AutoConnectVirtualInstances(bool  value) ;

constexpr void __cordl_internal_set_AutoHideGUI(bool  value) ;

constexpr void __cordl_internal_set_AutoStartAs(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set_ClientStartDelay(float_t  value) ;

constexpr void __cordl_internal_set_DefaultRoomName(::StringW  value) ;

constexpr void __cordl_internal_set_InitialScenePath(::StringW  value) ;

constexpr void __cordl_internal_set_RunnerPrefab(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_ServerPort(uint16_t  value) ;

constexpr void __cordl_internal_set_StartMode(::GlobalNamespace::FusionBootstrap_StartModes  value) ;

constexpr void __cordl_internal_set_VirtualInstanceConnectDelay(float_t  value) ;

constexpr void __cordl_internal_set__CurrentServerMode_k__BackingField(::Fusion::GameMode  value) ;

constexpr void __cordl_internal_set__LastCreatedClientIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__currentStage(::GlobalNamespace::FusionBootstrap_Stage  value) ;

constexpr void __cordl_internal_set__server(::UnityW<::Fusion::NetworkRunner>  value) ;

/// @brief Method .ctor, addr 0x60ebae4, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF__initialScenePath() ;

/// @brief Method get_CanAddClients, addr 0x60ea318, size 0x24, virtual false, abstract: false, final false
inline bool get_CanAddClients() ;

/// @brief Method get_CanAddSharedClients, addr 0x60ea33c, size 0x24, virtual false, abstract: false, final false
inline bool get_CanAddSharedClients() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentServerMode, addr 0x60ea308, size 0x8, virtual false, abstract: false, final false
inline ::Fusion::GameMode get_CurrentServerMode() ;

/// @brief Method get_CurrentStage, addr 0x60ea2e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::FusionBootstrap_Stage get_CurrentStage() ;

/// @brief Method get_IsMPPMEnabled, addr 0x60eba20, size 0x50, virtual false, abstract: false, final false
static inline bool get_IsMPPMEnabled() ;

/// @brief Method get_IsShutdown, addr 0x60ea360, size 0x10, virtual false, abstract: false, final false
inline bool get_IsShutdown() ;

/// @brief Method get_IsShutdownAndMultiPeer, addr 0x60ea370, size 0x38, virtual false, abstract: false, final false
inline bool get_IsShutdownAndMultiPeer() ;

/// [CompilerGenerated]
/// @brief Method get_LastCreatedClientIndex, addr 0x60ea2f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LastCreatedClientIndex() ;

/// @brief Method get_ShouldShowGUI, addr 0x60eba70, size 0x74, virtual false, abstract: false, final false
inline bool get_ShouldShowGUI() ;

/// @brief Method get_ShowAutoClients, addr 0x60ea3d0, size 0x58, virtual false, abstract: false, final false
inline bool get_ShowAutoClients() ;

/// @brief Method get_UsingMultiPeerMode, addr 0x60ea3a8, size 0x28, virtual false, abstract: false, final false
inline bool get_UsingMultiPeerMode() ;

static inline void setStaticF__initialScenePath(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentServerMode, addr 0x60ea310, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentServerMode(::Fusion::GameMode  value) ;

/// @brief Method set_CurrentStage, addr 0x60ea2f0, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentStage(::GlobalNamespace::FusionBootstrap_Stage  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastCreatedClientIndex, addr 0x60ea300, size 0x8, virtual false, abstract: false, final false
inline void set_LastCreatedClientIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionBootstrap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrap(FusionBootstrap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrap(FusionBootstrap const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23465};

/// [InlineHelp]
/// [WarnIf("RunnerPrefab", false, "No RunnerPrefab supplied. Will search for a NetworkRunner in the scene at startup.", (Fusion.CompareOperator)0)]
/// @brief Field RunnerPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ___RunnerPrefab;

/// [InlineHelp]
/// [WarnIf("StartMode", 2, "Start network by calling the methods StartHost(), StartServer(), StartClient(), StartHostPlusClients(), or StartServerPlusClients()", (Fusion.CompareOperator)0)]
/// @brief Field StartMode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::FusionBootstrap_StartModes  ___StartMode;

/// [InlineHelp]
/// [FormerlySerializedAs("Server")]
/// [DrawIf("StartMode", 1, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0, Hide = true)]
/// @brief Field AutoStartAs, offset: 0x2c, size: 0x4, def value: None
 ::Fusion::GameMode  ___AutoStartAs;

/// [InlineHelp]
/// [DrawIf("StartMode", 0, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0, Hide = true)]
/// @brief Field AutoHideGUI, offset: 0x30, size: 0x1, def value: None
 bool  ___AutoHideGUI;

/// [InlineHelp]
/// [DrawIf("ShowAutoClients", Hide = true)]
/// @brief Field AutoClients, offset: 0x34, size: 0x4, def value: None
 int32_t  ___AutoClients;

/// [InlineHelp]
/// @brief Field ClientStartDelay, offset: 0x38, size: 0x4, def value: None
 float_t  ___ClientStartDelay;

/// [InlineHelp]
/// @brief Field ServerPort, offset: 0x3c, size: 0x2, def value: None
 uint16_t  ___ServerPort;

/// [InlineHelp]
/// @brief Field DefaultRoomName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___DefaultRoomName;

/// @brief Field _server, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____server;

/// [InlineHelp]
/// [ScenePath]
/// @brief Field InitialScenePath, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___InitialScenePath;

/// [InlineHelp]
/// [SerializeField]
/// [ReadOnly]
/// @brief Field _currentStage, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::FusionBootstrap_Stage  ____currentStage;

/// [DrawIf("IsMPPMEnabled", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// [Header("Multiplayer Play Mode")]
/// @brief Field AutoConnectVirtualInstances, offset: 0x5c, size: 0x1, def value: None
 bool  ___AutoConnectVirtualInstances;

/// [DrawIf("IsMPPMEnabled", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field VirtualInstanceConnectDelay, offset: 0x60, size: 0x4, def value: None
 float_t  ___VirtualInstanceConnectDelay;

/// [CompilerGenerated]
/// @brief Field <LastCreatedClientIndex>k__BackingField, offset: 0x64, size: 0x4, def value: None
 int32_t  ____LastCreatedClientIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CurrentServerMode>k__BackingField, offset: 0x68, size: 0x4, def value: None
 ::Fusion::GameMode  ____CurrentServerMode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBootstrap, ___RunnerPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___StartMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___AutoStartAs) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___AutoHideGUI) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___AutoClients) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___ClientStartDelay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___ServerPort) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___DefaultRoomName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ____server) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___InitialScenePath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ____currentStage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___AutoConnectVirtualInstances) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ___VirtualInstanceConnectDelay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ____LastCreatedClientIndex_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap, ____CurrentServerMode_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBootstrap) == 0x70, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrap/<StartWithMppmVirtualInstance>d__59
class CORDL_TYPE FusionBootstrap__StartWithMppmVirtualInstance_d__59 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::FusionBootstrap>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60ec874, size 0xf8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x60ec96c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60ec974, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60ec9ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60ec870, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::FusionBootstrap> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::FusionBootstrap>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::FusionBootstrap>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x60eb384, size 0x28, virtual false, abstract: false, final false
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
constexpr FusionBootstrap__StartWithMppmVirtualInstance_d__59() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap__StartWithMppmVirtualInstance_d__59", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrap__StartWithMppmVirtualInstance_d__59(FusionBootstrap__StartWithMppmVirtualInstance_d__59 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap__StartWithMppmVirtualInstance_d__59", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrap__StartWithMppmVirtualInstance_d__59(FusionBootstrap__StartWithMppmVirtualInstance_d__59 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23464};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::FusionBootstrap>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBootstrap__StartWithMppmVirtualInstance_d__59) == 0x28, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.GameMode, Fusion.SceneRef, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrap/<StartWithClients>d__58
class CORDL_TYPE FusionBootstrap__StartWithClients_d__58 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::FusionBootstrap>  __4__this;

/// @brief Field <serverTask>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__serverTask_5__2, put=__cordl_internal_set__serverTask_5__2)) ::System::Threading::Tasks::Task*  _serverTask_5__2;

/// @brief Field clientCount, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientCount, put=__cordl_internal_set_clientCount)) int32_t  clientCount;

/// @brief Field sceneRef, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

/// @brief Field serverMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverMode, put=__cordl_internal_set_serverMode)) ::Fusion::GameMode  serverMode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60ebf40, size 0x8e8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::FusionBootstrap__StartWithClients_d__58* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x60ec828, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60ec830, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60ec868, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60ebf3c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::FusionBootstrap> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::FusionBootstrap>& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__serverTask_5__2() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__serverTask_5__2() ;

constexpr int32_t const& __cordl_internal_get_clientCount() const;

constexpr int32_t& __cordl_internal_get_clientCount() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get_serverMode() const;

constexpr ::Fusion::GameMode& __cordl_internal_get_serverMode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::FusionBootstrap>  value) ;

constexpr void __cordl_internal_set__serverTask_5__2(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set_clientCount(int32_t  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set_serverMode(::Fusion::GameMode  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x60eb35c, size 0x28, virtual false, abstract: false, final false
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
constexpr FusionBootstrap__StartWithClients_d__58() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap__StartWithClients_d__58", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrap__StartWithClients_d__58(FusionBootstrap__StartWithClients_d__58 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap__StartWithClients_d__58", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrap__StartWithClients_d__58(FusionBootstrap__StartWithClients_d__58 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23463};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::FusionBootstrap>  _____4__this;

/// @brief Field serverMode, offset: 0x28, size: 0x4, def value: None
 ::Fusion::GameMode  ___serverMode;

/// @brief Field clientCount, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___clientCount;

/// @brief Field sceneRef, offset: 0x30, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

/// @brief Field <serverTask>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____serverTask_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, ___serverMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, ___clientCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, ___sceneRef) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartWithClients_d__58, ____serverTask_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBootstrap__StartWithClients_d__58) == 0x40, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies Fusion.GameMode, Fusion.SceneRef, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrap/<StartClients>d__63
class CORDL_TYPE FusionBootstrap__StartClients_d__63 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::FusionBootstrap>  __4__this;

/// @brief Field <clientTasks>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientTasks_5__2, put=__cordl_internal_set__clientTasks_5__2)) ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  _clientTasks_5__2;

/// @brief Field <clientsStartTask>5__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__clientsStartTask_5__3, put=__cordl_internal_set__clientsStartTask_5__3)) ::System::Threading::Tasks::Task*  _clientsStartTask_5__3;

/// @brief Field <i>5__4, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__4, put=__cordl_internal_set__i_5__4)) int32_t  _i_5__4;

/// @brief Field clientCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_clientCount, put=__cordl_internal_set_clientCount)) int32_t  clientCount;

/// @brief Field sceneRef, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneRef, put=__cordl_internal_set_sceneRef)) ::Fusion::SceneRef  sceneRef;

/// @brief Field serverMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_serverMode, put=__cordl_internal_set_serverMode)) ::Fusion::GameMode  serverMode;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x60ebc24, size 0x2d0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Fusion::FusionBootstrap__StartClients_d__63* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x60ebef4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x60ebefc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x60ebf34, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x60ebc20, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Fusion::FusionBootstrap> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::FusionBootstrap>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* const& __cordl_internal_get__clientTasks_5__2() const;

constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& __cordl_internal_get__clientTasks_5__2() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__clientsStartTask_5__3() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__clientsStartTask_5__3() ;

constexpr int32_t const& __cordl_internal_get__i_5__4() const;

constexpr int32_t& __cordl_internal_get__i_5__4() ;

constexpr int32_t const& __cordl_internal_get_clientCount() const;

constexpr int32_t& __cordl_internal_get_clientCount() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_sceneRef() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_sceneRef() ;

constexpr ::Fusion::GameMode const& __cordl_internal_get_serverMode() const;

constexpr ::Fusion::GameMode& __cordl_internal_get_serverMode() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::FusionBootstrap>  value) ;

constexpr void __cordl_internal_set__clientTasks_5__2(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  value) ;

constexpr void __cordl_internal_set__clientsStartTask_5__3(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__i_5__4(int32_t  value) ;

constexpr void __cordl_internal_set_clientCount(int32_t  value) ;

constexpr void __cordl_internal_set_sceneRef(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set_serverMode(::Fusion::GameMode  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x60eb678, size 0x28, virtual false, abstract: false, final false
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
constexpr FusionBootstrap__StartClients_d__63() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap__StartClients_d__63", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrap__StartClients_d__63(FusionBootstrap__StartClients_d__63 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap__StartClients_d__63", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrap__StartClients_d__63(FusionBootstrap__StartClients_d__63 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23462};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::FusionBootstrap>  _____4__this;

/// @brief Field serverMode, offset: 0x28, size: 0x4, def value: None
 ::Fusion::GameMode  ___serverMode;

/// @brief Field sceneRef, offset: 0x2c, size: 0x4, def value: None
 ::Fusion::SceneRef  ___sceneRef;

/// @brief Field clientCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___clientCount;

/// @brief Field <clientTasks>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*  ____clientTasks_5__2;

/// @brief Field <clientsStartTask>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____clientsStartTask_5__3;

/// @brief Field <i>5__4, offset: 0x48, size: 0x4, def value: None
 int32_t  ____i_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, ___serverMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, ___sceneRef) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, ___clientCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, ____clientTasks_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, ____clientsStartTask_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap__StartClients_d__63, ____i_5__4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBootstrap__StartClients_d__63) == 0x50, "Size mismatch!");

} // namespace end def Fusion
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrap/<>c
class CORDL_TYPE FusionBootstrap___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::FusionBootstrap___c*  __9;

/// @brief Field <>9__58_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_0, put=setStaticF___9__58_0)) ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  __9__58_0;

static inline ::Fusion::FusionBootstrap___c* New_ctor() ;

/// @brief Method <StartWithClients>b__58_0, addr 0x60ebc1c, size 0x4, virtual false, abstract: false, final false
inline void _StartWithClients_b__58_0(::Fusion::NetworkRunner*  runner) ;

/// @brief Method .ctor, addr 0x60ebc14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::FusionBootstrap___c* getStaticF___9() ;

static inline ::System::Action_1<::UnityW<::Fusion::NetworkRunner>>* getStaticF___9__58_0() ;

static inline void setStaticF___9(::Fusion::FusionBootstrap___c*  value) ;

static inline void setStaticF___9__58_0(::System::Action_1<::UnityW<::Fusion::NetworkRunner>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionBootstrap___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrap___c(FusionBootstrap___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrap___c(FusionBootstrap___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23461};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionBootstrap___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.FusionMppmCommand, Fusion.SceneRef
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionBootstrap/StartCommand
class CORDL_TYPE FusionBootstrap_StartCommand : public ::Fusion::FusionMppmCommand {
public:
// Declarations
/// @brief Field ClientCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ClientCount, put=__cordl_internal_set_ClientCount)) int32_t  ClientCount;

/// @brief Field InitialScene, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_InitialScene, put=__cordl_internal_set_InitialScene)) ::Fusion::SceneRef  InitialScene;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Fusion::FusionBootstrap_StartCommand*  Instance;

/// @brief Field IsShared, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsShared, put=__cordl_internal_set_IsShared)) bool  IsShared;

/// @brief Field RoomName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_RoomName, put=__cordl_internal_set_RoomName)) ::StringW  RoomName;

/// @brief Method Execute, addr 0x60ebb4c, size 0x58, virtual true, abstract: false, final false
inline void Execute() ;

static inline ::Fusion::FusionBootstrap_StartCommand* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_ClientCount() const;

constexpr int32_t& __cordl_internal_get_ClientCount() ;

constexpr ::Fusion::SceneRef const& __cordl_internal_get_InitialScene() const;

constexpr ::Fusion::SceneRef& __cordl_internal_get_InitialScene() ;

constexpr bool const& __cordl_internal_get_IsShared() const;

constexpr bool& __cordl_internal_get_IsShared() ;

constexpr ::StringW const& __cordl_internal_get_RoomName() const;

constexpr ::StringW& __cordl_internal_get_RoomName() ;

constexpr void __cordl_internal_set_ClientCount(int32_t  value) ;

constexpr void __cordl_internal_set_InitialScene(::Fusion::SceneRef  value) ;

constexpr void __cordl_internal_set_IsShared(bool  value) ;

constexpr void __cordl_internal_set_RoomName(::StringW  value) ;

/// @brief Method .ctor, addr 0x60ebba4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::FusionBootstrap_StartCommand* getStaticF_Instance() ;

static inline void setStaticF_Instance(::Fusion::FusionBootstrap_StartCommand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionBootstrap_StartCommand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap_StartCommand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionBootstrap_StartCommand(FusionBootstrap_StartCommand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionBootstrap_StartCommand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionBootstrap_StartCommand(FusionBootstrap_StartCommand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23460};

/// @brief Field RoomName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___RoomName;

/// @brief Field InitialScene, offset: 0x18, size: 0x4, def value: None
 ::Fusion::SceneRef  ___InitialScene;

/// @brief Field ClientCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___ClientCount;

/// @brief Field IsShared, offset: 0x20, size: 0x1, def value: None
 bool  ___IsShared;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::FusionBootstrap_StartCommand, ___RoomName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap_StartCommand, ___InitialScene) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap_StartCommand, ___ClientCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::FusionBootstrap_StartCommand, ___IsShared) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Fusion::FusionBootstrap_StartCommand) == 0x28, "Size mismatch!");

} // namespace end def Fusion
