#pragma once
// IWYU pragma private; include "Photon/Realtime/LoadBalancingPeer.hpp"
#include "ExitGames/Client/Photon/zzzz__PhotonPeer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingPeer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ConnectionProtocol_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__ParameterDictionary_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Pool_1_def.hpp"
#include "ExitGames/Client/Photon/zzzz__SendOptions_def.hpp"
#include "Photon/Realtime/zzzz__AuthenticationValues_def.hpp"
#include "Photon/Realtime/zzzz__EncryptionMode_def.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__FindFriendsOptions_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingPeer_def.hpp"
#include "Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "Photon/Realtime/zzzz__RaiseEventOptions_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.get_PingImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)()>(&::Photon::Realtime::LoadBalancingPeer::get_PingImplementation)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa706374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"get_PingImplementation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.set_PingImplementation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*)>(&::Photon::Realtime::LoadBalancingPeer::set_PingImplementation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa7063bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"set_PingImplementation", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Realtime::LoadBalancingPeer::_ctor)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa706414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::IPhotonPeerListener*, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Realtime::LoadBalancingPeer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa6fa88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.ConfigUnitySockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)()>(&::Photon::Realtime::LoadBalancingPeer::ConfigUnitySockets)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa706628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"ConfigUnitySockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpGetRegions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::StringW)>(&::Photon::Realtime::LoadBalancingPeer::OpGetRegions)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa7067ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::TypedLobby*)>(&::Photon::Realtime::LoadBalancingPeer::OpJoinLobby)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa706904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpLeaveLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)()>(&::Photon::Realtime::LoadBalancingPeer::OpLeaveLobby)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa706af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.RoomOptionsToOpParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LoadBalancingPeer::*)(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*, ::Photon::Realtime::RoomOptions*, bool)>(&::Photon::Realtime::LoadBalancingPeer::RoomOptionsToOpParameters)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0xa706c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"RoomOptionsToOpParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::EnterRoomParams*)>(&::Photon::Realtime::LoadBalancingPeer::OpCreateRoom)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xa70703c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::EnterRoomParams*)>(&::Photon::Realtime::LoadBalancingPeer::OpJoinRoom)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xa707308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinRandomRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::OpJoinRandomRoomParams*)>(&::Photon::Realtime::LoadBalancingPeer::OpJoinRandomRoom)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xa70765c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpJoinRandomOrCreateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::OpJoinRandomRoomParams*, ::Photon::Realtime::EnterRoomParams*)>(&::Photon::Realtime::LoadBalancingPeer::OpJoinRandomOrCreateRoom)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xa7079a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpLeaveRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(bool, bool)>(&::Photon::Realtime::LoadBalancingPeer::OpLeaveRoom)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa707d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpGetGameList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::Photon::Realtime::TypedLobby*, ::StringW)>(&::Photon::Realtime::LoadBalancingPeer::OpGetGameList)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0xa707ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpFindFriends
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::ArrayW<::StringW>, ::Photon::Realtime::FindFriendsOptions*)>(&::Photon::Realtime::LoadBalancingPeer::OpFindFriends)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa7082a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetCustomPropertiesOfActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(int32_t, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfActor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa708470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetCustomPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetPropertiesOfActor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(int32_t, ::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfActor)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xa6fda0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetPropertyOfRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(uint8_t, ::System::Object*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetPropertyOfRoom)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa7084ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetPropertyOfRoom", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetCustomPropertiesOfRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa70857c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetCustomPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSetPropertiesOfRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfRoom)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xa6fe240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::WebFlags*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::StringW, ::StringW, ::Photon::Realtime::AuthenticationValues*, ::StringW, bool)>(&::Photon::Realtime::LoadBalancingPeer::OpAuthenticate)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xa7085f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpAuthenticateOnce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::StringW, ::StringW, ::Photon::Realtime::AuthenticationValues*, ::StringW, ::Photon::Realtime::EncryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol)>(&::Photon::Realtime::LoadBalancingPeer::OpAuthenticateOnce)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0xa708910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpChangeGroups
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Photon::Realtime::LoadBalancingPeer::OpChangeGroups)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa708e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpRaiseEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(uint8_t, ::System::Object*, ::Photon::Realtime::RaiseEventOptions*, ::ExitGames::Client::Photon::SendOptions)>(&::Photon::Realtime::LoadBalancingPeer::OpRaiseEvent)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xa708fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer.OpSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::LoadBalancingPeer::*)(bool)>(&::Photon::Realtime::LoadBalancingPeer::OpSettings)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa7092e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                    {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 31}
                ));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*& Photon::Realtime::LoadBalancingPeer::__cordl_internal_get_paramDictionaryPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paramDictionaryPool;
}
constexpr ::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>* const& Photon::Realtime::LoadBalancingPeer::__cordl_internal_get_paramDictionaryPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paramDictionaryPool;
}
constexpr void Photon::Realtime::LoadBalancingPeer::__cordl_internal_set_paramDictionaryPool(::ExitGames::Client::Photon::Pool_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paramDictionaryPool = value;
}
constexpr ::Photon::Realtime::EnterRoomParams*& Photon::Realtime::LoadBalancingPeer::__cordl_internal_get_enterRoomParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterRoomParams;
}
constexpr ::Photon::Realtime::EnterRoomParams* const& Photon::Realtime::LoadBalancingPeer::__cordl_internal_get_enterRoomParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterRoomParams;
}
constexpr void Photon::Realtime::LoadBalancingPeer::__cordl_internal_set_enterRoomParams(::Photon::Realtime::EnterRoomParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterRoomParams = value;
}
inline ::System::Type* Photon::Realtime::LoadBalancingPeer::get_PingImplementation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"get_PingImplementation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingPeer::set_PingImplementation(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"set_PingImplementation", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Realtime::LoadBalancingPeer::_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, protocolType);
}
inline void Photon::Realtime::LoadBalancingPeer::_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {".ctor", {}, {::i2c::type_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), ::i2c::type_of<::ExitGames::Client::Photon::ConnectionProtocol>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, protocolType);
}
inline void Photon::Realtime::LoadBalancingPeer::ConfigUnitySockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"ConfigUnitySockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpGetRegions(::StringW  appId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appId);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinLobby(::Photon::Realtime::TypedLobby*  lobby)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lobby);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpLeaveLobby()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingPeer::RoomOptionsToOpParameters(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*  op, ::Photon::Realtime::RoomOptions*  roomOptions, bool  usePropertiesKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"RoomOptionsToOpParameters", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<uint8_t,::System::Object*>*>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, roomOptions, usePropertiesKey);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpCreateRoom(::Photon::Realtime::EnterRoomParams*  opParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinRoom(::Photon::Realtime::EnterRoomParams*  opParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinRandomRoom(::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opJoinRandomRoomParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpJoinRandomOrCreateRoom(::Photon::Realtime::OpJoinRandomRoomParams*  opJoinRandomRoomParams, ::Photon::Realtime::EnterRoomParams*  createRoomParams)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, opJoinRandomRoomParams, createRoomParams);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpLeaveRoom(bool  becomeInactive, bool  sendAuthCookie)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, becomeInactive, sendAuthCookie);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpGetGameList(::Photon::Realtime::TypedLobby*  lobby, ::StringW  queryData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lobby, queryData);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpFindFriends(::ArrayW<::StringW>  friendsToFind, ::Photon::Realtime::FindFriendsOptions*  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, friendsToFind, options);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetCustomPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNr, actorProperties);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfActor(int32_t  actorNr, ::ExitGames::Client::Photon::Hashtable*  actorProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Photon::Realtime::WebFlags*  webflags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetPropertiesOfActor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNr, actorProperties, expectedProperties, webflags);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetPropertyOfRoom(uint8_t  propCode, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetPropertyOfRoom", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propCode, value);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetCustomPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetCustomPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameProperties);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSetPropertiesOfRoom(::ExitGames::Client::Photon::Hashtable*  gameProperties, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Photon::Realtime::WebFlags*  webflags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(),
                        {"OpSetPropertiesOfRoom", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>(), ::i2c::type_of<::Photon::Realtime::WebFlags*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameProperties, expectedProperties, webflags);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpAuthenticate(::StringW  appId, ::StringW  appVersion, ::Photon::Realtime::AuthenticationValues*  authValues, ::StringW  regionCode, bool  getLobbyStatistics)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appId, appVersion, authValues, regionCode, getLobbyStatistics);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpAuthenticateOnce(::StringW  appId, ::StringW  appVersion, ::Photon::Realtime::AuthenticationValues*  authValues, ::StringW  regionCode, ::Photon::Realtime::EncryptionMode  encryptionMode, ::ExitGames::Client::Photon::ConnectionProtocol  expectedProtocol)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, appId, appVersion, authValues, regionCode, encryptionMode, expectedProtocol);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpChangeGroups(::ArrayW<uint8_t>  groupsToRemove, ::ArrayW<uint8_t>  groupsToAdd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groupsToRemove, groupsToAdd);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpRaiseEvent(uint8_t  eventCode, ::System::Object*  customEventContent, ::Photon::Realtime::RaiseEventOptions*  raiseEventOptions, ::ExitGames::Client::Photon::SendOptions  sendOptions)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, eventCode, customEventContent, raiseEventOptions, sendOptions);
}
inline bool Photon::Realtime::LoadBalancingPeer::OpSettings(bool  receiveLobbyStats)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::LoadBalancingPeer*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiveLobbyStats);
}
inline ::Photon::Realtime::LoadBalancingPeer* Photon::Realtime::LoadBalancingPeer::New_ctor(::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::LoadBalancingPeer*>(protocolType));
}
inline ::Photon::Realtime::LoadBalancingPeer* Photon::Realtime::LoadBalancingPeer::New_ctor(::ExitGames::Client::Photon::IPhotonPeerListener*  listener, ::ExitGames::Client::Photon::ConnectionProtocol  protocolType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::LoadBalancingPeer*>(listener, protocolType));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LoadBalancingPeer::LoadBalancingPeer()   {
}
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LoadBalancingPeer___c::*)()>(&::Photon::Realtime::LoadBalancingPeer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa709530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer___c.__ctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ExitGames::Client::Photon::ParameterDictionary* (::Photon::Realtime::LoadBalancingPeer___c::*)()>(&::Photon::Realtime::LoadBalancingPeer___c::__ctor_b__4_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa709538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer___c*>(),
                        {"<.ctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LoadBalancingPeer___c.__ctor_b__4_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LoadBalancingPeer___c::*)(::ExitGames::Client::Photon::ParameterDictionary*)>(&::Photon::Realtime::LoadBalancingPeer___c::__ctor_b__4_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa70958c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer___c*>(),
                        {"<.ctor>b__4_1", {}, {::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Realtime::LoadBalancingPeer___c::setStaticF___9(::Photon::Realtime::LoadBalancingPeer___c*  value)  {
::cordl_internals::setStaticField<::Photon::Realtime::LoadBalancingPeer___c*, "<>9", ::Photon::Realtime::LoadBalancingPeer___c*>(std::forward<::Photon::Realtime::LoadBalancingPeer___c*>(value));
}
inline ::Photon::Realtime::LoadBalancingPeer___c* Photon::Realtime::LoadBalancingPeer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Photon::Realtime::LoadBalancingPeer___c*, "<>9", ::Photon::Realtime::LoadBalancingPeer___c*>();
}
inline void Photon::Realtime::LoadBalancingPeer___c::setStaticF___9__4_0(::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_0", ::Photon::Realtime::LoadBalancingPeer___c*>(std::forward<::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*>(value));
}
inline ::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>* Photon::Realtime::LoadBalancingPeer___c::getStaticF___9__4_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_0", ::Photon::Realtime::LoadBalancingPeer___c*>();
}
inline void Photon::Realtime::LoadBalancingPeer___c::setStaticF___9__4_1(::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_1", ::Photon::Realtime::LoadBalancingPeer___c*>(std::forward<::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*>(value));
}
inline ::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>* Photon::Realtime::LoadBalancingPeer___c::getStaticF___9__4_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::ExitGames::Client::Photon::ParameterDictionary*>*, "<>9__4_1", ::Photon::Realtime::LoadBalancingPeer___c*>();
}
inline void Photon::Realtime::LoadBalancingPeer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ExitGames::Client::Photon::ParameterDictionary* Photon::Realtime::LoadBalancingPeer___c::__ctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer___c*>(),
                        {"<.ctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ExitGames::Client::Photon::ParameterDictionary*>(this, ___internal_method);
}
inline void Photon::Realtime::LoadBalancingPeer___c::__ctor_b__4_1(::ExitGames::Client::Photon::ParameterDictionary*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LoadBalancingPeer___c*>(),
                        {"<.ctor>b__4_1", {}, {::i2c::type_of<::ExitGames::Client::Photon::ParameterDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, x);
}
inline ::Photon::Realtime::LoadBalancingPeer___c* Photon::Realtime::LoadBalancingPeer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::LoadBalancingPeer___c*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LoadBalancingPeer___c::LoadBalancingPeer___c()   {
}
