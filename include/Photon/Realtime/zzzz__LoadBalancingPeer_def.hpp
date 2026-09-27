#pragma once
// IWYU pragma private; include "Photon/Realtime/LoadBalancingPeer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
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
namespace Photon::Realtime {
class AuthenticationValues;
}
namespace Photon::Realtime {
struct EncryptionMode;
}
namespace Photon::Realtime {
class EnterRoomParams;
}
namespace Photon::Realtime {
class FindFriendsOptions;
}
namespace Photon::Realtime {
class LoadBalancingPeer___c;
}
namespace Photon::Realtime {
class OpJoinRandomRoomParams;
}
namespace Photon::Realtime {
class RaiseEventOptions;
}
namespace Photon::Realtime {
class RoomOptions;
}
namespace Photon::Realtime {
class TypedLobby;
}
namespace Photon::Realtime {
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
namespace Photon::Realtime {
class LoadBalancingPeer;
}
namespace Photon::Realtime {
class LoadBalancingPeer___c;
}
// Write type traits
MARK_REF_T(::Photon::Realtime::LoadBalancingPeer*);
MARK_REF_T(::Photon::Realtime::LoadBalancingPeer___c*);
DEFINE_IL2CPP_CLASS(::Photon::Realtime::LoadBalancingPeer*, "Photon.Realtime", "LoadBalancingPeer");
DEFINE_IL2CPP_CLASS(::Photon::Realtime::LoadBalancingPeer___c*, "Photon.Realtime", "LoadBalancingPeer/<>c");
// Dependencies ExitGames.Client.Photon.PhotonPeer
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.LoadBalancingPeer
class CORDL_TYPE LoadBalancingPeer : public ::ExitGames::Client::Photon::PhotonPeer {
public:
// Declarations
using __c = ::Photon::Realtime::LoadBalancingPeer___c;

/// @brief Field enterRoomParams, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_enterRoomParams, put=__cordl_internal_set_enterRoomParams)) ::Photon::Realtime::EnterRoomParams*  enterRoomParams;

/// @brief Field paramDictionaryPool, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_paramDictionaryPool, put=__cordl_internal_set_paramDictionaryPool)) ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  paramDictionaryPool;

/// [Conditional("SUPPORTED_UNITY")]
/// @brief Method ConfigUnitySockets, addr 0xa706628, size 0x1c4, virtual false, abstract: false, final false
inline void ConfigUnitySockets() ;

static inline ::Photon::Realtime::LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

static inline ::Photon::Realtime::LoadBalancingPeer* New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method OpAuthenticate, addr 0xa7085f0, size 0x320, virtual true, abstract: false, final false
inline bool OpAuthenticate(::StringW  appId, ::StringW  appVersion, ::Photon::Realtime::AuthenticationValues*  authValues, ::StringW  regionCode, bool  getLobbyStatistics) ;

/// @brief Method OpAuthenticateOnce, addr 0xa708910, size 0x50c, virtual true, abstract: false, final false
inline bool OpAuthenticateOnce(::StringW  appId, ::StringW  appVersion, ::Photon::Realtime::AuthenticationValues*  authValues, ::StringW  regionCode, ::Photon::Realtime::EncryptionMode  encryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol  expectedProtocol) ;

/// @brief Method OpChangeGroups, addr 0xa708e1c, size 0x1b0, virtual true, abstract: false, final false
inline bool OpChangeGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd) ;

/// @brief Method OpCreateRoom, addr 0xa70703c, size 0x2cc, virtual true, abstract: false, final false
inline bool OpCreateRoom(::Photon::Realtime::EnterRoomParams*  opParams) ;

/// @brief Method OpFindFriends, addr 0xa7082a4, size 0x194, virtual true, abstract: false, final false
inline bool OpFindFriends(::ArrayW<::StringW>  friendsToFind, ::Photon::Realtime::FindFriendsOptions*  options) ;

/// @brief Method OpGetGameList, addr 0xa707ebc, size 0x3e8, virtual true, abstract: false, final false
inline bool OpGetGameList(::Photon::Realtime::TypedLobby*  lobby, ::StringW  queryData) ;

/// @brief Method OpGetRegions, addr 0xa7067ec, size 0x118, virtual true, abstract: false, final false
inline bool OpGetRegions(::StringW  appId) ;

/// @brief Method OpJoinLobby, addr 0xa706904, size 0x1e4, virtual true, abstract: false, final false
inline bool OpJoinLobby(::Photon::Realtime::TypedLobby*  lobby) ;

/// @brief Method OpJoinRandomOrCreateRoom, addr 0xa7079a8, size 0x3b4, virtual true, abstract: false, final false
inline bool OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams*  createRoomParams) ;

/// @brief Method OpJoinRandomRoom, addr 0xa70765c, size 0x34c, virtual true, abstract: false, final false
inline bool OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams) ;

/// @brief Method OpJoinRoom, addr 0xa707308, size 0x354, virtual true, abstract: false, final false
inline bool OpJoinRoom(::Photon::Realtime::EnterRoomParams*  opParams) ;

/// @brief Method OpLeaveLobby, addr 0xa706af4, size 0x118, virtual true, abstract: false, final false
inline bool OpLeaveLobby() ;

/// @brief Method OpLeaveRoom, addr 0xa707d5c, size 0x160, virtual true, abstract: false, final false
inline bool OpLeaveRoom(bool  becomeInactive, bool  sendAuthCookie) ;

/// @brief Method OpRaiseEvent, addr 0xa708fcc, size 0x314, virtual true, abstract: false, final false
inline bool OpRaiseEvent(uint8_t  eventCode, ::System::Object*  customEventContent, ::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions) ;

/// @brief Method OpSetCustomPropertiesOfActor, addr 0xa708470, size 0x7c, virtual false, abstract: false, final false
inline bool OpSetCustomPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties) ;

/// @brief Method OpSetCustomPropertiesOfRoom, addr 0xa70857c, size 0x74, virtual false, abstract: false, final false
inline bool OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties) ;

/// @brief Method OpSetPropertiesOfActor, addr 0xa6fda0c, size 0x350, virtual false, abstract: false, final false
inline bool OpSetPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Photon::Realtime::WebFlags*  webflags) ;

/// @brief Method OpSetPropertiesOfRoom, addr 0xa6fe240, size 0x318, virtual false, abstract: false, final false
inline bool OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Photon::Realtime::WebFlags*  webflags) ;

/// @brief Method OpSetPropertyOfRoom, addr 0xa7084ec, size 0x90, virtual false, abstract: false, final false
inline bool OpSetPropertyOfRoom(uint8_t  propCode, ::System::Object*  value) ;

/// @brief Method OpSettings, addr 0xa7092e0, size 0x1e8, virtual true, abstract: false, final false
inline bool OpSettings(bool  receiveLobbyStats) ;

/// @brief Method RoomOptionsToOpParameters, addr 0xa706c0c, size 0x3b8, virtual false, abstract: false, final false
inline void RoomOptionsToOpParameters(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  op, ::Photon::Realtime::RoomOptions*  roomOptions, bool  usePropertiesKey) ;

constexpr ::Photon::Realtime::EnterRoomParams* const& __cordl_internal_get_enterRoomParams() const;

constexpr ::Photon::Realtime::EnterRoomParams*& __cordl_internal_get_enterRoomParams() ;

constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* const& __cordl_internal_get_paramDictionaryPool() const;

constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*& __cordl_internal_get_paramDictionaryPool() ;

constexpr void __cordl_internal_set_enterRoomParams(::Photon::Realtime::EnterRoomParams*  value) ;

constexpr void __cordl_internal_set_paramDictionaryPool(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value) ;

/// @brief Method .ctor, addr 0xa6fa88c, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method .ctor, addr 0xa706414, size 0x214, virtual false, abstract: false, final false
inline void _ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType) ;

/// @brief Method get_PingImplementation, addr 0xa706374, size 0x48, virtual false, abstract: false, final false
static inline ::System::Type* get_PingImplementation() ;

/// @brief Method set_PingImplementation, addr 0xa7063bc, size 0x58, virtual false, abstract: false, final false
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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29866};

/// @brief Field paramDictionaryPool, offset: 0x110, size: 0x8, def value: None
 ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  ___paramDictionaryPool;

/// @brief Field enterRoomParams, offset: 0x118, size: 0x8, def value: None
 ::Photon::Realtime::EnterRoomParams*  ___enterRoomParams;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Realtime::LoadBalancingPeer, ___paramDictionaryPool) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Photon::Realtime::LoadBalancingPeer, ___enterRoomParams) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Photon::Realtime::LoadBalancingPeer) == 0x120, "Size mismatch!");

} // namespace end def Photon::Realtime
// [CompilerGenerated]
// Dependencies System.Object
namespace Photon::Realtime {
// Is value type: false
// CS Name: Photon.Realtime.LoadBalancingPeer/<>c
class CORDL_TYPE LoadBalancingPeer___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Photon::Realtime::LoadBalancingPeer___c*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*  __9__4_1;

static inline ::Photon::Realtime::LoadBalancingPeer___c* New_ctor() ;

/// @brief Method <.ctor>b__4_0, addr 0xa709538, size 0x54, virtual false, abstract: false, final false
inline ::ExitGames::Client::Photon::ParameterDictionary* __ctor_b__4_0() ;

/// @brief Method <.ctor>b__4_1, addr 0xa70958c, size 0x18, virtual false, abstract: false, final false
inline void __ctor_b__4_1(::ExitGames::Client::Photon::ParameterDictionary*  x) ;

/// @brief Method .ctor, addr 0xa709530, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Photon::Realtime::LoadBalancingPeer___c* getStaticF___9() ;

static inline ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* getStaticF___9__4_0() ;

static inline ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::Photon::Realtime::LoadBalancingPeer___c*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Realtime::LoadBalancingPeer___c) == 0x10, "Size mismatch!");

} // namespace end def Photon::Realtime
