#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGame.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_GameState_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_GameState_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_RPC_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGoalZone_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallResetGame_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallShotclock_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallTeam_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBall_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.get_BallLauncher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::get_BallLauncher)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57aad6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"get_BallLauncher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57aad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(bool)>(&::GlobalNamespace::MonkeBallGame::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57aad7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::Awake)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x57aad84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ValidateCallLimits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::MonkeBallGame_RPC, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::ValidateCallLimits)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57ab2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ReportRPCCall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::MonkeBallGame_RPC, ::Photon::Pun::PhotonMessageInfo, ::StringW)>(&::GlobalNamespace::MonkeBallGame::ReportRPCCall)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x57ab3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ReportRPCCall", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::Start)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57ab4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x57ab5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x57ab708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.Despawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::Fusion::NetworkRunner*, bool)>(&::GlobalNamespace::MonkeBallGame::Despawned)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57ab820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnPlayerDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnPlayerDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x57a7b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnPlayerDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.AssignNetworkListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::AssignNetworkListeners)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x57ab130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"AssignNetworkListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.UnassignNetworkListeners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::UnassignNetworkListeners)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x57ab83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"UnassignNetworkListeners", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::Tick)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x57ab9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MonkeBallGame::OnPlayerJoined)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x57ac72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MonkeBallGame::OnPlayerLeft)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x57ace74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::MonkeBallGame::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x57ad02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.GetCurrentGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::by_ref<::ArrayW<int32_t>>, ::by_ref<::ArrayW<int32_t>>, ::by_ref<::ArrayW<int32_t>>, ::by_ref<::ArrayW<int64_t>>, ::by_ref<::ArrayW<int64_t>>)>(&::GlobalNamespace::MonkeBallGame::GetCurrentGameState)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x57ac9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetCurrentGameState", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.IsMasterClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::IsMasterClient)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x57abb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"IsMasterClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.GetGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeBallGame_GameState (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::GetGameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ad2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetGameState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::MonkeBallGame_GameState)>(&::GlobalNamespace::MonkeBallGame::RequestGameState)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x57abb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestGameState", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_GameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetGameStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::SetGameStateRPC)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x57ad300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetGameStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::MonkeBallGame_GameState)>(&::GlobalNamespace::MonkeBallGame::SetGameState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57ad458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetGameState", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_GameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnEnterStatePreGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnEnterStatePreGame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57ad494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePreGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnEnterStatePlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnEnterStatePlaying)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57ad524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnEnterStatePostScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnEnterStatePostScore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57ad53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePostScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnEnterStatePostGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::OnEnterStatePostGame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57ad540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePostGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestSetGameStateRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, double_t, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<int64_t>, ::ArrayW<int64_t>, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::RequestSetGameStateRPC)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0x57ad5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetGameStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::RequestResetGame)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x57ae0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestResetGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestResetGameRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::RequestResetGameRPC)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x57ae1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestResetGameRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ToggleResetButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(bool, int32_t)>(&::GlobalNamespace::MonkeBallGame::ToggleResetButton)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x57aaa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ToggleResetButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetResetButtonRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(bool, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::SetResetButtonRPC)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x57ae5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetResetButtonRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.OnBallGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::MonkeBallGame::OnBallGrabbed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57ae778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnBallGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RefreshTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::RefreshTime)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x57abc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RefreshTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestResetBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId, int32_t)>(&::GlobalNamespace::MonkeBallGame::RequestResetBall)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x57aa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestResetBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t)>(&::GlobalNamespace::MonkeBallGame::RequestScore)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x57ae7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestSetScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, int32_t)>(&::GlobalNamespace::MonkeBallGame::RequestSetScore)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x57ae400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetScoreRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::SetScoreRPC)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x57ae984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetScoreRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, int32_t, bool)>(&::GlobalNamespace::MonkeBallGame::SetScore)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x57adf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RefreshScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::RefreshScore)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57aebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RefreshScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.PlayScoreFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::PlayScoreFx)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57aeb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"PlayScoreFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.GetTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MonkeBallTeam* (::GlobalNamespace::MonkeBallGame::*)(int32_t)>(&::GlobalNamespace::MonkeBallGame::GetTeam)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57aed5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.GetOtherTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MonkeBallGame::*)(int32_t)>(&::GlobalNamespace::MonkeBallGame::GetOtherTeam)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57a9f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetOtherTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestSetTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t)>(&::GlobalNamespace::MonkeBallGame::RequestSetTeam)> {
  constexpr static std::size_t size = 0x670;
  constexpr static std::size_t addrs = 0x57aedb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.GetMonkeBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MonkeBall> (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::MonkeBallGame::GetMonkeBall)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x57af424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetMonkeBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestSetTeamRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::RequestSetTeamRPC)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x57af4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetTeamRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetTeamRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, ::Photon::Realtime::Player*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::SetTeamRPC)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x57af728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetTeamRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetTeamPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, ::Photon::Realtime::Player*)>(&::GlobalNamespace::MonkeBallGame::SetTeamPlayer)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57af884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetTeamPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RefreshTeamPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(bool)>(&::GlobalNamespace::MonkeBallGame::RefreshTeamPlayers)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x57ac124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RefreshTeamPlayers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ForceSyncPlayersVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::ForceSyncPlayersVisuals)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x57abdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ForceSyncPlayersVisuals", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ForceOriginalColorSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::ForceOriginalColorSync)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x57ac3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ForceOriginalColorSync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestRestrictBallToTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId, int32_t)>(&::GlobalNamespace::MonkeBallGame::RequestRestrictBallToTeam)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a9ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestRestrictBallToTeam", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RequestRestrictBallToTeamOnScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId, int32_t)>(&::GlobalNamespace::MonkeBallGame::RequestRestrictBallToTeamOnScore)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a9f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestRestrictBallToTeamOnScore", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.RestrictBallToTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId, int32_t, float_t)>(&::GlobalNamespace::MonkeBallGame::RestrictBallToTeam)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x57afa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RestrictBallToTeam", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.SetRestrictBallToTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(int32_t, int32_t, float_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::SetRestrictBallToTeam)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x57afbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetRestrictBallToTeam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.LaunchBallNeutral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId)>(&::GlobalNamespace::MonkeBallGame::LaunchBallNeutral)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x57a9cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"LaunchBallNeutral", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.LaunchBallWithTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId, int32_t, ::UnityEngine::Transform*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::GlobalNamespace::MonkeBallGame::LaunchBallWithTeam)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57ae7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"LaunchBallWithTeam", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.LaunchBall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::GlobalNamespace::GameBallId, ::UnityEngine::Transform*, float_t, float_t, float_t, float_t, float_t, float_t)>(&::GlobalNamespace::MonkeBallGame::LaunchBall)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x57aff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"LaunchBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b024c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::WriteDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b0254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::MonkeBallGame::ReadDataPUN)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57b0258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x57b025c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)(bool)>(&::GlobalNamespace::MonkeBallGame::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallGame.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallGame::*)()>(&::GlobalNamespace::MonkeBallGame::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                    {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>*& GlobalNamespace::MonkeBallGame::__cordl_internal_get_startingBalls()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingBalls;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>* const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_startingBalls() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingBalls;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_startingBalls(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBall>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingBalls = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>*& GlobalNamespace::MonkeBallGame::__cordl_internal_get_scoreboards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboards;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>* const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_scoreboards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboards;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_scoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallScoreboard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreboards = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>*& GlobalNamespace::MonkeBallGame::__cordl_internal_get_shotclocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shotclocks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>* const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_shotclocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shotclocks;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_shotclocks(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallShotclock>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shotclocks = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>*& GlobalNamespace::MonkeBallGame::__cordl_internal_get_goalZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goalZones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>* const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_goalZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goalZones;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_goalZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::MonkeBallGoalZone>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goalZones = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame>& GlobalNamespace::MonkeBallGame::__cordl_internal_get_resetButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetButton;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_resetButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetButton;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_resetButton(::UnityW<::GlobalNamespace::MonkeBallResetGame>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetButton = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame>& GlobalNamespace::MonkeBallGame::__cordl_internal_get_centerResetButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerResetButton;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallResetGame> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_centerResetButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerResetButton;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_centerResetButton(::UnityW<::GlobalNamespace::MonkeBallResetGame>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerResetButton = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::MonkeBallGame::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>*& GlobalNamespace::MonkeBallGame::__cordl_internal_get_team()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___team;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>* const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_team() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___team;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_team(::System::Collections::Generic::List_1<::GlobalNamespace::MonkeBallTeam*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___team = value;
}
constexpr int32_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get__currentPlayerTotal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayerTotal;
}
constexpr int32_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__currentPlayerTotal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentPlayerTotal;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__currentPlayerTotal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentPlayerTotal = value;
}
constexpr float_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get_gameDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameDuration;
}
constexpr float_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_gameDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameDuration;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_gameDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameDuration = value;
}
constexpr bool& GlobalNamespace::MonkeBallGame::__cordl_internal_get_resetBallPositionOnScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetBallPositionOnScore;
}
constexpr bool const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_resetBallPositionOnScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetBallPositionOnScore;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_resetBallPositionOnScore(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetBallPositionOnScore = value;
}
constexpr float_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get_restrictBallDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictBallDuration;
}
constexpr float_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_restrictBallDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictBallDuration;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_restrictBallDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restrictBallDuration = value;
}
constexpr float_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get_restrictBallDurationAfterScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictBallDurationAfterScore;
}
constexpr float_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_restrictBallDurationAfterScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restrictBallDurationAfterScore;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_restrictBallDurationAfterScore(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restrictBallDurationAfterScore = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBallGame::__cordl_internal_get__ballLauncher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ballLauncher;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__ballLauncher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ballLauncher;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__ballLauncher(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ballLauncher = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MonkeBallGame::__cordl_internal_get_ballLauncherVelocityRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLauncherVelocityRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_ballLauncherVelocityRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLauncherVelocityRange;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_ballLauncherVelocityRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLauncherVelocityRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MonkeBallGame::__cordl_internal_get_ballLaunchAngleXRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleXRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_ballLaunchAngleXRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleXRange;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_ballLaunchAngleXRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLaunchAngleXRange = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::MonkeBallGame::__cordl_internal_get_ballLaunchAngleYRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleYRange;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_ballLaunchAngleYRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ballLaunchAngleYRange;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_ballLaunchAngleYRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ballLaunchAngleYRange = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeBallGame::__cordl_internal_get__neutralBallStartLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____neutralBallStartLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__neutralBallStartLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____neutralBallStartLocation;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__neutralBallStartLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____neutralBallStartLocation = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& GlobalNamespace::MonkeBallGame::__cordl_internal_get_endZoneEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endZoneEffects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_endZoneEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endZoneEffects;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_endZoneEffects(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endZoneEffects = value;
}
constexpr bool& GlobalNamespace::MonkeBallGame::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::GlobalNamespace::MonkeBallGame_GameState& GlobalNamespace::MonkeBallGame::__cordl_internal_get_gameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameState;
}
constexpr ::GlobalNamespace::MonkeBallGame_GameState const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_gameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameState;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_gameState(::GlobalNamespace::MonkeBallGame_GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameState = value;
}
constexpr double_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get_gameEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndTime;
}
constexpr double_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get_gameEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndTime;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set_gameEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEndTime = value;
}
constexpr int32_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get__frameIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameIndex;
}
constexpr int32_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__frameIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameIndex;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__frameIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameIndex = value;
}
constexpr bool& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceSync;
}
constexpr bool const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceSync;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__forceSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceSync = value;
}
constexpr float_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceSyncDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceSyncDelay;
}
constexpr float_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceSyncDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceSyncDelay;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__forceSyncDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceSyncDelay = value;
}
constexpr bool& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceOrigColorFix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceOrigColorFix;
}
constexpr bool const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceOrigColorFix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceOrigColorFix;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__forceOrigColorFix(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceOrigColorFix = value;
}
constexpr float_t& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceOrigColorDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceOrigColorDelay;
}
constexpr float_t const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__forceOrigColorDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceOrigColorDelay;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__forceOrigColorDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceOrigColorDelay = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeBallGame::__cordl_internal_get__storedLocalPlayerColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storedLocalPlayerColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__storedLocalPlayerColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storedLocalPlayerColor;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__storedLocalPlayerColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storedLocalPlayerColor = value;
}
constexpr bool& GlobalNamespace::MonkeBallGame::__cordl_internal_get__setStoredLocalPlayerColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setStoredLocalPlayerColor;
}
constexpr bool const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__setStoredLocalPlayerColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setStoredLocalPlayerColor;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__setStoredLocalPlayerColor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setStoredLocalPlayerColor = value;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*>& GlobalNamespace::MonkeBallGame::__cordl_internal_get__callLimiters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callLimiters;
}
constexpr ::ArrayW<::GlobalNamespace::CallLimiter*> const& GlobalNamespace::MonkeBallGame::__cordl_internal_get__callLimiters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____callLimiters;
}
constexpr void GlobalNamespace::MonkeBallGame::__cordl_internal_set__callLimiters(::ArrayW<::GlobalNamespace::CallLimiter*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____callLimiters = value;
}
inline void GlobalNamespace::MonkeBallGame::setStaticF_Instance(::UnityW<::GlobalNamespace::MonkeBallGame>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MonkeBallGame>, "Instance", ::GlobalNamespace::MonkeBallGame*>(std::forward<::UnityW<::GlobalNamespace::MonkeBallGame>>(value));
}
inline ::UnityW<::GlobalNamespace::MonkeBallGame> GlobalNamespace::MonkeBallGame::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MonkeBallGame>, "Instance", ::GlobalNamespace::MonkeBallGame*>();
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::MonkeBallGame::get_BallLauncher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"get_BallLauncher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeBallGame::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MonkeBallGame::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeBallGame::ValidateCallLimits(::GlobalNamespace::MonkeBallGame_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ValidateCallLimits", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rpcCall, info);
}
inline void GlobalNamespace::MonkeBallGame::ReportRPCCall(::GlobalNamespace::MonkeBallGame_RPC  rpcCall, ::Photon::Pun::PhotonMessageInfo  info, ::StringW  susReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ReportRPCCall", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_RPC>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rpcCall, info, susReason);
}
inline void GlobalNamespace::MonkeBallGame::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::Despawned(::Fusion::NetworkRunner*  runner, bool  hasState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hasState);
}
inline void GlobalNamespace::MonkeBallGame::OnPlayerDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnPlayerDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::AssignNetworkListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"AssignNetworkListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::UnassignNetworkListeners()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"UnassignNetworkListeners", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::OnPlayerJoined(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MonkeBallGame::OnPlayerLeft(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MonkeBallGame::OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::MonkeBallGame::GetCurrentGameState(::by_ref<::ArrayW<int32_t>>  playerIds, ::by_ref<::ArrayW<int32_t>>  playerTeams, ::by_ref<::ArrayW<int32_t>>  scores, ::by_ref<::ArrayW<int64_t>>  packedBallPosRot, ::by_ref<::ArrayW<int64_t>>  packedBallVel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetCurrentGameState", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<int64_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerIds, playerTeams, scores, packedBallPosRot, packedBallVel);
}
inline bool GlobalNamespace::MonkeBallGame::IsMasterClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"IsMasterClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallGame_GameState GlobalNamespace::MonkeBallGame::GetGameState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetGameState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeBallGame_GameState>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::RequestGameState(::GlobalNamespace::MonkeBallGame_GameState  newGameState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestGameState", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_GameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState);
}
inline void GlobalNamespace::MonkeBallGame::SetGameStateRPC(int32_t  newGameState, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetGameStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState, info);
}
inline void GlobalNamespace::MonkeBallGame::SetGameState(::GlobalNamespace::MonkeBallGame_GameState  newGameState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetGameState", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame_GameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState);
}
inline void GlobalNamespace::MonkeBallGame::OnEnterStatePreGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePreGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::OnEnterStatePlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::OnEnterStatePostScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePostScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::OnEnterStatePostGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnEnterStatePostGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::RequestSetGameStateRPC(int32_t  newGameState, double_t  newGameEndTime, ::ArrayW<int32_t>  playerIds, ::ArrayW<int32_t>  playerTeams, ::ArrayW<int32_t>  scores, ::ArrayW<int64_t>  packedBallPosRot, ::ArrayW<int64_t>  packedBallVel, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetGameStateRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::ArrayW<int64_t>>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameState, newGameEndTime, playerIds, playerTeams, scores, packedBallPosRot, packedBallVel, info);
}
inline void GlobalNamespace::MonkeBallGame::RequestResetGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestResetGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::RequestResetGameRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestResetGameRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GlobalNamespace::MonkeBallGame::ToggleResetButton(bool  toggle, int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ToggleResetButton", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle, teamId);
}
inline void GlobalNamespace::MonkeBallGame::SetResetButtonRPC(bool  toggleReset, int32_t  teamId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetResetButtonRPC", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggleReset, teamId, info);
}
inline void GlobalNamespace::MonkeBallGame::OnBallGrabbed(::GlobalNamespace::GameBallId  gameBallId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"OnBallGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId);
}
inline void GlobalNamespace::MonkeBallGame::RefreshTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RefreshTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::RequestResetBall(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestResetBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, teamId);
}
inline void GlobalNamespace::MonkeBallGame::RequestScore(int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId);
}
inline void GlobalNamespace::MonkeBallGame::RequestSetScore(int32_t  teamId, int32_t  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, score);
}
inline void GlobalNamespace::MonkeBallGame::SetScoreRPC(int32_t  teamId, int32_t  score, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetScoreRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, score, info);
}
inline void GlobalNamespace::MonkeBallGame::SetScore(int32_t  teamId, int32_t  score, bool  playFX)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, score, playFX);
}
inline void GlobalNamespace::MonkeBallGame::RefreshScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RefreshScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::PlayScoreFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"PlayScoreFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallTeam* GlobalNamespace::MonkeBallGame::GetTeam(int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MonkeBallTeam*>(this, ___internal_method, teamId);
}
inline int32_t GlobalNamespace::MonkeBallGame::GetOtherTeam(int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetOtherTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, teamId);
}
inline void GlobalNamespace::MonkeBallGame::RequestSetTeam(int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetTeam", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId);
}
inline ::UnityW<::GlobalNamespace::MonkeBall> GlobalNamespace::MonkeBallGame::GetMonkeBall(::GlobalNamespace::GameBallId  gameBallId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"GetMonkeBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MonkeBall>>(this, ___internal_method, gameBallId);
}
inline void GlobalNamespace::MonkeBallGame::RequestSetTeamRPC(int32_t  teamId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestSetTeamRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, info);
}
inline void GlobalNamespace::MonkeBallGame::SetTeamRPC(int32_t  teamId, ::Photon::Realtime::Player*  player, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetTeamRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, player, info);
}
inline void GlobalNamespace::MonkeBallGame::SetTeamPlayer(int32_t  teamId, ::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetTeamPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, player);
}
inline void GlobalNamespace::MonkeBallGame::RefreshTeamPlayers(bool  playSounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RefreshTeamPlayers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playSounds);
}
inline void GlobalNamespace::MonkeBallGame::ForceSyncPlayersVisuals()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ForceSyncPlayersVisuals", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::ForceOriginalColorSync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"ForceOriginalColorSync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::RequestRestrictBallToTeam(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestRestrictBallToTeam", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, teamId);
}
inline void GlobalNamespace::MonkeBallGame::RequestRestrictBallToTeamOnScore(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RequestRestrictBallToTeamOnScore", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, teamId);
}
inline void GlobalNamespace::MonkeBallGame::RestrictBallToTeam(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId, float_t  restrictDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"RestrictBallToTeam", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, teamId, restrictDuration);
}
inline void GlobalNamespace::MonkeBallGame::SetRestrictBallToTeam(int32_t  gameBallIndex, int32_t  teamId, float_t  restrictDuration, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"SetRestrictBallToTeam", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallIndex, teamId, restrictDuration, info);
}
inline void GlobalNamespace::MonkeBallGame::LaunchBallNeutral(::GlobalNamespace::GameBallId  gameBallId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"LaunchBallNeutral", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId);
}
inline void GlobalNamespace::MonkeBallGame::LaunchBallWithTeam(::GlobalNamespace::GameBallId  gameBallId, int32_t  teamId, ::UnityEngine::Transform*  launcher, ::UnityEngine::Vector2  velocityRange, ::UnityEngine::Vector2  angleXRange, ::UnityEngine::Vector2  angleYRange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"LaunchBallWithTeam", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, teamId, launcher, velocityRange, angleXRange, angleYRange);
}
inline void GlobalNamespace::MonkeBallGame::LaunchBall(::GlobalNamespace::GameBallId  gameBallId, ::UnityEngine::Transform*  launcher, float_t  minVelocity, float_t  maxVelocity, float_t  minXAngle, float_t  maxXAngle, float_t  minYAngle, float_t  maxYAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {"LaunchBall", {}, {::i2c::type_of<::GlobalNamespace::GameBallId>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, launcher, minVelocity, maxVelocity, minXAngle, maxXAngle, minYAngle, maxYAngle);
}
inline void GlobalNamespace::MonkeBallGame::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::MonkeBallGame::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::MonkeBallGame::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallGame::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::MonkeBallGame::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MonkeBallGame*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallGame* GlobalNamespace::MonkeBallGame::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallGame*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::MonkeBallGame::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::MonkeBallGame::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallGame::MonkeBallGame()   {
}
