#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenGhostChaser.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_ChaseState_impl.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_GhostData_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_def.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_ChaseState_def.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_GhostData_def.hpp"
#include "GlobalNamespace/zzzz__HalloweenGhostChaser_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPath_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x594b4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x594b560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.InitializeGhost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::InitializeGhost)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x594b69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"InitializeGhost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::LateUpdate)> {
  constexpr static std::size_t size = 0x730;
  constexpr static std::size_t addrs = 0x594b82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::UpdateState)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x594bf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.OnChangeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::GlobalNamespace::HalloweenGhostChaser_ChaseState)>(&::GlobalNamespace::HalloweenGhostChaser::OnChangeState)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x594c660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"OnChangeState", {}, {::i2c::type_of<::GlobalNamespace::HalloweenGhostChaser_ChaseState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.SetInitialSpawnPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::SetInitialSpawnPoint)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x594d688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"SetInitialSpawnPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.ChooseRandomTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::ChooseRandomTarget)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x594c194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"ChooseRandomTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.SetInitialRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::SetInitialRotations)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x594d52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"SetInitialRotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.MoveHead
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::MoveHead)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x594ccdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"MoveHead", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.RiseHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::RiseHost)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x594cb44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"RiseHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.RiseGrabbedLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::RiseGrabbedLocalPlayer)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x594d18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"RiseGrabbedLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.UpdateFollowPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::HalloweenGhostChaser::UpdateFollowPath)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x594d81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"UpdateFollowPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.GetNewPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::HalloweenGhostChaser::GetNewPath)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x594dbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"GetNewPath", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.ResetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::ResetPath)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x594d808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"ResetPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.ChaseHost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::ChaseHost)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x594cd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"ChaseHost", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.MoveBodyShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::MoveBodyShared)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x594d0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"MoveBodyShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.GrabBodyShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::GrabBodyShared)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x594d450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"GrabBodyShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::HalloweenGhostChaser_GhostData (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::get_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x594defc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::GlobalNamespace::HalloweenGhostChaser_GhostData)>(&::GlobalNamespace::HalloweenGhostChaser::set_Data)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x594df64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::HalloweenGhostChaser_GhostData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::WriteDataFusion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x594dfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::ReadDataFusion)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x594e078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::HalloweenGhostChaser::WriteDataPUN)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x594e1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::HalloweenGhostChaser::ReadDataPUN)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x594e388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::GlobalNamespace::HalloweenGhostChaser::OnOwnerChange)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x594e5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::OnJoinedRoom)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x594e654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x594e70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)(bool)>(&::GlobalNamespace::HalloweenGhostChaser::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x594e764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser::*)()>(&::GlobalNamespace::HalloweenGhostChaser::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x690;
  constexpr static std::size_t addrs = 0x594e7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                    {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_heightAboveNavmesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightAboveNavmesh;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_heightAboveNavmesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightAboveNavmesh;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_heightAboveNavmesh(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightAboveNavmesh = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_followTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_followTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___followTarget;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_followTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___followTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_childGhost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childGhost;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_childGhost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___childGhost;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_childGhost(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___childGhost = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_velocityStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityStep;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_velocityStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityStep;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_velocityStep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityStep = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_currentSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_currentSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeed;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_currentSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeed = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_velocityIncreaseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityIncreaseTime;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_velocityIncreaseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityIncreaseTime;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_velocityIncreaseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityIncreaseTime = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_riseDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseDistance;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_riseDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___riseDistance;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_riseDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___riseDistance = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summonDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonDistance;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summonDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonDistance;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_summonDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonDistance = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_timeEncircled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeEncircled;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_timeEncircled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeEncircled;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_timeEncircled(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeEncircled = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastSummonCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSummonCheck;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastSummonCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSummonCheck;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_lastSummonCheck(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSummonCheck = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_timeGongStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeGongStarted;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_timeGongStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeGongStarted;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_timeGongStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeGongStarted = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summoningDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningDuration;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summoningDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningDuration;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_summoningDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningDuration = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summoningCheckCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningCheckCountdown;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summoningCheckCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summoningCheckCountdown;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_summoningCheckCountdown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summoningCheckCountdown = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_gongDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gongDuration;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_gongDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gongDuration;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_gongDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gongDuration = value;
}
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summonCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonCount;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summonCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonCount;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_summonCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonCount = value;
}
constexpr bool& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_wasSurroundedLastCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSurroundedLastCheck;
}
constexpr bool const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_wasSurroundedLastCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSurroundedLastCheck;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_wasSurroundedLastCheck(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSurroundedLastCheck = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_laugh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laugh;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_laugh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laugh;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_laugh(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laugh = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_possibleTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleTarget;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_possibleTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___possibleTarget;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_possibleTarget(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___possibleTarget = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_defaultLaugh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLaugh;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_defaultLaugh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultLaugh;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_defaultLaugh(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultLaugh = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_deepLaugh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deepLaugh;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_deepLaugh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deepLaugh;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_deepLaugh(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deepLaugh = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_gong()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gong;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_gong() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gong;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_gong(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gong = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_noisyOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisyOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_noisyOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noisyOffset;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_noisyOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noisyOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftArmGrabbingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmGrabbingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftArmGrabbingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArmGrabbingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_leftArmGrabbingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArmGrabbingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightArmGrabbingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmGrabbingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightArmGrabbingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArmGrabbingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_rightArmGrabbingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArmGrabbingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftHandGrabbingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandGrabbingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftHandGrabbingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandGrabbingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_leftHandGrabbingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandGrabbingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightHandGrabbingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandGrabbingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightHandGrabbingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandGrabbingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_rightHandGrabbingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandGrabbingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftHandStartingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandStartingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftHandStartingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandStartingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_leftHandStartingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandStartingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightHandStartingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandStartingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightHandStartingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandStartingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_rightHandStartingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandStartingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostOffsetGrabbingLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostOffsetGrabbingLocal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostOffsetGrabbingLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostOffsetGrabbingLocal;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_ghostOffsetGrabbingLocal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostOffsetGrabbingLocal = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostStartingEulerRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostStartingEulerRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostStartingEulerRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostStartingEulerRotation;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_ghostStartingEulerRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostStartingEulerRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostGrabbingEulerRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostGrabbingEulerRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostGrabbingEulerRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostGrabbingEulerRotation;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_ghostGrabbingEulerRotation(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostGrabbingEulerRotation = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_maxTimeToNextHeadAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimeToNextHeadAngle;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_maxTimeToNextHeadAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTimeToNextHeadAngle;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_maxTimeToNextHeadAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTimeToNextHeadAngle = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastHeadAngleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadAngleTime;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastHeadAngleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastHeadAngleTime;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_lastHeadAngleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastHeadAngleTime = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_nextHeadAngleTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextHeadAngleTime;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_nextHeadAngleTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextHeadAngleTime;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_nextHeadAngleTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextHeadAngleTime = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_nextTimeToChasePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTimeToChasePlayer;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_nextTimeToChasePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTimeToChasePlayer;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_nextTimeToChasePlayer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextTimeToChasePlayer = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_maxNextTimeToChasePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNextTimeToChasePlayer;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_maxNextTimeToChasePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNextTimeToChasePlayer;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_maxNextTimeToChasePlayer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNextTimeToChasePlayer = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_timeRiseStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRiseStarted;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_timeRiseStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRiseStarted;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_timeRiseStarted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeRiseStarted = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_totalTimeToRise()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTimeToRise;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_totalTimeToRise() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalTimeToRise;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_totalTimeToRise(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalTimeToRise = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_catchDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchDistance;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_catchDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchDistance;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_catchDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchDistance = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabTime;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabTime;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_grabTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabTime = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabDuration;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_grabDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabDuration = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSpeed;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSpeed;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_grabSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabSpeed = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_minGrabCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minGrabCooldown;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_minGrabCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minGrabCooldown;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_minGrabCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minGrabCooldown = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastSpeedIncreased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpeedIncreased;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastSpeedIncreased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSpeedIncreased;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_lastSpeedIncreased(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSpeedIncreased = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_headEulerAngles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headEulerAngles;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_headEulerAngles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headEulerAngles;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_headEulerAngles(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headEulerAngles = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_skullTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skullTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_skullTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skullTransform;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_skullTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skullTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftArm;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_leftArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArm;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightArm;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_rightArm(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightArm = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_leftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHand;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_leftHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_rightHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHand;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_rightHand(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHand = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_spawnTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_spawnTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransforms;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_spawnTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTransforms = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_spawnTransformOffsets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransformOffsets;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_spawnTransformOffsets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnTransformOffsets;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_spawnTransformOffsets(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnTransformOffsets = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostBody;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostBody;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_ghostBody(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostBody = value;
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_currentState(::GlobalNamespace::HalloweenGhostChaser_ChaseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_ChaseState const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_lastState(::GlobalNamespace::HalloweenGhostChaser_ChaseState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_spawnIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnIndex;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_spawnIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnIndex;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_spawnIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnIndex = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabbedPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_grabbedPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabbedPlayer;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_grabbedPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabbedPlayer = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_ghostMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostMaterial;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_ghostMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostMaterial = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_defaultColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_defaultColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultColor;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_defaultColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summonedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonedColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_summonedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summonedColor;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_summonedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summonedColor = value;
}
constexpr bool& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_isSummoned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSummoned;
}
constexpr bool const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_isSummoned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSummoned;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_isSummoned(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSummoned = value;
}
constexpr bool& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_targetIsOnNavMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetIsOnNavMesh;
}
constexpr bool const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_targetIsOnNavMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetIsOnNavMesh;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_targetIsOnNavMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetIsOnNavMesh = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_hapticStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_hapticStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticStrength;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_hapticStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticStrength = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_hapticDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_hapticDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticDuration;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_hapticDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hapticDuration = value;
}
constexpr ::UnityEngine::AI::NavMeshPath*& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::UnityEngine::AI::NavMeshPath* const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_path(::UnityEngine::AI::NavMeshPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_points()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_points() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___points;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___points = value;
}
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_currentTargetIdx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetIdx;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_currentTargetIdx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTargetIdx;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_currentTargetIdx(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTargetIdx = value;
}
constexpr float_t& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_nextPathTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPathTimestamp;
}
constexpr float_t const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get_nextPathTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextPathTimestamp;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set_nextPathTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextPathTimestamp = value;
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_GhostData& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr ::GlobalNamespace::HalloweenGhostChaser_GhostData const& GlobalNamespace::HalloweenGhostChaser::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GlobalNamespace::HalloweenGhostChaser::__cordl_internal_set__Data(::GlobalNamespace::HalloweenGhostChaser_GhostData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GlobalNamespace::HalloweenGhostChaser::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::InitializeGhost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"InitializeGhost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::OnChangeState(::GlobalNamespace::HalloweenGhostChaser_ChaseState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"OnChangeState", {}, {::i2c::type_of<::GlobalNamespace::HalloweenGhostChaser_ChaseState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::HalloweenGhostChaser::SetInitialSpawnPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"SetInitialSpawnPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::ChooseRandomTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"ChooseRandomTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::SetInitialRotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"SetInitialRotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::MoveHead()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"MoveHead", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::RiseHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"RiseHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::RiseGrabbedLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"RiseGrabbedLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::UpdateFollowPath(::UnityEngine::Vector3  destination, float_t  currentSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"UpdateFollowPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination, currentSpeed);
}
inline void GlobalNamespace::HalloweenGhostChaser::GetNewPath(::UnityEngine::Vector3  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"GetNewPath", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline void GlobalNamespace::HalloweenGhostChaser::ResetPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"ResetPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::ChaseHost()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"ChaseHost", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::MoveBodyShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"MoveBodyShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::GrabBodyShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"GrabBodyShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HalloweenGhostChaser_GhostData GlobalNamespace::HalloweenGhostChaser::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HalloweenGhostChaser_GhostData>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::set_Data(::GlobalNamespace::HalloweenGhostChaser_GhostData  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"set_Data", {}, {::i2c::type_of<::GlobalNamespace::HalloweenGhostChaser_GhostData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::HalloweenGhostChaser::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::HalloweenGhostChaser::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::HalloweenGhostChaser::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
inline void GlobalNamespace::HalloweenGhostChaser::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenGhostChaser::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::HalloweenGhostChaser::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HalloweenGhostChaser* GlobalNamespace::HalloweenGhostChaser::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HalloweenGhostChaser*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HalloweenGhostChaser::HalloweenGhostChaser()   {
}
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::*)()>(&::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x594eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0._ChooseRandomTarget_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::_ChooseRandomTarget_b__0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x594eee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*>(),
                        {"<ChooseRandomTarget>b__0", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::HalloweenGhostChaser>& GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HalloweenGhostChaser> const& GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HalloweenGhostChaser>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::__cordl_internal_get_randomTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomTarget;
}
constexpr int32_t const& GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::__cordl_internal_get_randomTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomTarget;
}
constexpr void GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::__cordl_internal_set_randomTarget(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomTarget = value;
}
inline void GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::_ChooseRandomTarget_b__0(::GlobalNamespace::RigContainer*  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*>(),
                        {"<ChooseRandomTarget>b__0", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0* GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HalloweenGhostChaser___c__DisplayClass74_0::HalloweenGhostChaser___c__DisplayClass74_0()   {
}
