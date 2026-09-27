#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/LoadBalancingPeer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LoadBalancingPeer)
namespace ExitGames::Client::Photon {
struct ConnectionProtocol;
}
namespace ExitGames::Client::Photon {
class Hashtable;
}
namespace ExitGames::Client::Photon {
class IPhotonPeerListener;
}
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace ExitGames::Client::Photon {
template<typename T>
class Pool_1;
}
namespace ExitGames::Client::Photon {
struct SendOptions;
}
namespace Fusion::Photon::Realtime {
class AuthenticationValues;
}
namespace Fusion::Photon::Realtime {
struct EncryptionMode;
}
namespace Fusion::Photon::Realtime {
class EnterRoomParams;
}
namespace Fusion::Photon::Realtime {
class FindFriendsOptions;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingPeer___c;
}
namespace Fusion::Photon::Realtime {
class OpJoinRandomRoomParams;
}
namespace Fusion::Photon::Realtime {
class RaiseEventOptions;
}
namespace Fusion::Photon::Realtime {
class RoomOptions;
}
namespace Fusion::Photon::Realtime {
class TypedLobby;
}
namespace Fusion::Photon::Realtime {
class WebFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Fusion::Photon::Realtime {
class LoadBalancingPeer;
}
namespace Fusion::Photon::Realtime {
class LoadBalancingPeer___c;
}
// Write type traits
MARK_REF_T(::Fusion::Photon::Realtime::LoadBalancingPeer*);
MARK_REF_T(::Fusion::Photon::Realtime::LoadBalancingPeer___c*);
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::LoadBalancingPeer*, "Fusion.Photon.Realtime", "LoadBalancingPeer");
DEFINE_IL2CPP_CLASS(::Fusion::Photon::Realtime::LoadBalancingPeer___c*, "Fusion.Photon.Realtime", "LoadBalancingPeer/<>c");
// Dependencies ExitGames.Client.Photon.PhotonPeer
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.LoadBalancingPeer
class CORDL_TYPE LoadBalancingPeer : public ::ExitGames::Client::Photon::PhotonPeer {
public:
// Declarations
using __c = ::Fusion::Photon::Realtime::LoadBalancingPeer___c;

/// @brief Field paramDictionaryPool, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_paramDictionaryPool, put=__cordl_internal_set_paramDictionaryPool)) ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  paramDictionaryPool;

/// [Conditional("SUPPORTED_UNITY")]
/// @brief Method ConfigUnitySockets, addr 0x5f5a0e4, size 0x3e8, virtual false, abstract: false, final false
inline void ConfigUnitySockets() ;

static inline ::Fusion::Photon::Realtime::LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

static inline ::Fusion::Photon::Realtime::LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method OpAuthenticate, addr 0x5f5cc14, size 0x320, virtual true, abstract: false, final false
inline bool OpAuthenticate(::StringW  appId, ::StringW  appVersion, ::Fusion::Photon::Realtime::AuthenticationValues*  authValues, ::StringW  regionCode, bool  getLobbyStatistics) ;

/// @brief Method OpAuthenticateOnce, addr 0x5f5cf3c, size 0x50c, virtual true, abstract: false, final false
inline bool OpAuthenticateOnce(::StringW  appId, ::StringW  appVersion, ::Fusion::Photon::Realtime::AuthenticationValues*  authValues, ::StringW  regionCode, ::Fusion::Photon::Realtime::EncryptionMode  encryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol  expectedProtocol) ;

/// @brief Method OpChangeGroups, addr 0x5f5d448, size 0x1b0, virtual true, abstract: false, final false
inline bool OpChangeGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd) ;

/// @brief Method OpCreateRoom, addr 0x5f5adf0, size 0x330, virtual true, abstract: false, final false
inline bool OpCreateRoom(::Fusion::Photon::Realtime::EnterRoomParams*  opParams) ;

/// @brief Method OpFindFriends, addr 0x5f5c284, size 0x184, virtual true, abstract: false, final false
inline bool OpFindFriends(::ArrayW<::StringW>  friendsToFind, ::Fusion::Photon::Realtime::FindFriendsOptions*  options) ;

/// @brief Method OpGetGameList, addr 0x5f5be9c, size 0x3e8, virtual true, abstract: false, final false
inline bool OpGetGameList(::Fusion::Photon::Realtime::TypedLobby*  lobby, ::StringW  queryData) ;

/// @brief Method OpGetRegions, addr 0x5f5a544, size 0x118, virtual true, abstract: false, final false
inline bool OpGetRegions(::StringW  appId) ;

/// @brief Method OpJoinLobby, addr 0x5f5a65c, size 0x1e4, virtual true, abstract: false, final false
inline bool OpJoinLobby(::Fusion::Photon::Realtime::TypedLobby*  lobby) ;

/// @brief Method OpJoinRandomOrCreateRoom, addr 0x5f5b8d4, size 0x468, virtual true, abstract: false, final false
inline bool OpJoinRandomOrCreateRoom(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams, ::Fusion::Photon::Realtime::EnterRoomParams*  createRoomParams) ;

/// @brief Method OpJoinRandomRoom, addr 0x5f5b4bc, size 0x418, virtual true, abstract: false, final false
inline bool OpJoinRandomRoom(::Fusion::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams) ;

/// @brief Method OpJoinRoom, addr 0x5f5b120, size 0x39c, virtual true, abstract: false, final false
inline bool OpJoinRoom(::Fusion::Photon::Realtime::EnterRoomParams*  opParams) ;

/// @brief Method OpLeaveLobby, addr 0x5f5a84c, size 0x118, virtual true, abstract: false, final false
inline bool OpLeaveLobby() ;

/// @brief Method OpLeaveRoom, addr 0x5f5bd3c, size 0x160, virtual true, abstract: false, final false
inline bool OpLeaveRoom(bool  becomeInactive, bool  sendAuthCookie) ;

/// @brief Method OpRaiseEvent, addr 0x5f5d5f8, size 0x2f8, virtual true, abstract: false, final false
inline bool OpRaiseEvent(uint8_t  eventCode, ::System::Object*  customEventContent, ::Fusion::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method OpSetCustomPropertiesOfActor, addr 0x5f5c430, size 0x80, virtual false, abstract: false, final false
inline bool OpSetCustomPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties) ;

/// @brief Method OpSetCustomPropertiesOfRoom, addr 0x5f5cb9c, size 0x78, virtual false, abstract: false, final false
inline bool OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties) ;

/// @brief Method OpSetPropertiesOfActor, addr 0x5f5c4b0, size 0x344, virtual false, abstract: false, final false
inline bool OpSetPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webflags) ;

/// @brief Method OpSetPropertiesOfRoom, addr 0x5f5c890, size 0x30c, virtual false, abstract: false, final false
inline bool OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webflags) ;

/// @brief Method OpSetPropertyOfRoom, addr 0x5f5c800, size 0x90, virtual false, abstract: false, final false
inline bool OpSetPropertyOfRoom(uint8_t  propCode, ::System::Object*  value) ;

/// @brief Method OpSettings, addr 0x5f5d8f0, size 0x1e8, virtual true, abstract: false, final false
inline bool OpSettings(bool  receiveLobbyStats) ;

/// @brief Method RoomOptionsToOpParameters, addr 0x5f5a964, size 0x3f4, virtual false, abstract: false, final false
inline void RoomOptionsToOpParameters(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  op, ::Fusion::Photon::Realtime::RoomOptions*  roomOptions, bool  usePropertiesKey) ;

constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* const& __cordl_internal_get_paramDictionaryPool() const;

constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*& __cordl_internal_get_paramDictionaryPool() ;

constexpr void __cordl_internal_set_paramDictionaryPool(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value) ;

/// @brief Method .ctor, addr 0x5f5a4cc, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method .ctor, addr 0x5f59ed0, size 0x214, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method get_PingImplementation, addr 0x5f59e30, size 0x48, virtual false, abstract: false, final false
static inline ::System::Type* get_PingImplementation() ;

/// @brief Method set_PingImplementation, addr 0x5f59e78, size 0x58, virtual false, abstract: false, final false
static inline void set_PingImplementation(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingPeer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingPeer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingPeer(LoadBalancingPeer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingPeer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingPeer(LoadBalancingPeer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28069};

/// @brief Field paramDictionaryPool, offset: 0x110, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  ___paramDictionaryPool;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Photon::Realtime::LoadBalancingPeer, ___paramDictionaryPool) == 0x110, "Offset mismatch!");

static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingPeer) == 0x118, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Photon::Realtime {
// Is value type: false
// CS Name: Fusion.Photon.Realtime.LoadBalancingPeer/<>c
class CORDL_TYPE LoadBalancingPeer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Fusion::Photon::Realtime::LoadBalancingPeer___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*  __9__4_1;

static inline ::Fusion::Photon::Realtime::LoadBalancingPeer___c* New_ctor() ;

/// @brief Method <.ctor>b__4_0, addr 0x5f5db48, size 0x54, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ParameterDictionary* __ctor_b__4_0() ;

/// @brief Method <.ctor>b__4_1, addr 0x5f5db9c, size 0x18, virtual false, abstract: false, final false
inline void __ctor_b__4_1(::ExitGames::Client::Photon::ParameterDictionary*  x) ;

/// @brief Method .ctor, addr 0x5f5db40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::Photon::Realtime::LoadBalancingPeer___c* getStaticF___9() ;

static inline ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* getStaticF___9__4_0() ;

static inline ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::Fusion::Photon::Realtime::LoadBalancingPeer___c*  value) ;

static inline void setStaticF___9__4_0(::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value) ;

static inline void setStaticF___9__4_1(::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadBalancingPeer___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingPeer___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadBalancingPeer___c(LoadBalancingPeer___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadBalancingPeer___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadBalancingPeer___c(LoadBalancingPeer___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28068};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::Photon::Realtime::LoadBalancingPeer___c) == 0x10, "Size mismatch!");

} // namespace end def Fusion::Photon::Realtime
