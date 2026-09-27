#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactor.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__SRand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GRBay_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectibleDispenser_def.hpp"
#include "GlobalNamespace/zzzz__GRCurrencyDepositor_def.hpp"
#include "GlobalNamespace/zzzz__GRDebugUpgradeKiosk_def.hpp"
#include "GlobalNamespace/zzzz__GRDistillery_def.hpp"
#include "GlobalNamespace/zzzz__GRDropZone_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GRRecycler_def.hpp"
#include "GlobalNamespace/zzzz__GRReviveStation_def.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_def.hpp"
#include "GlobalNamespace/zzzz__GRToolProgressionManager_def.hpp"
#include "GlobalNamespace/zzzz__GRToolPurchaseStation_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradePurchaseStationFull_def.hpp"
#include "GlobalNamespace/zzzz__GRToolUpgradeStation_def.hpp"
#include "GlobalNamespace/zzzz__GRUIBuyItem_def.hpp"
#include "GlobalNamespace/zzzz__GRUIEmployeeTerminal_def.hpp"
#include "GlobalNamespace/zzzz__GRUIPromotionBot_def.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboard_ScoreboardScreen_def.hpp"
#include "GlobalNamespace/zzzz__GRUIScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__GRUIStationEmployeeBadges_def.hpp"
#include "GlobalNamespace/zzzz__GRUIStoreDisplay_def.hpp"
#include "GlobalNamespace/zzzz__GRVendingMachine_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelDepthConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenConfig_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorLevelGenerator_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactorShiftManager_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_EnemyEntityCreateData_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_EnemyType_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_EntityGroupTypes_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_ToolEntityCreateData_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IGRSleepableEntity_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GhostReactor> (*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GhostReactor::Get)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5842e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::Awake)> {
  constexpr static std::size_t size = 0x654;
  constexpr static std::size_t addrs = 0x5842f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::OnEnable)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0x584357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.EnableGhostReactorForVirtualStump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::EnableGhostReactorForVirtualStump)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5844004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"EnableGhostReactorForVirtualStump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.RefreshReviveStations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(bool)>(&::GlobalNamespace::GhostReactor::RefreshReviveStations)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5844080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshReviveStations", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::OnDisable)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5844210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnProgressionUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::OnProgressionUpdated)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58444f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnProgressionUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.UpdateLocalPlayerFromProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::UpdateLocalPlayerFromProgression)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x584456c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateLocalPlayerFromProgression", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRPatrolPath> (::GlobalNamespace::GhostReactor::*)(int64_t)>(&::GlobalNamespace::GhostReactor::GetPatrolPath)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5844ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::Tick)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x5844c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                    {::i2c::class_of<::GlobalNamespace::GhostReactor*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnLocalPlayerConnectedToRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::OnLocalPlayerConnectedToRoom)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5845cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnLocalPlayerConnectedToRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnVRRigsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::GhostReactor::OnVRRigsChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5845e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnVRRigsChanged", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.VRRigRefresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::VRRigRefresh)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x5845e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"VRRigRefresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.UpdateScoreboardScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen)>(&::GlobalNamespace::GhostReactor::UpdateScoreboardScreen)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5846444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateScoreboardScreen", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.RefreshScoreboards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::RefreshScoreboards)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5846234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshScoreboards", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetItemCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactor::*)(int32_t)>(&::GlobalNamespace::GhostReactor::GetItemCost)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58464e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetItemCost", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.UpdateRemoteScoreboardScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen)>(&::GlobalNamespace::GhostReactor::UpdateRemoteScoreboardScreen)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5846524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateRemoteScoreboardScreen", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.SetNextDelveDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(int32_t, int32_t)>(&::GlobalNamespace::GhostReactor::SetNextDelveDepth)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x58466cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"SetNextDelveDepth", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetJoinDepthSectionFromLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::GlobalNamespace::GhostReactor::GetJoinDepthSectionFromLevel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5846a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetJoinDepthSectionFromLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.DelveToNextDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::DelveToNextDepth)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5846a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"DelveToNextDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.PickLevelConfigForDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactor::*)(int32_t)>(&::GlobalNamespace::GhostReactor::PickLevelConfigForDepth)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5846ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"PickLevelConfigForDepth", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.RefreshDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::RefreshDepth)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5843f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetDepthLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::GetDepthLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5846d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetDepthLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetDepthConfigIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::GetDepthConfigIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5846d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetDepthConfigIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetDepthLevelConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig> (::GlobalNamespace::GhostReactor::*)(int32_t)>(&::GlobalNamespace::GhostReactor::GetDepthLevelConfig)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5846c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetDepthLevelConfig", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.GetCurrLevelGenConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig> (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::GetCurrLevelGenConfig)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5846d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetCurrLevelGenConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.RefreshStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::RefreshStore)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5844a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshStore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.RefreshBays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::RefreshBays)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5846cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshBays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.UpdateHandprints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(float_t)>(&::GlobalNamespace::GhostReactor::UpdateHandprints)> {
  constexpr static std::size_t size = 0x73c;
  constexpr static std::size_t addrs = 0x58455b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateHandprints", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnTapLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::GlobalNamespace::GorillaSurfaceOverride*)>(&::GlobalNamespace::GhostReactor::OnTapLocal)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5846ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::GorillaSurfaceOverride*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.AddHandprint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GhostReactor::AddHandprint)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x58472c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"AddHandprint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.ClearAllHandprints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::ClearAllHandprints)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5847550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"ClearAllHandprints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.get_NumActivePlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::get_NumActivePlayers)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58475c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"get_NumActivePlayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.OnAbilityDie
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)(::GlobalNamespace::GameEntity*, float_t)>(&::GlobalNamespace::GhostReactor::OnAbilityDie)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5847608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnAbilityDie", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.ClearAllRespawns
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::ClearAllRespawns)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x584785c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"ClearAllRespawns", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor.IBuildValidation_BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::IBuildValidation_BuildValidationCheck)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58478cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor::*)()>(&::GlobalNamespace::GhostReactor::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x58478d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::GhostReactor::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::GhostReactor::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactor::__cordl_internal_get_restartMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactor::__cordl_internal_get_restartMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restartMarker;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_restartMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restartMarker = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GhostReactor::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GhostReactor::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GhostReactor::__cordl_internal_get_entryRoomAudio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryRoomAudio;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GhostReactor::__cordl_internal_get_entryRoomAudio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryRoomAudio;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_entryRoomAudio(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryRoomAudio = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GhostReactor::__cordl_internal_get_entryRoomDeathSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryRoomDeathSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GhostReactor::__cordl_internal_get_entryRoomDeathSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryRoomDeathSound;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_entryRoomDeathSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryRoomDeathSound = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GhostReactor::__cordl_internal_get_boundsBoxCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsBoxCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GhostReactor::__cordl_internal_get_boundsBoxCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boundsBoxCollider;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_boundsBoxCollider(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boundsBoxCollider = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GhostReactor::__cordl_internal_get_safeZoneLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeZoneLimit;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GhostReactor::__cordl_internal_get_safeZoneLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeZoneLimit;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_safeZoneLimit(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___safeZoneLimit = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*& GlobalNamespace::GhostReactor::__cordl_internal_get_tempSpawnEnemies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSpawnEnemies;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_tempSpawnEnemies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSpawnEnemies;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_tempSpawnEnemies(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempSpawnEnemies = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GhostReactor::__cordl_internal_get_overrideEnemySpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideEnemySpawn;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GhostReactor::__cordl_internal_get_overrideEnemySpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideEnemySpawn;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_overrideEnemySpawn(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideEnemySpawn = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_tempSpawnItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSpawnItems;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_tempSpawnItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSpawnItems;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_tempSpawnItems(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempSpawnItems = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactor::__cordl_internal_get_tempSpawnItemsMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSpawnItemsMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactor::__cordl_internal_get_tempSpawnItemsMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempSpawnItemsMarker;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_tempSpawnItemsMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempSpawnItemsMarker = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_itemPurchaseStands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPurchaseStands;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_itemPurchaseStands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemPurchaseStands;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_itemPurchaseStands(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIBuyItem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemPurchaseStands = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_toolPurchasingStations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolPurchasingStations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_toolPurchasingStations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolPurchasingStations;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_toolPurchasingStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolPurchaseStation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolPurchasingStations = value;
}
constexpr ::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk>& GlobalNamespace::GhostReactor::__cordl_internal_get_debugUpgradeKiosk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugUpgradeKiosk;
}
constexpr ::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk> const& GlobalNamespace::GhostReactor::__cordl_internal_get_debugUpgradeKiosk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugUpgradeKiosk;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_debugUpgradeKiosk(::UnityW<::GlobalNamespace::GRDebugUpgradeKiosk>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugUpgradeKiosk = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_scoreboards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboards;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_scoreboards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreboards;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_scoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIScoreboard>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreboards = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_collectibleDispensers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispensers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_collectibleDispensers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispensers;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_collectibleDispensers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRCollectibleDispenser>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDispensers = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>*& GlobalNamespace::GhostReactor::__cordl_internal_get_sleepableEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepableEntities;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_sleepableEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepableEntities;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_sleepableEntities(::System::Collections::Generic::List_1<::GlobalNamespace::IGRSleepableEntity*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepableEntities = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_bays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bays;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_bays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bays;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_bays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRBay>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bays = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_storeDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeDisplays;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_storeDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storeDisplays;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_storeDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRUIStoreDisplay>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storeDisplays = value;
}
constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>& GlobalNamespace::GhostReactor::__cordl_internal_get_employeeBadges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeBadges;
}
constexpr ::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges> const& GlobalNamespace::GhostReactor::__cordl_internal_get_employeeBadges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeBadges;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_employeeBadges(::UnityW<::GlobalNamespace::GRUIStationEmployeeBadges>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___employeeBadges = value;
}
constexpr ::UnityW<::GlobalNamespace::GRUIEmployeeTerminal>& GlobalNamespace::GhostReactor::__cordl_internal_get_employeeTerminal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeTerminal;
}
constexpr ::UnityW<::GlobalNamespace::GRUIEmployeeTerminal> const& GlobalNamespace::GhostReactor::__cordl_internal_get_employeeTerminal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeTerminal;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_employeeTerminal(::UnityW<::GlobalNamespace::GRUIEmployeeTerminal>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___employeeTerminal = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager>& GlobalNamespace::GhostReactor::__cordl_internal_get_shiftManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorShiftManager> const& GlobalNamespace::GhostReactor::__cordl_internal_get_shiftManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shiftManager;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_shiftManager(::UnityW<::GlobalNamespace::GhostReactorShiftManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shiftManager = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenerator>& GlobalNamespace::GhostReactor::__cordl_internal_get_levelGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelGenerator;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorLevelGenerator> const& GlobalNamespace::GhostReactor::__cordl_internal_get_levelGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelGenerator;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_levelGenerator(::UnityW<::GlobalNamespace::GhostReactorLevelGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___levelGenerator = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor>& GlobalNamespace::GhostReactor::__cordl_internal_get_currencyDepositor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyDepositor;
}
constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor> const& GlobalNamespace::GhostReactor::__cordl_internal_get_currencyDepositor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currencyDepositor;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_currencyDepositor(::UnityW<::GlobalNamespace::GRCurrencyDepositor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currencyDepositor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor>& GlobalNamespace::GhostReactor::__cordl_internal_get_seedExtractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedExtractor;
}
constexpr ::UnityW<::GlobalNamespace::GRSeedExtractor> const& GlobalNamespace::GhostReactor::__cordl_internal_get_seedExtractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seedExtractor;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_seedExtractor(::UnityW<::GlobalNamespace::GRSeedExtractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seedExtractor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRDistillery>& GlobalNamespace::GhostReactor::__cordl_internal_get_distillery()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distillery;
}
constexpr ::UnityW<::GlobalNamespace::GRDistillery> const& GlobalNamespace::GhostReactor::__cordl_internal_get_distillery() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distillery;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_distillery(::UnityW<::GlobalNamespace::GRDistillery>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distillery = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager>& GlobalNamespace::GhostReactor::__cordl_internal_get_toolProgression()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgression;
}
constexpr ::UnityW<::GlobalNamespace::GRToolProgressionManager> const& GlobalNamespace::GhostReactor::__cordl_internal_get_toolProgression() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolProgression;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_toolProgression(::UnityW<::GlobalNamespace::GRToolProgressionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolProgression = value;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation>& GlobalNamespace::GhostReactor::__cordl_internal_get_upgradeStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStation;
}
constexpr ::UnityW<::GlobalNamespace::GRToolUpgradeStation> const& GlobalNamespace::GhostReactor::__cordl_internal_get_upgradeStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upgradeStation;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_upgradeStation(::UnityW<::GlobalNamespace::GRToolUpgradeStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upgradeStation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_toolUpgradePurchaseStationsFull()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolUpgradePurchaseStationsFull;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_toolUpgradePurchaseStationsFull() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toolUpgradePurchaseStationsFull;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_toolUpgradePurchaseStationsFull(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRToolUpgradePurchaseStationFull>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toolUpgradePurchaseStationsFull = value;
}
constexpr ::UnityW<::GlobalNamespace::GRRecycler>& GlobalNamespace::GhostReactor::__cordl_internal_get_recycler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycler;
}
constexpr ::UnityW<::GlobalNamespace::GRRecycler> const& GlobalNamespace::GhostReactor::__cordl_internal_get_recycler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recycler;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_recycler(::UnityW<::GlobalNamespace::GRRecycler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recycler = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*& GlobalNamespace::GhostReactor::__cordl_internal_get_respawnQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnQueue;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_respawnQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnQueue;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_respawnQueue(::System::Collections::Generic::List_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnQueue = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::GhostReactor::__cordl_internal_get_difficultyScalingPerPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difficultyScalingPerPlayer;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_difficultyScalingPerPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difficultyScalingPerPlayer;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_difficultyScalingPerPlayer(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___difficultyScalingPerPlayer = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_respawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTime;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_respawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnTime;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_respawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnTime = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_respawnMinDistToPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnMinDistToPlayer;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_respawnMinDistToPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___respawnMinDistToPlayer;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_respawnMinDistToPlayer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___respawnMinDistToPlayer = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_difficultyScalingForCurrentFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difficultyScalingForCurrentFloor;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_difficultyScalingForCurrentFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___difficultyScalingForCurrentFloor;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_difficultyScalingForCurrentFloor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___difficultyScalingForCurrentFloor = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GhostReactor::__cordl_internal_get_envLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___envLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GhostReactor::__cordl_internal_get_envLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___envLayerMask;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_envLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___envLayerMask = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintMaterial;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintMesh;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintMesh = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintScale;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintScale;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintScale = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintInkTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintInkTime;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintInkTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintInkTime;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintInkTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintInkTime = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintFadeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintFadeTime;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintFadeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintFadeTime;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintFadeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintFadeTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintLocations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintLocations;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintLocations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintLocations;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintLocations(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintLocations = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintData;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintData;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintData(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintData = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintMPB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintMPB;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintMPB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintMPB;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintMPB(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintMPB = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_reviveStations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveStations;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_reviveStations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveStations;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_reviveStations(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRReviveStation>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveStations = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_vendingMachines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingMachines;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_vendingMachines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vendingMachines;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_vendingMachines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRVendingMachine>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vendingMachines = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GhostReactor::__cordl_internal_get_vrRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_vrRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vrRigs;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_vrRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vrRigs = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_collectibleDispenserUpdateFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispenserUpdateFrequency;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_collectibleDispenserUpdateFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collectibleDispenserUpdateFrequency;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_collectibleDispenserUpdateFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collectibleDispenserUpdateFrequency = value;
}
constexpr double_t& GlobalNamespace::GhostReactor::__cordl_internal_get_lastCollectibleDispenserUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCollectibleDispenserUpdateTime;
}
constexpr double_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_lastCollectibleDispenserUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCollectibleDispenserUpdateTime;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_lastCollectibleDispenserUpdateTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCollectibleDispenserUpdateTime = value;
}
constexpr int32_t& GlobalNamespace::GhostReactor::__cordl_internal_get_sentientCoreUpdateIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoreUpdateIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_sentientCoreUpdateIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentientCoreUpdateIndex;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_sentientCoreUpdateIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sentientCoreUpdateIndex = value;
}
constexpr ::GlobalNamespace::SRand& GlobalNamespace::GhostReactor::__cordl_internal_get_randomGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomGenerator;
}
constexpr ::GlobalNamespace::SRand const& GlobalNamespace::GhostReactor::__cordl_internal_get_randomGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomGenerator;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_randomGenerator(::GlobalNamespace::SRand  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomGenerator = value;
}
constexpr int32_t& GlobalNamespace::GhostReactor::__cordl_internal_get_depthLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthLevel;
}
constexpr int32_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_depthLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthLevel;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_depthLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthLevel = value;
}
constexpr int32_t& GlobalNamespace::GhostReactor::__cordl_internal_get_depthConfigIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthConfigIndex;
}
constexpr int32_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_depthConfigIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depthConfigIndex;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_depthConfigIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depthConfigIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,double_t>*& GlobalNamespace::GhostReactor::__cordl_internal_get_playerProgressionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerProgressionData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,double_t>* const& GlobalNamespace::GhostReactor::__cordl_internal_get_playerProgressionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerProgressionData;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_playerProgressionData(::System::Collections::Generic::Dictionary_2<int32_t,double_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerProgressionData = value;
}
constexpr ::UnityW<::GlobalNamespace::GRDropZone>& GlobalNamespace::GhostReactor::__cordl_internal_get_dropZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropZone;
}
constexpr ::UnityW<::GlobalNamespace::GRDropZone> const& GlobalNamespace::GhostReactor::__cordl_internal_get_dropZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropZone;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_dropZone(::UnityW<::GlobalNamespace::GRDropZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropZone = value;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& GlobalNamespace::GhostReactor::__cordl_internal_get_zoneShaderSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneShaderSettings;
}
constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& GlobalNamespace::GhostReactor::__cordl_internal_get_zoneShaderSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneShaderSettings;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_zoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneShaderSettings = value;
}
constexpr ::UnityW<::GlobalNamespace::GRUIPromotionBot>& GlobalNamespace::GhostReactor::__cordl_internal_get_promotionBot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionBot;
}
constexpr ::UnityW<::GlobalNamespace::GRUIPromotionBot> const& GlobalNamespace::GhostReactor::__cordl_internal_get_promotionBot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___promotionBot;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_promotionBot(::UnityW<::GlobalNamespace::GRUIPromotionBot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___promotionBot = value;
}
constexpr bool& GlobalNamespace::GhostReactor::__cordl_internal_get_isRefreshing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRefreshing;
}
constexpr bool const& GlobalNamespace::GhostReactor::__cordl_internal_get_isRefreshing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRefreshing;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_isRefreshing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRefreshing = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& GlobalNamespace::GhostReactor::__cordl_internal_get_grManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& GlobalNamespace::GhostReactor::__cordl_internal_get_grManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grManager;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_grManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grManager = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintTimeLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintTimeLeft;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintTimeLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintTimeLeft;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintTimeLeft(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintTimeLeft = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintTimeRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintTimeRight;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintTimeRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintTimeRight;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintTimeRight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintTimeRight = value;
}
constexpr int32_t& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintCombineTestDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintCombineTestDelta;
}
constexpr int32_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_handPrintCombineTestDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPrintCombineTestDelta;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_handPrintCombineTestDelta(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPrintCombineTestDelta = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_lastBroadcastHandTapTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBroadcastHandTapTime;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_lastBroadcastHandTapTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBroadcastHandTapTime;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_lastBroadcastHandTapTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBroadcastHandTapTime = value;
}
constexpr float_t& GlobalNamespace::GhostReactor::__cordl_internal_get_broadcastHandTapDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastHandTapDelay;
}
constexpr float_t const& GlobalNamespace::GhostReactor::__cordl_internal_get_broadcastHandTapDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___broadcastHandTapDelay;
}
constexpr void GlobalNamespace::GhostReactor::__cordl_internal_set_broadcastHandTapDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___broadcastHandTapDelay = value;
}
inline void GlobalNamespace::GhostReactor::setStaticF_instance(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GhostReactor>, "instance", ::GlobalNamespace::GhostReactor*>(std::forward<::UnityW<::GlobalNamespace::GhostReactor>>(value));
}
inline ::UnityW<::GlobalNamespace::GhostReactor> GlobalNamespace::GhostReactor::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GhostReactor>, "instance", ::GlobalNamespace::GhostReactor*>();
}
inline void GlobalNamespace::GhostReactor::setStaticF_DROP_ZONE_REPEL(float_t  value)  {
::cordl_internals::setStaticField<float_t, "DROP_ZONE_REPEL", ::GlobalNamespace::GhostReactor*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::GhostReactor::getStaticF_DROP_ZONE_REPEL()  {
return ::cordl_internals::getStaticField<float_t, "DROP_ZONE_REPEL", ::GlobalNamespace::GhostReactor*>();
}
inline ::UnityW<::GlobalNamespace::GhostReactor> GlobalNamespace::GhostReactor::Get(::GlobalNamespace::GameEntity*  gameEntity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"Get", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GhostReactor>>(nullptr, ___internal_method, gameEntity);
}
inline void GlobalNamespace::GhostReactor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::EnableGhostReactorForVirtualStump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"EnableGhostReactorForVirtualStump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::RefreshReviveStations(bool  searchScene)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshReviveStations", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, searchScene);
}
inline void GlobalNamespace::GhostReactor::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::OnProgressionUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnProgressionUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::UpdateLocalPlayerFromProgression()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateLocalPlayerFromProgression", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRPatrolPath> GlobalNamespace::GhostReactor::GetPatrolPath(int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRPatrolPath>>(this, ___internal_method, createData);
}
inline void GlobalNamespace::GhostReactor::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GhostReactor*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::OnLocalPlayerConnectedToRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnLocalPlayerConnectedToRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::OnVRRigsChanged(::GlobalNamespace::RigContainer*  container)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnVRRigsChanged", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void GlobalNamespace::GhostReactor::VRRigRefresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"VRRigRefresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::UpdateScoreboardScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  newScreen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateScoreboardScreen", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newScreen);
}
inline void GlobalNamespace::GhostReactor::RefreshScoreboards()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshScoreboards", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactor::GetItemCost(int32_t  entityTypeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetItemCost", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, entityTypeId);
}
inline void GlobalNamespace::GhostReactor::UpdateRemoteScoreboardScreen(::GlobalNamespace::GRUIScoreboard_ScoreboardScreen  scoreboardPage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateRemoteScoreboardScreen", {}, {::i2c::type_of<::GlobalNamespace::GRUIScoreboard_ScoreboardScreen>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scoreboardPage);
}
inline void GlobalNamespace::GhostReactor::SetNextDelveDepth(int32_t  newLevel, int32_t  newDepthConfigIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"SetNextDelveDepth", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLevel, newDepthConfigIndex);
}
inline int32_t GlobalNamespace::GhostReactor::GetJoinDepthSectionFromLevel(int32_t  depthLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetJoinDepthSectionFromLevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, depthLevel);
}
inline void GlobalNamespace::GhostReactor::DelveToNextDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"DelveToNextDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactor::PickLevelConfigForDepth(int32_t  depthLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"PickLevelConfigForDepth", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, depthLevel);
}
inline void GlobalNamespace::GhostReactor::RefreshDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactor::GetDepthLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetDepthLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactor::GetDepthConfigIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetDepthConfigIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig> GlobalNamespace::GhostReactor::GetDepthLevelConfig(int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetDepthLevelConfig", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GhostReactorLevelDepthConfig>>(this, ___internal_method, level);
}
inline ::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig> GlobalNamespace::GhostReactor::GetCurrLevelGenConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"GetCurrLevelGenConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GhostReactorLevelGenConfig>>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::RefreshStore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshStore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::RefreshBays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"RefreshBays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::UpdateHandprints(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"UpdateHandprints", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::GhostReactor::OnTapLocal(bool  isLeftHand, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  orient, ::GlobalNamespace::GorillaSurfaceOverride*  surfaceOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnTapLocal", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::GlobalNamespace::GorillaSurfaceOverride*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand, pos, orient, surfaceOverride);
}
inline void GlobalNamespace::GhostReactor::AddHandprint(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  orient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"AddHandprint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, orient);
}
inline void GlobalNamespace::GhostReactor::ClearAllHandprints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"ClearAllHandprints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GhostReactor::get_NumActivePlayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"get_NumActivePlayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::OnAbilityDie(::GlobalNamespace::GameEntity*  entity, float_t  forcedRespawn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"OnAbilityDie", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity, forcedRespawn);
}
inline void GlobalNamespace::GhostReactor::ClearAllRespawns()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"ClearAllRespawns", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactor::IBuildValidation_BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {"IBuildValidation.BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GhostReactor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactor* GlobalNamespace::GhostReactor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactor*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::GhostReactor::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::GhostReactor::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactor::GhostReactor()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor___c::*)()>(&::GlobalNamespace::GhostReactor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5847c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor___c._Tick_b__75_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GhostReactor___c::*)(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*)>(&::GlobalNamespace::GhostReactor___c::_Tick_b__75_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5847c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor___c*>(),
                        {"<Tick>b__75_0", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactor___c._VRRigRefresh_b__78_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GhostReactor___c::*)(::GlobalNamespace::VRRig*, ::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GhostReactor___c::_VRRigRefresh_b__78_0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5847c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor___c*>(),
                        {"<VRRigRefresh>b__78_0", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GhostReactor___c::setStaticF___9(::GlobalNamespace::GhostReactor___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::GhostReactor___c*, "<>9", ::GlobalNamespace::GhostReactor___c*>(std::forward<::GlobalNamespace::GhostReactor___c*>(value));
}
inline ::GlobalNamespace::GhostReactor___c* GlobalNamespace::GhostReactor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::GhostReactor___c*, "<>9", ::GlobalNamespace::GhostReactor___c*>();
}
inline void GlobalNamespace::GhostReactor___c::setStaticF___9__75_0(::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*, "<>9__75_0", ::GlobalNamespace::GhostReactor___c*>(std::forward<::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*>(value));
}
inline ::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>* GlobalNamespace::GhostReactor___c::getStaticF___9__75_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>*, "<>9__75_0", ::GlobalNamespace::GhostReactor___c*>();
}
inline void GlobalNamespace::GhostReactor___c::setStaticF___9__78_0(::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>*, "<>9__78_0", ::GlobalNamespace::GhostReactor___c*>(std::forward<::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GhostReactor___c::getStaticF___9__78_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityW<::GlobalNamespace::VRRig>>*, "<>9__78_0", ::GlobalNamespace::GhostReactor___c*>();
}
inline void GlobalNamespace::GhostReactor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GhostReactor___c::_Tick_b__75_0(::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor___c*>(),
                        {"<Tick>b__75_0", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e);
}
inline int32_t GlobalNamespace::GhostReactor___c::_VRRigRefresh_b__78_0(::GlobalNamespace::VRRig*  a, ::GlobalNamespace::VRRig*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor___c*>(),
                        {"<VRRigRefresh>b__78_0", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::GhostReactor___c* GlobalNamespace::GhostReactor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactor___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactor___c::GhostReactor___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::*)()>(&::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5847824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_get_entityTypeID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeID;
}
constexpr int32_t const& GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_get_entityTypeID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityTypeID;
}
constexpr void GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_set_entityTypeID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityTypeID = value;
}
constexpr int64_t& GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_get_entityCreateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityCreateData;
}
constexpr int64_t const& GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_get_entityCreateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityCreateData;
}
constexpr void GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_set_entityCreateData(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityCreateData = value;
}
constexpr float_t& GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_get_entityNextRespawnTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityNextRespawnTime;
}
constexpr float_t const& GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_get_entityNextRespawnTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityNextRespawnTime;
}
constexpr void GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::__cordl_internal_set_entityNextRespawnTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityNextRespawnTime = value;
}
inline void GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker* GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactor_EntityTypeRespawnTracker::GhostReactor_EntityTypeRespawnTracker()   {
}
//  Writing Method size for method: ::GlobalNamespace::GhostReactor_TempEnemySpawnInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactor_TempEnemySpawnInfo::*)()>(&::GlobalNamespace::GhostReactor_TempEnemySpawnInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5847b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_get_prefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_get_prefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prefab;
}
constexpr void GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_set_prefab(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_get_spawnMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_get_spawnMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnMarker;
}
constexpr void GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_set_spawnMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnMarker = value;
}
constexpr int32_t& GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr int32_t const& GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GhostReactor_TempEnemySpawnInfo::__cordl_internal_set_patrolPath(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
inline void GlobalNamespace::GhostReactor_TempEnemySpawnInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactor_TempEnemySpawnInfo* GlobalNamespace::GhostReactor_TempEnemySpawnInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactor_TempEnemySpawnInfo*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactor_TempEnemySpawnInfo::GhostReactor_TempEnemySpawnInfo()   {
}
