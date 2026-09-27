#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeyeAI.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__MazePlayerCollection_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_EStates_def.hpp"
#include "GlobalNamespace/zzzz__MonkeyeAI_ReplState_def.hpp"
#include "GlobalNamespace/zzzz__Monkeye_LazerFX_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCollection_def.hpp"
#include "GlobalNamespace/zzzz__RequestableOwnershipGuard_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "Pathfinding/zzzz__AIDestinationSetter_def.hpp"
#include "Pathfinding/zzzz__AILerp_def.hpp"
#include "Pathfinding/zzzz__AIPath_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.UserIdFromRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MonkeyeAI::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::MonkeyeAI::UserIdFromRig)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5c01bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"UserIdFromRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.GetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::MonkeyeAI::*)(::StringW)>(&::GlobalNamespace::MonkeyeAI::GetRig)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0x5c01e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"GetRig", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.Distance2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MonkeyeAI::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::MonkeyeAI::Distance2D)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c02478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Distance2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.PickRandomPatrolPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::PickRandomPatrolPoint)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c024f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"PickRandomPatrolPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.PickNewPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(bool)>(&::GlobalNamespace::MonkeyeAI::PickNewPath)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5c0257c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"PickNewPath", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::Awake)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5c02d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::Start)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c031ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(::Pathfinding::Path*)>(&::GlobalNamespace::MonkeyeAI::OnPathComplete)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5c03228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.FollowPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::FollowPath)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5c03318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"FollowPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.PlayerNear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeyeAI::*)(::GlobalNamespace::VRRig*, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MonkeyeAI::PlayerNear)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5c0373c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"PlayerNear", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.Sleeping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::Sleeping)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c039f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Sleeping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.ClosestPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeyeAI::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::GlobalNamespace::VRRig*>)>(&::GlobalNamespace::MonkeyeAI::ClosestPlayer)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c02ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ClosestPlayer", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VRRig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.CheckForChase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::CheckForChase)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5c03a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"CheckForChase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetChasePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::MonkeyeAI::SetChasePlayer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5c03c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetChasePlayer", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetSleep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::SetSleep)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5c03ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetSleep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.Patrolling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::Patrolling)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c03cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Patrolling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.Chasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::Chasing)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5c03d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Chasing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.ReturnToSleepPt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::ReturnToSleepPt)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c03ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ReturnToSleepPt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.UpdateClientState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::UpdateClientState)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5c03f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"UpdateClientState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::SetDefaultState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c04508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetDefaultState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetDefaultAttackState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::SetDefaultAttackState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c03110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetDefaultAttackState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.ExitAttackState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::ExitAttackState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c04b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ExitAttackState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.BeginAttack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::BeginAttack)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c04b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"BeginAttack", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.OpenFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::OpenFloor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c04be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OpenFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.DropPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::DropPlayer)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c04c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"DropPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.CloseFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::CloseFloor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c04c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"CloseFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.ValidateChasingRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::ValidateChasingRig)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5c04cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ValidateChasingRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(::GlobalNamespace::MonkeyeAI_ReplState_EStates)>(&::GlobalNamespace::MonkeyeAI::SetState)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5c027f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetClientState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(::GlobalNamespace::MonkeyeAI_ReplState_EStates)>(&::GlobalNamespace::MonkeyeAI::SetClientState)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x5c047d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetClientState", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.setEyeColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(::UnityEngine::Color)>(&::GlobalNamespace::MonkeyeAI::setEyeColor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5c04ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"setEyeColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.GetValidChoosableRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::GetValidChoosableRigs)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5c021cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"GetValidChoosableRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::SliceUpdate)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x5c04f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c054c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c054d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.AntiOverlapAssurance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::AntiOverlapAssurance)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x5c054dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"AntiOverlapAssurance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI.SetTargetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::MonkeyeAI::SetTargetPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c02c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeyeAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeyeAI::*)()>(&::GlobalNamespace::MonkeyeAI::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5c059b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolPts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolPts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPts;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_patrolPts(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPts = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepPt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepPt;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepPt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepPt;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_sleepPt(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepPt = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolIdx;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolIdx;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_patrolIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolIdx = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolCount;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolCount;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_patrolCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolCount = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeyeAI::__cordl_internal_get_targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPosition;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPosition = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MonkeyeAI::__cordl_internal_get_portalMatPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalMatPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_portalMatPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalMatPropBlock;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_portalMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalMatPropBlock = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeMatPropBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeMatPropBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeMatPropBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeMatPropBlock;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_monkEyeMatPropBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkEyeMatPropBlock = value;
}
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityW<::Pathfinding::AIDestinationSetter>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_aiDest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiDest;
}
constexpr ::UnityW<::Pathfinding::AIDestinationSetter> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_aiDest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiDest;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_aiDest(::UnityW<::Pathfinding::AIDestinationSetter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aiDest = value;
}
constexpr ::UnityW<::Pathfinding::AIPath>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_aiPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiPath;
}
constexpr ::UnityW<::Pathfinding::AIPath> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_aiPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiPath;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_aiPath(::UnityW<::Pathfinding::AIPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aiPath = value;
}
constexpr ::UnityW<::Pathfinding::AILerp>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_aiLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiLerp;
}
constexpr ::UnityW<::Pathfinding::AILerp> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_aiLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiLerp;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_aiLerp(::UnityW<::Pathfinding::AILerp>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aiLerp = value;
}
constexpr ::UnityW<::Pathfinding::Seeker>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_seeker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr ::UnityW<::Pathfinding::Seeker> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_seeker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seeker = value;
}
constexpr ::Pathfinding::Path*& GlobalNamespace::MonkeyeAI::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_currentWaypoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypoint;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_currentWaypoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWaypoint;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_currentWaypoint(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWaypoint = value;
}
constexpr bool& GlobalNamespace::MonkeyeAI::__cordl_internal_get_calculatingPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatingPath;
}
constexpr bool const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_calculatingPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatingPath;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_calculatingPath(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calculatingPath = value;
}
constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_lazerFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazerFx;
}
constexpr ::UnityW<::GlobalNamespace::Monkeye_LazerFX> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_lazerFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lazerFx;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_lazerFx(::UnityW<::GlobalNamespace::Monkeye_LazerFX>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lazerFx = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_animController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animController;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_animController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animController;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_animController(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animController = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_rayResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayResults;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_rayResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayResults;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_rayResults(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayResults = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerMask;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerMask = value;
}
constexpr bool& GlobalNamespace::MonkeyeAI::__cordl_internal_get_wasConnectedToRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasConnectedToRoom;
}
constexpr bool const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_wasConnectedToRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasConnectedToRoom;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_wasConnectedToRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasConnectedToRoom = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_skinnedMeshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMeshRenderer;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_skinnedMeshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedMeshRenderer;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedMeshRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_playerCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCollection;
}
constexpr ::UnityW<::GlobalNamespace::MazePlayerCollection> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_playerCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCollection;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_playerCollection(::UnityW<::GlobalNamespace::MazePlayerCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCollection = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCollection>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_playersInRoomCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRoomCollection;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCollection> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_playersInRoomCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersInRoomCollection;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_playersInRoomCollection(::UnityW<::GlobalNamespace::PlayerCollection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersInRoomCollection = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::MonkeyeAI::__cordl_internal_get_validRigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validRigs;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_validRigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validRigs;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_validRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validRigs = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_portalFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalFx;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_portalFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalFx;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_portalFx(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalFx = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_eyeBones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeBones;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_eyeBones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eyeBones;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_eyeBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eyeBones = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_wakeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wakeDistance;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_wakeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wakeDistance;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_wakeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wakeDistance = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseDistance;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseDistance;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_chaseDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseDistance = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepDuration;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepDuration;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_sleepDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepDuration = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_attackDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDistance;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_attackDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackDistance;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_attackDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackDistance = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_beginAttackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginAttackTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_beginAttackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginAttackTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_beginAttackTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beginAttackTime = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_openFloorTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openFloorTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_openFloorTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___openFloorTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_openFloorTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___openFloorTime = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_dropPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPlayerTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_dropPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dropPlayerTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_dropPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dropPlayerTime = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_closeFloorTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeFloorTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_closeFloorTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closeFloorTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_closeFloorTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closeFloorTime = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeyeAI::__cordl_internal_get_portalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_portalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalColor;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_portalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeyeAI::__cordl_internal_get_gorillaPortalColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaPortalColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_gorillaPortalColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaPortalColor;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_gorillaPortalColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaPortalColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeColor;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_monkEyeColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkEyeColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeEyeColorNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeEyeColorNormal;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeEyeColorNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeEyeColorNormal;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_monkEyeEyeColorNormal(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkEyeEyeColorNormal = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeEyeColorAttacking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeEyeColorAttacking;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_monkEyeEyeColorAttacking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___monkEyeEyeColorAttacking;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_monkEyeEyeColorAttacking(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___monkEyeEyeColorAttacking = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_maxPatrols()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPatrols;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_maxPatrols() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPatrols;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_maxPatrols(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPatrols = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_targetRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_targetRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRig = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
constexpr ::UnityW<::GlobalNamespace::MonkeyeAI_ReplState>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_replState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replState;
}
constexpr ::UnityW<::GlobalNamespace::MonkeyeAI_ReplState> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_replState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replState;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_replState(::UnityW<::GlobalNamespace::MonkeyeAI_ReplState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replState = value;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates& GlobalNamespace::MonkeyeAI::__cordl_internal_get_previousState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr ::GlobalNamespace::MonkeyeAI_ReplState_EStates const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_previousState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_previousState(::GlobalNamespace::MonkeyeAI_ReplState_EStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousState = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_replStateRequestableOwnershipGaurd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replStateRequestableOwnershipGaurd;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_replStateRequestableOwnershipGaurd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___replStateRequestableOwnershipGaurd;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_replStateRequestableOwnershipGaurd(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___replStateRequestableOwnershipGaurd = value;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_myRequestableOwnershipGaurd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRequestableOwnershipGaurd;
}
constexpr ::UnityW<::GlobalNamespace::RequestableOwnershipGuard> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_myRequestableOwnershipGaurd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRequestableOwnershipGaurd;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_myRequestableOwnershipGaurd(::UnityW<::GlobalNamespace::RequestableOwnershipGuard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRequestableOwnershipGaurd = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerBase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerBase;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerBase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerBase;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_layerBase(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerBase = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerForward;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerForward;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_layerForward(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerForward = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerLeft;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerLeft;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_layerLeft(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerLeft = value;
}
constexpr int32_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerRight;
}
constexpr int32_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_layerRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layerRight;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_layerRight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layerRight = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeyeAI::__cordl_internal_get_prevPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_prevPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPosition;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_prevPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MonkeyeAI::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_velocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepLoopSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepLoopSound;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_sleepLoopSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepLoopSound = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepLoopVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepLoopVolume;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_sleepLoopVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sleepLoopVolume;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_sleepLoopVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sleepLoopVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoopSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoopSound;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_patrolLoopSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolLoopSound = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolLoopVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoopVolume;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolLoopVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoopVolume;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_patrolLoopVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolLoopVolume = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolLoopFadeInTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoopFadeInTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_patrolLoopFadeInTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoopFadeInTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_patrolLoopFadeInTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolLoopFadeInTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoopSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoopSound;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_chaseLoopSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseLoopSound = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseLoopVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoopVolume;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseLoopVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoopVolume;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_chaseLoopVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseLoopVolume = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseLoopFadeInTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoopFadeInTime;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_chaseLoopFadeInTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoopFadeInTime;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_chaseLoopFadeInTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseLoopFadeInTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeyeAI::__cordl_internal_get_attackSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_attackSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackSound;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_attackSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackSound = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_attackVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackVolume;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_attackVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackVolume;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_attackVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackVolume = value;
}
constexpr float_t& GlobalNamespace::MonkeyeAI::__cordl_internal_get_overlapRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapRadius;
}
constexpr float_t const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_overlapRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapRadius;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_overlapRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapRadius = value;
}
constexpr bool& GlobalNamespace::MonkeyeAI::__cordl_internal_get_lockedOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedOn;
}
constexpr bool const& GlobalNamespace::MonkeyeAI::__cordl_internal_get_lockedOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockedOn;
}
constexpr void GlobalNamespace::MonkeyeAI::__cordl_internal_set_lockedOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockedOn = value;
}
inline void GlobalNamespace::MonkeyeAI::setStaticF_EmissionColorShaderProp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EmissionColorShaderProp", ::GlobalNamespace::MonkeyeAI*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MonkeyeAI::getStaticF_EmissionColorShaderProp()  {
return ::cordl_internals::getStaticField<int32_t, "EmissionColorShaderProp", ::GlobalNamespace::MonkeyeAI*>();
}
inline void GlobalNamespace::MonkeyeAI::setStaticF_ColorShaderProp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "ColorShaderProp", ::GlobalNamespace::MonkeyeAI*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MonkeyeAI::getStaticF_ColorShaderProp()  {
return ::cordl_internals::getStaticField<int32_t, "ColorShaderProp", ::GlobalNamespace::MonkeyeAI*>();
}
inline void GlobalNamespace::MonkeyeAI::setStaticF_EyeColorShaderProp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "EyeColorShaderProp", ::GlobalNamespace::MonkeyeAI*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MonkeyeAI::getStaticF_EyeColorShaderProp()  {
return ::cordl_internals::getStaticField<int32_t, "EyeColorShaderProp", ::GlobalNamespace::MonkeyeAI*>();
}
inline void GlobalNamespace::MonkeyeAI::setStaticF_tintColorShaderProp(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "tintColorShaderProp", ::GlobalNamespace::MonkeyeAI*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MonkeyeAI::getStaticF_tintColorShaderProp()  {
return ::cordl_internals::getStaticField<int32_t, "tintColorShaderProp", ::GlobalNamespace::MonkeyeAI*>();
}
inline void GlobalNamespace::MonkeyeAI::setStaticF_animStateID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "animStateID", ::GlobalNamespace::MonkeyeAI*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MonkeyeAI::getStaticF_animStateID()  {
return ::cordl_internals::getStaticField<int32_t, "animStateID", ::GlobalNamespace::MonkeyeAI*>();
}
inline ::StringW GlobalNamespace::MonkeyeAI::UserIdFromRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"UserIdFromRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, rig);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::MonkeyeAI::GetRig(::StringW  userId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"GetRig", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method, userId);
}
inline float_t GlobalNamespace::MonkeyeAI::Distance2D(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Distance2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, a, b);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::MonkeyeAI::PickRandomPatrolPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"PickRandomPatrolPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::PickNewPath(bool  pathFinished)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"PickNewPath", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathFinished);
}
inline void GlobalNamespace::MonkeyeAI::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::OnPathComplete(::Pathfinding::Path*  path_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path_);
}
inline void GlobalNamespace::MonkeyeAI::FollowPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"FollowPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeyeAI::PlayerNear(::GlobalNamespace::VRRig*  rig, float_t  dist, ::by_ref<float_t>  playerDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"PlayerNear", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rig, dist, playerDist);
}
inline void GlobalNamespace::MonkeyeAI::Sleeping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Sleeping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MonkeyeAI::ClosestPlayer(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  myPos, ::by_ref<::GlobalNamespace::VRRig*>  outRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ClosestPlayer", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::VRRig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, myPos, outRig);
}
inline bool GlobalNamespace::MonkeyeAI::CheckForChase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"CheckForChase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::SetChasePlayer(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetChasePlayer", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::MonkeyeAI::SetSleep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetSleep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::Patrolling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Patrolling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::Chasing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"Chasing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::ReturnToSleepPt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ReturnToSleepPt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::UpdateClientState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"UpdateClientState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::SetDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::SetDefaultAttackState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetDefaultAttackState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::ExitAttackState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ExitAttackState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::BeginAttack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"BeginAttack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::OpenFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OpenFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::DropPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"DropPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::CloseFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"CloseFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::ValidateChasingRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"ValidateChasingRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::SetState(::GlobalNamespace::MonkeyeAI_ReplState_EStates  state_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state_);
}
inline void GlobalNamespace::MonkeyeAI::SetClientState(::GlobalNamespace::MonkeyeAI_ReplState_EStates  state_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetClientState", {}, {::i2c::type_of<::GlobalNamespace::MonkeyeAI_ReplState_EStates>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state_);
}
inline void GlobalNamespace::MonkeyeAI::setEyeColor(::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"setEyeColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::MonkeyeAI::GetValidChoosableRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"GetValidChoosableRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::AntiOverlapAssurance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"AntiOverlapAssurance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeyeAI::SetTargetPlayer(/* [CanBeNull] */ ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {"SetTargetPlayer", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::MonkeyeAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeyeAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeyeAI* GlobalNamespace::MonkeyeAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeyeAI*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::MonkeyeAI::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::MonkeyeAI::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeyeAI::MonkeyeAI()   {
}
