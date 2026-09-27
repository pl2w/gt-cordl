#pragma once
// IWYU pragma private; include "GorillaTag/ScienceExperimentManager.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_PlayerGameState_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RiseSpeed_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RotatingRingState_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_ScienceManagerData_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_SyncData_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_TagBehavior_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ParticleSystem_EmissionModule_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_def.hpp"
#include "Fusion/zzzz__RpcInfo_def.hpp"
#include "Fusion/zzzz__SimulationMessage_def.hpp"
#include "GlobalNamespace/zzzz__CompositeTriggerEvents_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ScienceExperimentElementID_def.hpp"
#include "GlobalNamespace/zzzz__ScienceExperimentSceneElements_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectileHitNotifier_def.hpp"
#include "GlobalNamespace/zzzz__SlingshotProjectile_def.hpp"
#include "GorillaLocomotion/Swimming/zzzz__WaterVolume_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_DisableByLiquidData_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_PlayerGameState_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RiseSpeed_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RisingLiquidState_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_RotatingRingState_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_ScienceManagerData_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_SyncData_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_TagBehavior_def.hpp"
#include "GorillaTag/zzzz__ScienceExperimentManager_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.get_RefreshWaterAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::get_RefreshWaterAvailable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d2a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_RefreshWaterAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.get_GameState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScienceExperimentManager_RisingLiquidState (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::get_GameState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2a350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_GameState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.get_RiseProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::get_RiseProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2a358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_RiseProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.get_RiseProgressLinear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::get_RiseProgressLinear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2a360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_RiseProgressLinear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.get_PlayerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::get_PlayerCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d2a368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::Awake)> {
  constexpr static std::size_t size = 0x8d4;
  constexpr static std::size_t addrs = 0x5d2a3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d2acc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d2ade0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::OnDestroy)> {
  constexpr static std::size_t size = 0x570;
  constexpr static std::size_t addrs = 0x5d2aef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.InitElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::ScienceExperimentSceneElements*)>(&::GorillaTag::ScienceExperimentManager::InitElements)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5d2b468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"InitElements", {}, {::i2c::type_of<::GlobalNamespace::ScienceExperimentSceneElements*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.DeInitElements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::DeInitElements)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d2b5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"DeInitElements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.GetElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::ScienceExperimentElementID)>(&::GorillaTag::ScienceExperimentManager::GetElement)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5d2b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"GetElement", {}, {::i2c::type_of<::GlobalNamespace::ScienceExperimentElementID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ITickSystemTick_get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::ITickSystemTick_get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2b7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ITickSystemTick_set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(bool)>(&::GorillaTag::ScienceExperimentManager::ITickSystemTick_set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d2b7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ITickSystemTick_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::ITickSystemTick_Tick)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5d2b7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.InfrequentUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::InfrequentUpdate)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5d2bcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"InfrequentUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerInGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentManager::*)(::Photon::Realtime::Player*)>(&::GorillaTag::ScienceExperimentManager::PlayerInGame)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d2d3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerInGame", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateReliableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(double_t, ::by_ref<::GlobalNamespace::ScienceExperimentManager_SyncData>)>(&::GorillaTag::ScienceExperimentManager::UpdateReliableState)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5d2c028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateReliableState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ScienceExperimentManager_SyncData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateLocalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(double_t, ::GlobalNamespace::ScienceExperimentManager_SyncData)>(&::GorillaTag::ScienceExperimentManager::UpdateLocalState)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d2c39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateLocalState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::ScienceExperimentManager_SyncData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateLiquid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(float_t)>(&::GorillaTag::ScienceExperimentManager::UpdateLiquid)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5d2c508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateLiquid", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateRotatingRings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(float_t)>(&::GorillaTag::ScienceExperimentManager::UpdateRotatingRings)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d2c7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateRotatingRings", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateDrainBlocker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(double_t)>(&::GorillaTag::ScienceExperimentManager::UpdateDrainBlocker)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5d2c9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateDrainBlocker", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateEffects
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::UpdateEffects)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5d2cf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateEffects", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.DisableObjectsInContactWithLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(float_t)>(&::GorillaTag::ScienceExperimentManager::DisableObjectsInContactWithLava)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5d2cb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"DisableObjectsInContactWithLava", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateWinner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::UpdateWinner)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d2d474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateWinner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RefreshWinnerName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::RefreshWinnerName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d2d4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RefreshWinnerName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.GetPlayerFromId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::GetPlayerFromId)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d2d554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"GetPlayerFromId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.UpdateRefreshWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::UpdateRefreshWater)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d2c8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateRefreshWater", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ResetGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::ResetGame)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d2d678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ResetGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RestartGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::RestartGame)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5d2d6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RestartGame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.DebugErupt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::DebugErupt)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d2d7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"DebugErupt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RandomizeRings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::RandomizeRings)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5d2d900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RandomizeRings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RotateRingsCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::RotateRingsCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d2dae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RotateRingsCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.GetMaterialIfPlayerInGame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentManager::*)(int32_t, ::by_ref<int32_t>)>(&::GorillaTag::ScienceExperimentManager::GetMaterialIfPlayerInGame)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d2db58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"GetMaterialIfPlayerInGame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnPlayerTagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GorillaTag::ScienceExperimentManager::OnPlayerTagged)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5d2dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnPlayerTagged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnColliderEnteredVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnColliderEnteredVolume)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d2ddc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderEnteredVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnColliderExitedVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnColliderExitedVolume)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d2dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderExitedVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnColliderEnteredSoda
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnColliderEnteredSoda)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5d2e184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderEnteredSoda", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnColliderExitedSoda
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnColliderExitedSoda)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d2e40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderExitedSoda", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnColliderEnteredRefreshWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnColliderEnteredRefreshWater)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5d2e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderEnteredRefreshWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnColliderExitedRefreshWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GorillaLocomotion::Swimming::WaterVolume*, ::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnColliderExitedRefreshWater)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d2e698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderExitedRefreshWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnProjectileEnteredSodaWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::SlingshotProjectile*, ::UnityEngine::Collider*)>(&::GorillaTag::ScienceExperimentManager::OnProjectileEnteredSodaWater)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d2e69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnProjectileEnteredSodaWater", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.AddLavaRock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::AddLavaRock)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d2e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"AddLavaRock", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnWaterBalloonHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::ScienceExperimentManager::OnWaterBalloonHitPlayer)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5d2e7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnWaterBalloonHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d2ebd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData)>(&::GorillaTag::ScienceExperimentManager::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d2ec38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5d2ec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x5d2ed30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5d2f2dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x5d2f5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerEnteredGameArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::PlayerEnteredGameArea)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5d2dea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerEnteredGameArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerExitedGameArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::PlayerExitedGameArea)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5d2e08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerExitedGameArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerTouchedLavaRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentManager::PlayerTouchedLavaRPC)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d2fb50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedLavaRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_PlayerTouchedLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::Fusion::RpcInfo)>(&::GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedLava)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d2fc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedLava", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerTouchedLava
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::PlayerTouchedLava)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d2e37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedLava", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerTouchedRefreshWaterRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentManager::PlayerTouchedRefreshWaterRPC)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d2fe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedRefreshWaterRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_PlayerTouchedRefreshWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::Fusion::RpcInfo)>(&::GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedRefreshWater)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5d2ff38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedRefreshWater", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerTouchedRefreshWater
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::PlayerTouchedRefreshWater)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5d2e608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedRefreshWater", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ValidateLocalPlayerWaterBalloonHitRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentManager::ValidateLocalPlayerWaterBalloonHitRPC)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5d301a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ValidateLocalPlayerWaterBalloonHitRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_ValidateLocalPlayerWaterBalloonHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t, ::Fusion::RpcInfo)>(&::GorillaTag::ScienceExperimentManager::RPC_ValidateLocalPlayerWaterBalloonHit)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5d302b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_ValidateLocalPlayerWaterBalloonHit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.ValidateLocalPlayerWaterBalloonHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::ValidateLocalPlayerWaterBalloonHit)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5d2e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ValidateLocalPlayerWaterBalloonHit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerHitByWaterBalloonRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaTag::ScienceExperimentManager::PlayerHitByWaterBalloonRPC)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d305c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerHitByWaterBalloonRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_PlayerHitByWaterBalloon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t, ::Fusion::RpcInfo)>(&::GorillaTag::ScienceExperimentManager::RPC_PlayerHitByWaterBalloon)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5d30678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerHitByWaterBalloon", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.PlayerHitByWaterBalloon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager::PlayerHitByWaterBalloon)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5d3053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerHitByWaterBalloon", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::ScienceExperimentManager::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d308d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5d30908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.OnOwnerSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTag::ScienceExperimentManager::OnOwnerSwitched)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5d30944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5d30ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager._UpdateReliableState_g__GetAlivePlayerCount_105_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::_UpdateReliableState_g__GetAlivePlayerCount_105_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d2d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"<UpdateReliableState>g__GetAlivePlayerCount|105_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)(bool)>(&::GorillaTag::ScienceExperimentManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d30d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager::*)()>(&::GorillaTag::ScienceExperimentManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d30dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                    {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_PlayerTouchedLava@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedLava@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d30e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedLava@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_PlayerTouchedRefreshWater@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedRefreshWater@Invoker)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5d30f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedRefreshWater@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_ValidateLocalPlayerWaterBalloonHit@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GorillaTag::ScienceExperimentManager::RPC_ValidateLocalPlayerWaterBalloonHit@Invoker)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d30fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_ValidateLocalPlayerWaterBalloonHit@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager.RPC_PlayerHitByWaterBalloon@Invoker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::NetworkBehaviour*, ::Fusion::SimulationMessage*)>(&::GorillaTag::ScienceExperimentManager::RPC_PlayerHitByWaterBalloon@Invoker)> {
  constexpr static std::size_t size = 0x710;
  constexpr static std::size_t addrs = 0x5d31068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerHitByWaterBalloon@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScienceExperimentManager_TagBehavior& GorillaTag::ScienceExperimentManager::__cordl_internal_get_tagBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagBehavior;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_TagBehavior const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_tagBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagBehavior;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_tagBehavior(::GlobalNamespace::ScienceExperimentManager_TagBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagBehavior = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_minScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_minScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minScale;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_minScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minScale = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_maxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_maxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxScale;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_maxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxScale = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeFast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeFast;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeFast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeFast;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseTimeFast(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTimeFast = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeMedium()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeMedium;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeMedium() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeMedium;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseTimeMedium(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTimeMedium = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeSlow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeSlow;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeSlow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeSlow;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseTimeSlow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTimeSlow = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeExtraSlow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeExtraSlow;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeExtraSlow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeExtraSlow;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseTimeExtraSlow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTimeExtraSlow = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_preDrainWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preDrainWaitTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_preDrainWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preDrainWaitTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_preDrainWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preDrainWaitTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_maxFullTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFullTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_maxFullTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxFullTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_maxFullTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxFullTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_fullyDrainedWaitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyDrainedWaitTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_fullyDrainedWaitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fullyDrainedWaitTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_fullyDrainedWaitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fullyDrainedWaitTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lagResolutionLavaProgressPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lagResolutionLavaProgressPerSecond;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lagResolutionLavaProgressPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lagResolutionLavaProgressPerSecond;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lagResolutionLavaProgressPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lagResolutionLavaProgressPerSecond = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentManager::__cordl_internal_get_animationCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_animationCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animationCurve;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_animationCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animationCurve = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaProgressToDisableRefreshWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressToDisableRefreshWater;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaProgressToDisableRefreshWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressToDisableRefreshWater;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lavaProgressToDisableRefreshWater(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaProgressToDisableRefreshWater = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaProgressToEnableRefreshWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressToEnableRefreshWater;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaProgressToEnableRefreshWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaProgressToEnableRefreshWater;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lavaProgressToEnableRefreshWater(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaProgressToEnableRefreshWater = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidMaxScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidMaxScale;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidMaxScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidMaxScale;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryLiquidMaxScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryLiquidMaxScale = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidScaleSyncOpeningTop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidScaleSyncOpeningTop;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidScaleSyncOpeningTop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidScaleSyncOpeningTop;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryLiquidScaleSyncOpeningTop(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryLiquidScaleSyncOpeningTop = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidScaleSyncOpeningBottom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidScaleSyncOpeningBottom;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidScaleSyncOpeningBottom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidScaleSyncOpeningBottom;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryLiquidScaleSyncOpeningBottom(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryLiquidScaleSyncOpeningBottom = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryBridgeQuadMaxScaleY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryBridgeQuadMaxScaleY;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryBridgeQuadMaxScaleY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryBridgeQuadMaxScaleY;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryBridgeQuadMaxScaleY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryBridgeQuadMaxScaleY = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryBridgeQuadMinMaxZHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryBridgeQuadMinMaxZHeight;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryBridgeQuadMinMaxZHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryBridgeQuadMinMaxZHeight;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryBridgeQuadMinMaxZHeight(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryBridgeQuadMinMaxZHeight = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaActivationRockProgressVsPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationRockProgressVsPlayerCount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaActivationRockProgressVsPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationRockProgressVsPlayerCount;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lavaActivationRockProgressVsPlayerCount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationRockProgressVsPlayerCount = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaActivationDrainRateVsPlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationDrainRateVsPlayerCount;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lavaActivationDrainRateVsPlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lavaActivationDrainRateVsPlayerCount;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lavaActivationDrainRateVsPlayerCount(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lavaActivationDrainRateVsPlayerCount = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_waterBalloonPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterBalloonPrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_waterBalloonPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waterBalloonPrefab;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_waterBalloonPrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waterBalloonPrefab = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingRandomAngleRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingRandomAngleRange;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingRandomAngleRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingRandomAngleRange;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_rotatingRingRandomAngleRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingRingRandomAngleRange = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingQuantizeAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingQuantizeAngles;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingQuantizeAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingQuantizeAngles;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_rotatingRingQuantizeAngles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingRingQuantizeAngles = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingAngleSnapDegrees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingAngleSnapDegrees;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingAngleSnapDegrees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingAngleSnapDegrees;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_rotatingRingAngleSnapDegrees(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingRingAngleSnapDegrees = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerSlideTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerSlideTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerSlideTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerSlideTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainBlockerSlideTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainBlockerSlideTime = value;
}
constexpr ::UnityEngine::Vector2& GorillaTag::ScienceExperimentManager::__cordl_internal_get_sodaFizzParticleEmissionMinMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaFizzParticleEmissionMinMax;
}
constexpr ::UnityEngine::Vector2 const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_sodaFizzParticleEmissionMinMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaFizzParticleEmissionMinMax;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_sodaFizzParticleEmissionMinMax(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sodaFizzParticleEmissionMinMax = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_infrequentUpdatePeriod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infrequentUpdatePeriod;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_infrequentUpdatePeriod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___infrequentUpdatePeriod;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_infrequentUpdatePeriod(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___infrequentUpdatePeriod = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get_optPlayersOutOfRoomGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optPlayersOutOfRoomGameMode;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_optPlayersOutOfRoomGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___optPlayersOutOfRoomGameMode;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_optPlayersOutOfRoomGameMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___optPlayersOutOfRoomGameMode = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get_debugDrawPlayerGameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawPlayerGameState;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_debugDrawPlayerGameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDrawPlayerGameState;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_debugDrawPlayerGameState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDrawPlayerGameState = value;
}
constexpr ::UnityW<::GlobalNamespace::ScienceExperimentSceneElements>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr ::UnityW<::GlobalNamespace::ScienceExperimentSceneElements> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elements;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_elements(::UnityW<::GlobalNamespace::ScienceExperimentSceneElements>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elements = value;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_allPlayersInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPlayersInRoom;
}
constexpr ::ArrayW<::GlobalNamespace::NetPlayer*> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_allPlayersInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPlayersInRoom;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_allPlayersInRoom(::ArrayW<::GlobalNamespace::NetPlayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPlayersInRoom = value;
}
constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRings;
}
constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRings;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_rotatingRings(::ArrayW<::GlobalNamespace::ScienceExperimentManager_RotatingRingState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingRings = value;
}
constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_inGamePlayerStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGamePlayerStates;
}
constexpr ::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_inGamePlayerStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGamePlayerStates;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_inGamePlayerStates(::ArrayW<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inGamePlayerStates = value;
}
constexpr int32_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_inGamePlayerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGamePlayerCount;
}
constexpr int32_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_inGamePlayerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inGamePlayerCount;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_inGamePlayerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inGamePlayerCount = value;
}
constexpr int32_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lastWinnerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWinnerId;
}
constexpr int32_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lastWinnerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWinnerId;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lastWinnerId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWinnerId = value;
}
constexpr ::StringW& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lastWinnerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWinnerName;
}
constexpr ::StringW const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lastWinnerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastWinnerName;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lastWinnerName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastWinnerName = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>*& GorillaTag::ScienceExperimentManager::__cordl_internal_get_sortedPlayerStates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedPlayerStates;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>* const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_sortedPlayerStates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortedPlayerStates;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_sortedPlayerStates(::System::Collections::Generic::List_1<::GlobalNamespace::ScienceExperimentManager_PlayerGameState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortedPlayerStates = value;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_SyncData& GorillaTag::ScienceExperimentManager::__cordl_internal_get_reliableState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_SyncData const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_reliableState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reliableState;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_reliableState(::GlobalNamespace::ScienceExperimentManager_SyncData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reliableState = value;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_RiseSpeed& GorillaTag::ScienceExperimentManager::__cordl_internal_get_nextRoundRiseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRoundRiseSpeed;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_RiseSpeed const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_nextRoundRiseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextRoundRiseSpeed;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_nextRoundRiseSpeed(::GlobalNamespace::ScienceExperimentManager_RiseSpeed  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextRoundRiseSpeed = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseProgress;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseProgress;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseProgress = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseProgressLinear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseProgressLinear;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseProgressLinear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseProgressLinear;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseProgressLinear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseProgressLinear = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_localLagRiseProgressOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLagRiseProgressOffset;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_localLagRiseProgressOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localLagRiseProgressOffset;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_localLagRiseProgressOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localLagRiseProgressOffset = value;
}
constexpr double_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lastInfrequentUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastInfrequentUpdateTime;
}
constexpr double_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_lastInfrequentUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastInfrequentUpdateTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_lastInfrequentUpdateTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastInfrequentUpdateTime = value;
}
constexpr ::StringW& GorillaTag::ScienceExperimentManager::__cordl_internal_get_mentoProjectileTag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mentoProjectileTag;
}
constexpr ::StringW const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_mentoProjectileTag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mentoProjectileTag;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_mentoProjectileTag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mentoProjectileTag = value;
}
constexpr double_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr double_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_currentTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
constexpr double_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_prevTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevTime;
}
constexpr double_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_prevTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_prevTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevTime = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_ringRotationProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringRotationProgress;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_ringRotationProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringRotationProgress;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_ringRotationProgress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringRotationProgress = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerSlideSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerSlideSpeed;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerSlideSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerSlideSpeed;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainBlockerSlideSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainBlockerSlideSpeed = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeLookup;
}
constexpr ::ArrayW<float_t> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_riseTimeLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseTimeLookup;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_riseTimeLookup(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseTimeLookup = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_ringParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_ringParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ringParent;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_ringParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ringParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_liquidMeshTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidMeshTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_liquidMeshTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidMeshTransform;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_liquidMeshTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidMeshTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_liquidSurfacePlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidSurfacePlane;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_liquidSurfacePlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidSurfacePlane;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_liquidSurfacePlane(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidSurfacePlane = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryWayLiquidMeshTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryWayLiquidMeshTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryWayLiquidMeshTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryWayLiquidMeshTransform;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryWayLiquidMeshTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryWayLiquidMeshTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryWayBridgeQuadTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryWayBridgeQuadTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryWayBridgeQuadTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryWayBridgeQuadTransform;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryWayBridgeQuadTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryWayBridgeQuadTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlocker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlocker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlocker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlocker;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainBlocker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainBlocker = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerClosedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerClosedPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerClosedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerClosedPosition;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainBlockerClosedPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainBlockerClosedPosition = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerOpenPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerOpenPosition;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainBlockerOpenPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainBlockerOpenPosition;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainBlockerOpenPosition(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainBlockerOpenPosition = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_liquidVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_liquidVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___liquidVolume;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_liquidVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___liquidVolume = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_entryLiquidVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryLiquidVolume;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_entryLiquidVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryLiquidVolume = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_bottleLiquidVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottleLiquidVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_bottleLiquidVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bottleLiquidVolume;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_bottleLiquidVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bottleLiquidVolume = value;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_refreshWaterVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refreshWaterVolume;
}
constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_refreshWaterVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___refreshWaterVolume;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_refreshWaterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___refreshWaterVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_gameAreaTriggerNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAreaTriggerNotifier;
}
constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_gameAreaTriggerNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameAreaTriggerNotifier;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_gameAreaTriggerNotifier(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameAreaTriggerNotifier = value;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_sodaWaterProjectileTriggerNotifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaWaterProjectileTriggerNotifier;
}
constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_sodaWaterProjectileTriggerNotifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sodaWaterProjectileTriggerNotifier;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_sodaWaterProjectileTriggerNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sodaWaterProjectileTriggerNotifier = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_eruptionAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eruptionAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_eruptionAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eruptionAudioSource;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_eruptionAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eruptionAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_drainAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drainAudioSource;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_drainAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drainAudioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingsAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingsAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotatingRingsAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotatingRingsAudioSource;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_rotatingRingsAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotatingRingsAudioSource = value;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule& GorillaTag::ScienceExperimentManager::__cordl_internal_get_fizzParticleEmission()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fizzParticleEmission;
}
constexpr ::GlobalNamespace::ParticleSystem_EmissionModule const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_fizzParticleEmission() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fizzParticleEmission;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_fizzParticleEmission(::GlobalNamespace::ParticleSystem_EmissionModule  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fizzParticleEmission = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get_hasPlayedEruptionEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPlayedEruptionEffects;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_hasPlayedEruptionEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPlayedEruptionEffects;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_hasPlayedEruptionEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPlayedEruptionEffects = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get_hasPlayedDrainEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPlayedDrainEffects;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_hasPlayedDrainEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasPlayedDrainEffects;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_hasPlayedDrainEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasPlayedDrainEffects = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get__ITickSystemTick_TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemTick_TickRunning_k__BackingField;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set__ITickSystemTick_TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemTick_TickRunning_k__BackingField = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager::__cordl_internal_get_debugRotateRingsTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRotateRingsTime;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_debugRotateRingsTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRotateRingsTime;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_debugRotateRingsTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRotateRingsTime = value;
}
constexpr ::UnityEngine::Coroutine*& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotateRingsCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateRingsCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_rotateRingsCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateRingsCoroutine;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_rotateRingsCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateRingsCoroutine = value;
}
constexpr bool& GorillaTag::ScienceExperimentManager::__cordl_internal_get_debugRandomizingRings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRandomizingRings;
}
constexpr bool const& GorillaTag::ScienceExperimentManager::__cordl_internal_get_debugRandomizingRings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugRandomizingRings;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set_debugRandomizingRings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugRandomizingRings = value;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData& GorillaTag::ScienceExperimentManager::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData const& GorillaTag::ScienceExperimentManager::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaTag::ScienceExperimentManager::__cordl_internal_set__Data(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaTag::ScienceExperimentManager::setStaticF_instance(::UnityW<::GorillaTag::ScienceExperimentManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTag::ScienceExperimentManager>, "instance", ::GorillaTag::ScienceExperimentManager*>(std::forward<::UnityW<::GorillaTag::ScienceExperimentManager>>(value));
}
inline ::UnityW<::GorillaTag::ScienceExperimentManager> GorillaTag::ScienceExperimentManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTag::ScienceExperimentManager>, "instance", ::GorillaTag::ScienceExperimentManager*>();
}
inline bool GorillaTag::ScienceExperimentManager::get_RefreshWaterAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_RefreshWaterAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::ScienceExperimentManager_RisingLiquidState GorillaTag::ScienceExperimentManager::get_GameState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_GameState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScienceExperimentManager_RisingLiquidState>(this, ___internal_method);
}
inline float_t GorillaTag::ScienceExperimentManager::get_RiseProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_RiseProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaTag::ScienceExperimentManager::get_RiseProgressLinear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_RiseProgressLinear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GorillaTag::ScienceExperimentManager::get_PlayerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_PlayerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::InitElements(::GlobalNamespace::ScienceExperimentSceneElements*  elements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"InitElements", {}, {::i2c::type_of<::GlobalNamespace::ScienceExperimentSceneElements*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elements);
}
inline void GorillaTag::ScienceExperimentManager::DeInitElements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"DeInitElements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GorillaTag::ScienceExperimentManager::GetElement(::GlobalNamespace::ScienceExperimentElementID  elementID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"GetElement", {}, {::i2c::type_of<::GlobalNamespace::ScienceExperimentElementID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, elementID);
}
inline bool GorillaTag::ScienceExperimentManager::ITickSystemTick_get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ITickSystemTick.get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::ITickSystemTick_set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ITickSystemTick.set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::ScienceExperimentManager::ITickSystemTick_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ITickSystemTick.Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::InfrequentUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"InfrequentUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::ScienceExperimentManager::PlayerInGame(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerInGame", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GorillaTag::ScienceExperimentManager::UpdateReliableState(double_t  currentTime, ::by_ref<::GlobalNamespace::ScienceExperimentManager_SyncData>  syncData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateReliableState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ScienceExperimentManager_SyncData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, syncData);
}
inline void GorillaTag::ScienceExperimentManager::UpdateLocalState(double_t  currentTime, ::GlobalNamespace::ScienceExperimentManager_SyncData  syncData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateLocalState", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::ScienceExperimentManager_SyncData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, syncData);
}
inline void GorillaTag::ScienceExperimentManager::UpdateLiquid(float_t  fillProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateLiquid", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fillProgress);
}
inline void GorillaTag::ScienceExperimentManager::UpdateRotatingRings(float_t  rotationProgress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateRotatingRings", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotationProgress);
}
inline void GorillaTag::ScienceExperimentManager::UpdateDrainBlocker(double_t  currentTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateDrainBlocker", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime);
}
inline void GorillaTag::ScienceExperimentManager::UpdateEffects()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateEffects", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::DisableObjectsInContactWithLava(float_t  lavaScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"DisableObjectsInContactWithLava", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lavaScale);
}
inline void GorillaTag::ScienceExperimentManager::UpdateWinner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateWinner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::RefreshWinnerName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RefreshWinnerName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GorillaTag::ScienceExperimentManager::GetPlayerFromId(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"GetPlayerFromId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, id);
}
inline void GorillaTag::ScienceExperimentManager::UpdateRefreshWater()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"UpdateRefreshWater", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::ResetGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ResetGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::RestartGame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RestartGame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::DebugErupt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"DebugErupt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::RandomizeRings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RandomizeRings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTag::ScienceExperimentManager::RotateRingsCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RotateRingsCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline bool GorillaTag::ScienceExperimentManager::GetMaterialIfPlayerInGame(int32_t  playerActorNumber, ::by_ref<int32_t>  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"GetMaterialIfPlayerInGame", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerActorNumber, materialIndex);
}
inline void GorillaTag::ScienceExperimentManager::OnPlayerTagged(::GlobalNamespace::NetPlayer*  taggedPlayer, ::GlobalNamespace::NetPlayer*  taggingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnPlayerTagged", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, taggedPlayer, taggingPlayer);
}
inline void GorillaTag::ScienceExperimentManager::OnColliderEnteredVolume(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderEnteredVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GorillaTag::ScienceExperimentManager::OnColliderExitedVolume(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderExitedVolume", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GorillaTag::ScienceExperimentManager::OnColliderEnteredSoda(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderEnteredSoda", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, collider);
}
inline void GorillaTag::ScienceExperimentManager::OnColliderExitedSoda(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderExitedSoda", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, collider);
}
inline void GorillaTag::ScienceExperimentManager::OnColliderEnteredRefreshWater(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderEnteredRefreshWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, collider);
}
inline void GorillaTag::ScienceExperimentManager::OnColliderExitedRefreshWater(::GorillaLocomotion::Swimming::WaterVolume*  volume, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnColliderExitedRefreshWater", {}, {::i2c::type_of<::GorillaLocomotion::Swimming::WaterVolume*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volume, collider);
}
inline void GorillaTag::ScienceExperimentManager::OnProjectileEnteredSodaWater(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnProjectileEnteredSodaWater", {}, {::i2c::type_of<::GlobalNamespace::SlingshotProjectile*>(), ::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collider);
}
inline void GorillaTag::ScienceExperimentManager::AddLavaRock(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"AddLavaRock", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaTag::ScienceExperimentManager::OnWaterBalloonHitPlayer(::GlobalNamespace::NetPlayer*  hitPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnWaterBalloonHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitPlayer);
}
inline ::GlobalNamespace::ScienceExperimentManager_ScienceManagerData GorillaTag::ScienceExperimentManager::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::set_Data(::GlobalNamespace::ScienceExperimentManager_ScienceManagerData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::ScienceExperimentManager_ScienceManagerData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::ScienceExperimentManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTag::ScienceExperimentManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaTag::ScienceExperimentManager::PlayerEnteredGameArea(int32_t  pId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerEnteredGameArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pId);
}
inline void GorillaTag::ScienceExperimentManager::PlayerExitedGameArea(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerExitedGameArea", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaTag::ScienceExperimentManager::PlayerTouchedLavaRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedLavaRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedLava(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedLava", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTag::ScienceExperimentManager::PlayerTouchedLava(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedLava", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaTag::ScienceExperimentManager::PlayerTouchedRefreshWaterRPC(::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedRefreshWaterRPC", {}, {::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedRefreshWater(::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedRefreshWater", {}, {::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info);
}
inline void GorillaTag::ScienceExperimentManager::PlayerTouchedRefreshWater(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerTouchedRefreshWater", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaTag::ScienceExperimentManager::ValidateLocalPlayerWaterBalloonHitRPC(int32_t  playerId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ValidateLocalPlayerWaterBalloonHitRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, info);
}
inline void GorillaTag::ScienceExperimentManager::RPC_ValidateLocalPlayerWaterBalloonHit(int32_t  playerId, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_ValidateLocalPlayerWaterBalloonHit", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, info);
}
inline void GorillaTag::ScienceExperimentManager::ValidateLocalPlayerWaterBalloonHit(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"ValidateLocalPlayerWaterBalloonHit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaTag::ScienceExperimentManager::PlayerHitByWaterBalloonRPC(int32_t  playerId, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerHitByWaterBalloonRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, info);
}
inline void GorillaTag::ScienceExperimentManager::RPC_PlayerHitByWaterBalloon(int32_t  playerId, ::Fusion::RpcInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerHitByWaterBalloon", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Fusion::RpcInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, info);
}
inline void GorillaTag::ScienceExperimentManager::PlayerHitByWaterBalloon(int32_t  playerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"PlayerHitByWaterBalloon", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void GorillaTag::ScienceExperimentManager::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void GorillaTag::ScienceExperimentManager::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::OnOwnerSwitched(::GlobalNamespace::NetPlayer*  newOwningPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwningPlayer);
}
inline void GorillaTag::ScienceExperimentManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GorillaTag::ScienceExperimentManager::_UpdateReliableState_g__GetAlivePlayerCount_105_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"<UpdateReliableState>g__GetAlivePlayerCount|105_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaTag::ScienceExperimentManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedLava@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedLava@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GorillaTag::ScienceExperimentManager::RPC_PlayerTouchedRefreshWater@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerTouchedRefreshWater@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GorillaTag::ScienceExperimentManager::RPC_ValidateLocalPlayerWaterBalloonHit@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_ValidateLocalPlayerWaterBalloonHit@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline void GorillaTag::ScienceExperimentManager::RPC_PlayerHitByWaterBalloon@Invoker(::Fusion::NetworkBehaviour*  behaviour, ::Fusion::SimulationMessage*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager*>(),
                        {"RPC_PlayerHitByWaterBalloon@Invoker", {}, {::i2c::type_of<::Fusion::NetworkBehaviour*>(), ::i2c::type_of<::Fusion::SimulationMessage*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, behaviour, message);
}
inline ::GorillaTag::ScienceExperimentManager* GorillaTag::ScienceExperimentManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ScienceExperimentManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GorillaTag::ScienceExperimentManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GorillaTag::ScienceExperimentManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::ScienceExperimentManager::ScienceExperimentManager()   {
}
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::*)(int32_t)>(&::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d31f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::*)()>(&::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d31f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::*)()>(&::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::MoveNext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d31f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::*)()>(&::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d32024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::*)()>(&::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5d3202c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::*)()>(&::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d32064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTag::ScienceExperimentManager>& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTag::ScienceExperimentManager> const& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_set___4__this(::UnityW<::GorillaTag::ScienceExperimentManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get__routineStartTime_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____routineStartTime_5__2;
}
constexpr float_t const& GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_get__routineStartTime_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____routineStartTime_5__2;
}
constexpr void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::__cordl_internal_set__routineStartTime_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____routineStartTime_5__2 = value;
}
inline void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123* GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::ScienceExperimentManager__RotateRingsCoroutine_d__123::ScienceExperimentManager__RotateRingsCoroutine_d__123()   {
}
