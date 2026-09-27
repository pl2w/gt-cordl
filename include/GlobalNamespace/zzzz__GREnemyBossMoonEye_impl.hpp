#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyBossMoonEye.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_BodyState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAgent_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackLaser_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityDie_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityIdle_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyBossMoonEye_def.hpp"
#include "GlobalNamespace/zzzz__GREnemy_def.hpp"
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
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x588600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::OnEntityInit)> {
  constexpr static std::size_t size = 0x49c;
  constexpr static std::size_t addrs = 0x58861d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.SetupAbility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GREnemyBossMoonEye_Behavior, ::GlobalNamespace::GRAbilityBase*, ::GlobalNamespace::GameAgent*, ::UnityEngine::Animation*, ::UnityEngine::AudioSource*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::GlobalNamespace::GRSenseLineOfSight*)>(&::GlobalNamespace::GREnemyBossMoonEye::SetupAbility)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5886670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"SetupAbility", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoonEye_Behavior>(), ::i2c::type_of<::GlobalNamespace::GRAbilityBase*>(), ::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Animation*>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5886c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyBossMoonEye::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5886c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::OnDestroy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5886c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(int64_t)>(&::GlobalNamespace::GREnemyBossMoonEye::Setup)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5886734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(uint8_t)>(&::GlobalNamespace::GREnemyBossMoonEye::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5886cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.ResetEye
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::ResetEye)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5881338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"ResetEye", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoonEye::SetHP)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58867b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.TrySetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GREnemyBossMoonEye_Behavior)>(&::GlobalNamespace::GREnemyBossMoonEye::TrySetBehavior)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58819ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoonEye_Behavior>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GREnemyBossMoonEye_Behavior, bool)>(&::GlobalNamespace::GREnemyBossMoonEye::SetBehavior)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5886848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoonEye_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.CalcMaxHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::CalcMaxHP)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5886740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"CalcMaxHP", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::RefreshBody)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5886cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5886cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoonEye::OnEntityThink)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5886d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.TryChooseAttackBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::TryChooseAttackBehavior)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x588709c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"TryChooseAttackBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x588701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoonEye::OnUpdate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5886cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoonEye::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58873ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(float_t)>(&::GlobalNamespace::GREnemyBossMoonEye::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5887404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.InstantKill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::InstantKill)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58821e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"InstantKill", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnHitByClub
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoonEye::OnHitByClub)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5887418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnHitByShield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GRTool*, ::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoonEye::OnHitByShield)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58874d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyBossMoonEye::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5887504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.TryHitPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GREnemyBossMoonEye::TryHitPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x58878c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyBossMoonEye::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5887974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyBossMoonEye::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5887b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyBossMoonEye::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5887b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.IsHitValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoonEye::IsHitValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5887c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye.OnHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)(::GlobalNamespace::GameHitData)>(&::GlobalNamespace::GREnemyBossMoonEye::OnHit)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5887c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye::*)()>(&::GlobalNamespace::GREnemyBossMoonEye::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5887d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_enemy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr ::UnityW<::GlobalNamespace::GREnemy> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_enemy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enemy;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_enemy(::UnityW<::GlobalNamespace::GREnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enemy = value;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_armor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_armor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armor = value;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_hittable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr ::UnityW<::GlobalNamespace::GameHittable> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_hittable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hittable;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_hittable(::UnityW<::GlobalNamespace::GameHittable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hittable = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilities;
}
constexpr ::ArrayW<::GlobalNamespace::GRAbilityBase*> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilities;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilities(::ArrayW<::GlobalNamespace::GRAbilityBase*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilities = value;
}
constexpr ::GlobalNamespace::GRAbilityBase*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_currAbility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currAbility;
}
constexpr ::GlobalNamespace::GRAbilityBase* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_currAbility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currAbility;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_currAbility(::GlobalNamespace::GRAbilityBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currAbility = value;
}
constexpr ::GlobalNamespace::GRAbilityAgent*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAgent;
}
constexpr ::GlobalNamespace::GRAbilityAgent* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAgent;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityAgent(::GlobalNamespace::GRAbilityAgent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAgent = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityClosed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityClosed;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityClosed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityClosed;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityClosed(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityClosed = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackLaser*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityAttackLaser()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackLaser;
}
constexpr ::GlobalNamespace::GRAbilityAttackLaser* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityAttackLaser() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttackLaser;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityAttackLaser(::GlobalNamespace::GRAbilityAttackLaser*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttackLaser = value;
}
constexpr ::GlobalNamespace::GRAbilityDie*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityDie()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr ::GlobalNamespace::GRAbilityDie* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityDie() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityDie;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityDie(::GlobalNamespace::GRAbilityDie*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityDie = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityGravityStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGravityStart;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityGravityStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGravityStart;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityGravityStart(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityGravityStart = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityGravityEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGravityEnd;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityGravityEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGravityEnd;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityGravityEnd(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityGravityEnd = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityGravityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGravityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_abilityGravityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityGravityIdle;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_abilityGravityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityGravityIdle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_counterAttackWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterAttackWindow;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_counterAttackWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___counterAttackWindow;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_counterAttackWindow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___counterAttackWindow = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyBossMoonEye_Behavior& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyBossMoonEye_Behavior const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyBossMoonEye_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr ::GlobalNamespace::GREnemyBossMoonEye_BodyState& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyBossMoonEye_BodyState const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyBossMoonEye_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastSeenTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastSeenTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetPosition;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_lastSeenTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastSeenTargetTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr double_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastSeenTargetTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSeenTargetTime;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_lastSeenTargetTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSeenTargetTime = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_allowLaserAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowLaserAttack;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_allowLaserAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowLaserAttack;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_allowLaserAttack(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowLaserAttack = value;
}
constexpr bool& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_canChaseJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr bool const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_canChaseJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canChaseJump;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_canChaseJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canChaseJump = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_chaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_chaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_chaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpDistance = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_chaseJumpMinInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_chaseJumpMinInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chaseJumpMinInterval;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_chaseJumpMinInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chaseJumpMinInterval = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_minChaseJumpDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_minChaseJumpDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minChaseJumpDistance;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_minChaseJumpDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minChaseJumpDistance = value;
}
constexpr double_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr double_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitTime;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_lastHitTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastHitPlayerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_lastHitPlayerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHitPlayerTime;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_lastHitPlayerTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHitPlayerTime = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_minTimeBetweenHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_minTimeBetweenHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minTimeBetweenHits;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_minTimeBetweenHits(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minTimeBetweenHits = value;
}
constexpr float_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr int32_t& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_maxSimultaneousSummonedEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSimultaneousSummonedEntities;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_maxSimultaneousSummonedEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSimultaneousSummonedEntities;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_maxSimultaneousSummonedEntities(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSimultaneousSummonedEntities = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_tryHitPlayerCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_get_tryHitPlayerCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tryHitPlayerCoroutine;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye::__cordl_internal_set_tryHitPlayerCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tryHitPlayerCoroutine = value;
}
inline void GlobalNamespace::GREnemyBossMoonEye::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyBossMoonEye*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyBossMoonEye::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyBossMoonEye*>();
}
inline void GlobalNamespace::GREnemyBossMoonEye::setStaticF_tempPotentialAttacks(::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>*, "tempPotentialAttacks", ::GlobalNamespace::GREnemyBossMoonEye*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>* GlobalNamespace::GREnemyBossMoonEye::getStaticF_tempPotentialAttacks()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GREnemyBossMoonEye_Behavior>*, "tempPotentialAttacks", ::GlobalNamespace::GREnemyBossMoonEye*>();
}
inline void GlobalNamespace::GREnemyBossMoonEye::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::SetupAbility(::GlobalNamespace::GREnemyBossMoonEye_Behavior  behavior, ::GlobalNamespace::GRAbilityBase*  ability, ::GlobalNamespace::GameAgent*  agent, ::UnityEngine::Animation*  anim, ::UnityEngine::AudioSource*  audioSource, ::UnityEngine::Transform*  root, ::UnityEngine::Transform*  head, ::GlobalNamespace::GRSenseLineOfSight*  lineOfSight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"SetupAbility", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoonEye_Behavior>(), ::i2c::type_of<::GlobalNamespace::GRAbilityBase*>(), ::i2c::type_of<::GlobalNamespace::GameAgent*>(), ::i2c::type_of<::UnityEngine::Animation*>(), ::i2c::type_of<::UnityEngine::AudioSource*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behavior, ability, agent, anim, audioSource, root, head, lineOfSight);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::Setup(int64_t  entityCreateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entityCreateData);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyBossMoonEye::ResetEye()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"ResetEye", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline bool GlobalNamespace::GREnemyBossMoonEye::TrySetBehavior(::GlobalNamespace::GREnemyBossMoonEye_Behavior  newBehavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"TrySetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoonEye_Behavior>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newBehavior);
}
inline void GlobalNamespace::GREnemyBossMoonEye::SetBehavior(::GlobalNamespace::GREnemyBossMoonEye_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyBossMoonEye_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline int32_t GlobalNamespace::GREnemyBossMoonEye::CalcMaxHP()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"CalcMaxHP", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline bool GlobalNamespace::GREnemyBossMoonEye::TryChooseAttackBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"TryChooseAttackBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::ChooseNewBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyBossMoonEye::InstantKill()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"InstantKill", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnHitByClub(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnHitByClub", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnHitByShield(::GlobalNamespace::GRTool*  tool, ::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnHitByShield", {}, {::i2c::type_of<::GlobalNamespace::GRTool*>(), ::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tool, hit);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GREnemyBossMoonEye::TryHitPlayer(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"TryHitPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, player);
}
inline void GlobalNamespace::GREnemyBossMoonEye::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline bool GlobalNamespace::GREnemyBossMoonEye::IsHitValid(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"IsHitValid", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyBossMoonEye::OnHit(::GlobalNamespace::GameHitData  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {"OnHit", {}, {::i2c::type_of<::GlobalNamespace::GameHitData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hit);
}
inline void GlobalNamespace::GREnemyBossMoonEye::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyBossMoonEye* GlobalNamespace::GREnemyBossMoonEye::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoonEye*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyBossMoonEye::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyBossMoonEye::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyBossMoonEye::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyBossMoonEye::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameHittable"
constexpr  GlobalNamespace::GREnemyBossMoonEye::operator ::GlobalNamespace::IGameHittable*() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameHittable"
constexpr ::GlobalNamespace::IGameHittable* GlobalNamespace::GREnemyBossMoonEye::i___GlobalNamespace__IGameHittable() noexcept {
return static_cast<::GlobalNamespace::IGameHittable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyBossMoonEye::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyBossMoonEye::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyBossMoonEye::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyBossMoonEye::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoonEye::GREnemyBossMoonEye()   {
}
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::*)(int32_t)>(&::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x588794c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::*)()>(&::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5887ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::*)()>(&::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::MoveNext)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5887ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::*)()>(&::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5888110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::*)()>(&::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5888118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::*)()>(&::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5888150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer>& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_set_player(::UnityW<::GlobalNamespace::GRPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoonEye>& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GREnemyBossMoonEye> const& GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GREnemyBossMoonEye>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71* GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyBossMoonEye__TryHitPlayer_d__71::GREnemyBossMoonEye__TryHitPlayer_d__71()   {
}
