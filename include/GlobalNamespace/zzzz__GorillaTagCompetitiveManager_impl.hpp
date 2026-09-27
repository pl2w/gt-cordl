#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveManager.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveForcedLeaveRoomVolume_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.GetRoundDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::GetRoundDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5925d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"GetRoundDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.GetCurrentGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaTagCompetitiveManager_GameState (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::GetCurrentGameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5925d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"GetCurrentGameState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.IsMatchActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::IsMatchActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5925d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsMatchActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onStateChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5925d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onStateChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5925e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onUpdateRemainingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onUpdateRemainingTime)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5925f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onUpdateRemainingTime", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onUpdateRemainingTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<float_t>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onUpdateRemainingTime)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5925ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onUpdateRemainingTime", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onPlayerJoined)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59260ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onPlayerJoined", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onPlayerJoined)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59261e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onPlayerJoined", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onPlayerLeft)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59262d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onPlayerLeft", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onPlayerLeft)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x59263c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onPlayerLeft", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onRoundStart)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x59264bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onRoundStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onRoundStart)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5926598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onRoundStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onRoundEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onRoundEnd)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5926674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onRoundEnd", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onRoundEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onRoundEnd)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5926750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onRoundEnd", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.add_onTagOccurred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::add_onTagOccurred)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x592682c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onTagOccurred", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.remove_onTagOccurred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::remove_onTagOccurred)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5926920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onTagOccurred", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.RegisterScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaTagCompetitiveScoreboard*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::RegisterScoreboard)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5926a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"RegisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.DeregisterScoreboard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaTagCompetitiveScoreboard*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::DeregisterScoreboard)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5926ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"DeregisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::StartPlaying)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x5926b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::StopPlaying)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x5926d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::ResetGame)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5927418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.NetworkLinkSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::GameModeSerializer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::NetworkLinkSetup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5927434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::Tick)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59274b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5927884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 98}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x5927928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5928310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.GetScoring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::RankedMultiplayerScore> (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::GetScoring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592843c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"GetScoring", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5928444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5928478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.ReportTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::ReportTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x592849c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59284a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59284ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59284ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.CanJoinFrienship
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::CanJoinFrienship)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59285c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateInfectionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateInfectionState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x59285cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.HandleTagBroadcast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::HandleTagBroadcast)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5928a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::GorillaTagCompetitiveManager_GameState)>(&::GlobalNamespace::GorillaTagCompetitiveManager::SetState)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5928d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.EnterStateWaitingForPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::EnterStateWaitingForPlayers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5928f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStateWaitingForPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.EnterStateStartingCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::EnterStateStartingCountdown)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5928ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStateStartingCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.EnterStatePlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::EnterStatePlaying)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x59290d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStatePlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.EnterStatePostRound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::EnterStatePostRound)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5929188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStatePostRound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateState)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x592945c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateStateWaitingForPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateStateWaitingForPlayers)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5929554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStateWaitingForPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateStateStartingCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateStateStartingCountdown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x59296c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStateStartingCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateStatePlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateStatePlaying)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5929708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStatePlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.HandleInfectionRoundComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::HandleInfectionRoundComplete)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5928828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"HandleInfectionRoundComplete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateStatePostRound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateStatePostRound)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5929758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStatePostRound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.PingRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::PingRoom)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5927610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"PingRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.get_ShowDebugPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::get_ShowDebugPing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5929aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"get_ShowDebugPing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.set_ShowDebugPing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(bool)>(&::GlobalNamespace::GorillaTagCompetitiveManager::set_ShowDebugPing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5929af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"set_ShowDebugPing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.IsGameInvalid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::IsGameInvalid)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x592983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsGameInvalid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.IsInfectionPossible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::IsInfectionPossible)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x592978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsInfectionPossible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.IsEveryoneTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::IsEveryoneTagged)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5928668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsEveryoneTagged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.CheckForInfected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::CheckForInfected)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5929230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"CheckForInfected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaTagCompetitiveManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5929afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaTagCompetitiveManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5929bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UpdateScoreboards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::UpdateScoreboards)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5927760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateScoreboards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.DisplayScoreboardPredictedResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(bool)>(&::GlobalNamespace::GorillaTagCompetitiveManager::DisplayScoreboardPredictedResults)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5929380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"DisplayScoreboardPredictedResults", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.RegisterForcedLeaveVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::RegisterForcedLeaveVolume)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x592598c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"RegisterForcedLeaveVolume", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager.UnregisterForcedLeaveVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*)>(&::GlobalNamespace::GorillaTagCompetitiveManager::UnregisterForcedLeaveVolume)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5925af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UnregisterForcedLeaveVolume", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5929d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager._PingRoom_b__67_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager::_PingRoom_b__67_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5929e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"<PingRoom>b__67_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_startCountdownDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCountdownDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_startCountdownDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startCountdownDuration;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_startCountdownDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startCountdownDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_roundDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_roundDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___roundDuration;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_roundDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___roundDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_postRoundDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postRoundDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_postRoundDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postRoundDuration;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_postRoundDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postRoundDuration = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_waitingForPlayerPingRoomDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForPlayerPingRoomDuration;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_waitingForPlayerPingRoomDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForPlayerPingRoomDuration;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_waitingForPlayerPingRoomDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForPlayerPingRoomDuration = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_gameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameState;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_gameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameState;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_gameState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameState = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_stateRemainingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateRemainingTime;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_stateRemainingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateRemainingTime;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_stateRemainingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateRemainingTime = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_lastActiveTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastActiveTime;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_lastActiveTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastActiveTime;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_lastActiveTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastActiveTime = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_lastWaitingForPlayerPingRoomTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaitingForPlayerPingRoomTime;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_lastWaitingForPlayerPingRoomTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWaitingForPlayerPingRoomTime;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_lastWaitingForPlayerPingRoomTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWaitingForPlayerPingRoomTime = value;
}
constexpr ::UnityW<::GlobalNamespace::RankedMultiplayerScore>& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_scoring()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoring;
}
constexpr ::UnityW<::GlobalNamespace::RankedMultiplayerScore> const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_scoring() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoring;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_scoring(::UnityW<::GlobalNamespace::RankedMultiplayerScore>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoring = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>*& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_forceLeaveRoomVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceLeaveRoomVolumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>* const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get_forceLeaveRoomVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forceLeaveRoomVolumes;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set_forceLeaveRoomVolumes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forceLeaveRoomVolumes = value;
}
constexpr bool& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get__ShowDebugPing_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowDebugPing_k__BackingField;
}
constexpr bool const& GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_get__ShowDebugPing_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowDebugPing_k__BackingField;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveManager::__cordl_internal_set__ShowDebugPing_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowDebugPing_k__BackingField = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onStateChanged(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*, "onStateChanged", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onStateChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*, "onStateChanged", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onUpdateRemainingTime(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "onUpdateRemainingTime", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onUpdateRemainingTime()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "onUpdateRemainingTime", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onPlayerJoined(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::NetPlayer*>*, "onPlayerJoined", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onPlayerJoined()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::NetPlayer*>*, "onPlayerJoined", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onPlayerLeft(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::GlobalNamespace::NetPlayer*>*, "onPlayerLeft", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Action_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onPlayerLeft()  {
return ::cordl_internals::getStaticField<::System::Action_1<::GlobalNamespace::NetPlayer*>*, "onPlayerLeft", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onRoundStart(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onRoundStart", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onRoundStart()  {
return ::cordl_internals::getStaticField<::System::Action*, "onRoundStart", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onRoundEnd(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "onRoundEnd", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onRoundEnd()  {
return ::cordl_internals::getStaticField<::System::Action*, "onRoundEnd", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_onTagOccurred(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*, "onTagOccurred", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_onTagOccurred()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*, "onTagOccurred", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::setStaticF_scoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>*, "scoreboards", ::GlobalNamespace::GorillaTagCompetitiveManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>* GlobalNamespace::GorillaTagCompetitiveManager::getStaticF_scoreboards()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboard>>*, "scoreboards", ::GlobalNamespace::GorillaTagCompetitiveManager*>();
}
inline float_t GlobalNamespace::GorillaTagCompetitiveManager::GetRoundDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"GetRoundDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveManager_GameState GlobalNamespace::GorillaTagCompetitiveManager::GetCurrentGameState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"GetCurrentGameState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::IsMatchActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsMatchActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onStateChanged(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onStateChanged(::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onStateChanged", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onUpdateRemainingTime(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onUpdateRemainingTime", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onUpdateRemainingTime(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onUpdateRemainingTime", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onPlayerJoined(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onPlayerJoined", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onPlayerJoined(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onPlayerJoined", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onPlayerLeft(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onPlayerLeft", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onPlayerLeft(::System::Action_1<::GlobalNamespace::NetPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onPlayerLeft", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onRoundStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onRoundStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onRoundStart(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onRoundStart", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onRoundEnd(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onRoundEnd", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onRoundEnd(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onRoundEnd", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::add_onTagOccurred(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"add_onTagOccurred", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::remove_onTagOccurred(::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"remove_onTagOccurred", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::RegisterScoreboard(::GlobalNamespace::GorillaTagCompetitiveScoreboard*  scoreboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"RegisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scoreboard);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::DeregisterScoreboard(::GlobalNamespace::GorillaTagCompetitiveScoreboard*  scoreboard)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"DeregisterScoreboard", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, scoreboard);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::ResetGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSerializer);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 98}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline ::UnityW<::GlobalNamespace::RankedMultiplayerScore> GlobalNamespace::GorillaTagCompetitiveManager::GetScoring()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"GetScoring", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RankedMultiplayerScore>>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::ReportTag(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::GorillaTagCompetitiveManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaTagCompetitiveManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaTagCompetitiveManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::CanJoinFrienship(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateInfectionState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::HandleTagBroadcast(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::SetState(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::EnterStateWaitingForPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStateWaitingForPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::EnterStateStartingCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStateStartingCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::EnterStatePlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStatePlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::EnterStatePostRound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"EnterStatePostRound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateStateWaitingForPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStateWaitingForPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateStateStartingCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStateStartingCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateStatePlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStatePlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::HandleInfectionRoundComplete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"HandleInfectionRoundComplete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateStatePostRound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateStatePostRound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::PingRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"PingRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::get_ShowDebugPing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"get_ShowDebugPing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::set_ShowDebugPing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"set_ShowDebugPing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::IsGameInvalid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsGameInvalid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::IsInfectionPossible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsInfectionPossible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaTagCompetitiveManager::IsEveryoneTagged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"IsEveryoneTagged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::CheckForInfected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"CheckForInfected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UpdateScoreboards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UpdateScoreboards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::DisplayScoreboardPredictedResults(bool  bShow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"DisplayScoreboardPredictedResults", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bShow);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::RegisterForcedLeaveVolume(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"RegisterForcedLeaveVolume", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::UnregisterForcedLeaveVolume(::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"UnregisterForcedLeaveVolume", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveForcedLeaveRoomVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager::_PingRoom_b__67_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager*>(),
                        {"<PingRoom>b__67_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveManager* GlobalNamespace::GorillaTagCompetitiveManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager::GorillaTagCompetitiveManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager___c::*)()>(&::GlobalNamespace::GorillaTagCompetitiveManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5929f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager___c._OnPlayerEnteredRoom_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager___c::*)(::StringW)>(&::GlobalNamespace::GorillaTagCompetitiveManager___c::_OnPlayerEnteredRoom_b__44_0)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5929f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(),
                        {"<OnPlayerEnteredRoom>b__44_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveManager___c._OnPlayerEnteredRoom_b__44_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveManager___c::*)(bool)>(&::GlobalNamespace::GorillaTagCompetitiveManager___c::_OnPlayerEnteredRoom_b__44_1)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5929ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(),
                        {"<OnPlayerEnteredRoom>b__44_1", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaTagCompetitiveManager___c::setStaticF___9(::GlobalNamespace::GorillaTagCompetitiveManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaTagCompetitiveManager___c*, "<>9", ::GlobalNamespace::GorillaTagCompetitiveManager___c*>(std::forward<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(value));
}
inline ::GlobalNamespace::GorillaTagCompetitiveManager___c* GlobalNamespace::GorillaTagCompetitiveManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaTagCompetitiveManager___c*, "<>9", ::GlobalNamespace::GorillaTagCompetitiveManager___c*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager___c::setStaticF___9__44_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__44_0", ::GlobalNamespace::GorillaTagCompetitiveManager___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::GorillaTagCompetitiveManager___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__44_0", ::GlobalNamespace::GorillaTagCompetitiveManager___c*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager___c::setStaticF___9__44_1(::System::Action_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<bool>*, "<>9__44_1", ::GlobalNamespace::GorillaTagCompetitiveManager___c*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* GlobalNamespace::GorillaTagCompetitiveManager___c::getStaticF___9__44_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "<>9__44_1", ::GlobalNamespace::GorillaTagCompetitiveManager___c*>();
}
inline void GlobalNamespace::GorillaTagCompetitiveManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager___c::_OnPlayerEnteredRoom_b__44_0(::StringW  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(),
                        {"<OnPlayerEnteredRoom>b__44_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void GlobalNamespace::GorillaTagCompetitiveManager___c::_OnPlayerEnteredRoom_b__44_1(bool  valid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveManager___c*>(),
                        {"<OnPlayerEnteredRoom>b__44_1", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valid);
}
inline ::GlobalNamespace::GorillaTagCompetitiveManager___c* GlobalNamespace::GorillaTagCompetitiveManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveManager___c::GorillaTagCompetitiveManager___c()   {
}
