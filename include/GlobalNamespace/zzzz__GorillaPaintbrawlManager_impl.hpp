#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPaintbrawlManager.hpp"
#include "GlobalNamespace/zzzz__GorillaGameManager_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlState_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_def.hpp"
#include "Fusion/zzzz__NetworkObject_def.hpp"
#include "GlobalNamespace/zzzz__GameModeSerializer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_PaintbrawlStatus_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPaintbrawlManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__NetworkView_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.ActivatePaintbrawlBalloons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(bool)>(&::GlobalNamespace::GorillaPaintbrawlManager::ActivatePaintbrawlBalloons)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x591b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ActivatePaintbrawlBalloons", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.HasFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::HasFlag)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x591baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"HasFlag", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591bab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.AddFusionDataBehaviour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::Fusion::NetworkObject*)>(&::GlobalNamespace::GorillaPaintbrawlManager::AddFusionDataBehaviour)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x591bab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 90}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x591bb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x591bb6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.ActivateDefaultSlingShot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::ActivateDefaultSlingShot)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x591bc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ActivateDefaultSlingShot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.PreloadSlingshotForActiveRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::StringW)>(&::GlobalNamespace::GorillaPaintbrawlManager::PreloadSlingshotForActiveRigs)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x591be78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"PreloadSlingshotForActiveRigs", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x591c044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::StartPlaying)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x591c064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::StopPlaying)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x591c6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::ResetGame)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x591c864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.NetworkLinkSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GameModeSerializer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::NetworkLinkSetup)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x591c99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 87}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.Transition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState)>(&::GlobalNamespace::GorillaPaintbrawlManager::Transition)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x591ca1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"Transition", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.UpdateBattleState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::UpdateBattleState)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x591c410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"UpdateBattleState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.CheckForGameEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::CheckForGameEnd)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x591caf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"CheckForGameEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.StartBattleCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::StartBattleCountdown)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x591d39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"StartBattleCountdown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.StartBattle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::StartBattle)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x591d408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"StartBattle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.EndBattleGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::EndBattleGame)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x591ced8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"EndBattleGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.BattleEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::BattleEnd)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x591cfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"BattleEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.SlingshotHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::GorillaPaintbrawlManager::SlingshotHit)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x591d858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"SlingshotHit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.ReportSlingshotHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*, ::UnityEngine::Vector3, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::GorillaPaintbrawlManager::ReportSlingshotHit)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x591d8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ReportSlingshotHit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.HitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::HitPlayer)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x591dfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.CanAffectPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaPaintbrawlManager::CanAffectPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x591e0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x591e17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x591e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::System::Object*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x591e828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x591ecc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 92}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x591ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x591eff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::MyMatIndex)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x591f1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.LocalPlayerSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::LocalPlayerSpeed)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x591f2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::Tick)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x591f400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.InfrequentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::InfrequentUpdate)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x591f494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GetPlayerLives
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::GetPlayerLives)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x591dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerLives", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.PlayerInHitCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::PlayerInHitCooldown)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x591ddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"PlayerInHitCooldown", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.PlayerInStunCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::PlayerInStunCooldown)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x591df08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"PlayerInStunCooldown", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GetPlayerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::GetPlayerStatus)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x591de7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerStatus", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnRedTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnRedTeam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnRedTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnRedTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnRedTeam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x591f7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnRedTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnBlueTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnBlueTeam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnBlueTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnBlueTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnBlueTeam)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x591f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnBlueTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnNoTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnNoTeam)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x591f80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnNoTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnNoTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnNoTeam)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x591f818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnNoTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GetPlayerTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::GetPlayerTeam)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x591f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.GetPlayerTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::GetPlayerTeam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x591f840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x591f864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnSameTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnSameTeam)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x591f87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnSameTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.OnSameTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::OnSameTeam)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x591dcf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnSameTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.LocalCanHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::LocalCanHit)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x591f898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"LocalCanHit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.CopyBattleDictToArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::CopyBattleDictToArray)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x591c174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"CopyBattleDictToArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.CopyArrayToBattleDict
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::CopyArrayToBattleDict)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x591e9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"CopyArrayToBattleDict", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.SetFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::SetFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"SetFlag", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.SetFlagExclusive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::SetFlagExclusive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"SetFlagExclusive", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.ClearFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::ClearFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ClearFlag", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.FlagIsSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus)>(&::GlobalNamespace::GorillaPaintbrawlManager::FlagIsSet)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x591f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"FlagIsSet", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.RandomizeTeams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::RandomizeTeams)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x591d000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"RandomizeTeams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.AddPlayerToCorrectTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPaintbrawlManager::AddPlayerToCorrectTeam)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x591e2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"AddPlayerToCorrectTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.InitializePlayerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::InitializePlayerStatus)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x591ce18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"InitializePlayerStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager.UpdatePlayerStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::UpdatePlayerStatus)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x591d5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"UpdatePlayerStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x591f904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMin;
}
constexpr float_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMin;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMin = value;
}
constexpr float_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_tagCoolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCoolDown;
}
constexpr float_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_tagCoolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagCoolDown;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_tagCoolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagCoolDown = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerLives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLives;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerLives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLives;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerLives(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLives = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerStatusDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStatusDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>* const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerStatusDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStatusDict;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerStatusDict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerStatusDict = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerHitTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHitTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerHitTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerHitTimes;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerHitTimes(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerHitTimes = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerStunTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStunTimes;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerStunTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStunTimes;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerStunTimes(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerStunTimes = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerActorNumberArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorNumberArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerActorNumberArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerActorNumberArray;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerActorNumberArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerActorNumberArray = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerLivesArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLivesArray;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerLivesArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLivesArray;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerLivesArray(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLivesArray = value;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerStatusArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStatusArray;
}
constexpr ::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus> const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerStatusArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerStatusArray;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerStatusArray(::ArrayW<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerStatusArray = value;
}
constexpr bool& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_teamBattle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamBattle;
}
constexpr bool const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_teamBattle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamBattle;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_teamBattle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamBattle = value;
}
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_countDownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countDownTime;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_countDownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countDownTime;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_countDownTime(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countDownTime = value;
}
constexpr float_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_timeBattleEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBattleEnded;
}
constexpr float_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_timeBattleEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBattleEnded;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_timeBattleEnded(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBattleEnded = value;
}
constexpr float_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_hitCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr float_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_hitCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hitCooldown;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_hitCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hitCooldown = value;
}
constexpr float_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_stunGracePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunGracePeriod;
}
constexpr float_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_stunGracePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stunGracePeriod;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_stunGracePeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stunGracePeriod = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_objRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objRef;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_objRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objRef;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_objRef(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objRef = value;
}
constexpr bool& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerInList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInList;
}
constexpr bool const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_playerInList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerInList;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_playerInList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerInList = value;
}
constexpr bool& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_coroutineRunning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineRunning;
}
constexpr bool const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_coroutineRunning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineRunning;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_coroutineRunning(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineRunning = value;
}
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_lives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lives;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_lives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lives;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_lives(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lives = value;
}
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_outLives()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outLives;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_outLives() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outLives;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_outLives(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outLives = value;
}
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_bcount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bcount;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_bcount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bcount;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_bcount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bcount = value;
}
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_rcount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcount;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_rcount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rcount;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_rcount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rcount = value;
}
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_randInt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randInt;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_randInt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randInt;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_randInt(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randInt = value;
}
constexpr float_t& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_outHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outHitTime;
}
constexpr float_t const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_outHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outHitTime;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_outHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outHitTime = value;
}
constexpr ::UnityW<::GlobalNamespace::NetworkView>& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_tempView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempView;
}
constexpr ::UnityW<::GlobalNamespace::NetworkView> const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_tempView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempView;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_tempView(::UnityW<::GlobalNamespace::NetworkView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempView = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_reusableKeyBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableKeyBuffer;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_reusableKeyBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reusableKeyBuffer;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_reusableKeyBuffer(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reusableKeyBuffer = value;
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_tempStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempStatus;
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_tempStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempStatus;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_tempStatus(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempStatus = value;
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set_currentState(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr bool& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get__isDefaultSlingshotSynced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefaultSlingshotSynced;
}
constexpr bool const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get__isDefaultSlingshotSynced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefaultSlingshotSynced;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set__isDefaultSlingshotSynced(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDefaultSlingshotSynced = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get__slingshotPreloadedRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slingshotPreloadedRigs;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_get__slingshotPreloadedRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____slingshotPreloadedRigs;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager::__cordl_internal_set__slingshotPreloadedRigs(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____slingshotPreloadedRigs = value;
}
inline void GlobalNamespace::GorillaPaintbrawlManager::ActivatePaintbrawlBalloons(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ActivatePaintbrawlBalloons", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::HasFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  state, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  statusFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"HasFlag", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state, statusFlag);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::GorillaPaintbrawlManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::AddFusionDataBehaviour(::Fusion::NetworkObject*  behaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 90}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behaviour);
}
inline ::StringW GlobalNamespace::GorillaPaintbrawlManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaPaintbrawlManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::ActivateDefaultSlingShot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ActivateDefaultSlingShot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::PreloadSlingshotForActiveRigs(::StringW  caller)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"PreloadSlingshotForActiveRigs", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, caller);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::ResetGame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::GorillaPaintbrawlManager::CopyDictKeysToBuffer(::System::Collections::Generic::Dictionary_2<int32_t,T>*  dict)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {"CopyDictKeysToBuffer", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, dict);
}
template<typename T>
inline void GlobalNamespace::GorillaPaintbrawlManager::VerifyPlayersInDict(::System::Collections::Generic::Dictionary_2<int32_t,T>*  dict)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                    {"VerifyPlayersInDict", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dict);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::NetworkLinkSetup(::GlobalNamespace::GameModeSerializer*  netSerializer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 87}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netSerializer);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::Transition(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"Transition", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::UpdateBattleState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"UpdateBattleState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::CheckForGameEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"CheckForGameEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GorillaPaintbrawlManager::StartBattleCountdown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"StartBattleCountdown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::StartBattle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"StartBattle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::EndBattleGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"EndBattleGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::BattleEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"BattleEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::SlingshotHit(::GlobalNamespace::NetPlayer*  myPlayer, ::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"SlingshotHit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::ReportSlingshotHit(::GlobalNamespace::NetPlayer*  taggedPlayer, ::UnityEngine::Vector3  hitLocation, int32_t  projectileCount, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ReportSlingshotHit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, hitLocation, projectileCount, info);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::HitPlayer(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::CanAffectPlayer(::GlobalNamespace::NetPlayer*  player, bool  thisFrame)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, thisFrame);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::OnSerializeRead(::System::Object*  newData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newData);
}
inline ::System::Object* GlobalNamespace::GorillaPaintbrawlManager::OnSerializeWrite()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 92}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline int32_t GlobalNamespace::GorillaPaintbrawlManager::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline ::ArrayW<float_t> GlobalNamespace::GorillaPaintbrawlManager::LocalPlayerSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::InfrequentUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaPaintbrawlManager::GetPlayerLives(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerLives", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::PlayerInHitCooldown(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"PlayerInHitCooldown", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::PlayerInStunCooldown(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"PlayerInStunCooldown", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GlobalNamespace::GorillaPaintbrawlManager::GetPlayerStatus(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerStatus", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnRedTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnRedTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnRedTeam(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnRedTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnBlueTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnBlueTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnBlueTeam(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnBlueTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnNoTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnNoTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, status);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnNoTeam(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnNoTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GlobalNamespace::GorillaPaintbrawlManager::GetPlayerTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(this, ___internal_method, status);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GlobalNamespace::GorillaPaintbrawlManager::GetPlayerTeam(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"GetPlayerTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnSameTeam(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  playerA, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  playerB)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnSameTeam", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerA, playerB);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::OnSameTeam(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"OnSameTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::LocalCanHit(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"LocalCanHit", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::CopyBattleDictToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"CopyBattleDictToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::CopyArrayToBattleDict()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"CopyArrayToBattleDict", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GlobalNamespace::GorillaPaintbrawlManager::SetFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"SetFlag", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(this, ___internal_method, currState, flag);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GlobalNamespace::GorillaPaintbrawlManager::SetFlagExclusive(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"SetFlagExclusive", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(this, ___internal_method, currState, flag);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus GlobalNamespace::GorillaPaintbrawlManager::ClearFlag(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"ClearFlag", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(this, ___internal_method, currState, flag);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager::FlagIsSet(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  currState, ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus  flag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"FlagIsSet", {}, {::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>(), ::i2c::type_of<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, currState, flag);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::RandomizeTeams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"RandomizeTeams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::AddPlayerToCorrectTeam(::GlobalNamespace::NetPlayer*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"AddPlayerToCorrectTeam", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::InitializePlayerStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"InitializePlayerStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::UpdatePlayerStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {"UpdatePlayerStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager* GlobalNamespace::GorillaPaintbrawlManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPaintbrawlManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPaintbrawlManager::GorillaPaintbrawlManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::*)(int32_t)>(&::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x591d830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591fba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::MoveNext)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x591fbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591ff34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x591ff3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591ff74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49* GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPaintbrawlManager__StartBattleCountdown_d__49::GorillaPaintbrawlManager__StartBattleCountdown_d__49()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::*)()>(&::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x591f8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0._RandomizeTeams_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::*)(int32_t)>(&::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::_RandomizeTeams_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x591fb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*>(),
                        {"<RandomizeTeams>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Random*& GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::__cordl_internal_get_rand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rand;
}
constexpr ::System::Random* const& GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::__cordl_internal_get_rand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rand;
}
constexpr void GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::__cordl_internal_set_rand(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rand = value;
}
inline void GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::_RandomizeTeams_b__0(int32_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*>(),
                        {"<RandomizeTeams>b__0", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, x);
}
inline ::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0* GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPaintbrawlManager___c__DisplayClass90_0::GorillaPaintbrawlManager___c__DisplayClass90_0()   {
}
