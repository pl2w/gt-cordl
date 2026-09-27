#pragma once
// IWYU pragma private; include "Photon/Voice/Fusion/FusionVoiceClient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionVoiceClient)
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion::Sockets {
struct NetConnectFailedReason;
}
namespace Fusion::Sockets {
struct NetDisconnectReason;
}
namespace Fusion::Sockets {
struct ReliableKey;
}
namespace Fusion {
class HostMigrationToken;
}
namespace Fusion {
class INetworkRunnerCallbacks;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
struct NetworkInput;
}
namespace Fusion {
class NetworkObject;
}
namespace Fusion {
class NetworkRunnerCallbackArgs_ConnectRequest;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
struct PlayerRef;
}
namespace Fusion {
class SessionInfo;
}
namespace Fusion {
struct ShutdownReason;
}
namespace Fusion {
struct SimulationMessagePtr;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct ArraySegment_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice::Fusion {
class FusionVoiceClient;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Fusion::FusionVoiceClient*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Fusion::FusionVoiceClient*, "Photon.Voice.Fusion", "FusionVoiceClient");
// [AddComponentMenu("Photon Voice/Fusion/Fusion Voice Client")]
// [RequireComponent(typeof(Fusion.NetworkRunner))]
// Dependencies UnityEngine.MonoBehaviour
namespace Photon::Voice::Fusion {
// Is value type: false
// CS Name: Photon.Voice.Fusion.FusionVoiceClient
class CORDL_TYPE FusionVoiceClient : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_FusionOfflineVoiceRoomName)) ::StringW  FusionOfflineVoiceRoomName;

/// @brief Field UseFusionAppSettings, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseFusionAppSettings, put=__cordl_internal_set_UseFusionAppSettings)) bool  UseFusionAppSettings;

/// @brief Field UseFusionAuthValues, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseFusionAuthValues, put=__cordl_internal_set_UseFusionAuthValues)) bool  UseFusionAuthValues;

/// @brief Field fusionOfflineVoiceRoomName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_fusionOfflineVoiceRoomName, put=__cordl_internal_set_fusionOfflineVoiceRoomName)) ::StringW  fusionOfflineVoiceRoomName;

/// @brief Field memCompressedUInt64, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memCompressedUInt64, put=setStaticF_memCompressedUInt64)) ::ArrayW<uint8_t>  memCompressedUInt64;

/// @brief Field networkRunner, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkRunner, put=__cordl_internal_set_networkRunner)) ::UnityW<::Fusion::NetworkRunner>  networkRunner;

/// @brief Field voiceFollowClientStarted, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_voiceFollowClientStarted, put=__cordl_internal_set_voiceFollowClientStarted)) bool  voiceFollowClientStarted;

/// @brief Field voiceRoomParams, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceRoomParams, put=__cordl_internal_set_voiceRoomParams)) ::Photon::Realtime::EnterRoomParams*  voiceRoomParams;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method DeserializeFusionNetworkId, addr 0xa77a068, size 0x148, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeFusionNetworkId(::ExitGames::Client::Photon::StreamBuffer*  instream, int16_t  length) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectFailed, addr 0xa77a5b4, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectRequest, addr 0xa77a5b0, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectedToServer, addr 0xa77a5a8, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse, addr 0xa77a5c0, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnDisconnectedFromServer, addr 0xa77a5ac, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnHostMigration, addr 0xa77a5c4, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInput, addr 0xa77a59c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInputMissing, addr 0xa77a5a0, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerJoined, addr 0xa77a594, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerLeft, addr 0xa77a598, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataProgress, addr 0xa77a5dc, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  reliableKey, float_t  progress) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnReliableDataReceived, addr 0xa77a5d8, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  reliableKey, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadDone, addr 0xa77a5c8, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadStart, addr 0xa77a5cc, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSessionListUpdated, addr 0xa77a5bc, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnShutdown, addr 0xa77a5a4, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage, addr 0xa77a5b8, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

static inline ::Photon::Voice::Fusion::FusionVoiceClient* New_ctor() ;

/// @brief Method OnObjectEnterAOI, addr 0xa77a5d4, size 0x4, virtual true, abstract: false, final true
inline void OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnObjectExitAOI, addr 0xa77a5d0, size 0x4, virtual true, abstract: false, final true
inline void OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method ReadCompressedUInt64, addr 0xa77a1b0, size 0xec, virtual false, abstract: false, final false
static inline uint64_t ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method SerializeFusionNetworkId, addr 0xa77a4e8, size 0xac, virtual false, abstract: false, final false
static inline int16_t SerializeFusionNetworkId(::ExitGames::Client::Photon::StreamBuffer*  outstream, ::System::Object*  customobject) ;

/// @brief Method VoiceRegisterCustomTypes, addr 0xa779f2c, size 0x13c, virtual false, abstract: false, final false
static inline void VoiceRegisterCustomTypes() ;

/// @brief Method WriteCompressedUInt64, addr 0xa77a29c, size 0x24c, virtual false, abstract: false, final false
static inline int32_t WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, uint64_t  value) ;

constexpr bool const& __cordl_internal_get_UseFusionAppSettings() const;

constexpr bool& __cordl_internal_get_UseFusionAppSettings() ;

constexpr bool const& __cordl_internal_get_UseFusionAuthValues() const;

constexpr bool& __cordl_internal_get_UseFusionAuthValues() ;

constexpr ::StringW const& __cordl_internal_get_fusionOfflineVoiceRoomName() const;

constexpr ::StringW& __cordl_internal_get_fusionOfflineVoiceRoomName() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get_networkRunner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get_networkRunner() ;

constexpr bool const& __cordl_internal_get_voiceFollowClientStarted() const;

constexpr bool& __cordl_internal_get_voiceFollowClientStarted() ;

constexpr ::Photon::Realtime::EnterRoomParams* const& __cordl_internal_get_voiceRoomParams() const;

constexpr ::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_voiceRoomParams() ;

constexpr void __cordl_internal_set_UseFusionAppSettings(bool  value) ;

constexpr void __cordl_internal_set_UseFusionAuthValues(bool  value) ;

constexpr void __cordl_internal_set_fusionOfflineVoiceRoomName(::StringW  value) ;

constexpr void __cordl_internal_set_networkRunner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_voiceFollowClientStarted(bool  value) ;

constexpr void __cordl_internal_set_voiceRoomParams(::Photon::Realtime::EnterRoomParams*  value) ;

/// @brief Method .ctor, addr 0xa77a5e0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_memCompressedUInt64() ;

/// @brief Method get_FusionOfflineVoiceRoomName, addr 0xa779e88, size 0xa4, virtual false, abstract: false, final false
inline ::StringW get_FusionOfflineVoiceRoomName() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

static inline void setStaticF_memCompressedUInt64(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionVoiceClient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionVoiceClient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionVoiceClient(FusionVoiceClient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionVoiceClient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionVoiceClient(FusionVoiceClient const& ) = delete;

/// @brief Field FusionNetworkIdTypeCode offset 0xffffffff size 0x1
static constexpr uint8_t  FusionNetworkIdTypeCode{static_cast<uint8_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32378};

/// @brief Field networkRunner, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ___networkRunner;

/// @brief Field voiceRoomParams, offset: 0x28, size: 0x8, def value: None
 ::Photon::Realtime::EnterRoomParams*  ___voiceRoomParams;

/// @brief Field voiceFollowClientStarted, offset: 0x30, size: 0x1, def value: None
 bool  ___voiceFollowClientStarted;

/// [SerializeField]
/// @brief Field UseFusionAppSettings, offset: 0x31, size: 0x1, def value: None
 bool  ___UseFusionAppSettings;

/// [SerializeField]
/// @brief Field UseFusionAuthValues, offset: 0x32, size: 0x1, def value: None
 bool  ___UseFusionAuthValues;

/// @brief Field fusionOfflineVoiceRoomName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___fusionOfflineVoiceRoomName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceClient, ___networkRunner) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceClient, ___voiceRoomParams) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceClient, ___voiceFollowClientStarted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceClient, ___UseFusionAppSettings) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceClient, ___UseFusionAuthValues) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceClient, ___fusionOfflineVoiceRoomName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Fusion::FusionVoiceClient) == 0x40, "Size mismatch!");

} // namespace end def Photon::Voice::Fusion
