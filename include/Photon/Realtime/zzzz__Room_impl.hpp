#pragma once
// IWYU pragma private; include "Photon/Realtime/Room.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_impl.hpp"
#include "Photon/Realtime/zzzz__Room_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::Room.get_LoadBalancingClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::LoadBalancingClient* (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_LoadBalancingClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70cff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_LoadBalancingClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_LoadBalancingClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::Room::set_LoadBalancingClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70cffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_LoadBalancingClient", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::StringW)>(&::Photon::Realtime::Room::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_IsOffline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_IsOffline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_IsOffline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_IsOffline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_IsOffline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_IsOffline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_IsOpen)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa70d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_IsVisible)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa70d100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_MaxPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(uint8_t)>(&::Photon::Realtime::Room::set_MaxPlayers)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa70d1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_PlayerCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa70d2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_Players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>* (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_Players)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_Players", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_Players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*)>(&::Photon::Realtime::Room::set_Players)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_Players", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_ExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_ExpectedUsers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_ExpectedUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_PlayerTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_PlayerTtl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PlayerTtl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_PlayerTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(int32_t)>(&::Photon::Realtime::Room::set_PlayerTtl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa70d310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_PlayerTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_EmptyRoomTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_EmptyRoomTtl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_EmptyRoomTtl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_EmptyRoomTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(int32_t)>(&::Photon::Realtime::Room::set_EmptyRoomTtl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa70d38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_EmptyRoomTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_MasterClientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_MasterClientId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_MasterClientId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_PropertiesListedInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_PropertiesListedInLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PropertiesListedInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_PropertiesListedInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::ArrayW<::StringW>)>(&::Photon::Realtime::Room::set_PropertiesListedInLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_PropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_AutoCleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_AutoCleanUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_AutoCleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_BroadcastPropertiesChangeToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_BroadcastPropertiesChangeToAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_BroadcastPropertiesChangeToAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_BroadcastPropertiesChangeToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_BroadcastPropertiesChangeToAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_BroadcastPropertiesChangeToAll", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_SuppressRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_SuppressRoomEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_SuppressRoomEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_SuppressRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_SuppressRoomEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_SuppressRoomEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_SuppressPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_SuppressPlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_SuppressPlayerInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_SuppressPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_SuppressPlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_SuppressPlayerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_PublishUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_PublishUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PublishUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_PublishUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_PublishUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_PublishUserId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.get_DeleteNullProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::get_DeleteNullProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_DeleteNullProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.set_DeleteNullProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(bool)>(&::Photon::Realtime::Room::set_DeleteNullProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa70d468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_DeleteNullProperties", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::StringW, ::Photon::Realtime::RoomOptions*, bool)>(&::Photon::Realtime::Room::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa70d470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.InternalCacheRoomFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(int32_t)>(&::Photon::Realtime::Room::InternalCacheRoomFlags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa70d60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"InternalCacheRoomFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.InternalCacheProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::Room::InternalCacheProperties)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa70d640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.SetCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Photon::Realtime::WebFlags*)>(&::Photon::Realtime::Room::SetCustomProperties)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa70db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.SetPropertiesListedInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)(::ArrayW<::StringW>)>(&::Photon::Realtime::Room::SetPropertiesListedInLobby)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa70dc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetPropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::Room::RemovePlayer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa70dcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::Room::*)(int32_t)>(&::Photon::Realtime::Room::RemovePlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa70dd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.SetMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::Room::SetMasterClient)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa70dd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.AddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::Room::AddPlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa70deac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.StorePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::Photon::Realtime::Room::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::Room::StorePlayer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa70df30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Realtime::Player* (::Photon::Realtime::Room::*)(int32_t, bool)>(&::Photon::Realtime::Room::GetPlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa70dfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.ClearExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::ClearExpectedUsers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa70e02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"ClearExpectedUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.SetExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)(::ArrayW<::StringW>)>(&::Photon::Realtime::Room::SetExpectedUsers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa70e198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.SetExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Realtime::Room::*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Photon::Realtime::Room::SetExpectedUsers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa70e0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::ToString)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa70e228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Photon::Realtime::Room*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::Room.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Realtime::Room::*)()>(&::Photon::Realtime::Room::ToStringFull)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa70e47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::Room::__cordl_internal_get__LoadBalancingClient_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadBalancingClient_k__BackingField;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::Room::__cordl_internal_get__LoadBalancingClient_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadBalancingClient_k__BackingField;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set__LoadBalancingClient_k__BackingField(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadBalancingClient_k__BackingField = value;
}
constexpr bool& Photon::Realtime::Room::__cordl_internal_get_isOffline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOffline;
}
constexpr bool const& Photon::Realtime::Room::__cordl_internal_get_isOffline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOffline;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set_isOffline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOffline = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*& Photon::Realtime::Room::__cordl_internal_get_players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>* const& Photon::Realtime::Room::__cordl_internal_get_players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___players = value;
}
constexpr bool& Photon::Realtime::Room::__cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BroadcastPropertiesChangeToAll_k__BackingField;
}
constexpr bool const& Photon::Realtime::Room::__cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BroadcastPropertiesChangeToAll_k__BackingField;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BroadcastPropertiesChangeToAll_k__BackingField = value;
}
constexpr bool& Photon::Realtime::Room::__cordl_internal_get__SuppressRoomEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressRoomEvents_k__BackingField;
}
constexpr bool const& Photon::Realtime::Room::__cordl_internal_get__SuppressRoomEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressRoomEvents_k__BackingField;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set__SuppressRoomEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressRoomEvents_k__BackingField = value;
}
constexpr bool& Photon::Realtime::Room::__cordl_internal_get__SuppressPlayerInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressPlayerInfo_k__BackingField;
}
constexpr bool const& Photon::Realtime::Room::__cordl_internal_get__SuppressPlayerInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressPlayerInfo_k__BackingField;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressPlayerInfo_k__BackingField = value;
}
constexpr bool& Photon::Realtime::Room::__cordl_internal_get__PublishUserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishUserId_k__BackingField;
}
constexpr bool const& Photon::Realtime::Room::__cordl_internal_get__PublishUserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishUserId_k__BackingField;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set__PublishUserId_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PublishUserId_k__BackingField = value;
}
constexpr bool& Photon::Realtime::Room::__cordl_internal_get__DeleteNullProperties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeleteNullProperties_k__BackingField;
}
constexpr bool const& Photon::Realtime::Room::__cordl_internal_get__DeleteNullProperties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeleteNullProperties_k__BackingField;
}
constexpr void Photon::Realtime::Room::__cordl_internal_set__DeleteNullProperties_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeleteNullProperties_k__BackingField = value;
}
inline ::Photon::Realtime::LoadBalancingClient* Photon::Realtime::Room::get_LoadBalancingClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_LoadBalancingClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::LoadBalancingClient*>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_LoadBalancingClient(::Photon::Realtime::LoadBalancingClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_LoadBalancingClient", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Photon::Realtime::Room::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_IsOffline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_IsOffline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_IsOffline(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_IsOffline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_IsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_IsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Realtime::Room::get_MaxPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_MaxPlayers(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t Photon::Realtime::Room::get_PlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>* Photon::Realtime::Room::get_Players()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_Players", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_Players(::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_Players", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Photon::Realtime::Room::get_ExpectedUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_ExpectedUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t Photon::Realtime::Room::get_PlayerTtl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PlayerTtl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_PlayerTtl(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_PlayerTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Realtime::Room::get_EmptyRoomTtl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_EmptyRoomTtl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_EmptyRoomTtl(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_EmptyRoomTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Photon::Realtime::Room::get_MasterClientId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_MasterClientId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Photon::Realtime::Room::get_PropertiesListedInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PropertiesListedInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_PropertiesListedInLobby(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_PropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_AutoCleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_AutoCleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Realtime::Room::get_BroadcastPropertiesChangeToAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_BroadcastPropertiesChangeToAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_BroadcastPropertiesChangeToAll(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_BroadcastPropertiesChangeToAll", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_SuppressRoomEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_SuppressRoomEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_SuppressRoomEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_SuppressRoomEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_SuppressPlayerInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_SuppressPlayerInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_SuppressPlayerInfo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_SuppressPlayerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_PublishUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_PublishUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_PublishUserId(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_PublishUserId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Photon::Realtime::Room::get_DeleteNullProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"get_DeleteNullProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Photon::Realtime::Room::set_DeleteNullProperties(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"set_DeleteNullProperties", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Photon::Realtime::Room::_ctor(::StringW  roomName, ::Photon::Realtime::RoomOptions*  options, bool  isOffline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomName, options, isOffline);
}
inline void Photon::Realtime::Room::InternalCacheRoomFlags(int32_t  roomFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"InternalCacheRoomFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomFlags);
}
inline void Photon::Realtime::Room::InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToCache)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesToCache);
}
inline bool Photon::Realtime::Room::SetCustomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Photon::Realtime::WebFlags*  webFlags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertiesToSet, expectedProperties, webFlags);
}
inline bool Photon::Realtime::Room::SetPropertiesListedInLobby(::ArrayW<::StringW>  lobbyProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetPropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lobbyProps);
}
inline void Photon::Realtime::Room::RemovePlayer(::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Photon::Realtime::Room::RemovePlayer(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool Photon::Realtime::Room::SetMasterClient(::Photon::Realtime::Player*  masterClientPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, masterClientPlayer);
}
inline bool Photon::Realtime::Room::AddPlayer(::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::Photon::Realtime::Player* Photon::Realtime::Room::StorePlayer(::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method, player);
}
inline ::Photon::Realtime::Player* Photon::Realtime::Room::GetPlayer(int32_t  id, bool  findMaster)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Photon::Realtime::Player*>(this, ___internal_method, id, findMaster);
}
inline bool Photon::Realtime::Room::ClearExpectedUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"ClearExpectedUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Photon::Realtime::Room::SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newExpectedUsers);
}
inline bool Photon::Realtime::Room::SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers, ::ArrayW<::StringW>  oldExpectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newExpectedUsers, oldExpectedUsers);
}
inline ::StringW Photon::Realtime::Room::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::Room*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Photon::Realtime::Room::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::Room*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Photon::Realtime::Room* Photon::Realtime::Room::New_ctor(::StringW  roomName, ::Photon::Realtime::RoomOptions*  options, bool  isOffline)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::Room*>(roomName, options, isOffline));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::Room::Room()   {
}
