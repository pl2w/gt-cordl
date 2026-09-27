#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPest.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_BodyState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackJump_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityChase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityGrabbed_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityIdle_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityJump_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityStagger_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityThrown_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityWander_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectible_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPest_def.hpp"
#include "GlobalNamespace/zzzz__GREnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseNearby_def.hpp"
#include "GlobalNamespace/zzzz__GRTool_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameHitData_def.hpp"
#include "GlobalNamespace/zzzz__IGameAgentComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "GlobalNamespace/zzzz__IGameHittable_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
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
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(bool)>(&::GlobalNamespace::GREnemyPest::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588ea70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::Awake)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x588ea78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnEnable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588ed8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnDisable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588edf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.PlaySpawnAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::PlaySpawnAudio)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588ee64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"PlaySpawnAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnEntityInit)> {
  constexpr static std::size_t size = 0x668;
  constexpr static std::size_t addrs = 0x588ee80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588f8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyPest::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588f8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x588f8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnAgentJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GREnemyPest::OnAgentJumpRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x588f96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(uint8_t)>(&::GlobalNamespace::GREnemyPest::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x588f99c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(int32_t)>(&::GlobalNamespace::GREnemyPest::SetHP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588f9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.TrySetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GREnemyPest_Behavior)>(&::GlobalNamespace::GREnemyPest::TrySetBehavior)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x588f9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPest_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GREnemyPest_Behavior, bool)>(&::GlobalNamespace::GREnemyPest::SetBehavior)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x588f4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPest_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnGrabbed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588f9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnGrabbed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::OnReleased)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588fa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnReleased", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::Tick)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x588fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(float_t)>(&::GlobalNamespace::GREnemyPest::OnEntityThink)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x588fa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x588fdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(float_t)>(&::GlobalNamespace::GREnemyPest::OnUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x588fa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(float_t)>(&::GlobalNamespace::GREnemyPest::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x588ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(float_t)>(&::GlobalNamespace::GREnemyPest::OnUpdateRemote)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5890240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyPest::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5890310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyPest::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5890374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyPest::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5890400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyPest::OnHit)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5890408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyPest::OnHitByClub)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5890540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.InstantDeath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::InstantDeath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5890924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"InstantDeath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnHitByFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyPest::OnHitByFlash)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x589067c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyPest::OnHitByShield)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58908f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyPest::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x58909d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.TryHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GREnemyPest::TryHitPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5890d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::RefreshBody)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5890934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.SetBodyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::GlobalNamespace::GREnemyPest_BodyState, bool)>(&::GlobalNamespace::GREnemyPest::SetBodyState)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x588f78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPest_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyPest::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x5890e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest::*)()>(&::GlobalNamespace::GREnemyPest::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5891260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyPest::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyPest::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy>& GlobalNamespace::GREnemyPest::__cordl_internal_get_enemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_enemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemy = value;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& GlobalNamespace::GREnemyPest::__cordl_internal_get_armor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_armor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyPest::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyPest::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyPest::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyPest::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityChase*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityChase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr ::GlobalNamespace::GRAbilityChase* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityChase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityChase = value;
}
constexpr ::GlobalNamespace::GRAbilityWander*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityWander()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityWander;
}
constexpr ::GlobalNamespace::GRAbilityWander* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityWander() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityWander;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityWander(::GlobalNamespace::GRAbilityWander*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityWander = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackJump*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttack;
}
constexpr ::GlobalNamespace::GRAbilityAttackJump* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttack;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityAttack(::GlobalNamespace::GRAbilityAttackJump*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttack = value;
}
constexpr ::GlobalNamespace::GRAbilityStagger*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityStagger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr ::GlobalNamespace::GRAbilityStagger* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityStagger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityStagger;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityStagger(::GlobalNamespace::GRAbilityStagger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityStagger = value;
}
constexpr ::GlobalNamespace::GRAbilityStagger*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityFlashed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityFlashed;
}
constexpr ::GlobalNamespace::GRAbilityStagger* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityFlashed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityFlashed;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityFlashed(::GlobalNamespace::GRAbilityStagger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityFlashed = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDie = value;
}
constexpr ::GlobalNamespace::GRAbilityGrabbed*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGrabbed;
}
constexpr ::GlobalNamespace::GRAbilityGrabbed* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGrabbed;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityGrabbed(::GlobalNamespace::GRAbilityGrabbed*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityGrabbed = value;
}
constexpr ::GlobalNamespace::GRAbilityThrown*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityThrown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityThrown;
}
constexpr ::GlobalNamespace::GRAbilityThrown* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityThrown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityThrown;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityThrown(::GlobalNamespace::GRAbilityThrown*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityThrown = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPest::__cordl_internal_get_spawnSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_spawnSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnSound;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_spawnSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnSound = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityInvestigate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityInvestigate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityInvestigate = value;
}
constexpr ::GlobalNamespace::GRAbilityJump*& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr ::GlobalNamespace::GRAbilityJump* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_abilityJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityJump = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GREnemyPest::__cordl_internal_get_bonesStateVisibleObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesStateVisibleObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_bonesStateVisibleObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bonesStateVisibleObjects;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_bonesStateVisibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bonesStateVisibleObjects = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GREnemyPest::__cordl_internal_get_alwaysVisibleObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysVisibleObjects;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_alwaysVisibleObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysVisibleObjects;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_alwaysVisibleObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysVisibleObjects = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyPest::__cordl_internal_get_coreMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_coreMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreMarker = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible>& GlobalNamespace::GREnemyPest::__cordl_internal_get_corePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_corePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyPest::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr float_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_attackRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr float_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_attackRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_attackRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackRange = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GREnemyPest::__cordl_internal_get_rigsNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigsNearby;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_rigsNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigsNearby;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigsNearby = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GREnemyPest::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyPest::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GREnemyPest::__cordl_internal_get_investigateLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_investigateLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___investigateLocation = value;
}
constexpr bool& GlobalNamespace::GREnemyPest::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GREnemyPest::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyPest_Behavior& GlobalNamespace::GREnemyPest::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyPest_Behavior const& GlobalNamespace::GREnemyPest::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyPest_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr double_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_behaviorEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr double_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_behaviorEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_behaviorEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorEndTime = value;
}
constexpr ::GlobalNamespace::GREnemyPest_BodyState& GlobalNamespace::GREnemyPest::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyPest_BodyState const& GlobalNamespace::GREnemyPest::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyPest_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr int32_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_nextPatrolNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr int32_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_nextPatrolNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_nextPatrolNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPatrolNode = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyPest::__cordl_internal_get_searchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyPest::__cordl_internal_get_searchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_searchPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_behaviorStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorStartTime;
}
constexpr double_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_behaviorStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorStartTime;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_behaviorStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorStartTime = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GREnemyPest::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GREnemyPest::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyPest::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr float_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyPest::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GREnemyPest::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GREnemyPest::__cordl_internal_get_tryHitPlayerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GREnemyPest::__cordl_internal_get_tryHitPlayerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr void GlobalNamespace::GREnemyPest::__cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryHitPlayerCoroutine = value;
}
inline void GlobalNamespace::GREnemyPest::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyPest*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyPest::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyPest*>();
}
inline bool GlobalNamespace::GREnemyPest::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GREnemyPest::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::PlaySpawnAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"PlaySpawnAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyPest::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GREnemyPest::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyPest::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline bool GlobalNamespace::GREnemyPest::TrySetBehavior(::GlobalNamespace::GREnemyPest_Behavior  newBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPest_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBehavior);
}
inline void GlobalNamespace::GREnemyPest::SetBehavior(::GlobalNamespace::GREnemyPest_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPest_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline void GlobalNamespace::GREnemyPest::OnGrabbed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnGrabbed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnReleased()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnReleased", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPest::ChooseNewBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPest::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPest::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPest::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyPest::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::GREnemyPest::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyPest::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyPest::OnHitByClub(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyPest::InstantDeath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"InstantDeath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::OnHitByFlash(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHitByFlash", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyPest::OnHitByShield(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyPest::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GREnemyPest::TryHitPlayer(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player);
}
inline void GlobalNamespace::GREnemyPest::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest::SetBodyState(::GlobalNamespace::GREnemyPest_BodyState  newBodyState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPest_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBodyState, force);
}
inline void GlobalNamespace::GREnemyPest::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyPest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyPest* GlobalNamespace::GREnemyPest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyPest*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyPest::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyPest::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyPest::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyPest::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GREnemyPest::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GREnemyPest::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyPest::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyPest::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyPest::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyPest::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GREnemyPest::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GREnemyPest::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyPest::GREnemyPest()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::*)(int32_t)>(&::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5890e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::*)()>(&::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589131c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::*)()>(&::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::MoveNext)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5891320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::*)()>(&::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58914d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::*)()>(&::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x58914dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::*)()>(&::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5891514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyPest>& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyPest> const& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyPest>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::__cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80* GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyPest__TryHitPlayer_d__80::GREnemyPest__TryHitPlayer_d__80()   {
}
