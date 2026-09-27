#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyRanged.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_BodyState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityFlashed_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityJump_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityKeepDistance_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityPatrol_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityStagger_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectible_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyRanged_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GREnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRRangedEnemyProjectile_def.hpp"
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
#include "GlobalNamespace/zzzz__IGameProjectileLauncher_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.IsMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::IsMoving)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x58936e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"IsMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.SoftResetThrowableHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::SoftResetThrowableHead)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5893724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SoftResetThrowableHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.ForceResetThrowableHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::ForceResetThrowableHead)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58937bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"ForceResetThrowableHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.ForceHeadToDeadState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::ForceHeadToDeadState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x589384c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"ForceHeadToDeadState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.EnableVFXForShoulderHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::EnableVFXForShoulderHead)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58938dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"EnableVFXForShoulderHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.EnableVFXForHeadInHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::EnableVFXForHeadInHand)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5893968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"EnableVFXForHeadInHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.DisableHeadInHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::DisableHeadInHand)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58939f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"DisableHeadInHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.DisableHeadOnShoulderAndHeadInHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::DisableHeadOnShoulderAndHeadInHand)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5893a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"DisableHeadOnShoulderAndHeadInHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::Awake)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5893aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::OnEntityInit)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5893d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5894254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyRanged::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5894258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x589425c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(int64_t)>(&::GlobalNamespace::GREnemyRanged::Setup)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x589419c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnAgentJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GREnemyRanged::OnAgentJumpRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5894bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(uint8_t)>(&::GlobalNamespace::GREnemyRanged::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5894bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnNetworkBodyStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(uint8_t)>(&::GlobalNamespace::GREnemyRanged::OnNetworkBodyStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5894c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.SetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(int64_t)>(&::GlobalNamespace::GREnemyRanged::SetPatrolPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x589442c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(int32_t)>(&::GlobalNamespace::GREnemyRanged::SetHP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5894c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.TrySetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GREnemyRanged_Behavior)>(&::GlobalNamespace::GREnemyRanged::TrySetBehavior)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5894c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyRanged_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GREnemyRanged_Behavior, bool)>(&::GlobalNamespace::GREnemyRanged::SetBehavior)> {
  constexpr static std::size_t size = 0x548;
  constexpr static std::size_t addrs = 0x58944c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyRanged_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.PlayAnim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::StringW, float_t, float_t)>(&::GlobalNamespace::GREnemyRanged::PlayAnim)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5894c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"PlayAnim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.SetBodyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GREnemyRanged_BodyState, bool)>(&::GlobalNamespace::GREnemyRanged::SetBodyState)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5894a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyRanged_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::RefreshBody)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5894d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::Update)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5894df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(float_t)>(&::GlobalNamespace::GREnemyRanged::OnEntityThink)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58958e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::UpdateTarget)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x58959a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"UpdateTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5895cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(float_t)>(&::GlobalNamespace::GREnemyRanged::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x7b8;
  constexpr static std::size_t addrs = 0x5894e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(float_t)>(&::GlobalNamespace::GREnemyRanged::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5895600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.UpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::UpdateShared)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x58957d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"UpdateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.UpdateSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::UpdateSearch)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5895e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"UpdateSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyRanged::OnHitByClub)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x58961d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.InstantDeath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::InstantDeath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5896514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"InstantDeath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnHitByFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyRanged::OnHitByFlash)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5896540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyRanged::OnHitByShield)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5896990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyRanged::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58969c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyRanged::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5896a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyRanged::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5896be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyRanged::OnHit)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5896bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.RequestRangedAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, double_t)>(&::GlobalNamespace::GREnemyRanged::RequestRangedAttack)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5896d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"RequestRangedAttack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.DestroyProjectile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::DestroyProjectile)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x589433c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"DestroyProjectile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.FireRangedAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GREnemyRanged::FireRangedAttack)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5895fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"FireRangedAttack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.CalculateLaunchDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::GlobalNamespace::GREnemyRanged::CalculateLaunchDirection)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5896d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"CalculateLaunchDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnProjectileInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GRRangedEnemyProjectile*)>(&::GlobalNamespace::GREnemyRanged::OnProjectileInit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5897034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnProjectileInit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.OnProjectileHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::GlobalNamespace::GRRangedEnemyProjectile*, ::UnityEngine::Collision*)>(&::GlobalNamespace::GREnemyRanged::OnProjectileHit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5897064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyRanged::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x5897068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyRanged._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyRanged::*)()>(&::GlobalNamespace::GREnemyRanged::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x589752c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_enemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_enemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemy = value;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_armor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_armor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armor = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittable = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::GlobalNamespace::GRAbilityStagger*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityStagger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr ::GlobalNamespace::GRAbilityStagger* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityStagger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityStagger = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDie = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityInvestigate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityInvestigate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityInvestigate = value;
}
constexpr ::GlobalNamespace::GRAbilityPatrol*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityPatrol()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityPatrol;
}
constexpr ::GlobalNamespace::GRAbilityPatrol* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityPatrol() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityPatrol;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityPatrol(::GlobalNamespace::GRAbilityPatrol*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityPatrol = value;
}
constexpr ::GlobalNamespace::GRAbilityFlashed*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityFlashed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityFlashed;
}
constexpr ::GlobalNamespace::GRAbilityFlashed* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityFlashed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityFlashed;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityFlashed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityFlashed = value;
}
constexpr ::GlobalNamespace::GRAbilityKeepDistance*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityKeepDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityKeepDistance;
}
constexpr ::GlobalNamespace::GRAbilityKeepDistance* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityKeepDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityKeepDistance;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityKeepDistance(::GlobalNamespace::GRAbilityKeepDistance*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityKeepDistance = value;
}
constexpr ::GlobalNamespace::GRAbilityJump*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr ::GlobalNamespace::GRAbilityJump* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_abilityJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityJump = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_always()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_always() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___always = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_coreMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_coreMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreMarker = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_corePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_corePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_sightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_sightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_sightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightDist = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_loseSightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDist;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_loseSightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loseSightDist;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_loseSightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loseSightDist = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_sightFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_sightFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightFOV;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_sightFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightFOV = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_sightLostFollowStopTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightLostFollowStopTime;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_sightLostFollowStopTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightLostFollowStopTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_sightLostFollowStopTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightLostFollowStopTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_searchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTime;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_searchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_searchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_turnSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_turnSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___turnSpeed;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_turnSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___turnSpeed = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GREnemyRanged::__cordl_internal_get_chaseColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_chaseColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseColor;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_chaseColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseColor = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_attackAbilitySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAbilitySound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_attackAbilitySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackAbilitySound;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_attackAbilitySound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackAbilitySound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_chaseAbilitySound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseAbilitySound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_chaseAbilitySound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseAbilitySound;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_chaseAbilitySound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseAbilitySound = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackDistMin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackDistMin;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackDistMin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackDistMin;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedAttackDistMin(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedAttackDistMin = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackDistMax()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackDistMax;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackDistMax() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackDistMax;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedAttackDistMax(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedAttackDistMax = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackChargeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackChargeTime;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackChargeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackChargeTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedAttackChargeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedAttackChargeTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackRecoverTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackRecoverTime;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackRecoverTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackRecoverTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedAttackRecoverTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedAttackRecoverTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileSpeed;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_projectileSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileSpeed = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileHitRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHitRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileHitRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHitRadius;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_projectileHitRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileHitRadius = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedProjectilePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedProjectilePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedProjectilePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedProjectilePrefab;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedProjectilePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedProjectilePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedProjectileFirePoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedProjectileFirePoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedProjectileFirePoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedProjectileFirePoint;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedProjectileFirePoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedProjectileFirePoint = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_audioSecondarySource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSecondarySource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_audioSecondarySource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSecondarySource;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_audioSecondarySource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSecondarySource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_damagedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_damagedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSound;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_damagedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSound = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_damagedSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_damagedSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___damagedSoundVolume;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_damagedSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___damagedSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_fxDamaged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_fxDamaged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fxDamaged;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_fxDamaged(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fxDamaged = value;
}
constexpr bool& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMoving;
}
constexpr bool const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastMoving;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_lastMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastMoving = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_investigateLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_investigateLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___investigateLocation = value;
}
constexpr bool& GlobalNamespace::GREnemyRanged::__cordl_internal_get_debugLog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLog;
}
constexpr bool const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_debugLog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugLog;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_debugLog(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugLog = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadOnShoulders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadOnShoulders;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadOnShoulders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadOnShoulders;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterHeadOnShoulders(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterHeadOnShoulders = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadOnShouldersLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadOnShouldersLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadOnShouldersLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadOnShouldersLight;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterHeadOnShouldersLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterHeadOnShouldersLight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadOnShouldersVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadOnShouldersVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadOnShouldersVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadOnShouldersVFX;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterHeadOnShouldersVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterHeadOnShouldersVFX = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadInHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadInHand;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadInHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadInHand;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterHeadInHand(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterHeadInHand = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadInHandLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadInHandLight;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadInHandLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadInHandLight;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterHeadInHandLight(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterHeadInHandLight = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadInHandVFX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadInHandVFX;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterHeadInHandVFX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterHeadInHandVFX;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterHeadInHandVFX(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterHeadInHandVFX = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterLightTurnOffDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterLightTurnOffDelay;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterLightTurnOffDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterLightTurnOffDelay;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterLightTurnOffDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterLightTurnOffDelay = value;
}
constexpr bool& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headLightReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headLightReset;
}
constexpr bool const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headLightReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headLightReset;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_headLightReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headLightReset = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterLightTurnOffTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterLightTurnOffTime;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_spitterLightTurnOffTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spitterLightTurnOffTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_spitterLightTurnOffTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spitterLightTurnOffTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headRemovalFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRemovalFrame;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headRemovalFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRemovalFrame;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_headRemovalFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRemovalFrame = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headRemovaltime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRemovaltime;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headRemovaltime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRemovaltime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_headRemovaltime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRemovaltime = value;
}
constexpr bool& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRemoved;
}
constexpr bool const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_headRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headRemoved;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_headRemoved(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headRemoved = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyRanged_Behavior& GlobalNamespace::GREnemyRanged::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyRanged_Behavior const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyRanged_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_behaviorEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_behaviorEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_behaviorEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorEndTime = value;
}
constexpr ::GlobalNamespace::GREnemyRanged_BodyState& GlobalNamespace::GREnemyRanged::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyRanged_BodyState const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyRanged_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr int32_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_nextPatrolNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr int32_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_nextPatrolNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_nextPatrolNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPatrolNode = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastSeenTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastSeenTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastSeenTargetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastSeenTargetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_lastSeenTargetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyRanged::__cordl_internal_get_searchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_searchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_searchPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedFiringPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedFiringPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedFiringPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedFiringPosition;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedFiringPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedFiringPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedTargetPosition;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedTargetPosition = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_bestTargetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestTargetPlayer;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_bestTargetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestTargetPlayer;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_bestTargetPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestTargetPlayer = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_bestTargetNetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestTargetNetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_bestTargetNetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestTargetNetPlayer;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_bestTargetNetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestTargetNetPlayer = value;
}
constexpr bool& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackQueued;
}
constexpr bool const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedAttackQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedAttackQueued;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedAttackQueued(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedAttackQueued = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_queuedFiringTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedFiringTime;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_queuedFiringTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedFiringTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_queuedFiringTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedFiringTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyRanged::__cordl_internal_get_queuedFiringPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedFiringPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_queuedFiringPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedFiringPosition;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_queuedFiringPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedFiringPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyRanged::__cordl_internal_get_queuedTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_queuedTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedTargetPosition;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_queuedTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedTargetPosition = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedProjectileInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedProjectileInstance;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rangedProjectileInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangedProjectileInstance;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rangedProjectileInstance(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangedProjectileInstance = value;
}
constexpr bool& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileHasImpacted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHasImpacted;
}
constexpr bool const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileHasImpacted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileHasImpacted;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_projectileHasImpacted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileHasImpacted = value;
}
constexpr double_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileImpactTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileImpactTime;
}
constexpr double_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_projectileImpactTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___projectileImpactTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_projectileImpactTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___projectileImpactTime = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyRanged::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GREnemyRanged::__cordl_internal_get_visibilityLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityLayerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_visibilityLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityLayerMask;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_visibilityLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibilityLayerMask = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GREnemyRanged::__cordl_internal_get_defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColor = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyRanged::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GREnemyRanged::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GREnemyRanged::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
inline void GlobalNamespace::GREnemyRanged::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyRanged*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyRanged::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyRanged*>();
}
inline bool GlobalNamespace::GREnemyRanged::IsMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"IsMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::SoftResetThrowableHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SoftResetThrowableHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::ForceResetThrowableHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"ForceResetThrowableHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::ForceHeadToDeadState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"ForceHeadToDeadState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::EnableVFXForShoulderHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"EnableVFXForShoulderHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::EnableVFXForHeadInHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"EnableVFXForHeadInHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::DisableHeadInHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"DisableHeadInHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::DisableHeadOnShoulderAndHeadInHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"DisableHeadOnShoulderAndHeadInHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyRanged::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::Setup(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyRanged::OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GREnemyRanged::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyRanged::OnNetworkBodyStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyRanged::SetPatrolPath(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyRanged::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline bool GlobalNamespace::GREnemyRanged::TrySetBehavior(::GlobalNamespace::GREnemyRanged_Behavior  newBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyRanged_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBehavior);
}
inline void GlobalNamespace::GREnemyRanged::SetBehavior(::GlobalNamespace::GREnemyRanged_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyRanged_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline void GlobalNamespace::GREnemyRanged::PlayAnim(::StringW  animName, float_t  blendTime, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"PlayAnim", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animName, blendTime, speed);
}
inline void GlobalNamespace::GREnemyRanged::SetBodyState(::GlobalNamespace::GREnemyRanged_BodyState  newBodyState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyRanged_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBodyState, force);
}
inline void GlobalNamespace::GREnemyRanged::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyRanged::UpdateTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"UpdateTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::ChooseNewBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyRanged::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyRanged::UpdateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"UpdateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::UpdateSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"UpdateSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyRanged::InstantDeath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"InstantDeath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::OnHitByFlash(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyRanged::OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyRanged::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyRanged::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::GREnemyRanged::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyRanged::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyRanged::RequestRangedAttack(::UnityEngine::Vector3  firingPosition, ::UnityEngine::Vector3  targetPosition, double_t  fireTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"RequestRangedAttack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firingPosition, targetPosition, fireTime);
}
inline void GlobalNamespace::GREnemyRanged::DestroyProjectile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"DestroyProjectile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyRanged::FireRangedAttack(::UnityEngine::Vector3  launchPosition, ::UnityEngine::Vector3  targetPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"FireRangedAttack", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, launchPosition, targetPosition);
}
inline bool GlobalNamespace::GREnemyRanged::CalculateLaunchDirection(::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  targetPos, float_t  speed, ::by_ref<::UnityEngine::Vector3>  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"CalculateLaunchDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, startPos, targetPos, speed, direction);
}
inline void GlobalNamespace::GREnemyRanged::OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnProjectileInit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile);
}
inline void GlobalNamespace::GREnemyRanged::OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile, ::UnityEngine::Collision*  collision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"OnProjectileHit", {}, {::i2c::type_of<::GlobalNamespace::GRRangedEnemyProjectile*>(), ::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, projectile, collision);
}
inline void GlobalNamespace::GREnemyRanged::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyRanged::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyRanged*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyRanged* GlobalNamespace::GREnemyRanged::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyRanged*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyRanged::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyRanged::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyRanged::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyRanged::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GREnemyRanged::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GREnemyRanged::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyRanged::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyRanged::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameProjectileLauncher"
constexpr  GlobalNamespace::GREnemyRanged::operator ::GlobalNamespace::IGameProjectileLauncher*() noexcept {
return static_cast<::GlobalNamespace::IGameProjectileLauncher*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameProjectileLauncher"
constexpr ::GlobalNamespace::IGameProjectileLauncher* GlobalNamespace::GREnemyRanged::i___GlobalNamespace__IGameProjectileLauncher() noexcept {
return static_cast<::GlobalNamespace::IGameProjectileLauncher*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyRanged::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyRanged::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyRanged::GREnemyRanged()   {
}
