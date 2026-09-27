#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPropHuntGameManager.hpp"
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_EPropHuntGameState_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagManager_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_EPropHuntGameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPropHuntGameManager_def.hpp"
#include "GlobalNamespace/zzzz__LightningManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayableBoundaryManager_def.hpp"
#include "GlobalNamespace/zzzz__PlayableBoundaryTracker_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntHandFollower_def.hpp"
#include "GlobalNamespace/zzzz__PropHuntPropZone_def.hpp"
#include "GlobalNamespace/zzzz__PropPlacementRB_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__AllCosmeticsArraySO_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__CosmeticSO_def.hpp"
#include "GorillaTag/zzzz__GTAssetRef_1_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> (*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get_instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56307b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.set_instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaPropHuntGameManager*)>(&::GlobalNamespace::GorillaPropHuntGameManager::set_instance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x563080c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::GorillaPropHuntGameManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GameType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaGameModes::GameModeType (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::GameType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5630874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GameModeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::GameModeName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x563087c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GameModeNameRoomLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::GameModeNameRoomLabel)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x56308bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get_PropDecoyPrefab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::PropPlacementRB> (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get_PropDecoyPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5630994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_PropDecoyPrefab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get_HandFollowDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get_HandFollowDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x563099c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_HandFollowDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get_RoundIsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get_RoundIsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56309a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_RoundIsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get_AllPropIDs_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get_AllPropIDs_NoPool)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x56309ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_AllPropIDs_NoPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get__ph_timeRoundStartedMillis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get__ph_timeRoundStartedMillis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5630a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get__ph_timeRoundStartedMillis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.set__ph_timeRoundStartedMillis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(int64_t)>(&::GlobalNamespace::GorillaPropHuntGameManager::set__ph_timeRoundStartedMillis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5630a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"set__ph_timeRoundStartedMillis", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GetSeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::GetSeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5630a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetSeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::Awake)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5630a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5630b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.get_IsReadyToSpawnProps_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::get_IsReadyToSpawnProps_NoPool)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5630f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_IsReadyToSpawnProps_NoPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._ProcessPropsList_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::StringW)>(&::GlobalNamespace::GorillaPropHuntGameManager::_ProcessPropsList_NoPool)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5630f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ProcessPropsList_NoPool", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.StartPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::StartPlaying)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5631010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.StopPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::StopPlaying)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x563171c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.CanPlayerParticipate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPropHuntGameManager::CanPlayerParticipate)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5631e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._OnParticipatingPlayersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaPropHuntGameManager::_OnParticipatingPlayersChanged)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x5631f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnParticipatingPlayersChanged", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.NewVRRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*, int32_t, bool)>(&::GlobalNamespace::GorillaPropHuntGameManager::NewVRRig)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x56321dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::Tick)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5632290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._UpdateParticipatingPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_UpdateParticipatingPlayers)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x5631358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateParticipatingPlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._UpdateGameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_UpdateGameState)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x56324a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateGameState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.UpdatePlayerAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaPropHuntGameManager::UpdatePlayerAppearance)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x56335b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 83}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._GetRigShouldBeSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::VRRig*, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::GorillaPropHuntGameManager::_GetRigShouldBeSkeleton)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x563389c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_GetRigShouldBeSkeleton", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._ShouldRigBeVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::VRRig*, bool, float_t)>(&::GlobalNamespace::GorillaPropHuntGameManager::_ShouldRigBeVisible)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x563418c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ShouldRigBeVisible", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._UpdateBoundaryProximityState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::VRRig*, bool)>(&::GlobalNamespace::GorillaPropHuntGameManager::_UpdateBoundaryProximityState)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5633e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateBoundaryProximityState", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._UpdateControllerHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(float_t)>(&::GlobalNamespace::GorillaPropHuntGameManager::_UpdateControllerHaptics)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x56341d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateControllerHaptics", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._Initialize_defaultStencilRefOfSkeletonMat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_Initialize_defaultStencilRefOfSkeletonMat)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5630ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_Initialize_defaultStencilRefOfSkeletonMat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._Initialize_gorillaGhostBodyMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_Initialize_gorillaGhostBodyMaterialIndex)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5630b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_Initialize_gorillaGhostBodyMaterialIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.MyMatIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPropHuntGameManager::MyMatIndex)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5634400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.InfectionRoundEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundEnd)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56344f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.InfectionRoundEndCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundEndCheck)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5634510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"InfectionRoundEndCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.LocalCanTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPropHuntGameManager::LocalCanTag)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5634894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.LocalIsTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GorillaPropHuntGameManager::LocalIsTagged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56348b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._ResetRigAppearance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaPropHuntGameManager::_ResetRigAppearance)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5631c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ResetRigAppearance", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.InfectionRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundStart)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56348cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.InfectionRoundStartCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundStartCheck)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56348e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"InfectionRoundStartCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.AddInfectedPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaPropHuntGameManager::AddInfectedPlayer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5634af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 110}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._ResolveXSceneRefs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_ResolveXSceneRefs)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x563116c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ResolveXSceneRefs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._OnXSceneRefLoaded_PlayBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefLoaded_PlayBoundary)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5634b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefLoaded_PlayBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._OnXSceneRefUnloaded_PlayBoundary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefUnloaded_PlayBoundary)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5634d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefUnloaded_PlayBoundary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._OnXSceneRefLoaded_LightningManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefLoaded_LightningManager)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5634cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefLoaded_LightningManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._OnXSceneRefUnloaded_LightningManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefUnloaded_LightningManager)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5634da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefUnloaded_LightningManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.PH_OnRoundEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::PH_OnRoundEnd)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5634580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"PH_OnRoundEnd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.PH_OnRoundStartRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(int64_t, int32_t)>(&::GlobalNamespace::GorillaPropHuntGameManager::PH_OnRoundStartRPC)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x56349a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"PH_OnRoundStartRPC", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._PH_OnRoundStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_PH_OnRoundStart)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5634dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_PH_OnRoundStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._Pools_OnReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_Pools_OnReady)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5635514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_Pools_OnReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.RegisterPropZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropHuntPropZone*)>(&::GlobalNamespace::GorillaPropHuntGameManager::RegisterPropZone)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5635588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"RegisterPropZone", {}, {::i2c::type_of<::GlobalNamespace::PropHuntPropZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.UnregisterPropZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropHuntPropZone*)>(&::GlobalNamespace::GorillaPropHuntGameManager::UnregisterPropZone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x56356e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"UnregisterPropZone", {}, {::i2c::type_of<::GlobalNamespace::PropHuntPropZone*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.RegisterPropHandFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropHuntHandFollower*)>(&::GlobalNamespace::GorillaPropHuntGameManager::RegisterPropHandFollower)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5635764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"RegisterPropHandFollower", {}, {::i2c::type_of<::GlobalNamespace::PropHuntHandFollower*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.UnregisterPropHandFollower
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PropHuntHandFollower*)>(&::GlobalNamespace::GorillaPropHuntGameManager::UnregisterPropHandFollower)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5635888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"UnregisterPropHandFollower", {}, {::i2c::type_of<::GlobalNamespace::PropHuntHandFollower*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.SpawnProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::SpawnProps)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x56350d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"SpawnProps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GetCosmeticId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::GorillaPropHuntGameManager::*)(uint32_t)>(&::GlobalNamespace::GorillaPropHuntGameManager::GetCosmeticId)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5635908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetCosmeticId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GetPropRef_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::GorillaPropHuntGameManager::*)(uint32_t, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>)>(&::GlobalNamespace::GorillaPropHuntGameManager::GetPropRef_NoPool)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5635a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetPropRef_NoPool", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.GetPropRefByCosmeticID_NoPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::GorillaPropHuntGameManager::*)(::StringW, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>)>(&::GlobalNamespace::GorillaPropHuntGameManager::GetPropRefByCosmeticID_NoPool)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5635b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetPropRefByCosmeticID_NoPool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._SetPlayerBlindfoldVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaPropHuntGameManager::_SetPlayerBlindfoldVisibility)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x56334dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_SetPlayerBlindfoldVisibility", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._SetPlayerBlindfoldVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::NetPlayer*, bool)>(&::GlobalNamespace::GorillaPropHuntGameManager::_SetPlayerBlindfoldVisibility)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5633230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_SetPlayerBlindfoldVisibility", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._InitializeBlindfoldForCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_InitializeBlindfoldForCamera)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5635e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_InitializeBlindfoldForCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.OnSerializeRead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaPropHuntGameManager::OnSerializeRead)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5636158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager.OnSerializeWrite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GorillaPropHuntGameManager::OnSerializeWrite)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5636240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 94}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager::_ctor)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x56362d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_allCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_allCosmetics;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_allCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_allCosmetics;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_allCosmetics(::UnityW<::GorillaTag::CosmeticSystem::AllCosmeticsArraySO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_allCosmetics = value;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_fallbackPropCosmeticSO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_fallbackPropCosmeticSO;
}
constexpr ::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_fallbackPropCosmeticSO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_fallbackPropCosmeticSO;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_fallbackPropCosmeticSO(::UnityW<::GorillaTag::CosmeticSystem::CosmeticSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_fallbackPropCosmeticSO = value;
}
constexpr ::UnityW<::GlobalNamespace::PropPlacementRB>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_propDecoyPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_propDecoyPrefab;
}
constexpr ::UnityW<::GlobalNamespace::PropPlacementRB> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_propDecoyPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_propDecoyPrefab;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_propDecoyPrefab(::UnityW<::GlobalNamespace::PropPlacementRB>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_propDecoyPrefab = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_duration;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_duration;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hideState_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hideState_duration = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_blindfold_forCameraPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_blindfold_forCameraPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_blindfold_forCameraPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_blindfold_forCameraPrefab;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_blindfold_forCameraPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_blindfold_forCameraPrefab = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_blindfold_forCamera_1p()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_blindfold_forCamera_1p;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_blindfold_forCamera_1p() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_blindfold_forCamera_1p;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_blindfold_forCamera_1p(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_blindfold_forCamera_1p = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_blindfold_forCamera_3p()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_blindfold_forCamera_3p;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_blindfold_forCamera_3p() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_blindfold_forCamera_3p;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_blindfold_forCamera_3p(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_blindfold_forCamera_3p = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_blindfold_forCamera_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_blindfold_forCamera_isInitialized;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_blindfold_forCamera_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_blindfold_forCamera_isInitialized;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_blindfold_forCamera_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_blindfold_forCamera_isInitialized = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_blindfold_forAvatarPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_blindfold_forAvatarPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_blindfold_forAvatarPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_blindfold_forAvatarPrefab;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_blindfold_forAvatarPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_blindfold_forAvatarPrefab = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_vrRig_to_blindfolds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_vrRig_to_blindfolds;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_vrRig_to_blindfolds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_vrRig_to_blindfolds;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_vrRig_to_blindfolds(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_vrRig_to_blindfolds = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_startSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_startSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_startSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_startSoundBank;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hideState_startSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hideState_startSoundBank = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_warnSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_warnSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_warnSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_warnSoundBank;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hideState_warnSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hideState_warnSoundBank = value;
}
constexpr int32_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_warnSoundBank_playCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_warnSoundBank_playCount;
}
constexpr int32_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hideState_warnSoundBank_playCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hideState_warnSoundBank_playCount;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hideState_warnSoundBank_playCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hideState_warnSoundBank_playCount = value;
}
constexpr int32_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_hideState_warnSounds_timesPlayed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_hideState_warnSounds_timesPlayed;
}
constexpr int32_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_hideState_warnSounds_timesPlayed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_hideState_warnSounds_timesPlayed;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_hideState_warnSounds_timesPlayed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_hideState_warnSounds_timesPlayed = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_startSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_startSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_startSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_startSoundBank;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playState_startSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playState_startSoundBank = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_startLightning_manager_ref()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_startLightning_manager_ref;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_startLightning_manager_ref() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_startLightning_manager_ref;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playState_startLightning_manager_ref(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playState_startLightning_manager_ref = value;
}
constexpr ::UnityW<::GlobalNamespace::LightningManager>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playState_startLightning_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playState_startLightning_manager;
}
constexpr ::UnityW<::GlobalNamespace::LightningManager> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playState_startLightning_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playState_startLightning_manager;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playState_startLightning_manager(::UnityW<::GlobalNamespace::LightningManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playState_startLightning_manager = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playState_startLightning_manager_isResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playState_startLightning_manager_isResolved;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playState_startLightning_manager_isResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playState_startLightning_manager_isResolved;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playState_startLightning_manager_isResolved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playState_startLightning_manager_isResolved = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_startLightning_strikeTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_startLightning_strikeTimes;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_startLightning_strikeTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_startLightning_strikeTimes;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playState_startLightning_strikeTimes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playState_startLightning_strikeTimes = value;
}
constexpr int32_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playState_startLightning_strikeTimes_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playState_startLightning_strikeTimes_index;
}
constexpr int32_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playState_startLightning_strikeTimes_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playState_startLightning_strikeTimes_index;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playState_startLightning_strikeTimes_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playState_startLightning_strikeTimes_index = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_taggedSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_taggedSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playState_taggedSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playState_taggedSoundBank;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playState_taggedSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playState_taggedSoundBank = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hand_follow_distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hand_follow_distance;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hand_follow_distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hand_follow_distance;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hand_follow_distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hand_follow_distance = value;
}
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_xSceneRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_xSceneRef;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_xSceneRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_xSceneRef;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playBoundary_xSceneRef(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playBoundary_xSceneRef = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_endPointTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_endPointTransforms;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_endPointTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_endPointTransforms;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playBoundary_endPointTransforms(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playBoundary_endPointTransforms = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayableBoundaryManager>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary;
}
constexpr ::UnityW<::GlobalNamespace::PlayableBoundaryManager> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playBoundary(::UnityW<::GlobalNamespace::PlayableBoundaryManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playBoundary = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_isResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_isResolved;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_isResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_isResolved;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playBoundary_isResolved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playBoundary_isResolved = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_initialPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_initialPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_initialPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_initialPosition;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playBoundary_initialPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playBoundary_initialPosition = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_initialPosition_isInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_initialPosition_isInitialized;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_initialPosition_isInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_initialPosition_isInitialized;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playBoundary_initialPosition_isInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playBoundary_initialPosition_isInitialized = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_currentTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_currentTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_currentTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_currentTargetPosition;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playBoundary_currentTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playBoundary_currentTargetPosition = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_hasTargetPositionForRound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_hasTargetPositionForRound;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_playBoundary_hasTargetPositionForRound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_playBoundary_hasTargetPositionForRound;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_playBoundary_hasTargetPositionForRound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_playBoundary_hasTargetPositionForRound = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_timeLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_timeLimit;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_timeLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_timeLimit;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playBoundary_timeLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playBoundary_timeLimit = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_radiusScaleOverRoundTime_maxTime;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_radiusScaleOverRoundTime_maxTime;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playBoundary_radiusScaleOverRoundTime_maxTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playBoundary_radiusScaleOverRoundTime_maxTime = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_curve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_radiusScaleOverRoundTime_curve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_playBoundary_radiusScaleOverRoundTime_curve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_playBoundary_radiusScaleOverRoundTime_curve;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_playBoundary_radiusScaleOverRoundTime_curve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_playBoundary_radiusScaleOverRoundTime_curve = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_gorillaGhostBodyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_gorillaGhostBodyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_gorillaGhostBodyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_gorillaGhostBodyMaterial;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_gorillaGhostBodyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_gorillaGhostBodyMaterial = value;
}
constexpr int32_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_gorillaGhostBodyMaterialIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_gorillaGhostBodyMaterialIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_gorillaGhostBodyMaterialIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_gorillaGhostBodyMaterialIndex;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_gorillaGhostBodyMaterialIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_gorillaGhostBodyMaterialIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_planeCrossingSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_planeCrossingSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_planeCrossingSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_planeCrossingSoundBank;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_planeCrossingSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_planeCrossingSoundBank = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_audioSource;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_soundNearBorder_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_soundNearBorder_audioSource = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_maxDistance;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_maxDistance;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_soundNearBorder_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_soundNearBorder_maxDistance = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_volumeCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_volumeCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_volumeCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_volumeCurve;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_soundNearBorder_volumeCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_soundNearBorder_volumeCurve = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_baseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_baseVolume;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_soundNearBorder_baseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_soundNearBorder_baseVolume;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_soundNearBorder_baseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_soundNearBorder_baseVolume = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hapticsNearBorder_borderProximity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hapticsNearBorder_borderProximity;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hapticsNearBorder_borderProximity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hapticsNearBorder_borderProximity;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hapticsNearBorder_borderProximity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hapticsNearBorder_borderProximity = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hapticsNearBorder_ampCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hapticsNearBorder_ampCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hapticsNearBorder_ampCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hapticsNearBorder_ampCurve;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hapticsNearBorder_ampCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hapticsNearBorder_ampCurve = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hapticsNearBorder_baseAmp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hapticsNearBorder_baseAmp;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get_m_ph_hapticsNearBorder_baseAmp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ph_hapticsNearBorder_baseAmp;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set_m_ph_hapticsNearBorder_baseAmp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ph_hapticsNearBorder_baseAmp = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_isLocalPlayerSkeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_isLocalPlayerSkeleton;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_isLocalPlayerSkeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_isLocalPlayerSkeleton;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_isLocalPlayerSkeleton(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_isLocalPlayerSkeleton = value;
}
constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_gameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_gameState;
}
constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_gameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_gameState;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_gameState(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_gameState = value;
}
constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_gameState_lastUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_gameState_lastUpdate;
}
constexpr ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_gameState_lastUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_gameState_lastUpdate;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_gameState_lastUpdate(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_gameState_lastUpdate = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__roundIsPlaying()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roundIsPlaying;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__roundIsPlaying() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____roundIsPlaying;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__roundIsPlaying(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____roundIsPlaying = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_allPropIDs_noPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_allPropIDs_noPool;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_allPropIDs_noPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_allPropIDs_noPool;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_allPropIDs_noPool(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_allPropIDs_noPool = value;
}
constexpr float_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_roundTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_roundTime;
}
constexpr float_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_roundTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_roundTime;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_roundTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_roundTime = value;
}
constexpr int64_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get___ph_timeRoundStartedMillis__()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____ph_timeRoundStartedMillis__;
}
constexpr int64_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get___ph_timeRoundStartedMillis__() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____ph_timeRoundStartedMillis__;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set___ph_timeRoundStartedMillis__(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____ph_timeRoundStartedMillis__ = value;
}
constexpr int32_t& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_randomSeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_randomSeed;
}
constexpr int32_t const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_randomSeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_randomSeed;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_randomSeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_randomSeed = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_isLocalPlayerParticipating()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_isLocalPlayerParticipating;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__ph_isLocalPlayerParticipating() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ph_isLocalPlayerParticipating;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__ph_isLocalPlayerParticipating(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ph_isLocalPlayerParticipating = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__isListeningTo_Pools_OnReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isListeningTo_Pools_OnReady;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__isListeningTo_Pools_OnReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isListeningTo_Pools_OnReady;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__isListeningTo_Pools_OnReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isListeningTo_Pools_OnReady = value;
}
constexpr bool& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__isListeningForXSceneRefLoadCallbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isListeningForXSceneRefLoadCallbacks;
}
constexpr bool const& GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_get__isListeningForXSceneRefLoadCallbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isListeningForXSceneRefLoadCallbacks;
}
constexpr void GlobalNamespace::GorillaPropHuntGameManager::__cordl_internal_set__isListeningForXSceneRefLoadCallbacks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isListeningForXSceneRefLoadCallbacks = value;
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__instance_k__BackingField(::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>, "<instance>k__BackingField", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> GlobalNamespace::GorillaPropHuntGameManager::getStaticF__instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>, "<instance>k__BackingField", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_rig_to_propHuntZoneTrackers(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*, "_g_ph_rig_to_propHuntZoneTrackers", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>* GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_rig_to_propHuntZoneTrackers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::PlayableBoundaryTracker>>*, "_g_ph_rig_to_propHuntZoneTrackers", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_hapticsLastImpulseEndTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "_g_ph_hapticsLastImpulseEndTime", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_hapticsLastImpulseEndTime()  {
return ::cordl_internals::getStaticField<float_t, "_g_ph_hapticsLastImpulseEndTime", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_activePlayerRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "_g_ph_activePlayerRigs", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_activePlayerRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "_g_ph_activePlayerRigs", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_allPropZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>*, "_g_ph_allPropZones", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>* GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_allPropZones()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntPropZone>>*, "_g_ph_allPropZones", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_allHandFollowers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>*, "_g_ph_allHandFollowers", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>* GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_allHandFollowers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropHuntHandFollower>>*, "_g_ph_allHandFollowers", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_titleDataSeparators(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_g_ph_titleDataSeparators", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_titleDataSeparators()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_g_ph_titleDataSeparators", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager::setStaticF__g_ph_defaultStencilRefOfSkeletonMat(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_g_ph_defaultStencilRefOfSkeletonMat", ::GlobalNamespace::GorillaPropHuntGameManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GorillaPropHuntGameManager::getStaticF__g_ph_defaultStencilRefOfSkeletonMat()  {
return ::cordl_internals::getStaticField<int32_t, "_g_ph_defaultStencilRefOfSkeletonMat", ::GlobalNamespace::GorillaPropHuntGameManager*>();
}
inline ::UnityW<::GlobalNamespace::GorillaPropHuntGameManager> GlobalNamespace::GorillaPropHuntGameManager::get_instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GorillaPropHuntGameManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::set_instance(::GlobalNamespace::GorillaPropHuntGameManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"set_instance", {}, {::i2c::type_of<::GlobalNamespace::GorillaPropHuntGameManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::GorillaGameModes::GameModeType GlobalNamespace::GorillaPropHuntGameManager::GameType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::GorillaGameModes::GameModeType>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaPropHuntGameManager::GameModeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaPropHuntGameManager::GameModeNameRoomLabel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PropPlacementRB> GlobalNamespace::GorillaPropHuntGameManager::get_PropDecoyPrefab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_PropDecoyPrefab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PropPlacementRB>>(this, ___internal_method);
}
inline float_t GlobalNamespace::GorillaPropHuntGameManager::get_HandFollowDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_HandFollowDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::get_RoundIsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_RoundIsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> GlobalNamespace::GorillaPropHuntGameManager::get_AllPropIDs_NoPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_AllPropIDs_NoPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline int64_t GlobalNamespace::GorillaPropHuntGameManager::get__ph_timeRoundStartedMillis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get__ph_timeRoundStartedMillis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::set__ph_timeRoundStartedMillis(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"set__ph_timeRoundStartedMillis", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GorillaPropHuntGameManager::GetSeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetSeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::get_IsReadyToSpawnProps_NoPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"get_IsReadyToSpawnProps_NoPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_ProcessPropsList_NoPool(::StringW  titleDataPropsLines)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ProcessPropsList_NoPool", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, titleDataPropsLines);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::StartPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::StopPlaying()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::CanPlayerParticipate(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_OnParticipatingPlayersChanged(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  addedPlayers, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  removedPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnParticipatingPlayersChanged", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, addedPlayers, removedPlayers);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::NewVRRig(::GlobalNamespace::NetPlayer*  player, int32_t  vrrigPhotonViewID, bool  didTutorial)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, vrrigPhotonViewID, didTutorial);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_UpdateParticipatingPlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateParticipatingPlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_UpdateGameState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateGameState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::UpdatePlayerAppearance(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 83}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::_GetRigShouldBeSkeleton(::GlobalNamespace::VRRig*  rig, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  participatingPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_GetRigShouldBeSkeleton", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig, participatingPlayers);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::_ShouldRigBeVisible(::GlobalNamespace::VRRig*  rig, bool  shouldBeSkeleton, float_t  signedDistToBoundary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ShouldRigBeVisible", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig, shouldBeSkeleton, signedDistToBoundary);
}
inline float_t GlobalNamespace::GorillaPropHuntGameManager::_UpdateBoundaryProximityState(::GlobalNamespace::VRRig*  rig, bool  isSkeleton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateBoundaryProximityState", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, rig, isSkeleton);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_UpdateControllerHaptics(float_t  signedDistToBoundary)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_UpdateControllerHaptics", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, signedDistToBoundary);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_Initialize_defaultStencilRefOfSkeletonMat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_Initialize_defaultStencilRefOfSkeletonMat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_Initialize_gorillaGhostBodyMaterialIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_Initialize_gorillaGhostBodyMaterialIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GorillaPropHuntGameManager::MyMatIndex(::GlobalNamespace::NetPlayer*  forPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, forPlayer);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundEnd()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundEndCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"InfectionRoundEndCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::LocalCanTag(::GlobalNamespace::NetPlayer*  myPlayer, ::GlobalNamespace::NetPlayer*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPlayer, otherPlayer);
}
inline bool GlobalNamespace::GorillaPropHuntGameManager::LocalIsTagged(::GlobalNamespace::NetPlayer*  player)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_ResetRigAppearance(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ResetRigAppearance", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundStart()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::InfectionRoundStartCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"InfectionRoundStartCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::AddInfectedPlayer(::GlobalNamespace::NetPlayer*  infectedPlayer, bool  withTagStop)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 110}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, infectedPlayer, withTagStop);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_ResolveXSceneRefs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_ResolveXSceneRefs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefLoaded_PlayBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefLoaded_PlayBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefUnloaded_PlayBoundary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefUnloaded_PlayBoundary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefLoaded_LightningManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefLoaded_LightningManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_OnXSceneRefUnloaded_LightningManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_OnXSceneRefUnloaded_LightningManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::PH_OnRoundEnd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"PH_OnRoundEnd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::PH_OnRoundStartRPC(int64_t  timeRoundStartedMillis, int32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"PH_OnRoundStartRPC", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeRoundStartedMillis, seed);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_PH_OnRoundStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_PH_OnRoundStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_Pools_OnReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_Pools_OnReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::RegisterPropZone(::GlobalNamespace::PropHuntPropZone*  propZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"RegisterPropZone", {}, {::i2c::type_of<::GlobalNamespace::PropHuntPropZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, propZone);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::UnregisterPropZone(::GlobalNamespace::PropHuntPropZone*  propZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"UnregisterPropZone", {}, {::i2c::type_of<::GlobalNamespace::PropHuntPropZone*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, propZone);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::RegisterPropHandFollower(::GlobalNamespace::PropHuntHandFollower*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"RegisterPropHandFollower", {}, {::i2c::type_of<::GlobalNamespace::PropHuntHandFollower*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hand);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::UnregisterPropHandFollower(::GlobalNamespace::PropHuntHandFollower*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"UnregisterPropHandFollower", {}, {::i2c::type_of<::GlobalNamespace::PropHuntHandFollower*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hand);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::SpawnProps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"SpawnProps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::GorillaPropHuntGameManager::GetCosmeticId(uint32_t  randomUInt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetCosmeticId", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, randomUInt);
}
inline ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::GorillaPropHuntGameManager::GetPropRef_NoPool(uint32_t  randomUInt, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>  out_debugCosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetPropRef_NoPool", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method, randomUInt, out_debugCosmeticSO);
}
inline ::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::GorillaPropHuntGameManager::GetPropRefByCosmeticID_NoPool(::StringW  cosmeticID, ::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>  out_debugCosmeticSO)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"GetPropRefByCosmeticID_NoPool", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GorillaTag::CosmeticSystem::CosmeticSO*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*>(this, ___internal_method, cosmeticID, out_debugCosmeticSO);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_SetPlayerBlindfoldVisibility(::GlobalNamespace::NetPlayer*  netPlayer, bool  shouldEnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_SetPlayerBlindfoldVisibility", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer, shouldEnable);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_SetPlayerBlindfoldVisibility(::GlobalNamespace::VRRig*  vrRig, ::GlobalNamespace::NetPlayer*  netPlayer, bool  shouldEnable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_SetPlayerBlindfoldVisibility", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vrRig, netPlayer, shouldEnable);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_InitializeBlindfoldForCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {"_InitializeBlindfoldForCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::OnSerializeRead(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::OnSerializeWrite(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(), 94}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GorillaPropHuntGameManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPropHuntGameManager* GlobalNamespace::GorillaPropHuntGameManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPropHuntGameManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPropHuntGameManager::GorillaPropHuntGameManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager___c::*)()>(&::GlobalNamespace::GorillaPropHuntGameManager___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5636930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPropHuntGameManager___c._Start_b__87_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPropHuntGameManager___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::GorillaPropHuntGameManager___c::_Start_b__87_0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5636938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager___c*>(),
                        {"<Start>b__87_0", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaPropHuntGameManager___c::setStaticF___9(::GlobalNamespace::GorillaPropHuntGameManager___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GorillaPropHuntGameManager___c*, "<>9", ::GlobalNamespace::GorillaPropHuntGameManager___c*>(std::forward<::GlobalNamespace::GorillaPropHuntGameManager___c*>(value));
}
inline ::GlobalNamespace::GorillaPropHuntGameManager___c* GlobalNamespace::GorillaPropHuntGameManager___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GorillaPropHuntGameManager___c*, "<>9", ::GlobalNamespace::GorillaPropHuntGameManager___c*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager___c::setStaticF___9__87_0(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__87_0", ::GlobalNamespace::GorillaPropHuntGameManager___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::GorillaPropHuntGameManager___c::getStaticF___9__87_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__87_0", ::GlobalNamespace::GorillaPropHuntGameManager___c*>();
}
inline void GlobalNamespace::GorillaPropHuntGameManager___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPropHuntGameManager___c::_Start_b__87_0(::PlayFab::PlayFabError*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPropHuntGameManager___c*>(),
                        {"<Start>b__87_0", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline ::GlobalNamespace::GorillaPropHuntGameManager___c* GlobalNamespace::GorillaPropHuntGameManager___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPropHuntGameManager___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPropHuntGameManager___c::GorillaPropHuntGameManager___c()   {
}
