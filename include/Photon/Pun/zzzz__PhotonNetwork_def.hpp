#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonNetwork.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__ConnectMethod_def.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_RaiseEventBatch_def.hpp"
#include "Photon/Pun/zzzz__PunLogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonNetwork)
namespace ExitGames::Client::Photon {
class EventData;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
template<typename K,typename V>
class NonAllocDictionary_2;
}
namespace ExitGames::Client::Photon {
class OperationResponse;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace GlobalNamespace {
template<typename K,typename V>
struct NonAllocDictionary_2_ValueIterator;
}
namespace GlobalNamespace {
struct PhotonNetwork_RaiseEventBatch;
}
namespace Photon::Pun {
class IPunPrefabPool;
}
namespace Photon::Pun {
struct InstantiateParameters;
}
namespace Photon::Pun {
class PhotonNetwork_SerializeViewBatch;
}
namespace Photon::Pun {
class PhotonNetwork___c;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace Photon::Pun {
class PhotonView;
}
namespace Photon::Pun {
struct RpcTarget;
}
namespace Photon::Pun {
class ServerSettings;
}
namespace Photon::Realtime {
class AppSettings;
}
namespace Photon::Realtime {
class AuthenticationValues;
}
namespace Photon::Realtime {
struct ClientState;
}
namespace Photon::Realtime {
class IConnectionCallbacks;
}
namespace Photon::Realtime {
class LoadBalancingClient;
}
namespace Photon::Realtime {
struct MatchmakingMode;
}
namespace Photon::Realtime {
struct PhotonPortDefinition;
}
namespace Photon::Realtime {
class Player;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace Photon::Realtime {
class RegionHandler;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class Room;
}
namespace Photon::Realtime {
struct ServerConnection;
}
namespace Photon::Realtime {
class TypedLobby;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Photon::Pun {
class PhotonNetwork;
}
namespace Photon::Pun {
class PhotonNetwork_SerializeViewBatch;
}
namespace Photon::Pun {
class PhotonNetwork___c;
}
// Write type traits
MARK_REF_T(::Photon::Pun::PhotonNetwork*);
MARK_REF_T(::Photon::Pun::PhotonNetwork_SerializeViewBatch*);
MARK_REF_T(::Photon::Pun::PhotonNetwork___c*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonNetwork*, "Photon.Pun", "PhotonNetwork");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonNetwork_SerializeViewBatch*, "Photon.Pun", "PhotonNetwork/SerializeViewBatch");
DEFINE_IL2CPP_CLASS(::Photon::Pun::PhotonNetwork___c*, "Photon.Pun", "PhotonNetwork/<>c");
// Dependencies Photon.Pun.ConnectMethod, Photon.Pun.PunLogLevel, System.Object, System.Type
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonNetwork
class CORDL_TYPE PhotonNetwork : public ::System::Object {
public:
// Declarations
using RaiseEventBatch = ::GlobalNamespace::PhotonNetwork_RaiseEventBatch;

using SerializeViewBatch = ::Photon::Pun::PhotonNetwork_SerializeViewBatch;

using __c = ::Photon::Pun::PhotonNetwork___c;

/// @brief Field ConnectMethod, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ConnectMethod, put=setStaticF_ConnectMethod)) ::Photon::Pun::ConnectMethod  ConnectMethod;

/// @brief Field EnableCloseConnection, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_EnableCloseConnection, put=setStaticF_EnableCloseConnection)) bool  EnableCloseConnection;

/// @brief Field InternalEventError, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalEventError, put=setStaticF_InternalEventError)) ::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  InternalEventError;

/// @brief Field LogLevel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LogLevel, put=setStaticF_LogLevel)) ::Photon::Pun::PunLogLevel  LogLevel;

/// @brief Field MAX_VIEW_IDS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_VIEW_IDS, put=setStaticF_MAX_VIEW_IDS)) int32_t  MAX_VIEW_IDS;

/// @brief Field MinimalTimeScaleToDispatchInFixedUpdate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MinimalTimeScaleToDispatchInFixedUpdate, put=setStaticF_MinimalTimeScaleToDispatchInFixedUpdate)) float_t  MinimalTimeScaleToDispatchInFixedUpdate;

/// @brief Field NetworkingClient, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NetworkingClient, put=setStaticF_NetworkingClient)) ::Photon::Realtime::LoadBalancingClient*  NetworkingClient;

/// @brief Field ObjectsInOneUpdate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_ObjectsInOneUpdate, put=setStaticF_ObjectsInOneUpdate)) int32_t  ObjectsInOneUpdate;

/// @brief Field OnOwnershipRequestEv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnOwnershipRequestEv, put=setStaticF_OnOwnershipRequestEv)) ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  OnOwnershipRequestEv;

/// @brief Field OnOwnershipTransferFailedEv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnOwnershipTransferFailedEv, put=setStaticF_OnOwnershipTransferFailedEv)) ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  OnOwnershipTransferFailedEv;

/// @brief Field OnOwnershipTransferedEv, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnOwnershipTransferedEv, put=setStaticF_OnOwnershipTransferedEv)) ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  OnOwnershipTransferedEv;

/// @brief Field OpCleanRpcBufferOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OpCleanRpcBufferOptions, put=setStaticF_OpCleanRpcBufferOptions)) ::Photon::Realtime::RaiseEventOptions*  OpCleanRpcBufferOptions;

/// @brief Field PrecisionForFloatSynchronization, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PrecisionForFloatSynchronization, put=setStaticF_PrecisionForFloatSynchronization)) float_t  PrecisionForFloatSynchronization;

/// @brief Field PrecisionForQuaternionSynchronization, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PrecisionForQuaternionSynchronization, put=setStaticF_PrecisionForQuaternionSynchronization)) float_t  PrecisionForQuaternionSynchronization;

/// @brief Field PrecisionForVectorSynchronization, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PrecisionForVectorSynchronization, put=setStaticF_PrecisionForVectorSynchronization)) float_t  PrecisionForVectorSynchronization;

/// @brief Field PrefabsWithoutMagicCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PrefabsWithoutMagicCallback, put=setStaticF_PrefabsWithoutMagicCallback)) ::System::Collections::Generic::HashSet_1<::StringW>*  PrefabsWithoutMagicCallback;

/// @brief Field RpcOptionsToAll, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RpcOptionsToAll, put=setStaticF_RpcOptionsToAll)) ::Photon::Realtime::RaiseEventOptions*  RpcOptionsToAll;

/// @brief Field RunRpcCoroutines, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_RunRpcCoroutines, put=setStaticF_RunRpcCoroutines)) bool  RunRpcCoroutines;

/// @brief Field SendInstantiateEvHashtable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SendInstantiateEvHashtable, put=setStaticF_SendInstantiateEvHashtable)) ::ExitGames::Client::Photon::Hashtable*  SendInstantiateEvHashtable;

/// @brief Field SendInstantiateRaiseEventOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SendInstantiateRaiseEventOptions, put=setStaticF_SendInstantiateRaiseEventOptions)) ::Photon::Realtime::RaiseEventOptions*  SendInstantiateRaiseEventOptions;

/// @brief Field SendToAllOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SendToAllOptions, put=setStaticF_SendToAllOptions)) ::Photon::Realtime::RaiseEventOptions*  SendToAllOptions;

/// @brief Field SendToOthersOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SendToOthersOptions, put=setStaticF_SendToOthersOptions)) ::Photon::Realtime::RaiseEventOptions*  SendToOthersOptions;

/// @brief Field SendToSingleOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SendToSingleOptions, put=setStaticF_SendToSingleOptions)) ::Photon::Realtime::RaiseEventOptions*  SendToSingleOptions;

/// @brief Field ServerCleanDestroyEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ServerCleanDestroyEvent, put=setStaticF_ServerCleanDestroyEvent)) ::ExitGames::Client::Photon::Hashtable*  ServerCleanDestroyEvent;

/// @brief Field ServerCleanOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ServerCleanOptions, put=setStaticF_ServerCleanOptions)) ::Photon::Realtime::RaiseEventOptions*  ServerCleanOptions;

/// @brief Field StartupStopwatch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StartupStopwatch, put=setStaticF_StartupStopwatch)) ::System::Diagnostics::Stopwatch*  StartupStopwatch;

/// @brief Field UseRpcMonoBehaviourCache, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_UseRpcMonoBehaviourCache, put=setStaticF_UseRpcMonoBehaviourCache)) bool  UseRpcMonoBehaviourCache;

/// @brief Field _AsyncLevelLoadingOperation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__AsyncLevelLoadingOperation, put=setStaticF__AsyncLevelLoadingOperation)) ::UnityEngine::AsyncOperation*  _AsyncLevelLoadingOperation;

/// @brief Field <UseAlternativeUdpPorts>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__UseAlternativeUdpPorts_k__BackingField, put=setStaticF__UseAlternativeUdpPorts_k__BackingField)) bool  _UseAlternativeUdpPorts_k__BackingField;

/// @brief Field _cachedRegionHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedRegionHandler, put=setStaticF__cachedRegionHandler)) ::Photon::Realtime::RegionHandler*  _cachedRegionHandler;

/// @brief Field _levelLoadingProgress, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__levelLoadingProgress, put=setStaticF__levelLoadingProgress)) float_t  _levelLoadingProgress;

/// @brief Field allowedReceivingGroups, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allowedReceivingGroups, put=setStaticF_allowedReceivingGroups)) ::System::Collections::Generic::HashSet_1<uint8_t>*  allowedReceivingGroups;

/// @brief Field automaticallySyncScene, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_automaticallySyncScene, put=setStaticF_automaticallySyncScene)) bool  automaticallySyncScene;

/// @brief Field blockedSendingGroups, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_blockedSendingGroups, put=setStaticF_blockedSendingGroups)) ::System::Collections::Generic::HashSet_1<uint8_t>*  blockedSendingGroups;

/// @brief Field cachedData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedData, put=setStaticF_cachedData)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>*  cachedData;

/// @brief Field currentLevelPrefix, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_currentLevelPrefix, put=setStaticF_currentLevelPrefix)) uint8_t  currentLevelPrefix;

/// @brief Field emptyObjectArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_emptyObjectArray, put=setStaticF_emptyObjectArray)) ::ArrayW<::System::Object*>  emptyObjectArray;

/// @brief Field emptyTypeArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_emptyTypeArray, put=setStaticF_emptyTypeArray)) ::ArrayW<::System::Type*>  emptyTypeArray;

/// @brief Field foundPVs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_foundPVs, put=setStaticF_foundPVs)) ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  foundPVs;

/// @brief Field frame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_frame, put=setStaticF_frame)) int32_t  frame;

/// @brief Field frametime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_frametime, put=setStaticF_frametime)) double_t  frametime;

/// @brief Field gameVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gameVersion, put=setStaticF_gameVersion)) ::StringW  gameVersion;

/// @brief Field isMessageQueueRunning, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isMessageQueueRunning, put=setStaticF_isMessageQueueRunning)) bool  isMessageQueueRunning;

/// @brief Field keyByteEight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteEight, put=setStaticF_keyByteEight)) ::System::Object*  keyByteEight;

/// @brief Field keyByteFive, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteFive, put=setStaticF_keyByteFive)) ::System::Object*  keyByteFive;

/// @brief Field keyByteFour, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteFour, put=setStaticF_keyByteFour)) ::System::Object*  keyByteFour;

/// @brief Field keyByteOne, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteOne, put=setStaticF_keyByteOne)) ::System::Object*  keyByteOne;

/// @brief Field keyByteSeven, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteSeven, put=setStaticF_keyByteSeven)) ::System::Object*  keyByteSeven;

/// @brief Field keyByteSix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteSix, put=setStaticF_keyByteSix)) ::System::Object*  keyByteSix;

/// @brief Field keyByteThree, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteThree, put=setStaticF_keyByteThree)) ::System::Object*  keyByteThree;

/// @brief Field keyByteTwo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteTwo, put=setStaticF_keyByteTwo)) ::System::Object*  keyByteTwo;

/// @brief Field keyByteZero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyByteZero, put=setStaticF_keyByteZero)) ::System::Object*  keyByteZero;

/// @brief Field lastUsedViewSubId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastUsedViewSubId, put=setStaticF_lastUsedViewSubId)) int32_t  lastUsedViewSubId;

/// @brief Field lastUsedViewSubIdStatic, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastUsedViewSubIdStatic, put=setStaticF_lastUsedViewSubIdStatic)) int32_t  lastUsedViewSubIdStatic;

/// @brief Field loadingLevelAndPausedNetwork, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loadingLevelAndPausedNetwork, put=setStaticF_loadingLevelAndPausedNetwork)) bool  loadingLevelAndPausedNetwork;

/// @brief Field monoRPCMethodsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_monoRPCMethodsCache, put=setStaticF_monoRPCMethodsCache)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*  monoRPCMethodsCache;

/// @brief Field offlineMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_offlineMode, put=setStaticF_offlineMode)) bool  offlineMode;

/// @brief Field offlineModeRoom, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_offlineModeRoom, put=setStaticF_offlineModeRoom)) ::Photon::Realtime::Room*  offlineModeRoom;

/// @brief Field photonServerSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_photonServerSettings, put=setStaticF_photonServerSettings)) ::UnityW<::Photon::Pun::ServerSettings>  photonServerSettings;

/// @brief Field photonViewList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_photonViewList, put=setStaticF_photonViewList)) ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>*  photonViewList;

/// @brief Field prefabPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_prefabPool, put=setStaticF_prefabPool)) ::Photon::Pun::IPunPrefabPool*  prefabPool;

/// @brief Field removeFilter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_removeFilter, put=setStaticF_removeFilter)) ::ExitGames::Client::Photon::Hashtable*  removeFilter;

/// @brief Field reusablePVHashset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_reusablePVHashset, put=setStaticF_reusablePVHashset)) ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  reusablePVHashset;

/// @brief Field rpcEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rpcEvent, put=setStaticF_rpcEvent)) ::ExitGames::Client::Photon::Hashtable*  rpcEvent;

/// @brief Field rpcFilterByViewId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rpcFilterByViewId, put=setStaticF_rpcFilterByViewId)) ::ExitGames::Client::Photon::Hashtable*  rpcFilterByViewId;

/// @brief Field rpcShortcuts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rpcShortcuts, put=setStaticF_rpcShortcuts)) ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  rpcShortcuts;

/// @brief Field sendFrequency, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_sendFrequency, put=setStaticF_sendFrequency)) int32_t  sendFrequency;

/// @brief Field serializationFrequency, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_serializationFrequency, put=setStaticF_serializationFrequency)) int32_t  serializationFrequency;

/// @brief Field serializeRaiseEvOptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serializeRaiseEvOptions, put=setStaticF_serializeRaiseEvOptions)) ::Photon::Realtime::RaiseEventOptions*  serializeRaiseEvOptions;

/// @brief Field serializeStreamIn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serializeStreamIn, put=setStaticF_serializeStreamIn)) ::Photon::Pun::PhotonStream*  serializeStreamIn;

/// @brief Field serializeStreamOut, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serializeStreamOut, put=setStaticF_serializeStreamOut)) ::Photon::Pun::PhotonStream*  serializeStreamOut;

/// @brief Field serializeViewBatches, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_serializeViewBatches, put=setStaticF_serializeViewBatches)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*  serializeViewBatches;

/// @brief Field typePhotonMessageInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_typePhotonMessageInfo, put=setStaticF_typePhotonMessageInfo)) ::System::Type*  typePhotonMessageInfo;

/// @brief Field typePunRPC, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_typePunRPC, put=setStaticF_typePunRPC)) ::System::Type*  typePunRPC;

/// @brief Method AddCallbackTarget, addr 0xa712a94, size 0x284, virtual false, abstract: false, final false
static inline void AddCallbackTarget(::System::Object*  target) ;

/// @brief Method AllocateRoomViewID, addr 0xa71e0c4, size 0x134, virtual false, abstract: false, final false
static inline bool AllocateRoomViewID(::Photon::Pun::PhotonView*  view) ;

/// [Obsolete("Renamed. Use AllocateRoomViewID instead")]
/// @brief Method AllocateSceneViewID, addr 0xa71e070, size 0x54, virtual false, abstract: false, final false
static inline bool AllocateSceneViewID(::Photon::Pun::PhotonView*  view) ;

/// @brief Method AllocateViewID, addr 0xa71db94, size 0x100, virtual false, abstract: false, final false
static inline bool AllocateViewID(::Photon::Pun::PhotonView*  view) ;

/// @brief Method AllocateViewID, addr 0xa71dc94, size 0x290, virtual false, abstract: false, final false
static inline int32_t AllocateViewID(int32_t  ownerId) ;

/// @brief Method AllocateViewID, addr 0xa71e1f8, size 0xf0, virtual false, abstract: false, final false
static inline int32_t AllocateViewID(bool  roomObject) ;

/// @brief Method AlmostEquals, addr 0xa727cfc, size 0x2b8, virtual false, abstract: false, final false
static inline bool AlmostEquals(::System::Collections::Generic::IList_1<::System::Object*>*  lastData, ::System::Collections::Generic::IList_1<::System::Object*>*  currentContent) ;

/// @brief Method AlmostEquals, addr 0xa72856c, size 0x370, virtual false, abstract: false, final false
static inline bool AlmostEquals(::System::Object*  one, ::System::Object*  two) ;

/// @brief Method CallbacksToString, addr 0xa722fbc, size 0x17c, virtual false, abstract: false, final false
static inline ::StringW CallbacksToString() ;

/// @brief Method CheckTypeMatch, addr 0xa724688, size 0x16c, virtual false, abstract: false, final false
static inline bool CheckTypeMatch(::ArrayW<::System::Reflection::ParameterInfo*>  methodParameters, ::ArrayW<::System::Type*>  callParameterTypes) ;

/// @brief Method CleanRpcBufferIfMine, addr 0xa720d44, size 0x1b0, virtual false, abstract: false, final false
static inline void CleanRpcBufferIfMine(::Photon::Pun::PhotonView*  view) ;

/// @brief Method CloseConnection, addr 0xa71aa14, size 0x234, virtual false, abstract: false, final false
static inline bool CloseConnection(::Photon::Realtime::Player*  kickPlayer) ;

/// @brief Method ConnectToBestCloudServer, addr 0xa719da4, size 0x1d4, virtual false, abstract: false, final false
static inline bool ConnectToBestCloudServer() ;

/// @brief Method ConnectToMaster, addr 0xa7199c0, size 0x3e4, virtual false, abstract: false, final false
static inline bool ConnectToMaster(::StringW  masterServerAddress, int32_t  port, ::StringW  appID) ;

/// @brief Method ConnectToRegion, addr 0xa719f78, size 0x234, virtual false, abstract: false, final false
static inline bool ConnectToRegion(::StringW  region) ;

/// @brief Method ConnectUsingSettings, addr 0xa719204, size 0x114, virtual false, abstract: false, final false
static inline bool ConnectUsingSettings() ;

/// @brief Method ConnectUsingSettings, addr 0xa719318, size 0x5b4, virtual false, abstract: false, final false
static inline bool ConnectUsingSettings(::Photon::Realtime::AppSettings*  appSettings, bool  startInOfflineMode) ;

/// @brief Method CreateRoom, addr 0xa71ba64, size 0x4b4, virtual false, abstract: false, final false
static inline bool CreateRoom(::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, ::Photon::Realtime::TypedLobby*  typedLobby, ::ArrayW<::StringW>  expectedUsers) ;

/// @brief Method DeltaCompressionRead, addr 0xa728278, size 0x1b8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Object*> DeltaCompressionRead(::ArrayW<::System::Object*>  lastOnSerializeDataReceived, ::ArrayW<::System::Object*>  incomingData) ;

/// @brief Method DeltaCompressionWrite, addr 0xa727fb4, size 0x2c4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Object*>* DeltaCompressionWrite(::System::Collections::Generic::List_1<::System::Object*>*  previousContent, ::System::Collections::Generic::List_1<::System::Object*>*  currentContent) ;

/// @brief Method Destroy, addr 0xa720228, size 0x60, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::GameObject*  targetGo) ;

/// @brief Method Destroy, addr 0xa71fbb4, size 0x100, virtual false, abstract: false, final false
static inline void Destroy(::Photon::Pun::PhotonView*  targetView) ;

/// @brief Method DestroyAll, addr 0xa7209a0, size 0xb4, virtual false, abstract: false, final false
static inline void DestroyAll() ;

/// @brief Method DestroyAll, addr 0xa720a54, size 0x70, virtual false, abstract: false, final false
static inline void DestroyAll(bool  localOnly) ;

/// @brief Method DestroyPlayerObjects, addr 0xa7204a8, size 0x4f8, virtual false, abstract: false, final false
static inline void DestroyPlayerObjects(int32_t  playerId, bool  localOnly) ;

/// @brief Method DestroyPlayerObjects, addr 0xa720288, size 0xa4, virtual false, abstract: false, final false
static inline void DestroyPlayerObjects(::Photon::Realtime::Player*  targetPlayer) ;

/// @brief Method DestroyPlayerObjects, addr 0xa72032c, size 0x17c, virtual false, abstract: false, final false
static inline void DestroyPlayerObjects(int32_t  targetPlayerId) ;

/// @brief Method Disconnect, addr 0xa71a1ac, size 0x14c, virtual false, abstract: false, final false
static inline void Disconnect() ;

/// @brief Method EnterOfflineRoom, addr 0xa71b360, size 0x19c, virtual false, abstract: false, final false
static inline void EnterOfflineRoom(::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, bool  createdRoom) ;

/// @brief Method ExecuteRpc, addr 0xa723418, size 0xff0, virtual false, abstract: false, final false
static inline void ExecuteRpc(::ExitGames::Client::Photon::Hashtable*  rpcData, ::Photon::Realtime::Player*  sender) ;

/// @brief Method FetchServerTimestamp, addr 0xa71a8ec, size 0x98, virtual false, abstract: false, final false
static inline void FetchServerTimestamp() ;

/// @brief Method FindFriends, addr 0xa71d2f4, size 0xb8, virtual false, abstract: false, final false
static inline bool FindFriends(::ArrayW<::StringW>  friendsToFind) ;

/// @brief Method FindGameObjectsWithComponent, addr 0xa721df0, size 0x18c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::GameObject>>* FindGameObjectsWithComponent(::System::Type*  type) ;

/// @brief Method GetCustomRoomList, addr 0xa71d3ac, size 0x7c, virtual false, abstract: false, final false
static inline bool GetCustomRoomList(::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter) ;

/// @brief Method GetMethod, addr 0xa7289a8, size 0x188, virtual false, abstract: false, final false
static inline bool GetMethod(::UnityEngine::MonoBehaviour*  monob, ::StringW  methodType, ::by_ref<::System::Reflection::MethodInfo*>  mi) ;

/// @brief Method GetPhotonView, addr 0xa724408, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::PhotonView> GetPhotonView(int32_t  viewID) ;

/// @brief Method GetPing, addr 0xa71a880, size 0x6c, virtual false, abstract: false, final false
static inline int32_t GetPing() ;

/// @brief Method Instantiate, addr 0xa71e2e8, size 0x1f4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> Instantiate(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data) ;

/// @brief Method InstantiateRoomObject, addr 0xa71ee6c, size 0x1c8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> InstantiateRoomObject(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data) ;

/// [Obsolete("Renamed. Use InstantiateRoomObject instead")]
/// @brief Method InstantiateSceneObject, addr 0xa71eda8, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> InstantiateSceneObject(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data) ;

/// @brief Method JoinLobby, addr 0xa71d154, size 0x50, virtual false, abstract: false, final false
static inline bool JoinLobby() ;

/// @brief Method JoinLobby, addr 0xa71d1a4, size 0xac, virtual false, abstract: false, final false
static inline bool JoinLobby(::Photon::Realtime::TypedLobby*  typedLobby) ;

/// @brief Method JoinOrCreateRoom, addr 0xa71bf18, size 0x50c, virtual false, abstract: false, final false
static inline bool JoinOrCreateRoom(::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, ::Photon::Realtime::TypedLobby*  typedLobby, ::ArrayW<::StringW>  expectedUsers) ;

/// @brief Method JoinRandomOrCreateRoom, addr 0xa71b4fc, size 0x568, virtual false, abstract: false, final false
static inline bool JoinRandomOrCreateRoom(::ExitGames::Client::Photon::Hashtable*  expectedCustomRoomProperties, uint8_t  expectedMaxPlayers, ::Photon::Realtime::MatchmakingMode  matchingType, ::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter, ::StringW  roomName, ::Photon::Realtime::RoomOptions*  roomOptions, ::ArrayW<::StringW>  expectedUsers) ;

/// @brief Method JoinRandomRoom, addr 0xa71ada4, size 0x64, virtual false, abstract: false, final false
static inline bool JoinRandomRoom() ;

/// @brief Method JoinRandomRoom, addr 0xa71b2ec, size 0x74, virtual false, abstract: false, final false
static inline bool JoinRandomRoom(::ExitGames::Client::Photon::Hashtable*  expectedCustomRoomProperties, uint8_t  expectedMaxPlayers) ;

/// @brief Method JoinRandomRoom, addr 0xa71ae08, size 0x4e4, virtual false, abstract: false, final false
static inline bool JoinRandomRoom(::ExitGames::Client::Photon::Hashtable*  expectedCustomRoomProperties, uint8_t  expectedMaxPlayers, ::Photon::Realtime::MatchmakingMode  matchingType, ::Photon::Realtime::TypedLobby*  typedLobby, ::StringW  sqlLobbyFilter, ::ArrayW<::StringW>  expectedUsers) ;

/// @brief Method JoinRoom, addr 0xa71c424, size 0x468, virtual false, abstract: false, final false
static inline bool JoinRoom(::StringW  roomName, ::ArrayW<::StringW>  expectedUsers) ;

/// @brief Method LeaveLobby, addr 0xa71d250, size 0xa4, virtual false, abstract: false, final false
static inline bool LeaveLobby() ;

/// @brief Method LeaveRoom, addr 0xa71cf30, size 0x224, virtual false, abstract: false, final false
static inline bool LeaveRoom(bool  becomeInactive) ;

/// @brief Method LeftRoomCleanup, addr 0xa716bfc, size 0x1c8, virtual false, abstract: false, final false
static inline void LeftRoomCleanup() ;

/// @brief Method LoadLevel, addr 0xa7225c4, size 0x174, virtual false, abstract: false, final false
static inline void LoadLevel(::StringW  levelName) ;

/// @brief Method LoadLevel, addr 0xa72242c, size 0x198, virtual false, abstract: false, final false
static inline void LoadLevel(int32_t  levelNumber) ;

/// @brief Method LoadLevelIfSynced, addr 0xa7140c8, size 0x238, virtual false, abstract: false, final false
static inline void LoadLevelIfSynced() ;

/// @brief Method LoadOrCreateSettings, addr 0xa7157c8, size 0x3bc, virtual false, abstract: false, final false
static inline void LoadOrCreateSettings(bool  reload) ;

/// @brief Method LocalCleanPhotonView, addr 0xa724ecc, size 0x8c, virtual false, abstract: false, final false
static inline bool LocalCleanPhotonView(::Photon::Pun::PhotonView*  view) ;

/// @brief Method LocalCleanupAnythingInstantiated, addr 0xa714c80, size 0x37c, virtual false, abstract: false, final false
static inline void LocalCleanupAnythingInstantiated(bool  destroyInstantiatedGameObjects) ;

/// @brief Method NetworkInstantiate, addr 0xa71f034, size 0x620, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> NetworkInstantiate(::ExitGames::Client::Photon::Hashtable*  networkEvent, ::Photon::Realtime::Player*  creator) ;

/// @brief Method NetworkInstantiate, addr 0xa71e4dc, size 0x8cc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> NetworkInstantiate(::Photon::Pun::InstantiateParameters  parameters, bool  roomObject, bool  instantiateEvent) ;

/// @brief Method NetworkStatisticsReset, addr 0xa71a678, size 0x6c, virtual false, abstract: false, final false
static inline void NetworkStatisticsReset() ;

/// @brief Method NetworkStatisticsToString, addr 0xa71a6e4, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW NetworkStatisticsToString() ;

/// @brief Method NewSceneLoaded, addr 0xa726b9c, size 0x490, virtual false, abstract: false, final false
static inline void NewSceneLoaded() ;

/// @brief Method OnClientStateChanged, addr 0xa72965c, size 0x120, virtual false, abstract: false, final false
static inline void OnClientStateChanged(::Photon::Realtime::ClientState  previousState, ::Photon::Realtime::ClientState  state) ;

/// @brief Method OnEvent, addr 0xa728b98, size 0x868, virtual false, abstract: false, final false
static inline void OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent) ;

/// @brief Method OnOperation, addr 0xa729400, size 0x25c, virtual false, abstract: false, final false
static inline void OnOperation(::ExitGames::Client::Photon::OperationResponse*  opResponse) ;

/// @brief Method OnRegionsPinged, addr 0xa72977c, size 0x130, virtual false, abstract: false, final false
static inline void OnRegionsPinged(::Photon::Realtime::RegionHandler*  regionHandler) ;

/// @brief Method OnSerializeRead, addr 0xa725a10, size 0x86c, virtual false, abstract: false, final false
static inline void OnSerializeRead(::ArrayW<::System::Object*>  data, ::Photon::Realtime::Player*  sender, int32_t  networkTime, int16_t  correctPrefix) ;

/// @brief Method OnSerializeWrite, addr 0xa72702c, size 0x390, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::Object*>* OnSerializeWrite(::Photon::Pun::PhotonView*  view) ;

/// @brief Method OpCleanActorRpcBuffer, addr 0xa720bb4, size 0x118, virtual false, abstract: false, final false
static inline void OpCleanActorRpcBuffer(int32_t  actorNumber) ;

/// @brief Method OpCleanRpcBuffer, addr 0xa724f58, size 0xf0, virtual false, abstract: false, final false
static inline void OpCleanRpcBuffer(::Photon::Pun::PhotonView*  view) ;

/// @brief Method OpRemoveCompleteCache, addr 0xa724a0c, size 0xd0, virtual false, abstract: false, final false
static inline void OpRemoveCompleteCache() ;

/// @brief Method OpRemoveCompleteCacheOfPlayer, addr 0xa72627c, size 0x118, virtual false, abstract: false, final false
static inline void OpRemoveCompleteCacheOfPlayer(int32_t  actorNumber) ;

/// @brief Method OpRemoveFromServerInstantiationsOfPlayer, addr 0xa7247f4, size 0x118, virtual false, abstract: false, final false
static inline void OpRemoveFromServerInstantiationsOfPlayer(int32_t  actorNr) ;

/// @brief Method OwnershipUpdate, addr 0xa725228, size 0x104, virtual false, abstract: false, final false
static inline void OwnershipUpdate(::ArrayW<int32_t>  viewOwnerPairs, int32_t  targetActor) ;

/// @brief Method RPC, addr 0xa720ef4, size 0x1e8, virtual false, abstract: false, final false
static inline void RPC(::Photon::Pun::PhotonView*  view, ::StringW  methodName, ::Photon::Pun::RpcTarget  target, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method RPC, addr 0xa7210dc, size 0xafc, virtual false, abstract: false, final false
static inline void RPC(::Photon::Pun::PhotonView*  view, ::StringW  methodName, ::Photon::Pun::RpcTarget  target, ::Photon::Realtime::Player*  player, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method RPC, addr 0xa721bd8, size 0x218, virtual false, abstract: false, final false
static inline void RPC(::Photon::Pun::PhotonView*  view, ::StringW  methodName, ::Photon::Realtime::Player*  targetPlayer, bool  encrypt, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method RaiseEvent, addr 0xa71d7e8, size 0x240, virtual false, abstract: false, final false
static inline bool RaiseEvent(uint8_t  eventCode, ::System::Object*  eventContent, ::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method RaiseEventInternal, addr 0xa71da28, size 0x16c, virtual false, abstract: false, final false
static inline bool RaiseEventInternal(uint8_t  eventCode, ::System::Object*  eventContent, ::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method Reconnect, addr 0xa71a2f8, size 0x380, virtual false, abstract: false, final false
static inline bool Reconnect() ;

/// @brief Method ReconnectAndRejoin, addr 0xa71cc58, size 0x2d8, virtual false, abstract: false, final false
static inline bool ReconnectAndRejoin() ;

/// @brief Method RegisterPhotonView, addr 0xa7253ac, size 0x664, virtual false, abstract: false, final false
static inline void RegisterPhotonView(::Photon::Pun::PhotonView*  netView) ;

/// @brief Method RejoinRoom, addr 0xa71c88c, size 0x3cc, virtual false, abstract: false, final false
static inline bool RejoinRoom(::StringW  roomName) ;

/// @brief Method RemoveBufferedRPCs, addr 0xa7266c0, size 0x258, virtual false, abstract: false, final false
static inline bool RemoveBufferedRPCs(int32_t  viewId, ::StringW  methodName, ::ArrayW<int32_t>  callersActorNumbers) ;

/// @brief Method RemoveCacheOfLeftPlayers, addr 0xa726394, size 0x164, virtual false, abstract: false, final false
static inline void RemoveCacheOfLeftPlayers() ;

/// @brief Method RemoveCallbackTarget, addr 0xa712e78, size 0x2a4, virtual false, abstract: false, final false
static inline void RemoveCallbackTarget(::System::Object*  target) ;

/// @brief Method RemoveInstantiatedGO, addr 0xa71fcb4, size 0x574, virtual false, abstract: false, final false
static inline void RemoveInstantiatedGO(::UnityEngine::GameObject*  go, bool  localOnly) ;

/// @brief Method RemovePlayerCustomProperties, addr 0xa71d644, size 0x1a4, virtual false, abstract: false, final false
static inline void RemovePlayerCustomProperties(::ArrayW<::StringW>  customPropertiesToDelete) ;

/// @brief Method RemoveRPCs, addr 0xa720ccc, size 0x78, virtual false, abstract: false, final false
static inline void RemoveRPCs(::Photon::Pun::PhotonView*  targetPhotonView) ;

/// @brief Method RemoveRPCs, addr 0xa720ac4, size 0xf0, virtual false, abstract: false, final false
static inline void RemoveRPCs(::Photon::Realtime::Player*  targetPlayer) ;

/// @brief Method RemoveRPCsInGroup, addr 0xa7264f8, size 0x1c8, virtual false, abstract: false, final false
static inline void RemoveRPCsInGroup(int32_t  group) ;

/// @brief Method RequestOwnership, addr 0xa725048, size 0xf0, virtual false, abstract: false, final false
static inline void RequestOwnership(int32_t  viewID, int32_t  fromOwner) ;

/// @brief Method ResetPhotonViewsOnSerialize, addr 0xa72327c, size 0x19c, virtual false, abstract: false, final false
static inline void ResetPhotonViewsOnSerialize() ;

/// @brief Method RunViewUpdate, addr 0xa7136d0, size 0x47c, virtual false, abstract: false, final false
static inline void RunViewUpdate() ;

/// @brief Method SendAllOutgoingCommands, addr 0xa71a984, size 0x90, virtual false, abstract: false, final false
static inline void SendAllOutgoingCommands() ;

/// @brief Method SendDestroyOfAll, addr 0xa724adc, size 0x100, virtual false, abstract: false, final false
static inline void SendDestroyOfAll() ;

/// @brief Method SendDestroyOfPlayer, addr 0xa72490c, size 0x100, virtual false, abstract: false, final false
static inline void SendDestroyOfPlayer(int32_t  actorNr) ;

/// @brief Method SendInstantiate, addr 0xa71f6a8, size 0x4d4, virtual false, abstract: false, final false
static inline bool SendInstantiate(::Photon::Pun::InstantiateParameters  parameters, bool  roomObject) ;

/// @brief Method SendSerializeViewBatch, addr 0xa727658, size 0x200, virtual false, abstract: false, final false
static inline void SendSerializeViewBatch(::Photon::Pun::PhotonNetwork_SerializeViewBatch*  batch) ;

/// @brief Method ServerCleanInstantiateAndDestroy, addr 0xa724bdc, size 0x1d4, virtual false, abstract: false, final false
static inline void ServerCleanInstantiateAndDestroy(::Photon::Pun::PhotonView*  photonView) ;

/// @brief Method SetInterestGroups, addr 0xa722074, size 0x3b8, virtual false, abstract: false, final false
static inline void SetInterestGroups(::ArrayW<uint8_t>  disableGroups, ::ArrayW<uint8_t>  enableGroups) ;

/// @brief Method SetInterestGroups, addr 0xa721f7c, size 0xf8, virtual false, abstract: false, final false
static inline void SetInterestGroups(uint8_t  group, bool  enabled) ;

/// @brief Method SetLevelInPropsIfSynced, addr 0xa713c10, size 0x46c, virtual false, abstract: false, final false
static inline void SetLevelInPropsIfSynced(::System::Object*  levelId) ;

/// @brief Method SetLevelPrefix, addr 0xa726918, size 0x5c, virtual false, abstract: false, final false
static inline void SetLevelPrefix(uint8_t  prefix) ;

/// @brief Method SetMasterClient, addr 0xa71ac48, size 0x15c, virtual false, abstract: false, final false
static inline bool SetMasterClient(::Photon::Realtime::Player*  masterClientPlayer) ;

/// @brief Method SetPlayerCustomProperties, addr 0xa71d428, size 0x21c, virtual false, abstract: false, final false
static inline bool SetPlayerCustomProperties(::ExitGames::Client::Photon::Hashtable*  customProperties) ;

/// @brief Method SetSendingEnabled, addr 0xa726a48, size 0x154, virtual false, abstract: false, final false
static inline void SetSendingEnabled(::ArrayW<uint8_t>  disableGroups, ::ArrayW<uint8_t>  enableGroups) ;

/// @brief Method SetSendingEnabled, addr 0xa726974, size 0xd4, virtual false, abstract: false, final false
static inline void SetSendingEnabled(uint8_t  group, bool  enabled) ;

/// @brief Method SetupLogging, addr 0xa7198cc, size 0xf4, virtual false, abstract: false, final false
static inline void SetupLogging() ;

/// @brief Method StaticReset, addr 0xa718b68, size 0x548, virtual false, abstract: false, final false
static inline void StaticReset() ;

/// @brief Method TransferOwnership, addr 0xa725138, size 0xf0, virtual false, abstract: false, final false
static inline void TransferOwnership(int32_t  viewID, int32_t  playerID) ;

/// @brief Method VerifyCanUseNetwork, addr 0xa71a7e0, size 0xa0, virtual false, abstract: false, final false
static inline bool VerifyCanUseNetwork() ;

/// @brief Method ViewIDExists, addr 0xa72532c, size 0x80, virtual false, abstract: false, final false
static inline bool ViewIDExists(int32_t  viewID) ;

/// @brief Method WebRpc, addr 0xa722738, size 0x84, virtual false, abstract: false, final false
static inline bool WebRpc(::StringW  name, ::System::Object*  parameters, bool  sendAuthCookie) ;

/// [CompilerGenerated]
/// @brief Method add_OnOwnershipRequestEv, addr 0xa722a04, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOwnershipTransferFailedEv, addr 0xa722dd4, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnOwnershipTransferedEv, addr 0xa722bec, size 0xf4, virtual false, abstract: false, final false
static inline void add_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

static inline ::Photon::Pun::ConnectMethod getStaticF_ConnectMethod() ;

static inline bool getStaticF_EnableCloseConnection() ;

static inline ::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>* getStaticF_InternalEventError() ;

static inline ::Photon::Pun::PunLogLevel getStaticF_LogLevel() ;

static inline int32_t getStaticF_MAX_VIEW_IDS() ;

static inline float_t getStaticF_MinimalTimeScaleToDispatchInFixedUpdate() ;

static inline ::Photon::Realtime::LoadBalancingClient* getStaticF_NetworkingClient() ;

static inline int32_t getStaticF_ObjectsInOneUpdate() ;

static inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>* getStaticF_OnOwnershipRequestEv() ;

static inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>* getStaticF_OnOwnershipTransferFailedEv() ;

static inline ::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>* getStaticF_OnOwnershipTransferedEv() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_OpCleanRpcBufferOptions() ;

static inline float_t getStaticF_PrecisionForFloatSynchronization() ;

static inline float_t getStaticF_PrecisionForQuaternionSynchronization() ;

static inline float_t getStaticF_PrecisionForVectorSynchronization() ;

static inline ::System::Collections::Generic::HashSet_1<::StringW>* getStaticF_PrefabsWithoutMagicCallback() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_RpcOptionsToAll() ;

static inline bool getStaticF_RunRpcCoroutines() ;

static inline ::ExitGames::Client::Photon::Hashtable* getStaticF_SendInstantiateEvHashtable() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_SendInstantiateRaiseEventOptions() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_SendToAllOptions() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_SendToOthersOptions() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_SendToSingleOptions() ;

static inline ::ExitGames::Client::Photon::Hashtable* getStaticF_ServerCleanDestroyEvent() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_ServerCleanOptions() ;

static inline ::System::Diagnostics::Stopwatch* getStaticF_StartupStopwatch() ;

static inline bool getStaticF_UseRpcMonoBehaviourCache() ;

static inline ::UnityEngine::AsyncOperation* getStaticF__AsyncLevelLoadingOperation() ;

static inline bool getStaticF__UseAlternativeUdpPorts_k__BackingField() ;

static inline ::Photon::Realtime::RegionHandler* getStaticF__cachedRegionHandler() ;

static inline float_t getStaticF__levelLoadingProgress() ;

static inline ::System::Collections::Generic::HashSet_1<uint8_t>* getStaticF_allowedReceivingGroups() ;

static inline bool getStaticF_automaticallySyncScene() ;

static inline ::System::Collections::Generic::HashSet_1<uint8_t>* getStaticF_blockedSendingGroups() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>* getStaticF_cachedData() ;

static inline uint8_t getStaticF_currentLevelPrefix() ;

static inline ::ArrayW<::System::Object*> getStaticF_emptyObjectArray() ;

static inline ::ArrayW<::System::Type*> getStaticF_emptyTypeArray() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>* getStaticF_foundPVs() ;

static inline int32_t getStaticF_frame() ;

static inline double_t getStaticF_frametime() ;

static inline ::StringW getStaticF_gameVersion() ;

static inline bool getStaticF_isMessageQueueRunning() ;

static inline ::System::Object* getStaticF_keyByteEight() ;

static inline ::System::Object* getStaticF_keyByteFive() ;

static inline ::System::Object* getStaticF_keyByteFour() ;

static inline ::System::Object* getStaticF_keyByteOne() ;

static inline ::System::Object* getStaticF_keyByteSeven() ;

static inline ::System::Object* getStaticF_keyByteSix() ;

static inline ::System::Object* getStaticF_keyByteThree() ;

static inline ::System::Object* getStaticF_keyByteTwo() ;

static inline ::System::Object* getStaticF_keyByteZero() ;

static inline int32_t getStaticF_lastUsedViewSubId() ;

static inline int32_t getStaticF_lastUsedViewSubIdStatic() ;

static inline bool getStaticF_loadingLevelAndPausedNetwork() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>* getStaticF_monoRPCMethodsCache() ;

static inline bool getStaticF_offlineMode() ;

static inline ::Photon::Realtime::Room* getStaticF_offlineModeRoom() ;

static inline ::UnityW<::Photon::Pun::ServerSettings> getStaticF_photonServerSettings() ;

static inline ::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>* getStaticF_photonViewList() ;

static inline ::Photon::Pun::IPunPrefabPool* getStaticF_prefabPool() ;

static inline ::ExitGames::Client::Photon::Hashtable* getStaticF_removeFilter() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>* getStaticF_reusablePVHashset() ;

static inline ::ExitGames::Client::Photon::Hashtable* getStaticF_rpcEvent() ;

static inline ::ExitGames::Client::Photon::Hashtable* getStaticF_rpcFilterByViewId() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* getStaticF_rpcShortcuts() ;

static inline int32_t getStaticF_sendFrequency() ;

static inline int32_t getStaticF_serializationFrequency() ;

static inline ::Photon::Realtime::RaiseEventOptions* getStaticF_serializeRaiseEvOptions() ;

static inline ::Photon::Pun::PhotonStream* getStaticF_serializeStreamIn() ;

static inline ::Photon::Pun::PhotonStream* getStaticF_serializeStreamOut() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>* getStaticF_serializeViewBatches() ;

static inline ::System::Type* getStaticF_typePhotonMessageInfo() ;

static inline ::System::Type* getStaticF_typePunRPC() ;

/// @brief Method get_AppVersion, addr 0xa715764, size 0x64, virtual false, abstract: false, final false
static inline ::StringW get_AppVersion() ;

/// @brief Method get_AuthValues, addr 0xa71625c, size 0x88, virtual false, abstract: false, final false
static inline ::Photon::Realtime::AuthenticationValues* get_AuthValues() ;

/// @brief Method get_AutomaticallySyncScene, addr 0xa716dc4, size 0x58, virtual false, abstract: false, final false
static inline bool get_AutomaticallySyncScene() ;

/// @brief Method get_BestRegionSummaryInPreferences, addr 0xa715fa4, size 0x48, virtual false, abstract: false, final false
static inline ::StringW get_BestRegionSummaryInPreferences() ;

/// @brief Method get_CloudRegion, addr 0xa715c8c, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_CloudRegion() ;

/// @brief Method get_CountOfPlayers, addr 0xa71799c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_CountOfPlayers() ;

/// @brief Method get_CountOfPlayersInRooms, addr 0xa717938, size 0x64, virtual false, abstract: false, final false
static inline int32_t get_CountOfPlayersInRooms() ;

/// @brief Method get_CountOfPlayersOnMaster, addr 0xa7178d4, size 0x64, virtual false, abstract: false, final false
static inline int32_t get_CountOfPlayersOnMaster() ;

/// @brief Method get_CountOfRooms, addr 0xa717a08, size 0x64, virtual false, abstract: false, final false
static inline int32_t get_CountOfRooms() ;

/// @brief Method get_CrcCheckEnabled, addr 0xa717bb8, size 0x6c, virtual false, abstract: false, final false
static inline bool get_CrcCheckEnabled() ;

/// @brief Method get_CurrentCluster, addr 0xa715f1c, size 0x88, virtual false, abstract: false, final false
static inline ::StringW get_CurrentCluster() ;

/// @brief Method get_CurrentLobby, addr 0xa71637c, size 0x64, virtual false, abstract: false, final false
static inline ::Photon::Realtime::TypedLobby* get_CurrentLobby() ;

/// @brief Method get_CurrentRoom, addr 0xa712188, size 0xc0, virtual false, abstract: false, final false
static inline ::Photon::Realtime::Room* get_CurrentRoom() ;

/// @brief Method get_CurrentTime, addr 0xa71746c, size 0x60, virtual false, abstract: false, final false
static inline double_t get_CurrentTime() ;

/// @brief Method get_EnableLobbyStatistics, addr 0xa716ebc, size 0x64, virtual false, abstract: false, final false
static inline bool get_EnableLobbyStatistics() ;

/// @brief Method get_GameVersion, addr 0xa71563c, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_GameVersion() ;

/// @brief Method get_InLobby, addr 0xa716f20, size 0x64, virtual false, abstract: false, final false
static inline bool get_InLobby() ;

/// @brief Method get_InRoom, addr 0xa71787c, size 0x58, virtual false, abstract: false, final false
static inline bool get_InRoom() ;

/// @brief Method get_IsConnected, addr 0xa715d48, size 0xe8, virtual false, abstract: false, final false
static inline bool get_IsConnected() ;

/// @brief Method get_IsConnectedAndReady, addr 0xa716078, size 0xe8, virtual false, abstract: false, final false
static inline bool get_IsConnectedAndReady() ;

/// @brief Method get_IsMasterClient, addr 0xa71777c, size 0x100, virtual false, abstract: false, final false
static inline bool get_IsMasterClient() ;

/// @brief Method get_IsMessageQueueRunning, addr 0xa7171ac, size 0x58, virtual false, abstract: false, final false
static inline bool get_IsMessageQueueRunning() ;

/// @brief Method get_KeepAliveInBackground, addr 0xa71762c, size 0x150, virtual false, abstract: false, final false
static inline float_t get_KeepAliveInBackground() ;

/// @brief Method get_LevelLoadingProgress, addr 0xa723190, size 0xe0, virtual false, abstract: false, final false
static inline float_t get_LevelLoadingProgress() ;

/// @brief Method get_LocalPlayer, addr 0xa7163e0, size 0x88, virtual false, abstract: false, final false
static inline ::Photon::Realtime::Player* get_LocalPlayer() ;

/// @brief Method get_MasterClient, addr 0xa7152fc, size 0x128, virtual false, abstract: false, final false
static inline ::Photon::Realtime::Player* get_MasterClient() ;

/// @brief Method get_MaxResendsBeforeDisconnect, addr 0xa717df4, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_MaxResendsBeforeDisconnect() ;

/// @brief Method get_NetworkClientState, addr 0xa716160, size 0xfc, virtual false, abstract: false, final false
static inline ::Photon::Realtime::ClientState get_NetworkClientState() ;

/// @brief Method get_NetworkStatisticsEnabled, addr 0xa717a6c, size 0x6c, virtual false, abstract: false, final false
static inline bool get_NetworkStatisticsEnabled() ;

/// @brief Method get_NickName, addr 0xa716468, size 0x64, virtual false, abstract: false, final false
static inline ::StringW get_NickName() ;

/// @brief Method get_OfflineMode, addr 0xa716948, size 0x58, virtual false, abstract: false, final false
static inline bool get_OfflineMode() ;

/// @brief Method get_PacketLossByCrcCheck, addr 0xa717d88, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_PacketLossByCrcCheck() ;

/// @brief Method get_PhotonServerSettings, addr 0xa71290c, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Pun::ServerSettings> get_PhotonServerSettings() ;

/// @brief Method get_PhotonViewCollection, addr 0xa7144a4, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::NonAllocDictionary_2_ValueIterator<int32_t,::UnityW<::Photon::Pun::PhotonView>> get_PhotonViewCollection() ;

/// @brief Method get_PhotonViews, addr 0xa7227bc, size 0x248, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::Photon::Pun::PhotonView>> get_PhotonViews() ;

/// @brief Method get_PlayerList, addr 0xa716538, size 0x1a8, virtual false, abstract: false, final false
static inline ::ArrayW<::Photon::Realtime::Player*> get_PlayerList() ;

/// @brief Method get_PlayerListOthers, addr 0xa7166e0, size 0x268, virtual false, abstract: false, final false
static inline ::ArrayW<::Photon::Realtime::Player*> get_PlayerListOthers() ;

/// @brief Method get_PrefabPool, addr 0xa723138, size 0x58, virtual false, abstract: false, final false
static inline ::Photon::Pun::IPunPrefabPool* get_PrefabPool() ;

/// @brief Method get_QuickResends, addr 0xa717ee8, size 0x74, virtual false, abstract: false, final false
static inline int32_t get_QuickResends() ;

/// @brief Method get_ResentReliableCommands, addr 0xa717b4c, size 0x6c, virtual false, abstract: false, final false
static inline int32_t get_ResentReliableCommands() ;

/// @brief Method get_SendRate, addr 0xa7129d4, size 0x60, virtual false, abstract: false, final false
static inline int32_t get_SendRate() ;

/// @brief Method get_SerializationRate, addr 0xa712a34, size 0x60, virtual false, abstract: false, final false
static inline int32_t get_SerializationRate() ;

/// @brief Method get_Server, addr 0xa715e30, size 0xec, virtual false, abstract: false, final false
static inline ::Photon::Realtime::ServerConnection get_Server() ;

/// @brief Method get_ServerAddress, addr 0xa715be4, size 0xa8, virtual false, abstract: false, final false
static inline ::StringW get_ServerAddress() ;

/// @brief Method get_ServerPortOverrides, addr 0xa718094, size 0x90, virtual false, abstract: false, final false
static inline ::Photon::Realtime::PhotonPortDefinition get_ServerPortOverrides() ;

/// @brief Method get_ServerTimestamp, addr 0xa717334, size 0x138, virtual false, abstract: false, final false
static inline int32_t get_ServerTimestamp() ;

/// @brief Method get_Time, addr 0xa717264, size 0xd0, virtual false, abstract: false, final false
static inline double_t get_Time() ;

/// [CompilerGenerated]
/// @brief Method get_UseAlternativeUdpPorts, addr 0xa717fdc, size 0x58, virtual false, abstract: false, final false
static inline bool get_UseAlternativeUdpPorts() ;

/// @brief Method get_ViewCount, addr 0xa714b10, size 0x78, virtual false, abstract: false, final false
static inline int32_t get_ViewCount() ;

/// [CompilerGenerated]
/// @brief Method remove_OnOwnershipRequestEv, addr 0xa722af8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOwnershipTransferFailedEv, addr 0xa722ec8, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnOwnershipTransferedEv, addr 0xa722ce0, size 0xf4, virtual false, abstract: false, final false
static inline void remove_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

static inline void setStaticF_ConnectMethod(::Photon::Pun::ConnectMethod  value) ;

static inline void setStaticF_EnableCloseConnection(bool  value) ;

static inline void setStaticF_InternalEventError(::System::Action_2<::ExitGames::Client::Photon::EventData*,::System::Exception*>*  value) ;

static inline void setStaticF_LogLevel(::Photon::Pun::PunLogLevel  value) ;

static inline void setStaticF_MAX_VIEW_IDS(int32_t  value) ;

static inline void setStaticF_MinimalTimeScaleToDispatchInFixedUpdate(float_t  value) ;

static inline void setStaticF_NetworkingClient(::Photon::Realtime::LoadBalancingClient*  value) ;

static inline void setStaticF_ObjectsInOneUpdate(int32_t  value) ;

static inline void setStaticF_OnOwnershipRequestEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

static inline void setStaticF_OnOwnershipTransferFailedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

static inline void setStaticF_OnOwnershipTransferedEv(::System::Action_2<::UnityW<::Photon::Pun::PhotonView>,::Photon::Realtime::Player*>*  value) ;

static inline void setStaticF_OpCleanRpcBufferOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_PrecisionForFloatSynchronization(float_t  value) ;

static inline void setStaticF_PrecisionForQuaternionSynchronization(float_t  value) ;

static inline void setStaticF_PrecisionForVectorSynchronization(float_t  value) ;

static inline void setStaticF_PrefabsWithoutMagicCallback(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

static inline void setStaticF_RpcOptionsToAll(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_RunRpcCoroutines(bool  value) ;

static inline void setStaticF_SendInstantiateEvHashtable(::ExitGames::Client::Photon::Hashtable*  value) ;

static inline void setStaticF_SendInstantiateRaiseEventOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_SendToAllOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_SendToOthersOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_SendToSingleOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_ServerCleanDestroyEvent(::ExitGames::Client::Photon::Hashtable*  value) ;

static inline void setStaticF_ServerCleanOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_StartupStopwatch(::System::Diagnostics::Stopwatch*  value) ;

static inline void setStaticF_UseRpcMonoBehaviourCache(bool  value) ;

static inline void setStaticF__AsyncLevelLoadingOperation(::UnityEngine::AsyncOperation*  value) ;

static inline void setStaticF__UseAlternativeUdpPorts_k__BackingField(bool  value) ;

static inline void setStaticF__cachedRegionHandler(::Photon::Realtime::RegionHandler*  value) ;

static inline void setStaticF__levelLoadingProgress(float_t  value) ;

static inline void setStaticF_allowedReceivingGroups(::System::Collections::Generic::HashSet_1<uint8_t>*  value) ;

static inline void setStaticF_automaticallySyncScene(bool  value) ;

static inline void setStaticF_blockedSendingGroups(::System::Collections::Generic::HashSet_1<uint8_t>*  value) ;

static inline void setStaticF_cachedData(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Queue_1<::ArrayW<::System::Object*>>*>*>*  value) ;

static inline void setStaticF_currentLevelPrefix(uint8_t  value) ;

static inline void setStaticF_emptyObjectArray(::ArrayW<::System::Object*>  value) ;

static inline void setStaticF_emptyTypeArray(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_foundPVs(::System::Collections::Generic::List_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

static inline void setStaticF_frame(int32_t  value) ;

static inline void setStaticF_frametime(double_t  value) ;

static inline void setStaticF_gameVersion(::StringW  value) ;

static inline void setStaticF_isMessageQueueRunning(bool  value) ;

static inline void setStaticF_keyByteEight(::System::Object*  value) ;

static inline void setStaticF_keyByteFive(::System::Object*  value) ;

static inline void setStaticF_keyByteFour(::System::Object*  value) ;

static inline void setStaticF_keyByteOne(::System::Object*  value) ;

static inline void setStaticF_keyByteSeven(::System::Object*  value) ;

static inline void setStaticF_keyByteSix(::System::Object*  value) ;

static inline void setStaticF_keyByteThree(::System::Object*  value) ;

static inline void setStaticF_keyByteTwo(::System::Object*  value) ;

static inline void setStaticF_keyByteZero(::System::Object*  value) ;

static inline void setStaticF_lastUsedViewSubId(int32_t  value) ;

static inline void setStaticF_lastUsedViewSubIdStatic(int32_t  value) ;

static inline void setStaticF_loadingLevelAndPausedNetwork(bool  value) ;

static inline void setStaticF_monoRPCMethodsCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>*  value) ;

static inline void setStaticF_offlineMode(bool  value) ;

static inline void setStaticF_offlineModeRoom(::Photon::Realtime::Room*  value) ;

static inline void setStaticF_photonServerSettings(::UnityW<::Photon::Pun::ServerSettings>  value) ;

static inline void setStaticF_photonViewList(::ExitGames::Client::Photon::NonAllocDictionary_2<int32_t,::UnityW<::Photon::Pun::PhotonView>>*  value) ;

static inline void setStaticF_prefabPool(::Photon::Pun::IPunPrefabPool*  value) ;

static inline void setStaticF_removeFilter(::ExitGames::Client::Photon::Hashtable*  value) ;

static inline void setStaticF_reusablePVHashset(::System::Collections::Generic::HashSet_1<::UnityW<::Photon::Pun::PhotonView>>*  value) ;

static inline void setStaticF_rpcEvent(::ExitGames::Client::Photon::Hashtable*  value) ;

static inline void setStaticF_rpcFilterByViewId(::ExitGames::Client::Photon::Hashtable*  value) ;

static inline void setStaticF_rpcShortcuts(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value) ;

static inline void setStaticF_sendFrequency(int32_t  value) ;

static inline void setStaticF_serializationFrequency(int32_t  value) ;

static inline void setStaticF_serializeRaiseEvOptions(::Photon::Realtime::RaiseEventOptions*  value) ;

static inline void setStaticF_serializeStreamIn(::Photon::Pun::PhotonStream*  value) ;

static inline void setStaticF_serializeStreamOut(::Photon::Pun::PhotonStream*  value) ;

static inline void setStaticF_serializeViewBatches(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::PhotonNetwork_RaiseEventBatch,::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*  value) ;

static inline void setStaticF_typePhotonMessageInfo(::System::Type*  value) ;

static inline void setStaticF_typePunRPC(::System::Type*  value) ;

/// @brief Method set_AuthValues, addr 0xa7162e4, size 0x98, virtual false, abstract: false, final false
static inline void set_AuthValues(::Photon::Realtime::AuthenticationValues*  value) ;

/// @brief Method set_AutomaticallySyncScene, addr 0xa716e1c, size 0xa0, virtual false, abstract: false, final false
static inline void set_AutomaticallySyncScene(bool  value) ;

/// @brief Method set_BestRegionSummaryInPreferences, addr 0xa715fec, size 0x8c, virtual false, abstract: false, final false
static inline void set_BestRegionSummaryInPreferences(::StringW  value) ;

/// @brief Method set_CrcCheckEnabled, addr 0xa717c24, size 0x164, virtual false, abstract: false, final false
static inline void set_CrcCheckEnabled(bool  value) ;

/// @brief Method set_GameVersion, addr 0xa715694, size 0xd0, virtual false, abstract: false, final false
static inline void set_GameVersion(::StringW  value) ;

/// @brief Method set_IsMessageQueueRunning, addr 0xa717204, size 0x60, virtual false, abstract: false, final false
static inline void set_IsMessageQueueRunning(bool  value) ;

/// @brief Method set_KeepAliveInBackground, addr 0xa7174cc, size 0x160, virtual false, abstract: false, final false
static inline void set_KeepAliveInBackground(float_t  value) ;

/// @brief Method set_MaxResendsBeforeDisconnect, addr 0xa717e60, size 0x88, virtual false, abstract: false, final false
static inline void set_MaxResendsBeforeDisconnect(int32_t  value) ;

/// @brief Method set_NetworkStatisticsEnabled, addr 0xa717ad8, size 0x74, virtual false, abstract: false, final false
static inline void set_NetworkStatisticsEnabled(bool  value) ;

/// @brief Method set_NickName, addr 0xa7164cc, size 0x6c, virtual false, abstract: false, final false
static inline void set_NickName(::StringW  value) ;

/// @brief Method set_OfflineMode, addr 0xa7169a0, size 0x25c, virtual false, abstract: false, final false
static inline void set_OfflineMode(bool  value) ;

/// @brief Method set_PhotonServerSettings, addr 0xa715b84, size 0x60, virtual false, abstract: false, final false
static inline void set_PhotonServerSettings(::Photon::Pun::ServerSettings*  value) ;

/// @brief Method set_PrefabPool, addr 0xa719138, size 0xcc, virtual false, abstract: false, final false
static inline void set_PrefabPool(::Photon::Pun::IPunPrefabPool*  value) ;

/// @brief Method set_QuickResends, addr 0xa717f5c, size 0x80, virtual false, abstract: false, final false
static inline void set_QuickResends(int32_t  value) ;

/// @brief Method set_SendRate, addr 0xa716f84, size 0x114, virtual false, abstract: false, final false
static inline void set_SendRate(int32_t  value) ;

/// @brief Method set_SerializationRate, addr 0xa717098, size 0x114, virtual false, abstract: false, final false
static inline void set_SerializationRate(int32_t  value) ;

/// @brief Method set_ServerPortOverrides, addr 0xa718124, size 0x8c, virtual false, abstract: false, final false
static inline void set_ServerPortOverrides(::Photon::Realtime::PhotonPortDefinition  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseAlternativeUdpPorts, addr 0xa718034, size 0x60, virtual false, abstract: false, final false
static inline void set_UseAlternativeUdpPorts(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetwork() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetwork", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonNetwork(PhotonNetwork && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetwork", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonNetwork(PhotonNetwork const& ) = delete;

/// @brief Field CurrentSceneProperty offset 0xffffffff size 0x8
static constexpr ::ConstString  CurrentSceneProperty{u"curScn"};

/// @brief Field CurrentScenePropertyLoadAsync offset 0xffffffff size 0x8
static constexpr ::ConstString  CurrentScenePropertyLoadAsync{u"curScnLa"};

/// @brief Field PlayerPrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  PlayerPrefsKey{u"PUNCloudBestRegion"};

/// @brief Field PunVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  PunVersion{u"2.40"};

/// @brief Field ServerSettingsFileName offset 0xffffffff size 0x8
static constexpr ::ConstString  ServerSettingsFileName{u"PhotonServerSettings"};

/// @brief Field SyncCompressed offset 0xffffffff size 0x4
static constexpr int32_t  SyncCompressed{static_cast<int32_t>(0x1)};

/// @brief Field SyncFirstValue offset 0xffffffff size 0x4
static constexpr int32_t  SyncFirstValue{static_cast<int32_t>(0x3)};

/// @brief Field SyncNullValues offset 0xffffffff size 0x4
static constexpr int32_t  SyncNullValues{static_cast<int32_t>(0x2)};

/// @brief Field SyncViewId offset 0xffffffff size 0x4
static constexpr int32_t  SyncViewId{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::PhotonNetwork) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonNetwork/<>c
class CORDL_TYPE PhotonNetwork___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Pun::PhotonNetwork___c*  __9;

/// @brief Field <>9__219_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__219_0, put=setStaticF___9__219_0)) ::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>*  __9__219_0;

/// @brief Field <>9__47_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__47_0, put=setStaticF___9__47_0)) ::System::Func_2<::Photon::Realtime::Player*,int32_t>*  __9__47_0;

/// @brief Field <>9__49_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__49_0, put=setStaticF___9__49_0)) ::System::Func_2<::Photon::Realtime::Player*,int32_t>*  __9__49_0;

/// @brief Field <>9__49_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__49_1, put=setStaticF___9__49_1)) ::System::Func_2<::Photon::Realtime::Player*,bool>*  __9__49_1;

static inline ::Photon::Pun::PhotonNetwork___c* New_ctor() ;

/// @brief Method <CallbacksToString>b__219_0, addr 0xa729aac, size 0x20, virtual false, abstract: false, final false
inline ::StringW _CallbacksToString_b__219_0(::Photon::Realtime::IConnectionCallbacks*  m) ;

/// @brief Method .ctor, addr 0xa729a60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_PlayerListOthers>b__49_0, addr 0xa729a7c, size 0x14, virtual false, abstract: false, final false
inline int32_t _get_PlayerListOthers_b__49_0(::Photon::Realtime::Player*  x) ;

/// @brief Method <get_PlayerListOthers>b__49_1, addr 0xa729a90, size 0x1c, virtual false, abstract: false, final false
inline bool _get_PlayerListOthers_b__49_1(::Photon::Realtime::Player*  x) ;

/// @brief Method <get_PlayerList>b__47_0, addr 0xa729a68, size 0x14, virtual false, abstract: false, final false
inline int32_t _get_PlayerList_b__47_0(::Photon::Realtime::Player*  x) ;

static inline ::Photon::Pun::PhotonNetwork___c* getStaticF___9() ;

static inline ::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>* getStaticF___9__219_0() ;

static inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* getStaticF___9__47_0() ;

static inline ::System::Func_2<::Photon::Realtime::Player*,int32_t>* getStaticF___9__49_0() ;

static inline ::System::Func_2<::Photon::Realtime::Player*,bool>* getStaticF___9__49_1() ;

static inline void setStaticF___9(::Photon::Pun::PhotonNetwork___c*  value) ;

static inline void setStaticF___9__219_0(::System::Func_2<::Photon::Realtime::IConnectionCallbacks*,::StringW>*  value) ;

static inline void setStaticF___9__47_0(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value) ;

static inline void setStaticF___9__49_0(::System::Func_2<::Photon::Realtime::Player*,int32_t>*  value) ;

static inline void setStaticF___9__49_1(::System::Func_2<::Photon::Realtime::Player*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetwork___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetwork___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonNetwork___c(PhotonNetwork___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetwork___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonNetwork___c(PhotonNetwork___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29706};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::PhotonNetwork___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun
// Dependencies Photon.Pun.PhotonNetwork::RaiseEventBatch, System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.PhotonNetwork/SerializeViewBatch
class CORDL_TYPE PhotonNetwork_SerializeViewBatch : public ::System::Object {
public:
// Declarations
/// @brief Field Batch, offset 0x10, size 0x2 
 __declspec(property(get=__cordl_internal_get_Batch, put=__cordl_internal_set_Batch)) ::GlobalNamespace::PhotonNetwork_RaiseEventBatch  Batch;

/// @brief Field ObjectUpdates, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectUpdates, put=__cordl_internal_set_ObjectUpdates)) ::System::Collections::Generic::List_1<::System::Object*>*  ObjectUpdates;

/// @brief Field defaultSize, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultSize, put=__cordl_internal_set_defaultSize)) int32_t  defaultSize;

/// @brief Field offset, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>"
constexpr operator  ::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>*() noexcept;

/// @brief Method Add, addr 0xa727528, size 0x130, virtual false, abstract: false, final false
inline void Add(::System::Collections::Generic::List_1<::System::Object*>*  viewData) ;

/// @brief Method Clear, addr 0xa727858, size 0x100, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Equals, addr 0xa72995c, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa729934, size 0x28, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  other) ;

/// @brief Method Equals, addr 0xa7298fc, size 0x38, virtual true, abstract: false, final true
inline bool Equals(::Photon::Pun::PhotonNetwork_SerializeViewBatch*  other) ;

/// @brief Method GetHashCode, addr 0xa7298e8, size 0x14, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Photon::Pun::PhotonNetwork_SerializeViewBatch* New_ctor(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  batch, int32_t  offset) ;

constexpr ::GlobalNamespace::PhotonNetwork_RaiseEventBatch const& __cordl_internal_get_Batch() const;

constexpr ::GlobalNamespace::PhotonNetwork_RaiseEventBatch& __cordl_internal_get_Batch() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_ObjectUpdates() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_ObjectUpdates() ;

constexpr int32_t const& __cordl_internal_get_defaultSize() const;

constexpr int32_t& __cordl_internal_get_defaultSize() ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr void __cordl_internal_set_Batch(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  value) ;

constexpr void __cordl_internal_set_ObjectUpdates(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_defaultSize(int32_t  value) ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

/// @brief Method .ctor, addr 0xa7273bc, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  batch, int32_t  offset) ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>* i___System__IEquatable_1___GlobalNamespace__PhotonNetwork_RaiseEventBatch_() noexcept;

/// @brief Convert to "::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>"
constexpr ::System::IEquatable_1<::Photon::Pun::PhotonNetwork_SerializeViewBatch*>* i___System__IEquatable_1___Photon__Pun__PhotonNetwork_SerializeViewBatch__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonNetwork_SerializeViewBatch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetwork_SerializeViewBatch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonNetwork_SerializeViewBatch(PhotonNetwork_SerializeViewBatch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonNetwork_SerializeViewBatch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonNetwork_SerializeViewBatch(PhotonNetwork_SerializeViewBatch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29705};

/// @brief Field Batch, offset: 0x10, size: 0x2, def value: None
 ::GlobalNamespace::PhotonNetwork_RaiseEventBatch  ___Batch;

/// @brief Field ObjectUpdates, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___ObjectUpdates;

/// @brief Field defaultSize, offset: 0x20, size: 0x4, def value: None
 int32_t  ___defaultSize;

/// @brief Field offset, offset: 0x24, size: 0x4, def value: None
 int32_t  ___offset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::PhotonNetwork_SerializeViewBatch, ___Batch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonNetwork_SerializeViewBatch, ___ObjectUpdates) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonNetwork_SerializeViewBatch, ___defaultSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Pun::PhotonNetwork_SerializeViewBatch, ___offset) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::PhotonNetwork_SerializeViewBatch) == 0x28, "Size mismatch!");

} // namespace end def Photon::Pun
