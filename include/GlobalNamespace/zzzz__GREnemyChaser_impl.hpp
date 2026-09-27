#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyChaser.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_BodyState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackSwipe_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityChase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityFlashed_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityIdle_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityJump_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityPatrol_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityStagger_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityWander_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectible_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyChaser_def.hpp"
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
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::Awake)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5888158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::OnEntityInit)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x5888340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5888978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyChaser::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588897c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5888980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(int64_t)>(&::GlobalNamespace::GREnemyChaser::Setup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5888908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnAgentJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GREnemyChaser::OnAgentJumpRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5888fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(uint8_t)>(&::GlobalNamespace::GREnemyChaser::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5888fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnNetworkBodyStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(uint8_t)>(&::GlobalNamespace::GREnemyChaser::OnNetworkBodyStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5889004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.SetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(int64_t)>(&::GlobalNamespace::GREnemyChaser::SetPatrolPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5888a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.SetNextPatrolNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(int32_t)>(&::GlobalNamespace::GREnemyChaser::SetNextPatrolNode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x588901c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetNextPatrolNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(int32_t)>(&::GlobalNamespace::GREnemyChaser::SetHP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.TrySetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GREnemyChaser_Behavior)>(&::GlobalNamespace::GREnemyChaser::TrySetBehavior)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x588903c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyChaser_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GREnemyChaser_Behavior, bool)>(&::GlobalNamespace::GREnemyChaser::SetBehavior)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x5888af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyChaser_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.PlayAnim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::StringW, float_t, float_t)>(&::GlobalNamespace::GREnemyChaser::PlayAnim)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5889124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"PlayAnim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.SetBodyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GREnemyChaser_BodyState, bool)>(&::GlobalNamespace::GREnemyChaser::SetBodyState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5888e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyChaser_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::RefreshBody)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x58890ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58891f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(float_t)>(&::GlobalNamespace::GREnemyChaser::OnEntityThink)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5889264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x588957c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(float_t)>(&::GlobalNamespace::GREnemyChaser::OnUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5889214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(float_t)>(&::GlobalNamespace::GREnemyChaser::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x58899e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(float_t)>(&::GlobalNamespace::GREnemyChaser::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5889e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyChaser::OnHitByClub)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x5889f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.InstantDeath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::InstantDeath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x588223c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"InstantDeath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnHitByFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyChaser::OnHitByFlash)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0x588a334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyChaser::OnHitByShield)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x588a774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyChaser::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x588a934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.TryHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GREnemyChaser::TryHitPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x588acfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyChaser::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x588ad8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyChaser::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x588b17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyChaser::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x588b24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyChaser::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588b39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyChaser::OnHit)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x588b3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser::*)()>(&::GlobalNamespace::GREnemyChaser::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x588b4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_enemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_enemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemy = value;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_armor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_armor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armor = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittable = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityChase*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityChase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr ::GlobalNamespace::GRAbilityChase* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityChase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityChase = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilitySearch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySearch;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilitySearch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilitySearch;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilitySearch(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilitySearch = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackSwipe*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityAttackSwipe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackSwipe;
}
constexpr ::GlobalNamespace::GRAbilityAttackSwipe* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityAttackSwipe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackSwipe;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityAttackSwipe(::GlobalNamespace::GRAbilityAttackSwipe*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackSwipe = value;
}
constexpr ::GlobalNamespace::GRAbilityStagger*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityStagger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr ::GlobalNamespace::GRAbilityStagger* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityStagger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityStagger = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDie = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityInvestigate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityInvestigate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityInvestigate = value;
}
constexpr ::GlobalNamespace::GRAbilityPatrol*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityPatrol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityPatrol;
}
constexpr ::GlobalNamespace::GRAbilityPatrol* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityPatrol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityPatrol;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityPatrol(::GlobalNamespace::GRAbilityPatrol*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityPatrol = value;
}
constexpr ::GlobalNamespace::GRAbilityWander*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityWander()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityWander;
}
constexpr ::GlobalNamespace::GRAbilityWander* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityWander() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityWander;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityWander(::GlobalNamespace::GRAbilityWander*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityWander = value;
}
constexpr ::GlobalNamespace::GRAbilityFlashed*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityFlashed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityFlashed;
}
constexpr ::GlobalNamespace::GRAbilityFlashed* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityFlashed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityFlashed;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityFlashed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityFlashed = value;
}
constexpr ::GlobalNamespace::GRAbilityJump*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr ::GlobalNamespace::GRAbilityJump* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_abilityJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityJump = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_always()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_always() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___always = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_coreMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_coreMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreMarker = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_corePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_corePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_chaseSoundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseSoundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_chaseSoundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseSoundBank;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_chaseSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseSoundBank = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_attackRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_attackRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_attackRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackRange = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSound = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_damagedSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundVolume = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSounds;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSounds;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_damagedSounds(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSounds = value;
}
constexpr int32_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSoundIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundIndex;
}
constexpr int32_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_damagedSoundIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundIndex;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_damagedSoundIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundIndex = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_fxDamaged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_fxDamaged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxDamaged = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_investigateLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_investigateLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___investigateLocation = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastStaggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStaggerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastStaggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStaggerTime;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_lastStaggerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStaggerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_staggerImmuneTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerImmuneTime;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_staggerImmuneTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___staggerImmuneTime;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_staggerImmuneTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___staggerImmuneTime = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyChaser_Behavior& GlobalNamespace::GREnemyChaser::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyChaser_Behavior const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyChaser_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr ::GlobalNamespace::GREnemyChaser_BodyState& GlobalNamespace::GREnemyChaser::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyChaser_BodyState const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyChaser_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastSeenTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastSeenTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastSeenTargetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr double_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastSeenTargetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_lastSeenTargetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyChaser::__cordl_internal_get_searchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_searchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_searchPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPosition = value;
}
constexpr bool& GlobalNamespace::GREnemyChaser::__cordl_internal_get_canChaseJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr bool const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_canChaseJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_canChaseJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canChaseJump = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_chaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_chaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_chaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpDistance = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_chaseJumpMinInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_chaseJumpMinInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_chaseJumpMinInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpMinInterval = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_minChaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_minChaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_minChaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minChaseJumpDistance = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GREnemyChaser::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
constexpr float_t& GlobalNamespace::GREnemyChaser::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GREnemyChaser::__cordl_internal_get_tryHitPlayerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GREnemyChaser::__cordl_internal_get_tryHitPlayerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr void GlobalNamespace::GREnemyChaser::__cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryHitPlayerCoroutine = value;
}
inline void GlobalNamespace::GREnemyChaser::setStaticF_visibilityHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "visibilityHits", ::GlobalNamespace::GREnemyChaser*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> GlobalNamespace::GREnemyChaser::getStaticF_visibilityHits()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "visibilityHits", ::GlobalNamespace::GREnemyChaser*>();
}
inline void GlobalNamespace::GREnemyChaser::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyChaser*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyChaser::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyChaser*>();
}
inline void GlobalNamespace::GREnemyChaser::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyChaser::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::Setup(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyChaser::OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GREnemyChaser::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyChaser::OnNetworkBodyStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyChaser::SetPatrolPath(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyChaser::SetNextPatrolNode(int32_t  nextPatrolNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetNextPatrolNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPatrolNode);
}
inline void GlobalNamespace::GREnemyChaser::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline bool GlobalNamespace::GREnemyChaser::TrySetBehavior(::GlobalNamespace::GREnemyChaser_Behavior  newBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyChaser_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBehavior);
}
inline void GlobalNamespace::GREnemyChaser::SetBehavior(::GlobalNamespace::GREnemyChaser_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyChaser_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline void GlobalNamespace::GREnemyChaser::PlayAnim(::StringW  animName, float_t  blendTime, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"PlayAnim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animName, blendTime, speed);
}
inline void GlobalNamespace::GREnemyChaser::SetBodyState(::GlobalNamespace::GREnemyChaser_BodyState  newBodyState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyChaser_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBodyState, force);
}
inline void GlobalNamespace::GREnemyChaser::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyChaser::ChooseNewBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyChaser::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyChaser::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyChaser::OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyChaser::InstantDeath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"InstantDeath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser::OnHitByFlash(::GlobalNamespace::GRTool*  grTool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grTool, hit);
}
inline void GlobalNamespace::GREnemyChaser::OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyChaser::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GREnemyChaser::TryHitPlayer(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player);
}
inline void GlobalNamespace::GREnemyChaser::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyChaser::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyChaser::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::GREnemyChaser::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyChaser::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyChaser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyChaser* GlobalNamespace::GREnemyChaser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyChaser*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyChaser::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyChaser::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyChaser::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyChaser::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GREnemyChaser::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GREnemyChaser::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyChaser::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyChaser::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyChaser::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyChaser::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyChaser::GREnemyChaser()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::*)(int32_t)>(&::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x588b608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::*)()>(&::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588b630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::*)()>(&::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::MoveNext)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x588b634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::*)()>(&::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588b7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::*)()>(&::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x588b7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::*)()>(&::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588b828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyChaser>& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyChaser> const& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyChaser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::__cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89* GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyChaser__TryHitPlayer_d__89::GREnemyChaser__TryHitPlayer_d__89()   {
}
