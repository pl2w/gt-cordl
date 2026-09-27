#pragma once
// IWYU pragma private; include "Photon/Voice/PUN/PhotonVoiceNetwork.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Voice/Unity/zzzz__VoiceConnection_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PhotonVoiceNetwork)
namespace Photon::Realtime {
struct ClientState;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace Photon::Voice::Unity {
class Speaker;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Voice::PUN {
class PhotonVoiceNetwork;
}
// Write type traits
MARK_REF_T(::Photon::Voice::PUN::PhotonVoiceNetwork*);
DEFINE_IL2CPP_CLASS(::Photon::Voice::PUN::PhotonVoiceNetwork*, "Photon.Voice.PUN", "PhotonVoiceNetwork");
// [DisallowMultipleComponent]
// [AddComponentMenu("Photon Voice/Photon Voice Network")]
// [HelpURL("https://doc.photonengine.com/en-us/voice/v2/getting-started/voice-for-pun")]
// Dependencies Photon.Voice.Unity.VoiceConnection
namespace Photon::Voice::PUN {
// Is value type: false
// CS Name: Photon.Voice.PUN.PhotonVoiceNetwork
class CORDL_TYPE PhotonVoiceNetwork : public ::Photon::Voice::Unity::VoiceConnection {
public:
// Declarations
/// @brief Field AutoConnectAndJoin, offset 0x114, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoConnectAndJoin, put=__cordl_internal_set_AutoConnectAndJoin)) bool  AutoConnectAndJoin;

/// @brief Field AutoLeaveAndDisconnect, offset 0x115, size 0x1 
 __declspec(property(get=__cordl_internal_get_AutoLeaveAndDisconnect, put=__cordl_internal_set_AutoLeaveAndDisconnect)) bool  AutoLeaveAndDisconnect;

 __declspec(property(get=get_UsePunAuthValues, put=set_UsePunAuthValues)) bool  UsePunAuthValues;

/// @brief Field WorkInOfflineMode, offset 0x116, size 0x1 
 __declspec(property(get=__cordl_internal_get_WorkInOfflineMode, put=__cordl_internal_set_WorkInOfflineMode)) bool  WorkInOfflineMode;

/// @brief Field clientCalledConnectAndJoin, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientCalledConnectAndJoin, put=__cordl_internal_set_clientCalledConnectAndJoin)) bool  clientCalledConnectAndJoin;

/// @brief Field clientCalledConnectOnly, offset 0x122, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientCalledConnectOnly, put=__cordl_internal_set_clientCalledConnectOnly)) bool  clientCalledConnectOnly;

/// @brief Field clientCalledDisconnect, offset 0x121, size 0x1 
 __declspec(property(get=__cordl_internal_get_clientCalledDisconnect, put=__cordl_internal_set_clientCalledDisconnect)) bool  clientCalledDisconnect;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  instance;

/// @brief Field instanceLock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instanceLock, put=setStaticF_instanceLock)) ::System::Object*  instanceLock;

/// @brief Field instantiated, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_instantiated, put=setStaticF_instantiated)) bool  instantiated;

/// @brief Field internalConnect, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_internalConnect, put=__cordl_internal_set_internalConnect)) bool  internalConnect;

/// @brief Field internalDisconnect, offset 0x123, size 0x1 
 __declspec(property(get=__cordl_internal_get_internalDisconnect, put=__cordl_internal_set_internalDisconnect)) bool  internalDisconnect;

/// @brief Field usePunAppSettings, offset 0x125, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePunAppSettings, put=__cordl_internal_set_usePunAppSettings)) bool  usePunAppSettings;

/// @brief Field usePunAuthValues, offset 0x126, size 0x1 
 __declspec(property(get=__cordl_internal_get_usePunAuthValues, put=__cordl_internal_set_usePunAuthValues)) bool  usePunAuthValues;

/// @brief Field voiceRoomParams, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_voiceRoomParams, put=__cordl_internal_set_voiceRoomParams)) ::Photon::Realtime::EnterRoomParams*  voiceRoomParams;

/// @brief Method Awake, addr 0xa77daec, size 0x180, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckLateLinking, addr 0xa77f700, size 0x7c4, virtual false, abstract: false, final false
inline void CheckLateLinking(::Photon::Voice::Unity::Speaker*  speaker, int32_t  viewId) ;

/// @brief Method Connect, addr 0xa77d6f8, size 0x2b0, virtual false, abstract: false, final false
inline bool Connect() ;

/// @brief Method ConnectAndJoinRoom, addr 0xa77d518, size 0x1e0, virtual false, abstract: false, final false
inline bool ConnectAndJoinRoom() ;

/// @brief Method ConnectOrJoin, addr 0xa77f124, size 0x49c, virtual false, abstract: false, final false
inline void ConnectOrJoin() ;

/// @brief Method Disconnect, addr 0xa77d9a8, size 0x144, virtual false, abstract: false, final false
inline void Disconnect() ;

/// @brief Method FollowPun, addr 0xa77dd38, size 0x48c, virtual false, abstract: false, final false
inline void FollowPun() ;

/// @brief Method FollowPun, addr 0xa77e6ec, size 0x24, virtual false, abstract: false, final false
inline void FollowPun(::Photon::Realtime::ClientState  toState) ;

/// @brief Method GetVoiceRoomName, addr 0xa77f060, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW GetVoiceRoomName() ;

/// @brief Method JoinRoom, addr 0xa77f5c0, size 0x140, virtual false, abstract: false, final false
inline bool JoinRoom(::StringW  voiceRoomName) ;

static inline ::Photon::Voice::PUN::PhotonVoiceNetwork* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa77e28c, size 0x2c0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa77e1c4, size 0xc8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa77dc6c, size 0xcc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPunStateChanged, addr 0xa77e54c, size 0x1a0, virtual false, abstract: false, final false
inline void OnPunStateChanged(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  toState) ;

/// @brief Method OnVoiceStateChanged, addr 0xa77e710, size 0x174, virtual true, abstract: false, final false
inline void OnVoiceStateChanged(::Photon::Realtime::ClientState  fromState, ::Photon::Realtime::ClientState  toState) ;

/// @brief Method SimpleSpeakerFactory, addr 0xa77e884, size 0x540, virtual true, abstract: false, final false
inline ::UnityW<::Photon::Voice::Unity::Speaker> SimpleSpeakerFactory(int32_t  playerId, uint8_t  voiceId, ::System::Object*  userData) ;

constexpr bool const& __cordl_internal_get_AutoConnectAndJoin() const;

constexpr bool& __cordl_internal_get_AutoConnectAndJoin() ;

constexpr bool const& __cordl_internal_get_AutoLeaveAndDisconnect() const;

constexpr bool& __cordl_internal_get_AutoLeaveAndDisconnect() ;

constexpr bool const& __cordl_internal_get_WorkInOfflineMode() const;

constexpr bool& __cordl_internal_get_WorkInOfflineMode() ;

constexpr bool const& __cordl_internal_get_clientCalledConnectAndJoin() const;

constexpr bool& __cordl_internal_get_clientCalledConnectAndJoin() ;

constexpr bool const& __cordl_internal_get_clientCalledConnectOnly() const;

constexpr bool& __cordl_internal_get_clientCalledConnectOnly() ;

constexpr bool const& __cordl_internal_get_clientCalledDisconnect() const;

constexpr bool& __cordl_internal_get_clientCalledDisconnect() ;

constexpr bool const& __cordl_internal_get_internalConnect() const;

constexpr bool& __cordl_internal_get_internalConnect() ;

constexpr bool const& __cordl_internal_get_internalDisconnect() const;

constexpr bool& __cordl_internal_get_internalDisconnect() ;

constexpr bool const& __cordl_internal_get_usePunAppSettings() const;

constexpr bool& __cordl_internal_get_usePunAppSettings() ;

constexpr bool const& __cordl_internal_get_usePunAuthValues() const;

constexpr bool& __cordl_internal_get_usePunAuthValues() ;

constexpr ::Photon::Realtime::EnterRoomParams* const& __cordl_internal_get_voiceRoomParams() const;

constexpr ::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_voiceRoomParams() ;

constexpr void __cordl_internal_set_AutoConnectAndJoin(bool  value) ;

constexpr void __cordl_internal_set_AutoLeaveAndDisconnect(bool  value) ;

constexpr void __cordl_internal_set_WorkInOfflineMode(bool  value) ;

constexpr void __cordl_internal_set_clientCalledConnectAndJoin(bool  value) ;

constexpr void __cordl_internal_set_clientCalledConnectOnly(bool  value) ;

constexpr void __cordl_internal_set_clientCalledDisconnect(bool  value) ;

constexpr void __cordl_internal_set_internalConnect(bool  value) ;

constexpr void __cordl_internal_set_internalDisconnect(bool  value) ;

constexpr void __cordl_internal_set_usePunAppSettings(bool  value) ;

constexpr void __cordl_internal_set_usePunAuthValues(bool  value) ;

constexpr void __cordl_internal_set_voiceRoomParams(::Photon::Realtime::EnterRoomParams*  value) ;

/// @brief Method .ctor, addr 0xa77fec4, size 0xd8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> getStaticF_instance() ;

static inline ::System::Object* getStaticF_instanceLock() ;

static inline bool getStaticF_instantiated() ;

/// @brief Method get_Instance, addr 0xa77c80c, size 0x76c, virtual false, abstract: false, final false
static inline ::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork> get_Instance() ;

/// @brief Method get_UsePunAuthValues, addr 0xa77d508, size 0x8, virtual false, abstract: false, final false
inline bool get_UsePunAuthValues() ;

static inline void setStaticF_instance(::UnityW<::Photon::Voice::PUN::PhotonVoiceNetwork>  value) ;

static inline void setStaticF_instanceLock(::System::Object*  value) ;

static inline void setStaticF_instantiated(bool  value) ;

/// @brief Method set_Instance, addr 0xa77cf78, size 0x590, virtual false, abstract: false, final false
static inline void set_Instance(::Photon::Voice::PUN::PhotonVoiceNetwork*  value) ;

/// @brief Method set_UsePunAuthValues, addr 0xa77d510, size 0x8, virtual false, abstract: false, final false
inline void set_UsePunAuthValues(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhotonVoiceNetwork() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceNetwork", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhotonVoiceNetwork(PhotonVoiceNetwork && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhotonVoiceNetwork", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhotonVoiceNetwork(PhotonVoiceNetwork const& ) = delete;

/// @brief Field VoiceRoomNameSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  VoiceRoomNameSuffix{u"_voice_"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32225};

/// @brief Field AutoConnectAndJoin, offset: 0x114, size: 0x1, def value: None
 bool  ___AutoConnectAndJoin;

/// @brief Field AutoLeaveAndDisconnect, offset: 0x115, size: 0x1, def value: None
 bool  ___AutoLeaveAndDisconnect;

/// @brief Field WorkInOfflineMode, offset: 0x116, size: 0x1, def value: None
 bool  ___WorkInOfflineMode;

/// @brief Field voiceRoomParams, offset: 0x118, size: 0x8, def value: None
 ::Photon::Realtime::EnterRoomParams*  ___voiceRoomParams;

/// @brief Field clientCalledConnectAndJoin, offset: 0x120, size: 0x1, def value: None
 bool  ___clientCalledConnectAndJoin;

/// @brief Field clientCalledDisconnect, offset: 0x121, size: 0x1, def value: None
 bool  ___clientCalledDisconnect;

/// @brief Field clientCalledConnectOnly, offset: 0x122, size: 0x1, def value: None
 bool  ___clientCalledConnectOnly;

/// @brief Field internalDisconnect, offset: 0x123, size: 0x1, def value: None
 bool  ___internalDisconnect;

/// @brief Field internalConnect, offset: 0x124, size: 0x1, def value: None
 bool  ___internalConnect;

/// [SerializeField]
/// @brief Field usePunAppSettings, offset: 0x125, size: 0x1, def value: None
 bool  ___usePunAppSettings;

/// [SerializeField]
/// @brief Field usePunAuthValues, offset: 0x126, size: 0x1, def value: None
 bool  ___usePunAuthValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___AutoConnectAndJoin) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___AutoLeaveAndDisconnect) == 0x115, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___WorkInOfflineMode) == 0x116, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___voiceRoomParams) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___clientCalledConnectAndJoin) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___clientCalledDisconnect) == 0x121, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___clientCalledConnectOnly) == 0x122, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___internalDisconnect) == 0x123, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___internalConnect) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___usePunAppSettings) == 0x125, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::PUN::PhotonVoiceNetwork, ___usePunAuthValues) == 0x126, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::PUN::PhotonVoiceNetwork) == 0x128, "Size mismatch!");

} // namespace end def Photon::Voice::PUN
