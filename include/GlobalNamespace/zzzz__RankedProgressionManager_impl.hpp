#pragma once
// IWYU pragma private; include "GlobalNamespace/RankedProgressionManager.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_ERankedProgressionEventType_impl.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveServerApi_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatisticFloat_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerStatisticInt_def.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_ERankedMatchmakingTier_def.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_ERankedProgressionEventType_def.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.get_MaxRank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::get_MaxRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_MaxRank", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.set_MaxRank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::set_MaxRank)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_MaxRank", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.get_LowTierThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::get_LowTierThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_LowTierThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.set_LowTierThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager::set_LowTierThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_LowTierThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.get_HighTierThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::get_HighTierThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_HighTierThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.set_HighTierThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager::set_HighTierThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_HighTierThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.get_MajorTiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::get_MajorTiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5965db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_MajorTiers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.set_MajorTiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*)>(&::GlobalNamespace::RankedProgressionManager::set_MajorTiers)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5965dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_MajorTiers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.DebugSetELO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::DebugSetELO)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5965dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"DebugSetELO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.DebugResetELO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::DebugResetELO)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5965dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"DebugResetELO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::Awake)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5965dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::Start)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0x5965f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::OnDestroy)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59664b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.RequestUnlockCompetitiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(bool)>(&::GlobalNamespace::RankedProgressionManager::RequestUnlockCompetitiveQueue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5966614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"RequestUnlockCompetitiveQueue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.LoadStatsWhenReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::LoadStatsWhenReady)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59666d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"LoadStatsWhenReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::GorillaGameModes::GameModeType)>(&::GlobalNamespace::RankedProgressionManager::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5966764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnJoinedRoom", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RankedProgressionManager::OnPlayerJoined)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5966ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.AcquireLocalPlayerRankInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::AcquireLocalPlayerRankInformation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5966cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AcquireLocalPlayerRankInformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.AcquireSinglePlayerRankInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::RankedProgressionManager::AcquireSinglePlayerRankInformation)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5966b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AcquireSinglePlayerRankInformation", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.AcquireRoomRankInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(bool)>(&::GlobalNamespace::RankedProgressionManager::AcquireRoomRankInformation)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5966778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AcquireRoomRankInformation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.OnPlayersRankedInformationAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*)>(&::GlobalNamespace::RankedProgressionManager::OnPlayersRankedInformationAcquired)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5966ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnPlayersRankedInformationAcquired", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.OnLocalPlayerRankedInformationAcquired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*)>(&::GlobalNamespace::RankedProgressionManager::OnLocalPlayerRankedInformationAcquired)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x596745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnLocalPlayerRankedInformationAcquired", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.AreValuesValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedProgressionManager::*)(float_t, int32_t, int32_t)>(&::GlobalNamespace::RankedProgressionManager::AreValuesValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59676b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AreValuesValid", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.HandlePlayerRankedInfoReceived
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(int32_t, float_t, int32_t)>(&::GlobalNamespace::RankedProgressionManager::HandlePlayerRankedInfoReceived)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5967694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"HandlePlayerRankedInfoReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.SetLocalProgressionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*)>(&::GlobalNamespace::RankedProgressionManager::SetLocalProgressionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59676f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"SetLocalProgressionData", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.LoadStats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::LoadStats)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5967700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"LoadStats", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetEloScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetEloScore)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5967618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.SetEloScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager::SetEloScore)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5967760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"SetEloScore", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetEloScorePC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetEloScorePC)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x596781c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloScorePC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetEloScoreQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetEloScoreQuest)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5967720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloScoreQuest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetNewTierGracePeriodIdx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetNewTierGracePeriodIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNewTierGracePeriodIdx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.SetNewTierGracePeriodIdx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::SetNewTierGracePeriodIdx)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5967864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"SetNewTierGracePeriodIdx", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.IncrementNewTierGracePeriodIdx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::IncrementNewTierGracePeriodIdx)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x596789c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"IncrementNewTierGracePeriodIdx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.TryGetProgressionSubTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedProgressionManager::*)(::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>, ::by_ref<int32_t>)>(&::GlobalNamespace::RankedProgressionManager::TryGetProgressionSubTier)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59678d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"TryGetProgressionSubTier", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.TryGetProgressionSubTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedProgressionManager::*)(float_t, ::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>, ::by_ref<int32_t>)>(&::GlobalNamespace::RankedProgressionManager::TryGetProgressionSubTier)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5967924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"TryGetProgressionSubTier", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionMajorTierBySubTierIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier* (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetProgressionMajorTierBySubTierIndex)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5967b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionMajorTierBySubTierIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionSubTierByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetProgressionSubTierByIndex)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5967c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionSubTierByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetNextProgressionSubTierByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetNextProgressionSubTierByIndex)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5967dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNextProgressionSubTierByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetPrevProgressionSubTierByIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetPrevProgressionSubTierByIndex)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5967dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetPrevProgressionSubTierByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5967e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedProgressionManager::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankName)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5967e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankName", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetNextProgressionRankName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetNextProgressionRankName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5967ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNextProgressionRankName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetPrevProgressionRankName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetPrevProgressionRankName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5967ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetPrevProgressionRankName", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5967ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionSubTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionSubTier)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5967edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionSubTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIndexQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIndexQuest)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x596761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndexQuest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIndexPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIndexPC)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5967658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndexPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetRankFromTiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)(int32_t, int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetRankFromTiers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5967368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetRankFromTiers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIndex)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5967ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndex", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankProgress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5967f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankProgressQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankProgressQuest)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5967f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankProgressQuest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankProgressPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankProgressPC)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5967f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankProgressPC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.ClampProgressionRankIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::ClampProgressionRankIndex)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5967f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"ClampProgressionRankIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIcon)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5968090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIcon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetRankedProgressionTierName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetRankedProgressionTierName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5968148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetRankedProgressionTierName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::RankedProgressionManager::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIcon)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5968220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIcon", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetProgressionRankIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetProgressionRankIcon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5968260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIcon", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetNextProgressionRankIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetNextProgressionRankIcon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5968278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNextProgressionRankIcon", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetPrevProgressionRankIcon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::RankedProgressionManager::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager::GetPrevProgressionRankIcon)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5968290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetPrevProgressionRankIcon", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetCurrentELO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetCurrentELO)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59682a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetCurrentELO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetSubtierRankThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)(int32_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::RankedProgressionManager::GetSubtierRankThresholds)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x59682ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetSubtierRankThresholds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetEloWinProbability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::RankedProgressionManager::GetEloWinProbability)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5968364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloWinProbability", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.UpdateEloScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, float_t)>(&::GlobalNamespace::RankedProgressionManager::UpdateEloScore)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5968394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"UpdateEloScore", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.GetRankedMatchmakingTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::GetRankedMatchmakingTier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x59683c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetRankedMatchmakingTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.get_CompetitiveQueueEloFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::get_CompetitiveQueueEloFloor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_CompetitiveQueueEloFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager.HasUnlockedCompetitiveQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::HasUnlockedCompetitiveQueue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5968408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"HasUnlockedCompetitiveQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5968470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager._RequestUnlockCompetitiveQueue_b__47_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::_RequestUnlockCompetitiveQueue_b__47_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59685f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"<RequestUnlockCompetitiveQueue>b__47_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager._SetEloScore_b__61_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager::*)()>(&::GlobalNamespace::RankedProgressionManager::_SetEloScore_b__61_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59685f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"<SetEloScore>b__61_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_EloScorePC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EloScorePC;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_EloScorePC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EloScorePC;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_EloScorePC(::GlobalNamespace::RankedMultiplayerStatisticFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EloScorePC = value;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_EloScoreQuest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EloScoreQuest;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticFloat* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_EloScoreQuest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EloScoreQuest;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_EloScoreQuest(::GlobalNamespace::RankedMultiplayerStatisticFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EloScoreQuest = value;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_NewTierGracePeriodIdxPC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewTierGracePeriodIdxPC;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_NewTierGracePeriodIdxPC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewTierGracePeriodIdxPC;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_NewTierGracePeriodIdxPC(::GlobalNamespace::RankedMultiplayerStatisticInt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewTierGracePeriodIdxPC = value;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_NewTierGracePeriodIdxQuest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewTierGracePeriodIdxQuest;
}
constexpr ::GlobalNamespace::RankedMultiplayerStatisticInt* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_NewTierGracePeriodIdxQuest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewTierGracePeriodIdxQuest;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_NewTierGracePeriodIdxQuest(::GlobalNamespace::RankedMultiplayerStatisticInt*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewTierGracePeriodIdxQuest = value;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_ProgressionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressionData;
}
constexpr ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_ProgressionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressionData;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_ProgressionData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProgressionData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_majorTiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorTiers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_majorTiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___majorTiers;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_majorTiers(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___majorTiers = value;
}
constexpr int32_t& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_newTierGracePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTierGracePeriod;
}
constexpr int32_t const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_newTierGracePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTierGracePeriod;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_newTierGracePeriod(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newTierGracePeriod = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_MaxEloConstant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxEloConstant;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_MaxEloConstant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxEloConstant;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_MaxEloConstant(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxEloConstant = value;
}
constexpr int32_t& GlobalNamespace::RankedProgressionManager::__cordl_internal_get__MaxRank_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxRank_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get__MaxRank_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxRank_k__BackingField;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set__MaxRank_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxRank_k__BackingField = value;
}
constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_ProgressionEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressionEvent;
}
constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_ProgressionEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProgressionEvent;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_ProgressionEvent(::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProgressionEvent = value;
}
constexpr ::System::Action_3<int32_t,float_t,int32_t>*& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_OnPlayerEloAcquired()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerEloAcquired;
}
constexpr ::System::Action_3<int32_t,float_t,int32_t>* const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_OnPlayerEloAcquired() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPlayerEloAcquired;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_OnPlayerEloAcquired(::System::Action_3<int32_t,float_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPlayerEloAcquired = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager::__cordl_internal_get__LowTierThreshold_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LowTierThreshold_k__BackingField;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get__LowTierThreshold_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LowTierThreshold_k__BackingField;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set__LowTierThreshold_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LowTierThreshold_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager::__cordl_internal_get__HighTierThreshold_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HighTierThreshold_k__BackingField;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get__HighTierThreshold_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HighTierThreshold_k__BackingField;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set__HighTierThreshold_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HighTierThreshold_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_debugEloPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugEloPoints;
}
constexpr int32_t const& GlobalNamespace::RankedProgressionManager::__cordl_internal_get_debugEloPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugEloPoints;
}
constexpr void GlobalNamespace::RankedProgressionManager::__cordl_internal_set_debugEloPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugEloPoints = value;
}
inline void GlobalNamespace::RankedProgressionManager::setStaticF_Instance(::UnityW<::GlobalNamespace::RankedProgressionManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::RankedProgressionManager>, "Instance", ::GlobalNamespace::RankedProgressionManager*>(std::forward<::UnityW<::GlobalNamespace::RankedProgressionManager>>(value));
}
inline ::UnityW<::GlobalNamespace::RankedProgressionManager> GlobalNamespace::RankedProgressionManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::RankedProgressionManager>, "Instance", ::GlobalNamespace::RankedProgressionManager*>();
}
inline void GlobalNamespace::RankedProgressionManager::setStaticF_RANKED_ELO_KEY(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "RANKED_ELO_KEY", ::GlobalNamespace::RankedProgressionManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RankedProgressionManager::getStaticF_RANKED_ELO_KEY()  {
return ::cordl_internals::getStaticField<::StringW, "RANKED_ELO_KEY", ::GlobalNamespace::RankedProgressionManager*>();
}
inline void GlobalNamespace::RankedProgressionManager::setStaticF_RANKED_PROGRESSION_GRACE_PERIOD_KEY(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "RANKED_PROGRESSION_GRACE_PERIOD_KEY", ::GlobalNamespace::RankedProgressionManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RankedProgressionManager::getStaticF_RANKED_PROGRESSION_GRACE_PERIOD_KEY()  {
return ::cordl_internals::getStaticField<::StringW, "RANKED_PROGRESSION_GRACE_PERIOD_KEY", ::GlobalNamespace::RankedProgressionManager*>();
}
inline void GlobalNamespace::RankedProgressionManager::setStaticF_RANKED_ELO_PC_KEY(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "RANKED_ELO_PC_KEY", ::GlobalNamespace::RankedProgressionManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RankedProgressionManager::getStaticF_RANKED_ELO_PC_KEY()  {
return ::cordl_internals::getStaticField<::StringW, "RANKED_ELO_PC_KEY", ::GlobalNamespace::RankedProgressionManager*>();
}
inline void GlobalNamespace::RankedProgressionManager::setStaticF_RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY", ::GlobalNamespace::RankedProgressionManager*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::RankedProgressionManager::getStaticF_RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY()  {
return ::cordl_internals::getStaticField<::StringW, "RANKED_PROGRESSION_GRACE_PERIOD_PC_KEY", ::GlobalNamespace::RankedProgressionManager*>();
}
inline int32_t GlobalNamespace::RankedProgressionManager::get_MaxRank()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_MaxRank", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::set_MaxRank(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_MaxRank", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RankedProgressionManager::get_LowTierThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_LowTierThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::set_LowTierThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_LowTierThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::RankedProgressionManager::get_HighTierThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_HighTierThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::set_HighTierThreshold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_HighTierThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>* GlobalNamespace::RankedProgressionManager::get_MajorTiers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_MajorTiers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::set_MajorTiers(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"set_MajorTiers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RankedProgressionManager::DebugSetELO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"DebugSetELO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::DebugResetELO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"DebugResetELO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::RequestUnlockCompetitiveQueue(bool  unlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"RequestUnlockCompetitiveQueue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, unlock);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::RankedProgressionManager::LoadStatsWhenReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"LoadStatsWhenReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::OnJoinedRoom(::GorillaGameModes::GameModeType  newGameModeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnJoinedRoom", {}, {::i2c::type_of<::GorillaGameModes::GameModeType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newGameModeType);
}
inline void GlobalNamespace::RankedProgressionManager::OnPlayerJoined(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RankedProgressionManager::AcquireLocalPlayerRankInformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AcquireLocalPlayerRankInformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::AcquireSinglePlayerRankInformation(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AcquireSinglePlayerRankInformation", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::RankedProgressionManager::AcquireRoomRankInformation(bool  includeLocalPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AcquireRoomRankInformation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, includeLocalPlayer);
}
inline void GlobalNamespace::RankedProgressionManager::OnPlayersRankedInformationAcquired(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*  rankedModeProgressionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnPlayersRankedInformationAcquired", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rankedModeProgressionData);
}
inline void GlobalNamespace::RankedProgressionManager::OnLocalPlayerRankedInformationAcquired(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*  rankedModeProgressionData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"OnLocalPlayerRankedInformationAcquired", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rankedModeProgressionData);
}
inline bool GlobalNamespace::RankedProgressionManager::AreValuesValid(float_t  elo, int32_t  questTier, int32_t  pcTier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"AreValuesValid", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elo, questTier, pcTier);
}
inline void GlobalNamespace::RankedProgressionManager::HandlePlayerRankedInfoReceived(int32_t  actorNum, float_t  elo, int32_t  tier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"HandlePlayerRankedInfoReceived", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNum, elo, tier);
}
inline void GlobalNamespace::RankedProgressionManager::SetLocalProgressionData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"SetLocalProgressionData", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::RankedProgressionManager::LoadStats()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"LoadStats", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetEloScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::SetEloScore(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"SetEloScore", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetEloScorePC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloScorePC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetEloScoreQuest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloScoreQuest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RankedProgressionManager::GetNewTierGracePeriodIdx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNewTierGracePeriodIdx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::SetNewTierGracePeriodIdx(int32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"SetNewTierGracePeriodIdx", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline void GlobalNamespace::RankedProgressionManager::IncrementNewTierGracePeriodIdx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"IncrementNewTierGracePeriodIdx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedProgressionManager::TryGetProgressionSubTier(::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>  subTier, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"TryGetProgressionSubTier", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, subTier, index);
}
inline bool GlobalNamespace::RankedProgressionManager::TryGetProgressionSubTier(float_t  elo, ::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>  subTier, ::by_ref<int32_t>  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"TryGetProgressionSubTier", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, elo, subTier, index);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier* GlobalNamespace::RankedProgressionManager::GetProgressionMajorTierBySubTierIndex(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionMajorTierBySubTierIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GlobalNamespace::RankedProgressionManager::GetProgressionSubTierByIndex(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionSubTierByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GlobalNamespace::RankedProgressionManager::GetNextProgressionSubTierByIndex(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNextProgressionSubTierByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>(this, ___internal_method, idx);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GlobalNamespace::RankedProgressionManager::GetPrevProgressionSubTierByIndex(int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetPrevProgressionSubTierByIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>(this, ___internal_method, idx);
}
inline ::StringW GlobalNamespace::RankedProgressionManager::GetProgressionRankName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RankedProgressionManager::GetProgressionRankName(float_t  elo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankName", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, elo);
}
inline ::StringW GlobalNamespace::RankedProgressionManager::GetNextProgressionRankName(int32_t  subTierIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNextProgressionRankName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, subTierIdx);
}
inline ::StringW GlobalNamespace::RankedProgressionManager::GetPrevProgressionRankName(int32_t  subTierIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetPrevProgressionRankName", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, subTierIdx);
}
inline int32_t GlobalNamespace::RankedProgressionManager::GetProgressionRankIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GlobalNamespace::RankedProgressionManager::GetProgressionSubTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionSubTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RankedProgressionManager::GetProgressionRankIndexQuest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndexQuest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RankedProgressionManager::GetProgressionRankIndexPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndexPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RankedProgressionManager::GetRankFromTiers(int32_t  majorTier, int32_t  minorTier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetRankFromTiers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, majorTier, minorTier);
}
inline int32_t GlobalNamespace::RankedProgressionManager::GetProgressionRankIndex(float_t  elo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIndex", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, elo);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetProgressionRankProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetProgressionRankProgressQuest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankProgressQuest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetProgressionRankProgressPC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankProgressPC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::RankedProgressionManager::ClampProgressionRankIndex(int32_t  subTierIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"ClampProgressionRankIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, subTierIdx);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::RankedProgressionManager::GetProgressionRankIcon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIcon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RankedProgressionManager::GetRankedProgressionTierName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetRankedProgressionTierName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::RankedProgressionManager::GetProgressionRankIcon(float_t  elo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIcon", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, elo);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::RankedProgressionManager::GetProgressionRankIcon(int32_t  subTierIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetProgressionRankIcon", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, subTierIdx);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::RankedProgressionManager::GetNextProgressionRankIcon(int32_t  subTierIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetNextProgressionRankIcon", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, subTierIdx);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::RankedProgressionManager::GetPrevProgressionRankIcon(int32_t  subTierIdx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetPrevProgressionRankIcon", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method, subTierIdx);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetCurrentELO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetCurrentELO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::GetSubtierRankThresholds(int32_t  subTierIdx, ::by_ref<float_t>  minThreshold, ::by_ref<float_t>  maxThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetSubtierRankThresholds", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subTierIdx, minThreshold, maxThreshold);
}
inline float_t GlobalNamespace::RankedProgressionManager::GetEloWinProbability(float_t  ratingPlayer1, float_t  ratingPlayer2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetEloWinProbability", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ratingPlayer1, ratingPlayer2);
}
inline float_t GlobalNamespace::RankedProgressionManager::UpdateEloScore(float_t  eloScore, float_t  expectedResult, float_t  actualResult, float_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"UpdateEloScore", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, eloScore, expectedResult, actualResult, k);
}
inline ::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier GlobalNamespace::RankedProgressionManager::GetRankedMatchmakingTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"GetRankedMatchmakingTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::RankedProgressionManager_ERankedMatchmakingTier>(this, ___internal_method);
}
inline float_t GlobalNamespace::RankedProgressionManager::get_CompetitiveQueueEloFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"get_CompetitiveQueueEloFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedProgressionManager::HasUnlockedCompetitiveQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"HasUnlockedCompetitiveQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::_RequestUnlockCompetitiveQueue_b__47_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"<RequestUnlockCompetitiveQueue>b__47_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager::_SetEloScore_b__61_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager*>(),
                        {"<SetEloScore>b__61_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager* GlobalNamespace::RankedProgressionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager::RankedProgressionManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::*)(int32_t)>(&::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x596673c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::*)()>(&::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5968cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::*)()>(&::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5968cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::*)()>(&::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::*)()>(&::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5968e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::*)()>(&::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager>& GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::RankedProgressionManager> const& GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::RankedProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48* GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager__LoadStatsWhenReady_d__48::RankedProgressionManager__LoadStatsWhenReady_d__48()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager___c::*)()>(&::GlobalNamespace::RankedProgressionManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager___c._LoadStatsWhenReady_b__48_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RankedProgressionManager___c::*)()>(&::GlobalNamespace::RankedProgressionManager___c::_LoadStatsWhenReady_b__48_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5968c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager___c*>(),
                        {"<LoadStatsWhenReady>b__48_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RankedProgressionManager___c::setStaticF___9(::GlobalNamespace::RankedProgressionManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::RankedProgressionManager___c*, "<>9", ::GlobalNamespace::RankedProgressionManager___c*>(std::forward<::GlobalNamespace::RankedProgressionManager___c*>(value));
}
inline ::GlobalNamespace::RankedProgressionManager___c* GlobalNamespace::RankedProgressionManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::RankedProgressionManager___c*, "<>9", ::GlobalNamespace::RankedProgressionManager___c*>();
}
inline void GlobalNamespace::RankedProgressionManager___c::setStaticF___9__48_0(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "<>9__48_0", ::GlobalNamespace::RankedProgressionManager___c*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* GlobalNamespace::RankedProgressionManager___c::getStaticF___9__48_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "<>9__48_0", ::GlobalNamespace::RankedProgressionManager___c*>();
}
inline void GlobalNamespace::RankedProgressionManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::RankedProgressionManager___c::_LoadStatsWhenReady_b__48_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager___c*>(),
                        {"<LoadStatsWhenReady>b__48_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager___c* GlobalNamespace::RankedProgressionManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager___c::RankedProgressionManager___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier.InsertSubTierAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::*)(int32_t, float_t)>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::InsertSubTierAt)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x59688d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(),
                        {"InsertSubTierAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier.EnforceSubTierValidity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::EnforceSubTierValidity)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x59689ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(),
                        {"EnforceSubTierValidity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::*)()>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5968b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*& GlobalNamespace::RankedProgressionManager_RankedProgressionTier::__cordl_internal_get_subTiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTiers;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>* const& GlobalNamespace::RankedProgressionManager_RankedProgressionTier::__cordl_internal_get_subTiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subTiers;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionTier::__cordl_internal_set_subTiers(::System::Collections::Generic::List_1<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subTiers = value;
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionTier::InsertSubTierAt(int32_t  idx, float_t  tierMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(),
                        {"InsertSubTierAt", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, idx, tierMin);
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionTier::EnforceSubTierValidity(float_t  thresholdMin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(),
                        {"EnforceSubTierValidity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thresholdMin);
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionTier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier* GlobalNamespace::RankedProgressionManager_RankedProgressionTier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager_RankedProgressionTier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionTier::RankedProgressionManager_RankedProgressionTier()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::*)()>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59688bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::__cordl_internal_get_icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::__cordl_internal_get_icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___icon;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::__cordl_internal_set_icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___icon = value;
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier* GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionSubTier::RankedProgressionManager_RankedProgressionSubTier()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase.SetMinThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::*)(float_t)>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::SetMinThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x596889c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>(),
                        {"SetMinThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase.GetMinThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::*)()>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::GetMinThreshold)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5966420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>(),
                        {"GetMinThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::*)()>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59688a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_thresholdMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdMax;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_thresholdMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdMax;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_set_thresholdMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thresholdMax = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_thresholdMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdMin;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_get_thresholdMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thresholdMin;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::__cordl_internal_set_thresholdMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thresholdMin = value;
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::SetMinThreshold(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>(),
                        {"SetMinThreshold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, val);
}
inline float_t GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::GetMinThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>(),
                        {"GetMinThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase* GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionTierBase::RankedProgressionManager_RankedProgressionTierBase()   {
}
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::*)()>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::ToString)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x59685fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::*)()>(&::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5968894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_evtType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evtType;
}
constexpr ::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_evtType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evtType;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_evtType(::GlobalNamespace::RankedProgressionManager_ERankedProgressionEventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___evtType = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_progressIconLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressIconLeft;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_progressIconLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressIconLeft;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_progressIconLeft(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressIconLeft = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_progressIconRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressIconRight;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_progressIconRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressIconRight;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_progressIconRight(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressIconRight = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_newTierIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTierIcon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_newTierIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTierIcon;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_newTierIcon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newTierIcon = value;
}
constexpr ::StringW& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_leftName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftName;
}
constexpr ::StringW const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_leftName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftName;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_leftName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftName = value;
}
constexpr ::StringW& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_rightName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightName;
}
constexpr ::StringW const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_rightName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightName;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_rightName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightName = value;
}
constexpr ::StringW& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_newTierName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTierName;
}
constexpr ::StringW const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_newTierName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___newTierName;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_newTierName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___newTierName = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_minVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVal;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_minVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minVal;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_minVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minVal = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_maxVal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVal;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_maxVal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxVal;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_maxVal(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxVal = value;
}
constexpr float_t& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_delta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delta;
}
constexpr float_t const& GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_get_delta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delta;
}
constexpr void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::__cordl_internal_set_delta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delta = value;
}
inline ::StringW GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent* GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RankedProgressionManager_RankedProgressionEvent::RankedProgressionManager_RankedProgressionEvent()   {
}
