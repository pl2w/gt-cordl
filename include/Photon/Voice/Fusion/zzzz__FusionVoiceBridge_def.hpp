#pragma once
// IWYU pragma private; include "Photon/Voice/Fusion/FusionVoiceBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceComponent_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionVoiceBridge)
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
struct ClientState;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace Photon::Voice::Unity {
class VoiceConnection;
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
class FusionVoiceBridge;
}
// Write type traits
MARK_REF_T(::Photon::Voice::Fusion::FusionVoiceBridge*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Fusion::FusionVoiceBridge*, "Photon.Voice.Fusion", "FusionVoiceBridge");
// [RequireComponent(typeof(Fusion.NetworkRunner))]
// [RequireComponent(typeof(Photon.Voice.Unity.VoiceConnection))]
// Dependencies Photon.Voice.Unity.VoiceComponent
namespace Photon::Voice::Fusion {
// Is value type: false
// CS Name: Photon.Voice.Fusion.FusionVoiceBridge
class CORDL_TYPE FusionVoiceBridge : public ::Photon::Voice::Unity::VoiceComponent {
public:
// Declarations
 __declspec(property(get=get_UseFusionAppSettings, put=set_UseFusionAppSettings)) bool  UseFusionAppSettings;

 __declspec(property(get=get_UseFusionAuthValues, put=set_UseFusionAuthValues)) bool  UseFusionAuthValues;

/// @brief Field <UseFusionAppSettings>k__BackingField, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseFusionAppSettings_k__BackingField, put=__cordl_internal_set__UseFusionAppSettings_k__BackingField)) bool  _UseFusionAppSettings_k__BackingField;

/// @brief Field <UseFusionAuthValues>k__BackingField, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__UseFusionAuthValues_k__BackingField, put=__cordl_internal_set__UseFusionAuthValues_k__BackingField)) bool  _UseFusionAuthValues_k__BackingField;

/// @brief Field memCompressedUInt64, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memCompressedUInt64, put=setStaticF_memCompressedUInt64)) ::ArrayW<uint8_t>  memCompressedUInt64;

/// @brief Field networkRunner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkRunner, put=__cordl_internal_set_networkRunner)) ::UnityW<::Fusion::NetworkRunner>  networkRunner;

/// @brief Field voiceConnection, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceConnection, put=__cordl_internal_set_voiceConnection)) ::UnityW<::Photon::Voice::Unity::VoiceConnection>  voiceConnection;

/// @brief Field voiceRoomParams, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceRoomParams, put=__cordl_internal_set_voiceRoomParams)) ::Photon::Realtime::EnterRoomParams*  voiceRoomParams;

/// @brief Convert operator to "::Fusion::INetworkRunnerCallbacks"
constexpr operator  ::Fusion::INetworkRunnerCallbacks*() noexcept;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Method Awake, addr 0xa777920, size 0x130, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeFusionNetworkId, addr 0xa779288, size 0x148, virtual false, abstract: false, final false
static inline ::System::Object* DeserializeFusionNetworkId(::ExitGames::Client::Photon::StreamBuffer*  instream, int16_t  length) ;

/// @brief Method FusionSpeakerFactory, addr 0xa778098, size 0x590, virtual false, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Speaker> FusionSpeakerFactory(int32_t  playerId, uint8_t  voiceId, ::System::Object*  userData) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectFailed, addr 0xa779c30, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectFailed(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetAddress  remoteAddress, ::Fusion::Sockets::NetConnectFailedReason  reason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectRequest, addr 0xa779c2c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectRequest(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*  request, ::ArrayW<uint8_t>  token) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnConnectedToServer, addr 0xa779c28, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnConnectedToServer(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnCustomAuthenticationResponse, addr 0xa779c3c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnCustomAuthenticationResponse(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  data) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnHostMigration, addr 0xa779c40, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnHostMigration(::Fusion::NetworkRunner*  runner, ::Fusion::HostMigrationToken*  hostMigrationToken) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInput, addr 0xa779c1c, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInput(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnInputMissing, addr 0xa779c20, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnInputMissing(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::NetworkInput  input) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerJoined, addr 0xa7797b4, size 0x234, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerJoined(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnPlayerLeft, addr 0xa7799e8, size 0x234, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnPlayerLeft(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadDone, addr 0xa779c44, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadDone(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSceneLoadStart, addr 0xa779c48, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSceneLoadStart(::Fusion::NetworkRunner*  runner) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnSessionListUpdated, addr 0xa779c38, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnSessionListUpdated(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::SessionInfo*>*  sessionList) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnShutdown, addr 0xa779c24, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnShutdown(::Fusion::NetworkRunner*  runner, ::Fusion::ShutdownReason  shutdownReason) ;

/// @brief Method Fusion.INetworkRunnerCallbacks.OnUserSimulationMessage, addr 0xa779c34, size 0x4, virtual true, abstract: false, final true
inline void Fusion_INetworkRunnerCallbacks_OnUserSimulationMessage(::Fusion::NetworkRunner*  runner, ::Fusion::SimulationMessagePtr  message) ;

static inline ::Photon::Voice::Fusion::FusionVoiceBridge* New_ctor() ;

/// @brief Method OnDisable, addr 0xa777c90, size 0x9c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisconnectedFromServer, addr 0xa779c54, size 0xf4, virtual true, abstract: false, final true
inline void OnDisconnectedFromServer(::Fusion::NetworkRunner*  runner, ::Fusion::Sockets::NetDisconnectReason  reason) ;

/// @brief Method OnEnable, addr 0xa777b8c, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnObjectEnterAOI, addr 0xa779c50, size 0x4, virtual true, abstract: false, final true
inline void OnObjectEnterAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnObjectExitAOI, addr 0xa779c4c, size 0x4, virtual true, abstract: false, final true
inline void OnObjectExitAOI(::Fusion::NetworkRunner*  runner, ::Fusion::NetworkObject*  obj, ::Fusion::PlayerRef  player) ;

/// @brief Method OnReliableDataProgress, addr 0xa779d4c, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataProgress(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, float_t  progress) ;

/// @brief Method OnReliableDataReceived, addr 0xa779d48, size 0x4, virtual true, abstract: false, final true
inline void OnReliableDataReceived(::Fusion::NetworkRunner*  runner, ::Fusion::PlayerRef  player, ::Fusion::Sockets::ReliableKey  key, ::System::ArraySegment_1<uint8_t>  data) ;

/// @brief Method OnVoiceClientStateChanged, addr 0xa777d2c, size 0x8, virtual false, abstract: false, final false
inline void OnVoiceClientStateChanged(::Photon::Realtime::ClientState  previous, ::Photon::Realtime::ClientState  current) ;

/// @brief Method ReadCompressedUInt64, addr 0xa7793d0, size 0xec, virtual false, abstract: false, final false
static inline uint64_t ReadCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream) ;

/// @brief Method SerializeFusionNetworkId, addr 0xa779708, size 0xac, virtual false, abstract: false, final false
static inline int16_t SerializeFusionNetworkId(::ExitGames::Client::Photon::StreamBuffer*  outstream, ::System::Object*  customobject) ;

/// @brief Method VoiceConnectAndFollowFusion, addr 0xa778940, size 0x7bc, virtual false, abstract: false, final false
inline bool VoiceConnectAndFollowFusion() ;

/// @brief Method VoiceConnectOrJoinRoom, addr 0xa777c64, size 0x2c, virtual false, abstract: false, final false
inline void VoiceConnectOrJoinRoom() ;

/// @brief Method VoiceConnectOrJoinRoom, addr 0xa777d34, size 0x364, virtual false, abstract: false, final false
inline void VoiceConnectOrJoinRoom(::Photon::Realtime::ClientState  state) ;

/// @brief Method VoiceDisconnect, addr 0xa779118, size 0x2c, virtual false, abstract: false, final false
inline void VoiceDisconnect() ;

/// @brief Method VoiceGetMirroringRoomName, addr 0xa7788e0, size 0x60, virtual false, abstract: false, final false
inline ::StringW VoiceGetMirroringRoomName() ;

/// @brief Method VoiceJoinMirroringRoom, addr 0xa7790fc, size 0x1c, virtual false, abstract: false, final false
inline bool VoiceJoinMirroringRoom() ;

/// @brief Method VoiceJoinRoom, addr 0xa779144, size 0x144, virtual false, abstract: false, final false
inline bool VoiceJoinRoom(::StringW  voiceRoomName) ;

/// @brief Method VoiceRegisterCustomTypes, addr 0xa777a50, size 0x13c, virtual false, abstract: false, final false
static inline void VoiceRegisterCustomTypes() ;

/// @brief Method WriteCompressedUInt64, addr 0xa7794bc, size 0x24c, virtual false, abstract: false, final false
static inline int32_t WriteCompressedUInt64(::ExitGames::Client::Photon::StreamBuffer*  stream, uint64_t  value) ;

constexpr bool const& __cordl_internal_get__UseFusionAppSettings_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseFusionAppSettings_k__BackingField() ;

constexpr bool const& __cordl_internal_get__UseFusionAuthValues_k__BackingField() const;

constexpr bool& __cordl_internal_get__UseFusionAuthValues_k__BackingField() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get_networkRunner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get_networkRunner() ;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection> const& __cordl_internal_get_voiceConnection() const;

constexpr ::UnityW<::Photon::Voice::Unity::VoiceConnection>& __cordl_internal_get_voiceConnection() ;

constexpr ::Photon::Realtime::EnterRoomParams* const& __cordl_internal_get_voiceRoomParams() const;

constexpr ::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_voiceRoomParams() ;

constexpr void __cordl_internal_set__UseFusionAppSettings_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__UseFusionAuthValues_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_networkRunner(::UnityW<::Fusion::NetworkRunner>  value) ;

constexpr void __cordl_internal_set_voiceConnection(::UnityW<::Photon::Voice::Unity::VoiceConnection>  value) ;

constexpr void __cordl_internal_set_voiceRoomParams(::Photon::Realtime::EnterRoomParams*  value) ;

/// @brief Method .ctor, addr 0xa779d50, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_memCompressedUInt64() ;

/// [CompilerGenerated]
/// @brief Method get_UseFusionAppSettings, addr 0xa777900, size 0x8, virtual false, abstract: false, final false
inline bool get_UseFusionAppSettings() ;

/// [CompilerGenerated]
/// @brief Method get_UseFusionAuthValues, addr 0xa777910, size 0x8, virtual false, abstract: false, final false
inline bool get_UseFusionAuthValues() ;

/// @brief Convert to "::Fusion::INetworkRunnerCallbacks"
constexpr ::Fusion::INetworkRunnerCallbacks* i___Fusion__INetworkRunnerCallbacks() noexcept;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

static inline void setStaticF_memCompressedUInt64(::ArrayW<uint8_t>  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseFusionAppSettings, addr 0xa777908, size 0x8, virtual false, abstract: false, final false
inline void set_UseFusionAppSettings(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_UseFusionAuthValues, addr 0xa777918, size 0x8, virtual false, abstract: false, final false
inline void set_UseFusionAuthValues(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionVoiceBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionVoiceBridge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionVoiceBridge(FusionVoiceBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionVoiceBridge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionVoiceBridge(FusionVoiceBridge const& ) = delete;

/// @brief Field FusionNetworkIdTypeCode offset 0xffffffff size 0x1
static constexpr uint8_t  FusionNetworkIdTypeCode{static_cast<uint8_t>(0x0u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32377};

/// @brief Field networkRunner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ___networkRunner;

/// @brief Field voiceConnection, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Photon::Voice::Unity::VoiceConnection>  ___voiceConnection;

/// @brief Field voiceRoomParams, offset: 0x40, size: 0x8, def value: None
 ::Photon::Realtime::EnterRoomParams*  ___voiceRoomParams;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <UseFusionAppSettings>k__BackingField, offset: 0x48, size: 0x1, def value: None
 bool  ____UseFusionAppSettings_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <UseFusionAuthValues>k__BackingField, offset: 0x49, size: 0x1, def value: None
 bool  ____UseFusionAuthValues_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceBridge, ___networkRunner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceBridge, ___voiceConnection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceBridge, ___voiceRoomParams) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceBridge, ____UseFusionAppSettings_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Fusion::FusionVoiceBridge, ____UseFusionAuthValues_k__BackingField) == 0x49, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Fusion::FusionVoiceBridge) == 0x50, "Size mismatch!");

} // namespace end def Photon::Voice::Fusion
