#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonTeamsManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeamsManager_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeam_def.hpp"
#include "Photon/Realtime/zzzz__FriendInfo_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__IMatchmakingCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.add_PlayerJoinedTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerJoinedTeam)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa7345c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"add_PlayerJoinedTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.remove_PlayerJoinedTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerJoinedTeam)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa734694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"remove_PlayerJoinedTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.add_PlayerLeftTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerLeftTeam)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa734760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"add_PlayerLeftTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.remove_PlayerLeftTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerLeftTeam)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa734830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"remove_PlayerLeftTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> (*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::get_Instance)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa734900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa734d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa734e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::OnDisable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa734ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Init)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xa734a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7350c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7351e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnPreLeavingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnPreLeavingRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7351e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnPreLeavingRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x6f0;
  constexpr static std::size_t addrs = 0xa7351ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa7358dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa735b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.UpdateTeams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::UpdateTeams)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa7350c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"UpdateTeams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.ClearTeams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::ClearTeams)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa734f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"ClearTeams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamByCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(uint8_t, ::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa735e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamByCode", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamByName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::StringW, ::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa735ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetAvailableTeams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*> (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetAvailableTeams)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa735f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetAvailableTeams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(uint8_t, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xa735fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMembers", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::StringW, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa7361e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Pun::UtilityScripts::PhotonTeam*, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa736258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMembers", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.TryGetTeamMatesOfPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMatesOfPlayer)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xa7362a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMatesOfPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetTeamMembersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(uint8_t)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa736630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetTeamMembersCount", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetTeamMembersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::StringW)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa736700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetTeamMembersCount", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.GetTeamMembersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Pun::UtilityScripts::PhotonTeam*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa73666c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetTeamMembersCount", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa736740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnCreatedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa736744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa736748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(int16_t, ::StringW)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa73674c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa736750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager.Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa736754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamsManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeamsManager::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeamsManager::_ctor)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa736758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamsList;
}
constexpr ::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>* const& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamsList;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_teamsList(::System::Collections::Generic::List_1<::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamsList = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByCode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamsByCode;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>* const& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByCode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamsByCode;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_teamsByCode(::System::Collections::Generic::Dictionary_2<uint8_t,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamsByCode = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamsByName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>* const& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_teamsByName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamsByName;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_teamsByName(::System::Collections::Generic::Dictionary_2<::StringW,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamsByName = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_playersPerTeam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersPerTeam;
}
constexpr ::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>* const& Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_get_playersPerTeam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersPerTeam;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeamsManager::__cordl_internal_set_playersPerTeam(::System::Collections::Generic::Dictionary_2<uint8_t,::System::Collections::Generic::HashSet_1<::Photon::Realtime::Player*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersPerTeam = value;
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::setStaticF_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerJoinedTeam", ::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(std::forward<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>(value));
}
inline ::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>* Photon::Pun::UtilityScripts::PhotonTeamsManager::getStaticF_PlayerJoinedTeam()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerJoinedTeam", ::Photon::Pun::UtilityScripts::PhotonTeamsManager*>();
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::setStaticF_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerLeftTeam", ::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(std::forward<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>(value));
}
inline ::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>* Photon::Pun::UtilityScripts::PhotonTeamsManager::getStaticF_PlayerLeftTeam()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*, "PlayerLeftTeam", ::Photon::Pun::UtilityScripts::PhotonTeamsManager*>();
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::setStaticF_instance(::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>, "instance", ::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(std::forward<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>>(value));
}
inline ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> Photon::Pun::UtilityScripts::PhotonTeamsManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>, "instance", ::Photon::Pun::UtilityScripts::PhotonTeamsManager*>();
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"add_PlayerJoinedTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerJoinedTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"remove_PlayerJoinedTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::add_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"add_PlayerLeftTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::remove_PlayerLeftTeam(::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"remove_PlayerLeftTeam", {}, {::i2c::type_of<::System::Action_2<::Photon::Realtime::Player*,::Photon::Pun::UtilityScripts::PhotonTeam*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager> Photon::Pun::UtilityScripts::PhotonTeamsManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Photon::Pun::UtilityScripts::PhotonTeamsManager>>(nullptr, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnPreLeavingRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnPreLeavingRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::UpdateTeams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"UpdateTeams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::ClearTeams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"ClearTeams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByCode(uint8_t  code, ::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamByCode", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code, team);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamByName(::StringW  teamName, ::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamByName", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Photon::Pun::UtilityScripts::PhotonTeam*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, teamName, team);
}
inline ::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*> Photon::Pun::UtilityScripts::PhotonTeamsManager::GetAvailableTeams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetAvailableTeams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Photon::Pun::UtilityScripts::PhotonTeam*>>(this, ___internal_method);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers(uint8_t  code, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  members)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMembers", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, code, members);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers(::StringW  teamName, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  members)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, teamName, members);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMembers(::Photon::Pun::UtilityScripts::PhotonTeam*  team, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  members)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMembers", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, team, members);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamsManager::TryGetTeamMatesOfPlayer(::Photon::Realtime::Player*  player, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  teamMates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"TryGetTeamMatesOfPlayer", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, teamMates);
}
inline int32_t Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount(uint8_t  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetTeamMembersCount", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, code);
}
inline int32_t Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetTeamMembersCount", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, name);
}
inline int32_t Photon::Pun::UtilityScripts::PhotonTeamsManager::GetTeamMembersCount(::Photon::Pun::UtilityScripts::PhotonTeam*  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"GetTeamMembersCount", {}, {::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, team);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnFriendListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*  friendList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnFriendListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::FriendInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, friendList);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreatedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnCreatedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnCreateRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnCreateRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRoomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnJoinRoomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IMatchmakingCallbacks_OnJoinRandomFailed(int16_t  returnCode, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IMatchmakingCallbacks.OnJoinRandomFailed", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, returnCode, message);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::Photon_Realtime_IInRoomCallbacks_OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {"Photon.Realtime.IInRoomCallbacks.OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void Photon::Pun::UtilityScripts::PhotonTeamsManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PhotonTeamsManager* Photon::Pun::UtilityScripts::PhotonTeamsManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PhotonTeamsManager*>());
}
/// @brief Convert operator to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr  Photon::Pun::UtilityScripts::PhotonTeamsManager::operator ::Photon::Realtime::IMatchmakingCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IMatchmakingCallbacks"
constexpr ::Photon::Realtime::IMatchmakingCallbacks* Photon::Pun::UtilityScripts::PhotonTeamsManager::i___Photon__Realtime__IMatchmakingCallbacks() noexcept {
return static_cast<::Photon::Realtime::IMatchmakingCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  Photon::Pun::UtilityScripts::PhotonTeamsManager::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* Photon::Pun::UtilityScripts::PhotonTeamsManager::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PhotonTeamsManager::PhotonTeamsManager()   {
}
