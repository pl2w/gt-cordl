#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyMonkeye.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_BodyState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackLaser_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimpleWander_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityChase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityIdle_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityJump_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityPatrol_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityStagger_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyMonkeye_def.hpp"
#include "GlobalNamespace/zzzz__GREnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseNearby_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__GameHittable_def.hpp"
#include "GlobalNamespace/zzzz__IGameAgentComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::Awake)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x588b8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::OnEntityInit)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x588bac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588c0f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyMonkeye::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588c0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x588c0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(int64_t)>(&::GlobalNamespace::GREnemyMonkeye::Setup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588c088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnAgentJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GREnemyMonkeye::OnAgentJumpRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x588c704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(uint8_t)>(&::GlobalNamespace::GREnemyMonkeye::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x588c734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnNetworkBodyStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(uint8_t)>(&::GlobalNamespace::GREnemyMonkeye::OnNetworkBodyStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x588c74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.SetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(int64_t)>(&::GlobalNamespace::GREnemyMonkeye::SetPatrolPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x588c1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(int32_t)>(&::GlobalNamespace::GREnemyMonkeye::SetHP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588c764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.TrySetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GREnemyMonkeye_Behavior)>(&::GlobalNamespace::GREnemyMonkeye::TrySetBehavior)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x588c76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyMonkeye_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GREnemyMonkeye_Behavior, bool)>(&::GlobalNamespace::GREnemyMonkeye::SetBehavior)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x588c270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyMonkeye_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.CalcMaxHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::CalcMaxHP)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x588c85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"CalcMaxHP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.SetBodyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GREnemyMonkeye_BodyState, bool)>(&::GlobalNamespace::GREnemyMonkeye::SetBodyState)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x588c564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyMonkeye_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::RefreshBody)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x588c7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588c8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(float_t)>(&::GlobalNamespace::GREnemyMonkeye::OnEntityThink)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x588c938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.TryChooseAttackBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyMonkeye::*)(float_t)>(&::GlobalNamespace::GREnemyMonkeye::TryChooseAttackBehavior)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x588d0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"TryChooseAttackBehavior", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x588cc68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(float_t)>(&::GlobalNamespace::GREnemyMonkeye::OnUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x588c8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(float_t)>(&::GlobalNamespace::GREnemyMonkeye::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x588d22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(float_t)>(&::GlobalNamespace::GREnemyMonkeye::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x588d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyMonkeye::OnHitByClub)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x588d798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.InstantDeath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::InstantDeath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x588db94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"InstantDeath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnHitByFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyMonkeye::OnHitByFlash)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588dbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyMonkeye::OnHitByShield)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x588dbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyMonkeye::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x588dbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.TryHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GREnemyMonkeye::TryHitPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x588dfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyMonkeye::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x588e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyMonkeye::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x588e360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyMonkeye::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x588e430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyMonkeye::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyMonkeye::OnHit)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x588e588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye::*)()>(&::GlobalNamespace::GREnemyMonkeye::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x588e6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_enemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_enemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemy = value;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_armor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_armor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armor = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittable = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityChase*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityChase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr ::GlobalNamespace::GRAbilityChase* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityChase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityChase = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilitySearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySearch;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilitySearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySearch;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilitySearch(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySearch = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackLaser*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityAttackLaser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackLaser;
}
constexpr ::GlobalNamespace::GRAbilityAttackLaser* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityAttackLaser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackLaser;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityAttackLaser(::GlobalNamespace::GRAbilityAttackLaser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackLaser = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimpleWander*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityAttackDiscoWander()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackDiscoWander;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimpleWander* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityAttackDiscoWander() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackDiscoWander;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityAttackDiscoWander(::GlobalNamespace::GRAbilityAttackSimpleWander*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackDiscoWander = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityAttackSlamdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackSlamdown;
}
constexpr ::GlobalNamespace::GRAbilityAttackSimple* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityAttackSlamdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackSlamdown;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityAttackSlamdown(::GlobalNamespace::GRAbilityAttackSimple*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackSlamdown = value;
}
constexpr bool& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_allowStagger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowStagger;
}
constexpr bool const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_allowStagger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowStagger;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_allowStagger(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowStagger = value;
}
constexpr ::GlobalNamespace::GRAbilityStagger*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityStagger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr ::GlobalNamespace::GRAbilityStagger* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityStagger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityStagger = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDie = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityInvestigate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityInvestigate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityInvestigate = value;
}
constexpr ::GlobalNamespace::GRAbilityPatrol*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityPatrol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityPatrol;
}
constexpr ::GlobalNamespace::GRAbilityPatrol* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityPatrol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityPatrol;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityPatrol(::GlobalNamespace::GRAbilityPatrol*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityPatrol = value;
}
constexpr ::GlobalNamespace::GRAbilityJump*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr ::GlobalNamespace::GRAbilityJump* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_abilityJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityJump = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_always()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_always() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___always = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_attackRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_attackRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_attackRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackRange = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSound = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_damagedSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundVolume = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSounds;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_damagedSounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSounds = value;
}
constexpr int32_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSoundIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundIndex;
}
constexpr int32_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_damagedSoundIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundIndex;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_damagedSoundIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_fxDamaged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_fxDamaged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxDamaged = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_investigateLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_investigateLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___investigateLocation = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastStaggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStaggerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastStaggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStaggerTime;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_lastStaggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStaggerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_staggerImmuneTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerImmuneTime;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_staggerImmuneTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerImmuneTime;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_staggerImmuneTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staggerImmuneTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyMonkeye_Behavior const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyMonkeye_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr ::GlobalNamespace::GREnemyMonkeye_BodyState& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyMonkeye_BodyState const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyMonkeye_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastSeenTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastSeenTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastSeenTargetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr double_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastSeenTargetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_lastSeenTargetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_searchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_searchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_searchPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastJumpEndtime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJumpEndtime;
}
constexpr double_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastJumpEndtime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastJumpEndtime;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_lastJumpEndtime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastJumpEndtime = value;
}
constexpr bool& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_canChaseJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr bool const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_canChaseJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_canChaseJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canChaseJump = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_chaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_chaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_chaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpDistance = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_chaseJumpMinInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_chaseJumpMinInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_chaseJumpMinInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpMinInterval = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_minChaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_minChaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_minChaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minChaseJumpDistance = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
constexpr float_t& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_tryHitPlayerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GREnemyMonkeye::__cordl_internal_get_tryHitPlayerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr void GlobalNamespace::GREnemyMonkeye::__cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryHitPlayerCoroutine = value;
}
inline void GlobalNamespace::GREnemyMonkeye::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyMonkeye*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyMonkeye::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyMonkeye*>();
}
inline void GlobalNamespace::GREnemyMonkeye::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyMonkeye::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::Setup(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyMonkeye::OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GREnemyMonkeye::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyMonkeye::OnNetworkBodyStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyMonkeye::SetPatrolPath(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyMonkeye::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline bool GlobalNamespace::GREnemyMonkeye::TrySetBehavior(::GlobalNamespace::GREnemyMonkeye_Behavior  newBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyMonkeye_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBehavior);
}
inline void GlobalNamespace::GREnemyMonkeye::SetBehavior(::GlobalNamespace::GREnemyMonkeye_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyMonkeye_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline int32_t GlobalNamespace::GREnemyMonkeye::CalcMaxHP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"CalcMaxHP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::SetBodyState(::GlobalNamespace::GREnemyMonkeye_BodyState  newBodyState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyMonkeye_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBodyState, force);
}
inline void GlobalNamespace::GREnemyMonkeye::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::GREnemyMonkeye::TryChooseAttackBehavior(float_t  toPlayerDistSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"TryChooseAttackBehavior", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, toPlayerDistSq);
}
inline void GlobalNamespace::GREnemyMonkeye::ChooseNewBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyMonkeye::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyMonkeye::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyMonkeye::OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyMonkeye::InstantDeath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"InstantDeath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye::OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grTool, hit);
}
inline void GlobalNamespace::GREnemyMonkeye::OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyMonkeye::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GREnemyMonkeye::TryHitPlayer(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player);
}
inline void GlobalNamespace::GREnemyMonkeye::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyMonkeye::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyMonkeye::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::GREnemyMonkeye::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyMonkeye::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyMonkeye::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyMonkeye* GlobalNamespace::GREnemyMonkeye::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyMonkeye*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyMonkeye::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyMonkeye::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyMonkeye::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyMonkeye::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GREnemyMonkeye::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GREnemyMonkeye::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyMonkeye::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyMonkeye::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyMonkeye::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyMonkeye::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyMonkeye::GREnemyMonkeye()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::*)(int32_t)>(&::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x588e04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::*)()>(&::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::*)()>(&::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x588e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::*)()>(&::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::*)()>(&::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x588ea28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::*)()>(&::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588ea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyMonkeye>& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyMonkeye> const& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyMonkeye>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::__cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87* GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyMonkeye__TryHitPlayer_d__87::GREnemyMonkeye__TryHitPlayer_d__87()   {
}
