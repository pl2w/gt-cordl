#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Room.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__Room_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Player_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__WebFlags_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_LoadBalancingClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::LoadBalancingClient* (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_LoadBalancingClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_LoadBalancingClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_LoadBalancingClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::Room::set_LoadBalancingClient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_LoadBalancingClient", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::StringW)>(&::Fusion::Photon::Realtime::Room::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f639a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_IsOffline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_IsOffline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5fbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_IsOffline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_IsOffline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_IsOffline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f639a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_IsOffline", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_IsOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f639b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_IsOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_IsOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_IsOpen)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f639b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_IsVisible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_IsVisible)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5f63a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_MaxPlayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_MaxPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(int32_t)>(&::Fusion::Photon::Realtime::Room::set_MaxPlayers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5f63b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_PlayerCount)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5f63c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_Players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>* (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_Players)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_Players", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_Players
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*)>(&::Fusion::Photon::Realtime::Room::set_Players)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_Players", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_ExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_ExpectedUsers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_ExpectedUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_PlayerTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_PlayerTtl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PlayerTtl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_PlayerTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(int32_t)>(&::Fusion::Photon::Realtime::Room::set_PlayerTtl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f63cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_PlayerTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_EmptyRoomTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_EmptyRoomTtl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_EmptyRoomTtl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_EmptyRoomTtl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(int32_t)>(&::Fusion::Photon::Realtime::Room::set_EmptyRoomTtl)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5f63d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_EmptyRoomTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_MasterClientId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_MasterClientId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5f1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_MasterClientId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_PropertiesListedInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_PropertiesListedInLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PropertiesListedInLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_PropertiesListedInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::ArrayW<::StringW>)>(&::Fusion::Photon::Realtime::Room::set_PropertiesListedInLobby)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_PropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_AutoCleanUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_AutoCleanUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_AutoCleanUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_BroadcastPropertiesChangeToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_BroadcastPropertiesChangeToAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_BroadcastPropertiesChangeToAll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_BroadcastPropertiesChangeToAll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_BroadcastPropertiesChangeToAll)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_BroadcastPropertiesChangeToAll", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_SuppressRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_SuppressRoomEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_SuppressRoomEvents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_SuppressRoomEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_SuppressRoomEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_SuppressRoomEvents", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_SuppressPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_SuppressPlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_SuppressPlayerInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_SuppressPlayerInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_SuppressPlayerInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_SuppressPlayerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_PublishUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_PublishUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PublishUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_PublishUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_PublishUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_PublishUserId", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.get_DeleteNullProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::get_DeleteNullProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_DeleteNullProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.set_DeleteNullProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(bool)>(&::Fusion::Photon::Realtime::Room::set_DeleteNullProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f63e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_DeleteNullProperties", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::StringW, ::Fusion::Photon::Realtime::RoomOptions*, bool)>(&::Fusion::Photon::Realtime::Room::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f63e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.InternalCacheRoomFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(int32_t)>(&::Fusion::Photon::Realtime::Room::InternalCacheRoomFlags)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f63fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"InternalCacheRoomFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.InternalCacheProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::Room::InternalCacheProperties)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f64008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.SetCustomProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)(::ExitGames::Client::Photon::Hashtable*, ::ExitGames::Client::Photon::Hashtable*, ::Fusion::Photon::Realtime::WebFlags*)>(&::Fusion::Photon::Realtime::Room::SetCustomProperties)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f64564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.SetPropertiesListedInLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)(::ArrayW<::StringW>)>(&::Fusion::Photon::Realtime::Room::SetPropertiesListedInLobby)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f646a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetPropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::Room::RemovePlayer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f6474c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Room::*)(int32_t)>(&::Fusion::Photon::Realtime::Room::RemovePlayer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5f647b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.SetMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::Room::SetMasterClient)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5f647e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.AddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::Room::AddPlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f648fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.StorePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::Room::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::Room::StorePlayer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f64980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.GetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::Player* (::Fusion::Photon::Realtime::Room::*)(int32_t, bool)>(&::Fusion::Photon::Realtime::Room::GetPlayer)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5f649f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.ClearExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::ClearExpectedUsers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f64a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"ClearExpectedUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.SetExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)(::ArrayW<::StringW>)>(&::Fusion::Photon::Realtime::Room::SetExpectedUsers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f64be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.SetExpectedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Photon::Realtime::Room::*)(::ArrayW<::StringW>, ::ArrayW<::StringW>)>(&::Fusion::Photon::Realtime::Room::SetExpectedUsers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f64af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::ToString)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5f64c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::Room.ToStringFull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::Room::*)()>(&::Fusion::Photon::Realtime::Room::ToStringFull)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5f64ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"ToStringFull", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::Room::__cordl_internal_get__LoadBalancingClient_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadBalancingClient_k__BackingField;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::Room::__cordl_internal_get__LoadBalancingClient_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LoadBalancingClient_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set__LoadBalancingClient_k__BackingField(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LoadBalancingClient_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::Room::__cordl_internal_get_isOffline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOffline;
}
constexpr bool const& Fusion::Photon::Realtime::Room::__cordl_internal_get_isOffline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOffline;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set_isOffline(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOffline = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*& Fusion::Photon::Realtime::Room::__cordl_internal_get_players()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>* const& Fusion::Photon::Realtime::Room::__cordl_internal_get_players() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___players;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set_players(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___players = value;
}
constexpr bool& Fusion::Photon::Realtime::Room::__cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BroadcastPropertiesChangeToAll_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Room::__cordl_internal_get__BroadcastPropertiesChangeToAll_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BroadcastPropertiesChangeToAll_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set__BroadcastPropertiesChangeToAll_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BroadcastPropertiesChangeToAll_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::Room::__cordl_internal_get__SuppressRoomEvents_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressRoomEvents_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Room::__cordl_internal_get__SuppressRoomEvents_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressRoomEvents_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set__SuppressRoomEvents_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressRoomEvents_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::Room::__cordl_internal_get__SuppressPlayerInfo_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressPlayerInfo_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Room::__cordl_internal_get__SuppressPlayerInfo_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SuppressPlayerInfo_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set__SuppressPlayerInfo_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SuppressPlayerInfo_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::Room::__cordl_internal_get__PublishUserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishUserId_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Room::__cordl_internal_get__PublishUserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PublishUserId_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set__PublishUserId_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PublishUserId_k__BackingField = value;
}
constexpr bool& Fusion::Photon::Realtime::Room::__cordl_internal_get__DeleteNullProperties_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeleteNullProperties_k__BackingField;
}
constexpr bool const& Fusion::Photon::Realtime::Room::__cordl_internal_get__DeleteNullProperties_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeleteNullProperties_k__BackingField;
}
constexpr void Fusion::Photon::Realtime::Room::__cordl_internal_set__DeleteNullProperties_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeleteNullProperties_k__BackingField = value;
}
inline ::Fusion::Photon::Realtime::LoadBalancingClient* Fusion::Photon::Realtime::Room::get_LoadBalancingClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_LoadBalancingClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::LoadBalancingClient*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_LoadBalancingClient(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_LoadBalancingClient", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Fusion::Photon::Realtime::Room::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_IsOffline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_IsOffline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_IsOffline(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_IsOffline", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_IsOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_IsOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_IsOpen(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_IsOpen", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_IsVisible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_IsVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::Room::get_MaxPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_MaxPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_MaxPlayers(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_MaxPlayers", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::Room::get_PlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>* Fusion::Photon::Realtime::Room::get_Players()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_Players", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_Players(::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_Players", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,::Fusion::Photon::Realtime::Player*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> Fusion::Photon::Realtime::Room::get_ExpectedUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_ExpectedUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int32_t Fusion::Photon::Realtime::Room::get_PlayerTtl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PlayerTtl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_PlayerTtl(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_PlayerTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::Room::get_EmptyRoomTtl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_EmptyRoomTtl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_EmptyRoomTtl(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_EmptyRoomTtl", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Fusion::Photon::Realtime::Room::get_MasterClientId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_MasterClientId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::StringW> Fusion::Photon::Realtime::Room::get_PropertiesListedInLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PropertiesListedInLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_PropertiesListedInLobby(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_PropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_AutoCleanUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_AutoCleanUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Room::get_BroadcastPropertiesChangeToAll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_BroadcastPropertiesChangeToAll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_BroadcastPropertiesChangeToAll(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_BroadcastPropertiesChangeToAll", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_SuppressRoomEvents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_SuppressRoomEvents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_SuppressRoomEvents(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_SuppressRoomEvents", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_SuppressPlayerInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_SuppressPlayerInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_SuppressPlayerInfo(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_SuppressPlayerInfo", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_PublishUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_PublishUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_PublishUserId(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_PublishUserId", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::Photon::Realtime::Room::get_DeleteNullProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"get_DeleteNullProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::Room::set_DeleteNullProperties(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"set_DeleteNullProperties", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Photon::Realtime::Room::_ctor(::StringW  roomName, ::Fusion::Photon::Realtime::RoomOptions*  options, bool  isOffline)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::Photon::Realtime::RoomOptions*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomName, options, isOffline);
}
inline void Fusion::Photon::Realtime::Room::InternalCacheRoomFlags(int32_t  roomFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"InternalCacheRoomFlags", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomFlags);
}
inline void Fusion::Photon::Realtime::Room::InternalCacheProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToCache)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesToCache);
}
inline bool Fusion::Photon::Realtime::Room::SetCustomProperties(::ExitGames::Client::Photon::Hashtable*  propertiesToSet, ::ExitGames::Client::Photon::Hashtable*  expectedProperties, ::Fusion::Photon::Realtime::WebFlags*  webFlags)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, propertiesToSet, expectedProperties, webFlags);
}
inline bool Fusion::Photon::Realtime::Room::SetPropertiesListedInLobby(::ArrayW<::StringW>  lobbyProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetPropertiesListedInLobby", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lobbyProps);
}
inline void Fusion::Photon::Realtime::Room::RemovePlayer(::Fusion::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void Fusion::Photon::Realtime::Room::RemovePlayer(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline bool Fusion::Photon::Realtime::Room::SetMasterClient(::Fusion::Photon::Realtime::Player*  masterClientPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetMasterClient", {}, {::i2c::type_of<::Fusion::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, masterClientPlayer);
}
inline bool Fusion::Photon::Realtime::Room::AddPlayer(::Fusion::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Room::StorePlayer(::Fusion::Photon::Realtime::Player*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method, player);
}
inline ::Fusion::Photon::Realtime::Player* Fusion::Photon::Realtime::Room::GetPlayer(int32_t  id, bool  findMaster)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::Player*>(this, ___internal_method, id, findMaster);
}
inline bool Fusion::Photon::Realtime::Room::ClearExpectedUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"ClearExpectedUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Fusion::Photon::Realtime::Room::SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newExpectedUsers);
}
inline bool Fusion::Photon::Realtime::Room::SetExpectedUsers(::ArrayW<::StringW>  newExpectedUsers, ::ArrayW<::StringW>  oldExpectedUsers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"SetExpectedUsers", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newExpectedUsers, oldExpectedUsers);
}
inline ::StringW Fusion::Photon::Realtime::Room::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::Room*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::Room::ToStringFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Room*>(),
                        {"ToStringFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Room* Fusion::Photon::Realtime::Room::New_ctor(::StringW  roomName, ::Fusion::Photon::Realtime::RoomOptions*  options, bool  isOffline)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Room*>(roomName, options, isOffline));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Room::Room()   {
}
