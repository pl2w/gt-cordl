#pragma once
// IWYU pragma private; include "GlobalNamespace/GREnemyPhantom.hpp"
#include "GlobalNamespace/zzzz__GREnemyPhantom_Behavior_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyPhantom_BodyState_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GREnemyPhantom_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityAttackLatchOn_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityChase_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityIdle_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityJump_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityMoveToTarget_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityWatch_def.hpp"
#include "GlobalNamespace/zzzz__GRArmorEnemy_def.hpp"
#include "GlobalNamespace/zzzz__GRAttributes_def.hpp"
#include "GlobalNamespace/zzzz__GRCollectible_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPhantom_Behavior_def.hpp"
#include "GlobalNamespace/zzzz__GREnemyPhantom_BodyState_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseNearby_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "GlobalNamespace/zzzz__IGameAgentComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityDebugComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/IO/zzzz__BinaryReader_def.hpp"
#include "System/IO/zzzz__BinaryWriter_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::Awake)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x589151c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::OnEntityInit)> {
  constexpr static std::size_t size = 0x580;
  constexpr static std::size_t addrs = 0x5891724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5891e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(int64_t, int64_t)>(&::GlobalNamespace::GREnemyPhantom::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5891e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::OnDestroy)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5891e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(int64_t)>(&::GlobalNamespace::GREnemyPhantom::Setup)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5891ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnAgentJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GREnemyPhantom::OnAgentJumpRequested)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58924f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnNetworkBehaviorStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(uint8_t)>(&::GlobalNamespace::GREnemyPhantom::OnNetworkBehaviorStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5892524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnNetworkBodyStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(uint8_t)>(&::GlobalNamespace::GREnemyPhantom::OnNetworkBodyStateChange)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x589253c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.SetPatrolPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(int64_t)>(&::GlobalNamespace::GREnemyPhantom::SetPatrolPath)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5891f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.SetNextPatrolNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(int32_t)>(&::GlobalNamespace::GREnemyPhantom::SetNextPatrolNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5892554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetNextPatrolNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.SetHP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(int32_t)>(&::GlobalNamespace::GREnemyPhantom::SetHP)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589255c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.SetBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::GlobalNamespace::GREnemyPhantom_Behavior, bool)>(&::GlobalNamespace::GREnemyPhantom::SetBehavior)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x5891fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPhantom_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.SetBodyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::GlobalNamespace::GREnemyPhantom_BodyState, bool)>(&::GlobalNamespace::GREnemyPhantom::SetBodyState)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5892448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPhantom_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.RefreshBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::RefreshBody)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5892564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"RefreshBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::Update)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589259c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.ChooseNewBehavior
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::ChooseNewBehavior)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5892608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnEntityThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(float_t)>(&::GlobalNamespace::GREnemyPhantom::OnEntityThink)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x58927c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(float_t)>(&::GlobalNamespace::GREnemyPhantom::OnUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x58925b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnUpdateAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(float_t)>(&::GlobalNamespace::GREnemyPhantom::OnUpdateAuthority)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5892b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnUpdateRemote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(float_t)>(&::GlobalNamespace::GREnemyPhantom::OnUpdateRemote)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5892eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.UpdateAlert
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(float_t)>(&::GlobalNamespace::GREnemyPhantom::UpdateAlert)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5892f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"UpdateAlert", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GREnemyPhantom::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5893068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.GetDebugTextLines
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::by_ref<::System::Collections::Generic::List_1<::StringW>*>)>(&::GlobalNamespace::GREnemyPhantom::GetDebugTextLines)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x589336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnGameEntitySerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::System::IO::BinaryWriter*)>(&::GlobalNamespace::GREnemyPhantom::OnGameEntitySerialize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x58934f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom.OnGameEntityDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)(::System::IO::BinaryReader*)>(&::GlobalNamespace::GREnemyPhantom::OnGameEntityDeserialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x589357c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GREnemyPhantom._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREnemyPhantom::*)()>(&::GlobalNamespace::GREnemyPhantom::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5893638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_agent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr ::UnityW<::GlobalNamespace::GameAgent> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_agent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agent;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_agent(::UnityW<::GlobalNamespace::GameAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agent = value;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_armor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr ::UnityW<::GlobalNamespace::GRArmorEnemy> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_armor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armor;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_armor(::UnityW<::GlobalNamespace::GRArmorEnemy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armor = value;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr ::UnityW<::GlobalNamespace::GRAttributes> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attributes;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_attributes(::UnityW<::GlobalNamespace::GRAttributes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attributes = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_anim()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_anim() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anim;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_anim(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anim = value;
}
constexpr ::GlobalNamespace::GRSenseNearby*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_senseNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr ::GlobalNamespace::GRSenseNearby* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_senseNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseNearby;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_senseNearby(::GlobalNamespace::GRSenseNearby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseNearby = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_senseLineOfSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_senseLineOfSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___senseLineOfSight;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_senseLineOfSight(::GlobalNamespace::GRSenseLineOfSight*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___senseLineOfSight = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityMine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityMine;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityMine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityMine;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityMine(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityMine = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundMine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundMine;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundMine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundMine;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_soundMine(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundMine = value;
}
constexpr ::GlobalNamespace::GRAbilityIdle*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityIdle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr ::GlobalNamespace::GRAbilityIdle* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityIdle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityIdle;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityIdle(::GlobalNamespace::GRAbilityIdle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityIdle = value;
}
constexpr ::GlobalNamespace::GRAbilityWatch*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityRage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRage;
}
constexpr ::GlobalNamespace::GRAbilityWatch* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityRage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityRage;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityRage(::GlobalNamespace::GRAbilityWatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityRage = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundRage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundRage;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundRage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundRage;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_soundRage(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundRage = value;
}
constexpr ::GlobalNamespace::GRAbilityWatch*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityAlert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAlert;
}
constexpr ::GlobalNamespace::GRAbilityWatch* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityAlert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAlert;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityAlert(::GlobalNamespace::GRAbilityWatch*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAlert = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundAlert()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAlert;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundAlert() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAlert;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_soundAlert(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundAlert = value;
}
constexpr ::GlobalNamespace::GRAbilityChase*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityChase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr ::GlobalNamespace::GRAbilityChase* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityChase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityChase;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityChase(::GlobalNamespace::GRAbilityChase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityChase = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundChase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundChase;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundChase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundChase;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_soundChase(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundChase = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityReturn;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityReturn;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityReturn(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityReturn = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundReturn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundReturn;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundReturn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundReturn;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_soundReturn(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundReturn = value;
}
constexpr ::GlobalNamespace::GRAbilityAttackLatchOn*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttack;
}
constexpr ::GlobalNamespace::GRAbilityAttackLatchOn* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityAttack;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityAttack(::GlobalNamespace::GRAbilityAttackLatchOn*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityAttack = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundAttack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_soundAttack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundAttack;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_soundAttack(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundAttack = value;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityInvestigate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr ::GlobalNamespace::GRAbilityMoveToTarget* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityInvestigate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityInvestigate;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityInvestigate(::GlobalNamespace::GRAbilityMoveToTarget*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityInvestigate = value;
}
constexpr ::GlobalNamespace::GRAbilityJump*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr ::GlobalNamespace::GRAbilityJump* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_abilityJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___abilityJump;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_abilityJump(::GlobalNamespace::GRAbilityJump*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___abilityJump = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_bones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_bones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bones;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_bones(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bones = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_always()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_always() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___always;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_always(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___always = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_coreMarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_coreMarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coreMarker;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_coreMarker(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coreMarker = value;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_corePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr ::UnityW<::GlobalNamespace::GRCollectible> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_corePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___corePrefab;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_corePrefab(::UnityW<::GlobalNamespace::GRCollectible>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___corePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_headTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_headTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headTransform;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_headTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headTransform = value;
}
constexpr float_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_attackRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr float_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_attackRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackRange;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_attackRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackRange = value;
}
constexpr float_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_hearingRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr float_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_hearingRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hearingRadius;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_hearingRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hearingRadius = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_rigsNearby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigsNearby;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_rigsNearby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigsNearby;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_rigsNearby(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigsNearby = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLight>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_attackLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackLight;
}
constexpr ::UnityW<::GlobalNamespace::GameLight> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_attackLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attackLight;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_attackLight(::UnityW<::GlobalNamespace::GameLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attackLight = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLight>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_negativeLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeLight;
}
constexpr ::UnityW<::GlobalNamespace::GameLight> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_negativeLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___negativeLight;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_negativeLight(::UnityW<::GlobalNamespace::GameLight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___negativeLight = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_idleLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleLocation;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_idleLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___idleLocation;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_idleLocation(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___idleLocation = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr double_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_lastStateChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateChange;
}
constexpr double_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_lastStateChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStateChange;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_lastStateChange(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStateChange = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_investigateLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_investigateLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___investigateLocation;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_investigateLocation(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___investigateLocation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
constexpr int32_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_hp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr int32_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_hp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hp;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_hp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hp = value;
}
constexpr ::GlobalNamespace::GREnemyPhantom_Behavior& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_currBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr ::GlobalNamespace::GREnemyPhantom_Behavior const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_currBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBehavior;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_currBehavior(::GlobalNamespace::GREnemyPhantom_Behavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBehavior = value;
}
constexpr double_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_behaviorEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr double_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_behaviorEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorEndTime;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_behaviorEndTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorEndTime = value;
}
constexpr ::GlobalNamespace::GREnemyPhantom_BodyState& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_currBodyState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr ::GlobalNamespace::GREnemyPhantom_BodyState const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_currBodyState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currBodyState;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_currBodyState(::GlobalNamespace::GREnemyPhantom_BodyState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currBodyState = value;
}
constexpr int32_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_nextPatrolNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr int32_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_nextPatrolNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPatrolNode;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_nextPatrolNode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPatrolNode = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_searchPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_searchPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___searchPosition;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_searchPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___searchPosition = value;
}
constexpr double_t& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_behaviorStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorStartTime;
}
constexpr double_t const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_behaviorStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorStartTime;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_behaviorStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorStartTime = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GREnemyPhantom::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::GREnemyPhantom::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
inline void GlobalNamespace::GREnemyPhantom::setStaticF_tempRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyPhantom*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::GREnemyPhantom::getStaticF_tempRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "tempRigs", ::GlobalNamespace::GREnemyPhantom*>();
}
inline void GlobalNamespace::GREnemyPhantom::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GREnemyPhantom::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::Setup(int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"Setup", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createData);
}
inline void GlobalNamespace::GREnemyPhantom::OnAgentJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnAgentJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline void GlobalNamespace::GREnemyPhantom::OnNetworkBehaviorStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnNetworkBehaviorStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyPhantom::OnNetworkBodyStateChange(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnNetworkBodyStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GREnemyPhantom::SetPatrolPath(int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetPatrolPath", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createData);
}
inline void GlobalNamespace::GREnemyPhantom::SetNextPatrolNode(int32_t  nextPatrolNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetNextPatrolNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPatrolNode);
}
inline void GlobalNamespace::GREnemyPhantom::SetHP(int32_t  hp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetHP", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hp);
}
inline void GlobalNamespace::GREnemyPhantom::SetBehavior(::GlobalNamespace::GREnemyPhantom_Behavior  newBehavior, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetBehavior", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPhantom_Behavior>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBehavior, force);
}
inline void GlobalNamespace::GREnemyPhantom::SetBodyState(::GlobalNamespace::GREnemyPhantom_BodyState  newBodyState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"SetBodyState", {}, {::i2c::type_of<::GlobalNamespace::GREnemyPhantom_BodyState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newBodyState, force);
}
inline void GlobalNamespace::GREnemyPhantom::RefreshBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"RefreshBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::ChooseNewBehavior()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"ChooseNewBehavior", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GREnemyPhantom::OnEntityThink(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnEntityThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPhantom::OnUpdate(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPhantom::OnUpdateAuthority(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnUpdateAuthority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPhantom::OnUpdateRemote(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnUpdateRemote", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPhantom::UpdateAlert(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"UpdateAlert", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline void GlobalNamespace::GREnemyPhantom::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::GREnemyPhantom::GetDebugTextLines(::by_ref<::System::Collections::Generic::List_1<::StringW>*>  strings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"GetDebugTextLines", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::StringW>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, strings);
}
inline void GlobalNamespace::GREnemyPhantom::OnGameEntitySerialize(::System::IO::BinaryWriter*  writer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnGameEntitySerialize", {}, {::i2c::type_of<::System::IO::BinaryWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline void GlobalNamespace::GREnemyPhantom::OnGameEntityDeserialize(::System::IO::BinaryReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {"OnGameEntityDeserialize", {}, {::i2c::type_of<::System::IO::BinaryReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void GlobalNamespace::GREnemyPhantom::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREnemyPhantom*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREnemyPhantom* GlobalNamespace::GREnemyPhantom::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREnemyPhantom*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GREnemyPhantom::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GREnemyPhantom::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntitySerialize"
constexpr  GlobalNamespace::GREnemyPhantom::operator ::GlobalNamespace::IGameEntitySerialize*() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntitySerialize"
constexpr ::GlobalNamespace::IGameEntitySerialize* GlobalNamespace::GREnemyPhantom::i___GlobalNamespace__IGameEntitySerialize() noexcept {
return static_cast<::GlobalNamespace::IGameEntitySerialize*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameAgentComponent"
constexpr  GlobalNamespace::GREnemyPhantom::operator ::GlobalNamespace::IGameAgentComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameAgentComponent"
constexpr ::GlobalNamespace::IGameAgentComponent* GlobalNamespace::GREnemyPhantom::i___GlobalNamespace__IGameAgentComponent() noexcept {
return static_cast<::GlobalNamespace::IGameAgentComponent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr  GlobalNamespace::GREnemyPhantom::operator ::GlobalNamespace::IGameEntityDebugComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityDebugComponent"
constexpr ::GlobalNamespace::IGameEntityDebugComponent* GlobalNamespace::GREnemyPhantom::i___GlobalNamespace__IGameEntityDebugComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityDebugComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREnemyPhantom::GREnemyPhantom()   {
}
