#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedMultiplayerScore.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_RecordHolder_1_impl.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_ResultData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_PlayerScoreInRound_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_PlayerScore_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_RecordHolder_1_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_ResultData_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_def.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.get_Progression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::RankedProgressionManager> (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::get_Progression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59623f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_Progression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.set_Progression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::RankedProgressionManager*)>(&::GlobalNamespace::RankedMultiplayerScore::set_Progression)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59623f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_Progression", {}, {::i2c::type_of<::GlobalNamespace::RankedProgressionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::Initialize)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x5962400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.HandlePlayerEloAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(int32_t, float_t, int32_t)>(&::GlobalNamespace::RankedMultiplayerScore::HandlePlayerEloAcquired)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59627e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"HandlePlayerEloAcquired", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5962948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::Unsubscribe)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x596294c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"Unsubscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::Tick)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5962c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnPerSecondTimerElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(int32_t, int32_t)>(&::GlobalNamespace::RankedMultiplayerScore::OnPerSecondTimerElapsed)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5962d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnPerSecondTimerElapsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.ResetMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::ResetMatch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x596309c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ResetMatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::GorillaTagCompetitiveManager_GameState)>(&::GlobalNamespace::RankedMultiplayerScore::OnStateChanged)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x596310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnGameStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::OnGameStarted)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5963144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnGameStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnGameEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::OnGameEnded)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5963490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnGameEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RankedMultiplayerScore::OnPlayerJoined)> {
  constexpr static std::size_t size = 0x8a4;
  constexpr static std::size_t addrs = 0x5963a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.ReceivedScoresForLateJoiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::ArrayW<int32_t>, ::ArrayW<int32_t>, ::ArrayW<float_t>, ::ArrayW<float_t>, ::ArrayW<bool>, ::ArrayW<float_t>)>(&::GlobalNamespace::RankedMultiplayerScore::ReceivedScoresForLateJoiner)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x596430c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ReceivedScoresForLateJoiner", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RankedMultiplayerScore::OnPlayerLeft)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x596459c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.StartTrackingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::RankedMultiplayerScore::StartTrackingPlayer)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5963248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"StartTrackingPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.GetInGameScoreForSelf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::GetInGameScoreForSelf)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x596460c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"GetInGameScoreForSelf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.OnTagReported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RankedMultiplayerScore::OnTagReported)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x59646ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnTagReported", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.ReportScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::ReportScore)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x59636e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ReportScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.ComputeGameScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedMultiplayerScore::*)(int32_t, float_t)>(&::GlobalNamespace::RankedMultiplayerScore::ComputeGameScore)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5964874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ComputeGameScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.PredictPlayerEloChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::PredictPlayerEloChanges)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x5964888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"PredictPlayerEloChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.CachePlayerRankedProgressionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(int32_t, int32_t, float_t)>(&::GlobalNamespace::RankedMultiplayerScore::CachePlayerRankedProgressionData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x59627e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"CachePlayerRankedProgressionData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.get_PlayerRankedTiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::get_PlayerRankedTiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5964e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_PlayerRankedTiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.set_PlayerRankedTiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*)>(&::GlobalNamespace::RankedMultiplayerScore::set_PlayerRankedTiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5964e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_PlayerRankedTiers", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.get_PlayerRankedEloScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,float_t>* (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::get_PlayerRankedEloScores)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5964e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_PlayerRankedEloScores", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.set_PlayerRankedEloScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*)>(&::GlobalNamespace::RankedMultiplayerScore::set_PlayerRankedEloScores)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5964e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_PlayerRankedEloScores", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.get_ProjectedEloDeltas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<int32_t,float_t>* (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::get_ProjectedEloDeltas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5964e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_ProjectedEloDeltas", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.set_ProjectedEloDeltas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*)>(&::GlobalNamespace::RankedMultiplayerScore::set_ProjectedEloDeltas)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5964e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_ProjectedEloDeltas", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore.GetSortedScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::GetSortedScores)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5964ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"GetSortedScores", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore::*)()>(&::GlobalNamespace::RankedMultiplayerScore::_ctor)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x596514c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore._GetSortedScores_b__55_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedMultiplayerScore::*)(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound)>(&::GlobalNamespace::RankedMultiplayerScore::_GetSortedScores_b__55_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59653ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"<GetSortedScores>b__55_0", {}, {::i2c::type_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>(), ::i2c::type_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PointsPerTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointsPerTag;
}
constexpr int32_t const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PointsPerTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointsPerTag;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PointsPerTag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointsPerTag = value;
}
constexpr float_t& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PointsPerUninfectedSecMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointsPerUninfectedSecMin;
}
constexpr float_t const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PointsPerUninfectedSecMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointsPerUninfectedSecMin;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PointsPerUninfectedSecMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointsPerUninfectedSecMin = value;
}
constexpr float_t& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PointsPerUninfectedSecMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointsPerUninfectedSecMax;
}
constexpr float_t const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PointsPerUninfectedSecMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PointsPerUninfectedSecMax;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PointsPerUninfectedSecMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PointsPerUninfectedSecMax = value;
}
constexpr float_t& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PerSecondTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerSecondTimer;
}
constexpr float_t const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PerSecondTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PerSecondTimer;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PerSecondTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PerSecondTimer = value;
}
constexpr bool& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_WasInfectedInitially()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WasInfectedInitially;
}
constexpr bool const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_WasInfectedInitially() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WasInfectedInitially;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_WasInfectedInitially(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WasInfectedInitially = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_CompetitiveManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompetitiveManager;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager> const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_CompetitiveManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CompetitiveManager;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_CompetitiveManager(::UnityW<::GlobalNamespace::GorillaTagCompetitiveManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CompetitiveManager = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_AllPlayerInRoundScores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllPlayerInRoundScores;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_AllPlayerInRoundScores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllPlayerInRoundScores;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_AllPlayerInRoundScores(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllPlayerInRoundScores = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_AllFinalPlayerScores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllFinalPlayerScores;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>* const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_AllFinalPlayerScores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AllFinalPlayerScores;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_AllFinalPlayerScores(::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AllFinalPlayerScores = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>*& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_VisitedScoreCombintations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisitedScoreCombintations;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_VisitedScoreCombintations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VisitedScoreCombintations;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_VisitedScoreCombintations(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VisitedScoreCombintations = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_InProgressEloDeltaPerPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InProgressEloDeltaPerPlayer;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_InProgressEloDeltaPerPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InProgressEloDeltaPerPlayer;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_InProgressEloDeltaPerPlayer(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InProgressEloDeltaPerPlayer = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PlayerRankedTierIndices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRankedTierIndices;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PlayerRankedTierIndices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRankedTierIndices;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PlayerRankedTierIndices(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerRankedTierIndices = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PlayerRankedElos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRankedElos;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PlayerRankedElos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerRankedElos;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PlayerRankedElos(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerRankedElos = value;
}
constexpr ::GlobalNamespace::RankedMultiplayerScore_ResultData& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PendingResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingResults;
}
constexpr ::GlobalNamespace::RankedMultiplayerScore_ResultData const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_PendingResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PendingResults;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_PendingResults(::GlobalNamespace::RankedMultiplayerScore_ResultData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PendingResults = value;
}
constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t>& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_ResultsMostTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResultsMostTags;
}
constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t> const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_ResultsMostTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResultsMostTags;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_ResultsMostTags(::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResultsMostTags = value;
}
constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t>& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_ResultsLongestUntagged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResultsLongestUntagged;
}
constexpr ::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t> const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_ResultsLongestUntagged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResultsLongestUntagged;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_ResultsLongestUntagged(::GlobalNamespace::RankedMultiplayerScore_RecordHolder_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResultsLongestUntagged = value;
}
constexpr bool& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_IsLateJoiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLateJoiner;
}
constexpr bool const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get_IsLateJoiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLateJoiner;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set_IsLateJoiner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsLateJoiner = value;
}
constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager>& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get__Progression_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progression_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager> const& GlobalNamespace::RankedMultiplayerScore::__cordl_internal_get__Progression_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progression_k__BackingField;
}
constexpr void GlobalNamespace::RankedMultiplayerScore::__cordl_internal_set__Progression_k__BackingField(::UnityW<::GlobalNamespace::RankedProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Progression_k__BackingField = value;
}
inline void GlobalNamespace::RankedMultiplayerScore::setStaticF_LongestUntaggedTieEpsilon(float_t  value)  {
::cordl_internals::setStaticField<float_t, "LongestUntaggedTieEpsilon", ::GlobalNamespace::RankedMultiplayerScore*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::RankedMultiplayerScore::getStaticF_LongestUntaggedTieEpsilon()  {
return ::cordl_internals::getStaticField<float_t, "LongestUntaggedTieEpsilon", ::GlobalNamespace::RankedMultiplayerScore*>();
}
inline void GlobalNamespace::RankedMultiplayerScore::setStaticF_RESULT_TIE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "RESULT_TIE", ::GlobalNamespace::RankedMultiplayerScore*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::RankedMultiplayerScore::getStaticF_RESULT_TIE()  {
return ::cordl_internals::getStaticField<int32_t, "RESULT_TIE", ::GlobalNamespace::RankedMultiplayerScore*>();
}
inline ::UnityW<::GlobalNamespace::RankedProgressionManager> GlobalNamespace::RankedMultiplayerScore::get_Progression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_Progression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RankedProgressionManager>>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::set_Progression(::GlobalNamespace::RankedProgressionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_Progression", {}, {::i2c::type_of<::GlobalNamespace::RankedProgressionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RankedMultiplayerScore::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::HandlePlayerEloAcquired(int32_t  playerId, float_t  elo, int32_t  tier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"HandlePlayerEloAcquired", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, elo, tier);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::Unsubscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"Unsubscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnPerSecondTimerElapsed(int32_t  playersInGame, int32_t  infectedPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnPerSecondTimerElapsed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playersInGame, infectedPlayers);
}
inline void GlobalNamespace::RankedMultiplayerScore::ResetMatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ResetMatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnStateChanged(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnGameStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnGameStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnGameEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnGameEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnPlayerJoined(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RankedMultiplayerScore::ReceivedScoresForLateJoiner(::ArrayW<int32_t>  playerIds, ::ArrayW<int32_t>  numTags, ::ArrayW<float_t>  pointsOnDefense, ::ArrayW<float_t>  joinTime, ::ArrayW<bool>  infected, ::ArrayW<float_t>  taggedTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ReceivedScoresForLateJoiner", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerIds, numTags, pointsOnDefense, joinTime, infected, taggedTime);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnPlayerLeft(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RankedMultiplayerScore::StartTrackingPlayer(::GlobalNamespace::NetPlayer*  player, bool  lateJoin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"StartTrackingPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, lateJoin);
}
inline ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound GlobalNamespace::RankedMultiplayerScore::GetInGameScoreForSelf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"GetInGameScoreForSelf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::OnTagReported(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"OnTagReported", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GlobalNamespace::RankedMultiplayerScore::ReportScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ReportScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedMultiplayerScore::ComputeGameScore(int32_t  tags, float_t  pointsOnDefense)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"ComputeGameScore", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, tags, pointsOnDefense);
}
inline void GlobalNamespace::RankedMultiplayerScore::PredictPlayerEloChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"PredictPlayerEloChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::CachePlayerRankedProgressionData(int32_t  playerId, int32_t  tierIdx, float_t  elo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"CachePlayerRankedProgressionData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, tierIdx, elo);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* GlobalNamespace::RankedMultiplayerScore::get_PlayerRankedTiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_PlayerRankedTiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::set_PlayerRankedTiers(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_PlayerRankedTiers", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* GlobalNamespace::RankedMultiplayerScore::get_PlayerRankedEloScores()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_PlayerRankedEloScores", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::set_PlayerRankedEloScores(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_PlayerRankedEloScores", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,float_t>* GlobalNamespace::RankedMultiplayerScore::get_ProjectedEloDeltas()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"get_ProjectedEloDeltas", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::set_ProjectedEloDeltas(::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"set_ProjectedEloDeltas", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>* GlobalNamespace::RankedMultiplayerScore::GetSortedScores()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"GetSortedScores", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedMultiplayerScore::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RankedMultiplayerScore::_GetSortedScores_b__55_0(::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound  s1, ::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound  s2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore*>(),
                        {"<GetSortedScores>b__55_0", {}, {::i2c::type_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>(), ::i2c::type_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, s1, s2);
}
inline ::GlobalNamespace::RankedMultiplayerScore* GlobalNamespace::RankedMultiplayerScore::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedMultiplayerScore*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerScore::RankedMultiplayerScore()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedMultiplayerScore___c::*)()>(&::GlobalNamespace::RankedMultiplayerScore___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596552c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedMultiplayerScore___c._PredictPlayerEloChanges_b__44_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedMultiplayerScore___c::*)(::GlobalNamespace::RankedMultiplayerScore_PlayerScore)>(&::GlobalNamespace::RankedMultiplayerScore___c::_PredictPlayerEloChanges_b__44_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore___c*>(),
                        {"<PredictPlayerEloChanges>b__44_0", {}, {::i2c::type_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RankedMultiplayerScore___c::setStaticF___9(::GlobalNamespace::RankedMultiplayerScore___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RankedMultiplayerScore___c*, "<>9", ::GlobalNamespace::RankedMultiplayerScore___c*>(std::forward<::GlobalNamespace::RankedMultiplayerScore___c*>(value));
}
inline ::GlobalNamespace::RankedMultiplayerScore___c* GlobalNamespace::RankedMultiplayerScore___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RankedMultiplayerScore___c*, "<>9", ::GlobalNamespace::RankedMultiplayerScore___c*>();
}
inline void GlobalNamespace::RankedMultiplayerScore___c::setStaticF___9__44_0(::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>*, "<>9__44_0", ::GlobalNamespace::RankedMultiplayerScore___c*>(std::forward<::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>* GlobalNamespace::RankedMultiplayerScore___c::getStaticF___9__44_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::RankedMultiplayerScore_PlayerScore,float_t>*, "<>9__44_0", ::GlobalNamespace::RankedMultiplayerScore___c*>();
}
inline void GlobalNamespace::RankedMultiplayerScore___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedMultiplayerScore___c::_PredictPlayerEloChanges_b__44_0(::GlobalNamespace::RankedMultiplayerScore_PlayerScore  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedMultiplayerScore___c*>(),
                        {"<PredictPlayerEloChanges>b__44_0", {}, {::i2c::type_of<::GlobalNamespace::RankedMultiplayerScore_PlayerScore>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, s);
}
inline ::GlobalNamespace::RankedMultiplayerScore___c* GlobalNamespace::RankedMultiplayerScore___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedMultiplayerScore___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedMultiplayerScore___c::RankedMultiplayerScore___c()   {
}
