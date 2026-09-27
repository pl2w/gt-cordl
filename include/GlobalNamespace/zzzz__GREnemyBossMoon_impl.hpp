#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoon.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_BodyState_impl.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_def.hpp"
#include "GlobalNamespace/zzzz__CameraShakeDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAgent_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityIdle_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilitySummon_def.hpp"
#include "GlobalNamespace/zzzz__GRAdaptiveMusicController_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRBossMoonTentacleAttack_def.hpp"
#include "GlobalNamespace/zzzz__GRBreakableItemSpawnConfig_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonColliderHelper_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon___GroundSlam_d__173_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoon_def.hpp"
#include "GlobalNamespace/zzzz__GREnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseNearby_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__IGRSummoningEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameAgentComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GREnemyType_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSpherePushVolume_def.hpp"
#include "GorillaTagScripts/GhostReactor/zzzz__GRSquishVolume_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.get_BossHasRevealed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::get_BossHasRevealed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"get_BossHasRevealed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.set_BossHasRevealed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(bool)>(&::GlobalNamespace::GREnemyBossMoon::set_BossHasRevealed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"set_BossHasRevealed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.get_CurrAbility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRAbilityBase* (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::get_CurrAbility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587f698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"get_CurrAbility", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::Awake)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x587f6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::OnEntityInit)> {
  constexpr static std::size_t size = 0xb6c;
  constexpr static std::size_t addrs = 0x587f954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GetLootTableForType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> (::GlobalNamespace::GREnemyBossMoon::*)(::GorillaTagScripts::GhostReactor::GREnemyType)>(&::GlobalNamespace::GREnemyBossMoon::GetLootTableForType)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58805d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetLootTableForType", {}, {::i2c::type_of<::GorillaTagScripts::GhostReactor::GREnemyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.SetupAbility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior, ::GlobalNamespace::GRAbilityBase*, ::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GREnemyBossMoon::SetupAbility)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58804c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetupAbility", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>(), ::i2c::type_of<::GlobalNamespace::GRAbilityBase*>(), ::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Animation*>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5880ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyBossMoon::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5881000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5881004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int64_t)>(&::GlobalNamespace::GREnemyBossMoon::Setup)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5880584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(uint8_t)>(&::GlobalNamespace::GREnemyBossMoon::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58812dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnNetworkBodyStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(uint8_t)>(&::GlobalNamespace::GREnemyBossMoon::OnNetworkBodyStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58812f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoon::SetHP)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5880f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.TrySetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior)>(&::GlobalNamespace::GREnemyBossMoon::TrySetBehavior)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x588130c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior, bool)>(&::GlobalNamespace::GREnemyBossMoon::SetBehavior)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5880698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.SetSquishVolumeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(bool)>(&::GlobalNamespace::GREnemyBossMoon::SetSquishVolumeState)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5881abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetSquishVolumeState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.CalcMaxHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::CalcMaxHP)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5880d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"CalcMaxHP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GetCurrPhaseIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::GetCurrPhaseIndex)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5881b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetCurrPhaseIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GetCurrPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GREnemyBossMoon_PhaseDef* (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::GetCurrPhase)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5881c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetCurrPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.RestoreFullHealth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::RestoreFullHealth)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5881cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"RestoreFullHealth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.HurtBossHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::HurtBossHP)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5881ccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"HurtBossHP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.KillAllEyes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::KillAllEyes)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5882158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"KillAllEyes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.KillAllSummoned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::KillAllSummoned)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5881908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"KillAllSummoned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.KillAllSummoned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(bool, bool)>(&::GlobalNamespace::GREnemyBossMoon::KillAllSummoned)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5881374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"KillAllSummoned", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GoBackPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::GoBackPhase)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5882268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GoBackPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GoToNextPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::GoToNextPhase)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x588232c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GoToNextPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.IsSummon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior)>(&::GlobalNamespace::GREnemyBossMoon::IsSummon)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58823c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsSummon", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.IsAnySummonBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior)>(&::GlobalNamespace::GREnemyBossMoon::IsAnySummonBehavior)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58824c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsAnySummonBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ChooseSummonForPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GREnemyBossMoon_Behavior (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::ChooseSummonForPhase)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58824d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseSummonForPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ChooseAttackForPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GREnemyBossMoon_Behavior (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::ChooseAttackForPhase)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5882580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseAttackForPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ChooseRandomBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GREnemyBossMoon_Behavior (::GlobalNamespace::GREnemyBossMoon::*)(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*)>(&::GlobalNamespace::GREnemyBossMoon::ChooseRandomBehavior)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58824fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseRandomBehavior", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.SetBodyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_BodyState, bool)>(&::GlobalNamespace::GREnemyBossMoon::SetBodyState)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x58810dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::RefreshBody)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5881a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58825a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoon::OnEntityThink)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5882624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.TryChooseAttackBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GREnemyBossMoon_Behavior (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::TryChooseAttackBehavior)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x5882b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TryChooseAttackBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.AreAllEyesClosed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::AreAllEyesClosed)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5883040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AreAllEyesClosed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GotoDyingIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::GotoDyingIdle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58830e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GotoDyingIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(bool)>(&::GlobalNamespace::GREnemyBossMoon::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5882978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseNewBehavior", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoon::OnUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58825c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoon::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x58830ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoon::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5883368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.CatchUpPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoon::CatchUpPhase)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x588337c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"CatchUpPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.IncrementBossPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::IncrementBossPhase)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58817a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IncrementBossPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.SyncPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoon::SyncPhase)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58834c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SyncPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.AdjustByPhaseIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoon::AdjustByPhaseIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5883428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AdjustByPhaseIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.AdjustAttackAnimSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoon::AdjustAttackAnimSpeed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58835d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AdjustAttackAnimSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoon::OnHitByClub)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5883660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.HurtBoss
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(int32_t, ::GlobalNamespace::GameEntityId, ::UnityEngine::Vector3)>(&::GlobalNamespace::GREnemyBossMoon::HurtBoss)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5881d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"HurtBoss", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnHitByFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoon::OnHitByFlash)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58836ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoon::OnHitByShield)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58836b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ReportDeathStat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::ReportDeathStat)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58836e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ReportDeathStat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.IsAttackBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior)>(&::GlobalNamespace::GREnemyBossMoon::IsAttackBehavior)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5883768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsAttackBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GetAssociatedAbilityForBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRAbilityBase* (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GREnemyBossMoon_Behavior)>(&::GlobalNamespace::GREnemyBossMoon::GetAssociatedAbilityForBehavior)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5883784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetAssociatedAbilityForBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyBossMoon::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x484;
  constexpr static std::size_t addrs = 0x5883868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.TurnOnGrav
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::TurnOnGrav)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58819c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TurnOnGrav", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.TurnOffGrav
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::TurnOffGrav)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5881914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TurnOffGrav", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.DebugHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::DebugHitPlayer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5883d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"DebugHitPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.HitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GRPlayer*, bool)>(&::GlobalNamespace::GREnemyBossMoon::HitPlayer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5883cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"HitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.TryHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GRPlayer*, bool)>(&::GlobalNamespace::GREnemyBossMoon::TryHitPlayer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5883e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ShockPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::ShockPlayer)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5883ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ShockPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.TryShockPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::TryShockPlayer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5883f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TryShockPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.ToggleShockColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(bool)>(&::GlobalNamespace::GREnemyBossMoon::ToggleShockColliders)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x588186c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ToggleShockColliders", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GroundSlamWeak
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GREnemyBossMoon::GroundSlamWeak)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5883fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GroundSlamWeak", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GroundSlam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::GREnemyBossMoon::GroundSlam)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58840b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GroundSlam", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon._GroundSlam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::UnityEngine::Transform*, float_t, float_t, float_t)>(&::GlobalNamespace::GREnemyBossMoon::_GroundSlam)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5883fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"_GroundSlam", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyBossMoon::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x58840c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyBossMoon::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5884384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyBossMoon::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x5884444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoon::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58846a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoon::OnHit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58846ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.AddTrackedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GREnemyBossMoon::AddTrackedEntity)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x58847b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AddTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.RemoveTrackedEntity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GREnemyBossMoon::RemoveTrackedEntity)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x588490c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"RemoveTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnSummonedEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GREnemyBossMoon::OnSummonedEntityInit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5884a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnSummonedEntityInit", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon.OnSummonedEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GREnemyBossMoon::OnSummonedEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5884a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnSummonedEntityDestroy", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon::*)()>(&::GlobalNamespace::GREnemyBossMoon::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5884a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_enemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_enemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemy = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittable = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_phases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phases;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_phases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___phases;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_phases(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___phases = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_internalPhaseIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalPhaseIndex;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_internalPhaseIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalPhaseIndex;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_internalPhaseIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalPhaseIndex = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lootPhases()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootPhases;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lootPhases() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootPhases;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lootPhases(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_LootPhase*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lootPhases = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_eyes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_eyes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyes;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_eyes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonEye>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyes = value;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_eyesPushVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyesPushVolume;
}
constexpr ::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_eyesPushVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyesPushVolume;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_eyesPushVolume(::UnityW<::GorillaTagScripts::GhostReactor::GRSpherePushVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyesPushVolume = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityReveal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityReveal;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityReveal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityReveal;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityReveal(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityReveal = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_firstTimeReveal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstTimeReveal;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_firstTimeReveal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstTimeReveal;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_firstTimeReveal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstTimeReveal = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get__BossHasRevealed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BossHasRevealed_k__BackingField;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get__BossHasRevealed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BossHasRevealed_k__BackingField;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set__BossHasRevealed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BossHasRevealed_k__BackingField = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityHiddenIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityHiddenIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityHiddenIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityHiddenIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityHiddenIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityHiddenIdle = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle00()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle00;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle00() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle00;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTentacle00(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTentacle00 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle01;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle01;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTentacle01(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTentacle01 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle02()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle02;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle02() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle02;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTentacle02(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTentacle02 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle03()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle03;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle03() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle03;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTentacle03(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTentacle03 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle04()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle04;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle04() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle04;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTentacle04(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTentacle04 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle05()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle05;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTentacle05() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTentacle05;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTentacle05(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTentacle05 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle00()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle00;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle00() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle00;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackQuickTentacle00(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackQuickTentacle00 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle01;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle01;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackQuickTentacle01(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackQuickTentacle01 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle02()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle02;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle02() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle02;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackQuickTentacle02(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackQuickTentacle02 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle03()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle03;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackQuickTentacle03() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackQuickTentacle03;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackQuickTentacle03(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackQuickTentacle03 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTongue01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTongue01;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTongue01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTongue01;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTongue01(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTongue01 = value;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTongueSwipe01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTongueSwipe01;
}
constexpr ::GlobalNamespace::GRBossMoonTentacleAttack* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAttackTongueSwipe01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackTongueSwipe01;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAttackTongueSwipe01(::GlobalNamespace::GRBossMoonTentacleAttack*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackTongueSwipe01 = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummonStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummonStart;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummonStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummonStart;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilitySummonStart(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySummonStart = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummonEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummonEnd;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummonEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummonEnd;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilitySummonEnd(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySummonEnd = value;
}
constexpr ::GlobalNamespace::GRAbilitySummon*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon01()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon01;
}
constexpr ::GlobalNamespace::GRAbilitySummon* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon01() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon01;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilitySummon01(::GlobalNamespace::GRAbilitySummon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySummon01 = value;
}
constexpr ::GlobalNamespace::GRAbilitySummon*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon02()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon02;
}
constexpr ::GlobalNamespace::GRAbilitySummon* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon02() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon02;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilitySummon02(::GlobalNamespace::GRAbilitySummon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySummon02 = value;
}
constexpr ::GlobalNamespace::GRAbilitySummon*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon03()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon03;
}
constexpr ::GlobalNamespace::GRAbilitySummon* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon03() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon03;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilitySummon03(::GlobalNamespace::GRAbilitySummon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySummon03 = value;
}
constexpr ::GlobalNamespace::GRAbilitySummon*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon04()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon04;
}
constexpr ::GlobalNamespace::GRAbilitySummon* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilitySummon04() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySummon04;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilitySummon04(::GlobalNamespace::GRAbilitySummon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySummon04 = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRetreatStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRetreatStart;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRetreatStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRetreatStart;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityRetreatStart(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityRetreatStart = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRetreatEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRetreatEnd;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRetreatEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRetreatEnd;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityRetreatEnd(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityRetreatEnd = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRetreatIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRetreatIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRetreatIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRetreatIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityRetreatIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityRetreatIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityExposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityExposed;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityExposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityExposed;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityExposed(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityExposed = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityExposedIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityExposedIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityExposedIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityExposedIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityExposedIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityExposedIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDie = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityDieIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDieIdle;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityDieIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDieIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityDieIdle(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDieIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRunaway()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRunaway;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityRunaway() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRunaway;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityRunaway(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityRunaway = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityNextPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityNextPhase;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityNextPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityNextPhase;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityNextPhase(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityNextPhase = value;
}
constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilities;
}
constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilities;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilities(::ArrayW<::GlobalNamespace::GRAbilityBase*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilities = value;
}
constexpr ::GlobalNamespace::GRAbilityBase*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currAbility;
}
constexpr ::GlobalNamespace::GRAbilityBase* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currAbility;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_currAbility(::GlobalNamespace::GRAbilityBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currAbility = value;
}
constexpr ::GlobalNamespace::GRAbilitySummon*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currSummon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currSummon;
}
constexpr ::GlobalNamespace::GRAbilitySummon* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currSummon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currSummon;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_currSummon(::GlobalNamespace::GRAbilitySummon*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currSummon = value;
}
constexpr ::GlobalNamespace::GRAbilityAgent*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAgent;
}
constexpr ::GlobalNamespace::GRAbilityAgent* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_abilityAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAgent;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_abilityAgent(::GlobalNamespace::GRAbilityAgent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAgent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_always()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_always() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___always = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSound = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_damagedSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundVolume = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSounds;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_damagedSounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSounds = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSoundIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundIndex;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_damagedSoundIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundIndex;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_damagedSoundIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_fxDamaged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_fxDamaged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxDamaged = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_gravActivators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravActivators;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_gravActivators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravActivators;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_gravActivators(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravActivators = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currentGravActivator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGravActivator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currentGravActivator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentGravActivator;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_currentGravActivator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentGravActivator = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_bodyRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRenderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_bodyRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyRenderer;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_bodyRenderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyRenderer = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_defaultBodyMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultBodyMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_defaultBodyMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultBodyMaterials;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_defaultBodyMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultBodyMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_shockedBodyMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shockedBodyMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_shockedBodyMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shockedBodyMaterials;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_shockedBodyMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shockedBodyMaterials = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastStaggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStaggerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastStaggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStaggerTime;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lastStaggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStaggerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_staggerImmuneTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerImmuneTime;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_staggerImmuneTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerImmuneTime;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_staggerImmuneTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staggerImmuneTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr ::GlobalNamespace::GREnemyBossMoon_BodyState& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyBossMoon_BodyState const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyBossMoon_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastSeenTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastSeenTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastSeenTargetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr double_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastSeenTargetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lastSeenTargetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_searchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_searchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_searchPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPosition = value;
}
constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBehavior;
}
constexpr ::GlobalNamespace::GREnemyBossMoon_Behavior const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastBehavior;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lastBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastBehavior = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_restAfterAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restAfterAttack;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_restAfterAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restAfterAttack;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_restAfterAttack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restAfterAttack = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_consecutiveCombos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consecutiveCombos;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_consecutiveCombos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___consecutiveCombos;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_consecutiveCombos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___consecutiveCombos = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_attacksAfterSummon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attacksAfterSummon;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_attacksAfterSummon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attacksAfterSummon;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_attacksAfterSummon(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attacksAfterSummon = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_waitInRetreat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitInRetreat;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_waitInRetreat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitInRetreat;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_waitInRetreat(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitInRetreat = value;
}
constexpr double_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastJumpEndtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJumpEndtime;
}
constexpr double_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastJumpEndtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJumpEndtime;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lastJumpEndtime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastJumpEndtime = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_canChaseJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_canChaseJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_canChaseJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canChaseJump = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_chaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_chaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_chaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpDistance = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_chaseJumpMinInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_chaseJumpMinInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_chaseJumpMinInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpMinInterval = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_minChaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_minChaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_minChaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minChaseJumpDistance = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_knockbackImpulse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackImpulse;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_knockbackImpulse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackImpulse;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_knockbackImpulse(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackImpulse = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_knockbackTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_knockbackTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___knockbackTransform;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_knockbackTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___knockbackTransform = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_shockColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shockColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_shockColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shockColliders;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_shockColliders(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GREnemyBossMoonColliderHelper>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shockColliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_squishVolumes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squishVolumes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_squishVolumes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___squishVolumes;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_squishVolumes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::GhostReactor::GRSquishVolume>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___squishVolumes = value;
}
constexpr ::UnityW<::GlobalNamespace::CameraShakeDispatcher>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_cameraShaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraShaker;
}
constexpr ::UnityW<::GlobalNamespace::CameraShakeDispatcher> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_cameraShaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraShaker;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_cameraShaker(::UnityW<::GlobalNamespace::CameraShakeDispatcher>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraShaker = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_trackedEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedEntities;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_trackedEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedEntities;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_trackedEntities(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedEntities = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_trackedGameEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedGameEntities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_trackedGameEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___trackedGameEntities;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_trackedGameEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___trackedGameEntities = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController>& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_adaptiveMusicController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adaptiveMusicController;
}
constexpr ::UnityW<::GlobalNamespace::GRAdaptiveMusicController> const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_adaptiveMusicController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adaptiveMusicController;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_adaptiveMusicController(::UnityW<::GlobalNamespace::GRAdaptiveMusicController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adaptiveMusicController = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_triggerNextMusicTransition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNextMusicTransition;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_triggerNextMusicTransition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerNextMusicTransition;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_triggerNextMusicTransition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerNextMusicTransition = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_tryHitPlayerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_tryHitPlayerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryHitPlayerCoroutine = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_tryShockPlayerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryShockPlayerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GREnemyBossMoon::__cordl_internal_get_tryShockPlayerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryShockPlayerCoroutine;
}
constexpr void GlobalNamespace::GREnemyBossMoon::__cordl_internal_set_tryShockPlayerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryShockPlayerCoroutine = value;
}
inline void GlobalNamespace::GREnemyBossMoon::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyBossMoon*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyBossMoon::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyBossMoon*>();
}
inline void GlobalNamespace::GREnemyBossMoon::setStaticF_tempPotentialAttacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*, "tempPotentialAttacks", ::GlobalNamespace::GREnemyBossMoon*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* GlobalNamespace::GREnemyBossMoon::getStaticF_tempPotentialAttacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*, "tempPotentialAttacks", ::GlobalNamespace::GREnemyBossMoon*>();
}
inline bool GlobalNamespace::GREnemyBossMoon::get_BossHasRevealed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"get_BossHasRevealed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::set_BossHasRevealed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"set_BossHasRevealed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GRAbilityBase* GlobalNamespace::GREnemyBossMoon::get_CurrAbility()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"get_CurrAbility", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRAbilityBase*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> GlobalNamespace::GREnemyBossMoon::GetLootTableForType(::GorillaTagScripts::GhostReactor::GREnemyType  enemyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetLootTableForType", {}, {::i2c::type_of<::GorillaTagScripts::GhostReactor::GREnemyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>>(this, ___internal_method, enemyType);
}
inline void GlobalNamespace::GREnemyBossMoon::SetupAbility(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior, ::GlobalNamespace::GRAbilityBase*  ability, ::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetupAbility", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>(), ::i2c::type_of<::GlobalNamespace::GRAbilityBase*>(), ::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Animation*>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behavior, ability, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GREnemyBossMoon::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyBossMoon::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::Setup(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyBossMoon::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyBossMoon::OnNetworkBodyStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyBossMoon::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline bool GlobalNamespace::GREnemyBossMoon::TrySetBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  newBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBehavior);
}
inline void GlobalNamespace::GREnemyBossMoon::SetBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline void GlobalNamespace::GREnemyBossMoon::SetSquishVolumeState(bool  squishEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetSquishVolumeState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, squishEnabled);
}
inline int32_t GlobalNamespace::GREnemyBossMoon::CalcMaxHP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"CalcMaxHP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GREnemyBossMoon::GetCurrPhaseIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetCurrPhaseIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoon_PhaseDef* GlobalNamespace::GREnemyBossMoon::GetCurrPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetCurrPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::RestoreFullHealth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"RestoreFullHealth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::HurtBossHP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"HurtBossHP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::KillAllEyes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"KillAllEyes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::KillAllSummoned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"KillAllSummoned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::KillAllSummoned(bool  ignoreMonkeye, bool  killAllEnemies)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"KillAllSummoned", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreMonkeye, killAllEnemies);
}
inline void GlobalNamespace::GREnemyBossMoon::GoBackPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GoBackPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::GoToNextPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GoToNextPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyBossMoon::IsSummon(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsSummon", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behavior);
}
inline bool GlobalNamespace::GREnemyBossMoon::IsAnySummonBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsAnySummonBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behavior);
}
inline ::GlobalNamespace::GREnemyBossMoon_Behavior GlobalNamespace::GREnemyBossMoon::ChooseSummonForPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseSummonForPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GREnemyBossMoon_Behavior>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoon_Behavior GlobalNamespace::GREnemyBossMoon::ChooseAttackForPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseAttackForPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GREnemyBossMoon_Behavior>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoon_Behavior GlobalNamespace::GREnemyBossMoon::ChooseRandomBehavior(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  behaviors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseRandomBehavior", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GREnemyBossMoon_Behavior>(this, ___internal_method, behaviors);
}
inline void GlobalNamespace::GREnemyBossMoon::SetBodyState(::GlobalNamespace::GREnemyBossMoon_BodyState  newBodyState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBodyState, force);
}
inline void GlobalNamespace::GREnemyBossMoon::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline ::GlobalNamespace::GREnemyBossMoon_Behavior GlobalNamespace::GREnemyBossMoon::TryChooseAttackBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TryChooseAttackBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GREnemyBossMoon_Behavior>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyBossMoon::AreAllEyesClosed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AreAllEyesClosed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::GotoDyingIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GotoDyingIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::ChooseNewBehavior(bool  forceAttack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ChooseNewBehavior", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceAttack);
}
inline void GlobalNamespace::GREnemyBossMoon::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyBossMoon::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyBossMoon::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyBossMoon::CatchUpPhase(int32_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"CatchUpPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GlobalNamespace::GREnemyBossMoon::IncrementBossPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IncrementBossPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::SyncPhase(int32_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"SyncPhase", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GlobalNamespace::GREnemyBossMoon::AdjustByPhaseIndex(int32_t  phase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AdjustByPhaseIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, phase);
}
inline void GlobalNamespace::GREnemyBossMoon::AdjustAttackAnimSpeed(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AdjustAttackAnimSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void GlobalNamespace::GREnemyBossMoon::OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyBossMoon::HurtBoss(int32_t  hitAmount, ::GlobalNamespace::GameEntityId  hitByEntityId, ::UnityEngine::Vector3  toolPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"HurtBoss", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hitAmount, hitByEntityId, toolPosition);
}
inline void GlobalNamespace::GREnemyBossMoon::OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grTool, hit);
}
inline void GlobalNamespace::GREnemyBossMoon::OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyBossMoon::ReportDeathStat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ReportDeathStat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyBossMoon::IsAttackBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsAttackBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, behavior);
}
inline ::GlobalNamespace::GRAbilityBase* GlobalNamespace::GREnemyBossMoon::GetAssociatedAbilityForBehavior(::GlobalNamespace::GREnemyBossMoon_Behavior  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetAssociatedAbilityForBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoon_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRAbilityBase*>(this, ___internal_method, behavior);
}
inline void GlobalNamespace::GREnemyBossMoon::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GREnemyBossMoon::TurnOnGrav()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TurnOnGrav", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::TurnOffGrav()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TurnOffGrav", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::DebugHitPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"DebugHitPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::HitPlayer(::GlobalNamespace::GRPlayer*  player, bool  useImpulse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"HitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, useImpulse);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GREnemyBossMoon::TryHitPlayer(::GlobalNamespace::GRPlayer*  player, bool  useImpulse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player, useImpulse);
}
inline void GlobalNamespace::GREnemyBossMoon::ShockPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ShockPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GREnemyBossMoon::TryShockPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"TryShockPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon::ToggleShockColliders(bool  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"ToggleShockColliders", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toggle);
}
inline void GlobalNamespace::GREnemyBossMoon::GroundSlamWeak(::UnityEngine::Transform*  slamCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GroundSlamWeak", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slamCenter);
}
inline void GlobalNamespace::GREnemyBossMoon::GroundSlam(::UnityEngine::Transform*  slamCenter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GroundSlam", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slamCenter);
}
inline void GlobalNamespace::GREnemyBossMoon::_GroundSlam(::UnityEngine::Transform*  slamCenter, float_t  duration, float_t  distance, float_t  hitVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"_GroundSlam", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slamCenter, duration, distance, hitVelocity);
}
inline void GlobalNamespace::GREnemyBossMoon::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyBossMoon::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyBossMoon::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::GREnemyBossMoon::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyBossMoon::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyBossMoon::AddTrackedEntity(::GlobalNamespace::GameEntity*  entityToTrack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"AddTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityToTrack);
}
inline void GlobalNamespace::GREnemyBossMoon::RemoveTrackedEntity(::GlobalNamespace::GameEntity*  entityToRemove)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"RemoveTrackedEntity", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityToRemove);
}
inline void GlobalNamespace::GREnemyBossMoon::OnSummonedEntityInit(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnSummonedEntityInit", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GREnemyBossMoon::OnSummonedEntityDestroy(::GlobalNamespace::GameEntity*  entity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {"OnSummonedEntityDestroy", {}, {::i2c::type_of<::GlobalNamespace::GameEntity*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline void GlobalNamespace::GREnemyBossMoon::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoon* GlobalNamespace::GREnemyBossMoon::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoon*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyBossMoon::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyBossMoon::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyBossMoon::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyBossMoon::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GREnemyBossMoon::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GREnemyBossMoon::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyBossMoon::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyBossMoon::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyBossMoon::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyBossMoon::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGRSummoningEntity"
constexpr  GlobalNamespace::GREnemyBossMoon::operator ::GlobalNamespace::IGRSummoningEntity*() noexcept {
return static_cast<::GlobalNamespace::IGRSummoningEntity*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGRSummoningEntity"
constexpr ::GlobalNamespace::IGRSummoningEntity* GlobalNamespace::GREnemyBossMoon::i___GlobalNamespace__IGRSummoningEntity() noexcept {
return static_cast<::GlobalNamespace::IGRSummoningEntity*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoon::GREnemyBossMoon()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5883f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5884f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::MoveNext)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5884f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5885080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5885088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58850c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169* GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoon__TryShockPlayer_d__169::GREnemyBossMoon__TryShockPlayer_d__169()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5883ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5884b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::MoveNext)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5884b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5884f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5884f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::*)()>(&::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5884f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon>& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoon> const& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyBossMoon>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get_useImpulse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useImpulse;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_get_useImpulse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useImpulse;
}
constexpr void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::__cordl_internal_set_useImpulse(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useImpulse = value;
}
inline void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166* GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoon__TryHitPlayer_d__166::GREnemyBossMoon__TryHitPlayer_d__166()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon_LootPhase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon_LootPhase::*)()>(&::GlobalNamespace::GREnemyBossMoon_LootPhase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5884b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon_LootPhase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::GhostReactor::GREnemyType& GlobalNamespace::GREnemyBossMoon_LootPhase::__cordl_internal_get_enemyType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyType;
}
constexpr ::GorillaTagScripts::GhostReactor::GREnemyType const& GlobalNamespace::GREnemyBossMoon_LootPhase::__cordl_internal_get_enemyType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemyType;
}
constexpr void GlobalNamespace::GREnemyBossMoon_LootPhase::__cordl_internal_set_enemyType(::GorillaTagScripts::GhostReactor::GREnemyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemyType = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>& GlobalNamespace::GREnemyBossMoon_LootPhase::__cordl_internal_get_lootTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootTable;
}
constexpr ::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig> const& GlobalNamespace::GREnemyBossMoon_LootPhase::__cordl_internal_get_lootTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lootTable;
}
constexpr void GlobalNamespace::GREnemyBossMoon_LootPhase::__cordl_internal_set_lootTable(::UnityW<::GlobalNamespace::GRBreakableItemSpawnConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lootTable = value;
}
inline void GlobalNamespace::GREnemyBossMoon_LootPhase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon_LootPhase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoon_LootPhase* GlobalNamespace::GREnemyBossMoon_LootPhase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoon_LootPhase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoon_LootPhase::GREnemyBossMoon_LootPhase()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoon_PhaseDef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoon_PhaseDef::*)()>(&::GlobalNamespace::GREnemyBossMoon_PhaseDef::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5884b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_minHP()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHP;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_minHP() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minHP;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_minHP(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minHP = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_attacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attacks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_attacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attacks;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_attacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attacks = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_comboAttacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comboAttacks;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_comboAttacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comboAttacks;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_comboAttacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comboAttacks = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_restAfterAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restAfterAttack;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_restAfterAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___restAfterAttack;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_restAfterAttack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___restAfterAttack = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_comboAttackChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comboAttackChance;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_comboAttackChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___comboAttackChance;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_comboAttackChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___comboAttackChance = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_allowConsecutiveCombos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowConsecutiveCombos;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_allowConsecutiveCombos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowConsecutiveCombos;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_allowConsecutiveCombos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowConsecutiveCombos = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_summons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summons;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>* const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_summons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summons;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_summons(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoon_Behavior>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summons = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_maxSimultaneousEnemies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSimultaneousEnemies;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_maxSimultaneousEnemies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSimultaneousEnemies;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_maxSimultaneousEnemies(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSimultaneousEnemies = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_maxEnemiesForReveal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEnemiesForReveal;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_maxEnemiesForReveal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEnemiesForReveal;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_maxEnemiesForReveal(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEnemiesForReveal = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_attacksBetweenSummons()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attacksBetweenSummons;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_attacksBetweenSummons() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attacksBetweenSummons;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_attacksBetweenSummons(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attacksBetweenSummons = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_retreatAfterSummon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retreatAfterSummon;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_retreatAfterSummon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retreatAfterSummon;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_retreatAfterSummon(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retreatAfterSummon = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_randomSummonChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomSummonChance;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_randomSummonChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomSummonChance;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_randomSummonChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomSummonChance = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_runawayAfterPhase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runawayAfterPhase;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_get_runawayAfterPhase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runawayAfterPhase;
}
constexpr void GlobalNamespace::GREnemyBossMoon_PhaseDef::__cordl_internal_set_runawayAfterPhase(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runawayAfterPhase = value;
}
inline void GlobalNamespace::GREnemyBossMoon_PhaseDef::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoon_PhaseDef* GlobalNamespace::GREnemyBossMoon_PhaseDef::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoon_PhaseDef*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoon_PhaseDef::GREnemyBossMoon_PhaseDef()   {
}
