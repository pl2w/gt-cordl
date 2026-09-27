#pragma once
// IWYU pragma private; include "GlobalNamespace/SecondLookSkeleton.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_GhostState_impl.hpp"
#include "GlobalNamespace/zzzz__SkeletonPathingNode_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeletonSynchValues_def.hpp"
#include "GlobalNamespace/zzzz__SecondLookSkeleton_GhostState_def.hpp"
#include "GlobalNamespace/zzzz__SkeletonPathingNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::Start)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d0c6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d0d018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.ChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)(::GlobalNamespace::SecondLookSkeleton_GhostState)>(&::GlobalNamespace::SecondLookSkeleton::ChangeState)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0x5d0c960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::SecondLookSkeleton_GhostState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.ProcessGhostState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::ProcessGhostState)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5d0d01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ProcessGhostState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CaughtPlayerUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::CaughtPlayerUpdate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d0dad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CaughtPlayerUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.SetTappedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::SetTappedState)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d0db60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SetTappedState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.FollowPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::FollowPosition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5d0dddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"FollowPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CheckActivateGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::CheckActivateGhost)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5d0d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CheckActivateGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CanSeePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::CanSeePlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0ef2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CanSeePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CanSeePlayerWithResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)(::by_ref<::UnityEngine::RaycastHit>)>(&::GlobalNamespace::SecondLookSkeleton::CanSeePlayerWithResults)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5d0ef34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CanSeePlayerWithResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.ActivateGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::ActivateGhost)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5d0ee44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ActivateGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.StartChasing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::StartChasing)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5d0d890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"StartChasing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CheckPlayerSeen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::CheckPlayerSeen)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5d0d610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CheckPlayerSeen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.RemoteActivateGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::RemoteActivateGhost)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5d0f208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"RemoteActivateGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.RemotePlayerSeen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SecondLookSkeleton::RemotePlayerSeen)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d0f234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"RemotePlayerSeen", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.RemotePlayerCaught
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::SecondLookSkeleton::RemotePlayerCaught)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5d0f324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"RemotePlayerCaught", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.IsCurrentlyLooking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::IsCurrentlyLooking)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5d0ecec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"IsCurrentlyLooking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.PatrolMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::PatrolMove)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d0d848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"PatrolMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CheckReachedNextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)(bool, bool)>(&::GlobalNamespace::SecondLookSkeleton::CheckReachedNextNode)> {
  constexpr static std::size_t size = 0x974;
  constexpr static std::size_t addrs = 0x5d0f7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CheckReachedNextNode", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.ChaseMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::ChaseMove)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d0d998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ChaseMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CaughtMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::CaughtMove)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d0e30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CaughtMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.SyncNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::SyncNodes)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5d0d3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SyncNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.SetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::SetNodes)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d0d488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SetNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.GhostAtExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::GhostAtExit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5d0df5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"GhostAtExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.GhostMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)(::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::SecondLookSkeleton::GhostMove)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5d0f464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"GhostMove", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.DeactivateGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::DeactivateGhost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d0e304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"DeactivateGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.CanGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::CanGrab)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5d0d8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CanGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.GrabPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::GrabPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d0d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"GrabPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.FloatPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::FloatPlayer)> {
  constexpr static std::size_t size = 0x6c8;
  constexpr static std::size_t addrs = 0x5d0e354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"FloatPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.ChuckPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::ChuckPlayer)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5d0e064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ChuckPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.SetHeightOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::SetHeightOffset)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x5d0ea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SetHeightOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton.IsMine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::IsMine)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5d0d324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"IsMine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SecondLookSkeleton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SecondLookSkeleton::*)()>(&::GlobalNamespace::SecondLookSkeleton::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5d10140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_angerPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPoint;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_angerPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPoint;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_angerPoint(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angerPoint = value;
}
constexpr int32_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_angerPointIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPointIndex;
}
constexpr int32_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_angerPointIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPointIndex;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_angerPointIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angerPointIndex = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_pathPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathPoints;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_pathPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathPoints;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_pathPoints(::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathPoints = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_exitPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitPoints;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_exitPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitPoints;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_exitPoints(::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitPoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_heightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_heightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightOffset;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_heightOffset(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightOffset = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_requireSecondLookToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireSecondLookToActivate;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_requireSecondLookToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireSecondLookToActivate;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_requireSecondLookToActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireSecondLookToActivate = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_requireTappingToActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireTappingToActivate;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_requireTappingToActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireTappingToActivate;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_requireTappingToActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireTappingToActivate = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_changeAngerPointOnTimeInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeAngerPointOnTimeInterval;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_changeAngerPointOnTimeInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeAngerPointOnTimeInterval;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_changeAngerPointOnTimeInterval(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeAngerPointOnTimeInterval = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_changeAngerPointTimeMinutes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeAngerPointTimeMinutes;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_changeAngerPointTimeMinutes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___changeAngerPointTimeMinutes;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_changeAngerPointTimeMinutes(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___changeAngerPointTimeMinutes = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_firstLookActivated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstLookActivated;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_firstLookActivated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstLookActivated;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_firstLookActivated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstLookActivated = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_lookedAway()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookedAway;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_lookedAway() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookedAway;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_lookedAway(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookedAway = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_currentlyLooking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyLooking;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_currentlyLooking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentlyLooking;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_currentlyLooking(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentlyLooking = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_ghostActivationDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostActivationDistance;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_ghostActivationDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostActivationDistance;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_ghostActivationDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostActivationDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_spookyGhost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spookyGhost;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_spookyGhost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spookyGhost;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_spookyGhost(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spookyGhost = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeFirstAppeared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeFirstAppeared;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeFirstAppeared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeFirstAppeared;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_timeFirstAppeared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeFirstAppeared = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeToFirstDisappear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToFirstDisappear;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeToFirstDisappear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeToFirstDisappear;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_timeToFirstDisappear(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeToFirstDisappear = value;
}
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SecondLookSkeleton_GhostState const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_currentState(::GlobalNamespace::SecondLookSkeleton_GhostState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_spookyText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spookyText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_spookyText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spookyText;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_spookyText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spookyText = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_patrolSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_patrolSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolSpeed;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_patrolSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolSpeed = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_chaseSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseSpeed;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_chaseSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseSpeed;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_chaseSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseSpeed = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_caughtSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caughtSpeed;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_caughtSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___caughtSpeed;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_caughtSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___caughtSpeed = value;
}
constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_firstNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstNode;
}
constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_firstNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstNode;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_firstNode(::UnityW<::GlobalNamespace::SkeletonPathingNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstNode = value;
}
constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_currentNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_currentNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentNode;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_currentNode(::UnityW<::GlobalNamespace::SkeletonPathingNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentNode = value;
}
constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::UnityW<::GlobalNamespace::SkeletonPathingNode> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_nextNode(::UnityW<::GlobalNamespace::SkeletonPathingNode>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_lookSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_lookSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookSource;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_lookSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookSource = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_playerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_playerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTransform;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_playerTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTransform = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_reachNodeDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachNodeDist;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_reachNodeDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reachNodeDist;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_reachNodeDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reachNodeDist = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_maxRotSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotSpeed;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_maxRotSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRotSpeed;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_maxRotSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRotSpeed = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_offsetGrabPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetGrabPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_offsetGrabPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offsetGrabPosition;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_offsetGrabPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offsetGrabPosition = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_throwForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwForce;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_throwForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwForce;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_throwForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwForce = value;
}
constexpr ::UnityW<::UnityEngine::Animator>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_animator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr ::UnityW<::UnityEngine::Animator> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_animator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animator;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_animator(::UnityW<::UnityEngine::Animator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animator = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_bodyHeightOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyHeightOffset;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_bodyHeightOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyHeightOffset;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_bodyHeightOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyHeightOffset = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeThrown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeThrown;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeThrown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeThrown;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_timeThrown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeThrown = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeThrownCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeThrownCooldown;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_timeThrownCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeThrownCooldown;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_timeThrownCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeThrownCooldown = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_catchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchDistance;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_catchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchDistance;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_catchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchDistance = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_maxSeeDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSeeDistance;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_maxSeeDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSeeDistance;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_maxSeeDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSeeDistance = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_rHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_rHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rHits;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_rHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rHits = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_mask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_mask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mask;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_mask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mask = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_playerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_playerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerMask;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_playerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerMask = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_initialScream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScream;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_initialScream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScream;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_initialScream(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScream = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_patrolLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoop;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_patrolLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolLoop;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_patrolLoop(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolLoop = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_chaseLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoop;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_chaseLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseLoop;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_chaseLoop(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseLoop = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_grabbedSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_grabbedSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedSound;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_grabbedSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_carryingLoop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carryingLoop;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_carryingLoop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___carryingLoop;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_carryingLoop(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___carryingLoop = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_throwSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_throwSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSound = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>*& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_resetChaseHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetChaseHistory;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>* const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_resetChaseHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetChaseHistory;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_resetChaseHistory(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SkeletonPathingNode>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetChaseHistory = value;
}
constexpr ::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues>& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_synchValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchValues;
}
constexpr ::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues> const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_synchValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___synchValues;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_synchValues(::UnityW<::GlobalNamespace::SecondLookSkeletonSynchValues>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___synchValues = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_localCaught()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCaught;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_localCaught() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCaught;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_localCaught(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localCaught = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_localThrown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localThrown;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_localThrown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localThrown;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_localThrown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localThrown = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_playersSeen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersSeen;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_playersSeen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersSeen;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_playersSeen(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersSeen = value;
}
constexpr bool& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_tapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapped;
}
constexpr bool const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_tapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tapped;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_tapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tapped = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_closest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closest;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_closest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___closest;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_closest(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___closest = value;
}
constexpr float_t& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_angerPointChangedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPointChangedTime;
}
constexpr float_t const& GlobalNamespace::SecondLookSkeleton::__cordl_internal_get_angerPointChangedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angerPointChangedTime;
}
constexpr void GlobalNamespace::SecondLookSkeleton::__cordl_internal_set_angerPointChangedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angerPointChangedTime = value;
}
inline void GlobalNamespace::SecondLookSkeleton::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::ChangeState(::GlobalNamespace::SecondLookSkeleton_GhostState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ChangeState", {}, {::i2c::type_of<::GlobalNamespace::SecondLookSkeleton_GhostState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::SecondLookSkeleton::ProcessGhostState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ProcessGhostState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::CaughtPlayerUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CaughtPlayerUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::SetTappedState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SetTappedState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::FollowPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"FollowPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::CheckActivateGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CheckActivateGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SecondLookSkeleton::CanSeePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CanSeePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SecondLookSkeleton::CanSeePlayerWithResults(::by_ref<::UnityEngine::RaycastHit>  closest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CanSeePlayerWithResults", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, closest);
}
inline void GlobalNamespace::SecondLookSkeleton::ActivateGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ActivateGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::StartChasing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"StartChasing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SecondLookSkeleton::CheckPlayerSeen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CheckPlayerSeen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::RemoteActivateGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"RemoteActivateGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::RemotePlayerSeen(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"RemotePlayerSeen", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::SecondLookSkeleton::RemotePlayerCaught(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"RemotePlayerCaught", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline bool GlobalNamespace::SecondLookSkeleton::IsCurrentlyLooking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"IsCurrentlyLooking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::PatrolMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"PatrolMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::CheckReachedNextNode(bool  forChuck, bool  forChase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CheckReachedNextNode", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forChuck, forChase);
}
inline void GlobalNamespace::SecondLookSkeleton::ChaseMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ChaseMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::CaughtMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CaughtMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::SyncNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SyncNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::SetNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SetNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SecondLookSkeleton::GhostAtExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"GhostAtExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::GhostMove(::UnityEngine::Transform*  target, float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"GhostMove", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, speed);
}
inline void GlobalNamespace::SecondLookSkeleton::DeactivateGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"DeactivateGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SecondLookSkeleton::CanGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"CanGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::GrabPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"GrabPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::FloatPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"FloatPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::ChuckPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"ChuckPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::SetHeightOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"SetHeightOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::SecondLookSkeleton::IsMine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {"IsMine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SecondLookSkeleton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SecondLookSkeleton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SecondLookSkeleton* GlobalNamespace::SecondLookSkeleton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SecondLookSkeleton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SecondLookSkeleton::SecondLookSkeleton()   {
}
