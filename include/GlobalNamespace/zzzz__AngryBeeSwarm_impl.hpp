#pragma once
// IWYU pragma private; include "GlobalNamespace/AngryBeeSwarm.hpp"
#include "GlobalNamespace/zzzz__AngryBeeSwarm_ChaseState_impl.hpp"
#include "GlobalNamespace/zzzz__BeeSwarmData_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AngryBeeSwarm_def.hpp"
#include "GlobalNamespace/zzzz__AngryBeeAnimator_def.hpp"
#include "GlobalNamespace/zzzz__AngryBeeSwarm_ChaseState_def.hpp"
#include "GlobalNamespace/zzzz__BeeSwarmData_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.get_isDormant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::get_isDormant)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e09588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"get_isDormant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::Awake)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e09598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.InitializeSwarm
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::InitializeSwarm)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e096e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"InitializeSwarm", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::LateUpdate)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x5e097cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::UpdateState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5e09b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.Emerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::AngryBeeSwarm::Emerge)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e0ad9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"Emerge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.OnChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::GlobalNamespace::AngryBeeSwarm_ChaseState)>(&::GlobalNamespace::AngryBeeSwarm::OnChangeState)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5e0a2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"OnChangeState", {}, {::i2c::type_of<::GlobalNamespace::AngryBeeSwarm_ChaseState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.ChooseClosestTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::ChooseClosestTarget)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0x5e09d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"ChooseClosestTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.SetInitialRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::SetInitialRotations)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e0ae2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"SetInitialRotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.SwarmEmergeUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::SwarmEmergeUpdateShared)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5e0a5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"SwarmEmergeUpdateShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.RiseGrabbedLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::RiseGrabbedLocalPlayer)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5e0a9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"RiseGrabbedLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.UpdateFollowPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::AngryBeeSwarm::UpdateFollowPath)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x5e0aeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"UpdateFollowPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.GetNewPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::AngryBeeSwarm::GetNewPath)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5e0b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"GetNewPath", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.ResetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::ResetPath)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e0ae9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"ResetPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.ChaseHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::ChaseHost)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5e0a6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"ChaseHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.MoveBodyShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::MoveBodyShared)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e0a964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"MoveBodyShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.GrabBodyShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::GrabBodyShared)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e0acc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"GrabBodyShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeeSwarmData (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::get_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e0b58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::GlobalNamespace::BeeSwarmData)>(&::GlobalNamespace::AngryBeeSwarm::set_Data)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e0b5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::BeeSwarmData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::WriteDataFusion)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e0b64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::ReadDataFusion)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e0b6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::AngryBeeSwarm::WriteDataPUN)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e0b7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::AngryBeeSwarm::ReadDataPUN)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5e0b8e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::AngryBeeSwarm::OnOwnerChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e0ba84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e0bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.TestEmerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::TestEmerge)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e0bba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"TestEmerge", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e0bc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)(bool)>(&::GlobalNamespace::AngryBeeSwarm::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e0bc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AngryBeeSwarm.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AngryBeeSwarm::*)()>(&::GlobalNamespace::AngryBeeSwarm::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x68c;
  constexpr static std::size_t addrs = 0x5e0bc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                    {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_heightAboveNavmesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightAboveNavmesh;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_heightAboveNavmesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightAboveNavmesh;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_heightAboveNavmesh(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightAboveNavmesh = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_followTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_followTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTarget;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followTarget = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_velocityStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityStep;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_velocityStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityStep;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_velocityStep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityStep = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_currentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_currentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_currentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeed = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_velocityIncreaseInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityIncreaseInterval;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_velocityIncreaseInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityIncreaseInterval;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_velocityIncreaseInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityIncreaseInterval = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_noisyOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisyOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_noisyOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisyOffset;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_noisyOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noisyOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_ghostOffsetGrabbingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostOffsetGrabbingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_ghostOffsetGrabbingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostOffsetGrabbingLocal;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_ghostOffsetGrabbingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostOffsetGrabbingLocal = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_emergeStartedTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emergeStartedTimestamp;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_emergeStartedTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emergeStartedTimestamp;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_emergeStartedTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emergeStartedTimestamp = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabTimestamp;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabTimestamp;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_grabTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabTimestamp = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_lastSpeedIncreased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpeedIncreased;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_lastSpeedIncreased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpeedIncreased;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_lastSpeedIncreased(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpeedIncreased = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_totalTimeToEmerge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTimeToEmerge;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_totalTimeToEmerge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTimeToEmerge;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_totalTimeToEmerge(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalTimeToEmerge = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_catchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchDistance;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_catchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchDistance;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_catchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchDistance = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_grabDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDuration = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSpeed;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSpeed;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_grabSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabSpeed = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_minGrabCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minGrabCooldown;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_minGrabCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minGrabCooldown;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_minGrabCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minGrabCooldown = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_initialRangeLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRangeLimit;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_initialRangeLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialRangeLimit;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_initialRangeLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialRangeLimit = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_finalRangeLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalRangeLimit;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_finalRangeLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finalRangeLimit;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_finalRangeLimit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finalRangeLimit = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_rangeLimitBlendDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangeLimitBlendDuration;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_rangeLimitBlendDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rangeLimitBlendDuration;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_rangeLimitBlendDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rangeLimitBlendDuration = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_boredAfterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boredAfterDuration;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_boredAfterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boredAfterDuration;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_boredAfterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boredAfterDuration = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::AngryBeeAnimator>& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_beeAnimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeAnimator;
}
constexpr ::UnityW<::GlobalNamespace::AngryBeeAnimator> const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_beeAnimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beeAnimator;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_beeAnimator(::UnityW<::GlobalNamespace::AngryBeeAnimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beeAnimator = value;
}
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_currentState(::GlobalNamespace::AngryBeeSwarm_ChaseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::AngryBeeSwarm_ChaseState const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_lastState(::GlobalNamespace::AngryBeeSwarm_ChaseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabbedPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_grabbedPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPlayer;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_grabbedPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedPlayer = value;
}
constexpr bool& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_targetIsOnNavMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetIsOnNavMesh;
}
constexpr bool const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_targetIsOnNavMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetIsOnNavMesh;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_targetIsOnNavMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetIsOnNavMesh = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_MinHeightAboveWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinHeightAboveWater;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_MinHeightAboveWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinHeightAboveWater;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_MinHeightAboveWater(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinHeightAboveWater = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_PlayerMinHeightAboveWater()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerMinHeightAboveWater;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_PlayerMinHeightAboveWater() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerMinHeightAboveWater;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_PlayerMinHeightAboveWater(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerMinHeightAboveWater = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_RefreshClosestPlayerInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RefreshClosestPlayerInterval;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_RefreshClosestPlayerInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RefreshClosestPlayerInterval;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_RefreshClosestPlayerInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RefreshClosestPlayerInterval = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_NextRefreshClosestPlayerTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextRefreshClosestPlayerTimestamp;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_NextRefreshClosestPlayerTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NextRefreshClosestPlayerTimestamp;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_NextRefreshClosestPlayerTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NextRefreshClosestPlayerTimestamp = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_BoredToDeathAtTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoredToDeathAtTimestamp;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_BoredToDeathAtTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoredToDeathAtTimestamp;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_BoredToDeathAtTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoredToDeathAtTimestamp = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_testEmergeFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testEmergeFrom;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_testEmergeFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testEmergeFrom;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_testEmergeFrom(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testEmergeFrom = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_testEmergeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testEmergeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_testEmergeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testEmergeTo;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_testEmergeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testEmergeTo = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_emergeFromPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emergeFromPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_emergeFromPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emergeFromPosition;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_emergeFromPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emergeFromPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_emergeToPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emergeToPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_emergeToPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emergeToPosition;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_emergeToPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emergeToPosition = value;
}
constexpr ::UnityEngine::AI::NavMeshPath*& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::UnityEngine::AI::NavMeshPath* const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_path(::UnityEngine::AI::NavMeshPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_pathPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_pathPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathPoints;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_pathPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathPoints = value;
}
constexpr int32_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_currentPathPointIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPathPointIdx;
}
constexpr int32_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_currentPathPointIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentPathPointIdx;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_currentPathPointIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentPathPointIdx = value;
}
constexpr float_t& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_nextPathTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPathTimestamp;
}
constexpr float_t const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get_nextPathTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPathTimestamp;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set_nextPathTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPathTimestamp = value;
}
constexpr ::GlobalNamespace::BeeSwarmData& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::BeeSwarmData const& GlobalNamespace::AngryBeeSwarm::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::AngryBeeSwarm::__cordl_internal_set__Data(::GlobalNamespace::BeeSwarmData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::AngryBeeSwarm::setStaticF_instance(::UnityW<::GlobalNamespace::AngryBeeSwarm>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::AngryBeeSwarm>, "instance", ::GlobalNamespace::AngryBeeSwarm*>(std::forward<::UnityW<::GlobalNamespace::AngryBeeSwarm>>(value));
}
inline ::UnityW<::GlobalNamespace::AngryBeeSwarm> GlobalNamespace::AngryBeeSwarm::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::AngryBeeSwarm>, "instance", ::GlobalNamespace::AngryBeeSwarm*>();
}
inline bool GlobalNamespace::AngryBeeSwarm::get_isDormant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"get_isDormant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::InitializeSwarm()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"InitializeSwarm", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::Emerge(::UnityEngine::Vector3  fromPosition, ::UnityEngine::Vector3  toPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"Emerge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromPosition, toPosition);
}
inline void GlobalNamespace::AngryBeeSwarm::OnChangeState(::GlobalNamespace::AngryBeeSwarm_ChaseState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"OnChangeState", {}, {::i2c::type_of<::GlobalNamespace::AngryBeeSwarm_ChaseState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::AngryBeeSwarm::ChooseClosestTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"ChooseClosestTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::SetInitialRotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"SetInitialRotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::SwarmEmergeUpdateShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"SwarmEmergeUpdateShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::RiseGrabbedLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"RiseGrabbedLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::UpdateFollowPath(::UnityEngine::Vector3  destination, float_t  currentSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"UpdateFollowPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, currentSpeed);
}
inline void GlobalNamespace::AngryBeeSwarm::GetNewPath(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"GetNewPath", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::AngryBeeSwarm::ResetPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"ResetPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::ChaseHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"ChaseHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::MoveBodyShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"MoveBodyShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::GrabBodyShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"GrabBodyShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeeSwarmData GlobalNamespace::AngryBeeSwarm::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeeSwarmData>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::set_Data(::GlobalNamespace::BeeSwarmData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::BeeSwarmData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::AngryBeeSwarm::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::AngryBeeSwarm::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::AngryBeeSwarm::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
inline void GlobalNamespace::AngryBeeSwarm::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::TestEmerge()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {"TestEmerge", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AngryBeeSwarm::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::AngryBeeSwarm::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AngryBeeSwarm*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AngryBeeSwarm* GlobalNamespace::AngryBeeSwarm::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AngryBeeSwarm*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AngryBeeSwarm::AngryBeeSwarm()   {
}
