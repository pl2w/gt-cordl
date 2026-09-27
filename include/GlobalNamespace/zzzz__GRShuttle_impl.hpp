#pragma once
// IWYU pragma private; include "GlobalNamespace/GRShuttle.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_impl.hpp"
#include "GlobalNamespace/zzzz__GRShuttleState_impl.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GRShuttle_def.hpp"
#include "GlobalNamespace/zzzz__AbilitySound_def.hpp"
#include "GlobalNamespace/zzzz__GRBay_def.hpp"
#include "GlobalNamespace/zzzz__GRDoor_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_ShuttleState_def.hpp"
#include "GlobalNamespace/zzzz__GRPlayer_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttleState_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttleUI_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__IDCardScanner_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58b4dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b4ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b4ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(int32_t)>(&::GlobalNamespace::GRShuttle::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b4eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SetBay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GRBay*)>(&::GlobalNamespace::GRShuttle::SetBay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b5014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetBay", {}, {::i2c::type_of<::GlobalNamespace::GRBay*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SetReactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRShuttle::SetReactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b501c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetReactor", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SetLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GRShuttleGroupLoc)>(&::GlobalNamespace::GRShuttle::SetLocation)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x58b5024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetLocation", {}, {::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GhostReactor*, ::GlobalNamespace::GRShuttleGroupLoc, int32_t)>(&::GlobalNamespace::GRShuttle::Setup)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58b50d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.GetTargetFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::GetTargetFloor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58b4c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetTargetFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GRShuttleState (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b51f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.GetOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::GetOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b5200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetOwner", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SetOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRShuttle::SetOwner)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x58b5120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::SliceUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b5208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::Refresh)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58b52d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.JoinShuttleRoomLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GRShuttle*, ::GlobalNamespace::GRShuttle*)>(&::GlobalNamespace::GRShuttle::JoinShuttleRoomLocalPlayer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58b52e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"JoinShuttleRoomLocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRShuttle*>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.TeleportLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRShuttle*, ::GlobalNamespace::GRShuttle*)>(&::GlobalNamespace::GRShuttle::TeleportLocalPlayer)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x58b52ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TeleportLocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRShuttle*>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GRShuttleState, bool)>(&::GlobalNamespace::GRShuttle::SetState)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x58b5758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRShuttleState>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::UpdateState)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58b520c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"UpdateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.RequestArrival
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::RequestArrival)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58b5e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"RequestArrival", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.StartMoveFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::StartMoveFx)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58b5d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"StartMoveFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.StopMoveFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::StopMoveFx)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58b4ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"StopMoveFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.IsPodUnlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::IsPodUnlocked)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58b5ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsPodUnlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.GetMaxDropFloor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::GetMaxDropFloor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58b4d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetMaxDropFloor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnShuttleMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnShuttleMove)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58b5fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnShuttleMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnShuttleMoveActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(int32_t)>(&::GlobalNamespace::GRShuttle::OnShuttleMoveActorNr)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58b6004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnShuttleMoveActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.TargetLevelUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::TargetLevelUp)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58b60bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TargetLevelUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.TargetLevelDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::TargetLevelDown)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x58b6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TargetLevelDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.GetTargetShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::GetTargetShuttle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58b6144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetTargetShuttle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.IsPlayerOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GRShuttle::IsPlayerOwner)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58b6248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsPlayerOwner", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.IsShuttleInteractableByPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::GRPlayer*, bool)>(&::GlobalNamespace::GRShuttle::IsShuttleInteractableByPlayer)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x58b62ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsShuttleInteractableByPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.IsPlayerOwner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRShuttle::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRShuttle::IsPlayerOwner)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b64ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsPlayerOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.ToggleDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::ToggleDoor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58b64bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"ToggleDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.ToggleDoorActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)(int32_t)>(&::GlobalNamespace::GRShuttle::ToggleDoorActorNr)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58b6554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"ToggleDoorActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.EmergencyOpenDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::EmergencyOpenDoor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58b663c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"EmergencyOpenDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnOpenDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnOpenDoor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58b66e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnOpenDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OpenDoorLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OpenDoorLocal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x58b5a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OpenDoorLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.CloseDoorLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::CloseDoorLocal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58b5b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"CloseDoorLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnCloseDoor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnCloseDoor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58b6778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnCloseDoor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnLaunch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnLaunch)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58b6834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnLaunch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnArrive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnArrive)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58b68ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnArrive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnTargetLevelUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnTargetLevelUp)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58b68f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnTargetLevelUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.OnTargetLevelDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::OnTargetLevelDown)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58b692c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnTargetLevelDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.ClampTargetSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRShuttle::*)(int32_t)>(&::GlobalNamespace::GRShuttle::ClampTargetSection)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58b5048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"ClampTargetSection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.TryStartLocalPlayerShuttleMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRShuttle::TryStartLocalPlayerShuttleMove)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x58b5b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TryStartLocalPlayerShuttleMove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.UpdateGRPlayerShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GRShuttle::UpdateGRPlayerShuttle)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x58b6c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"UpdateGRPlayerShuttle", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.CalcTargetShuttleId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::StringW)>(&::GlobalNamespace::GRShuttle::CalcTargetShuttleId)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x58b71d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"CalcTargetShuttleId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.CancelPlayerShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRPlayer*)>(&::GlobalNamespace::GRShuttle::CancelPlayerShuttle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58b70b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"CancelPlayerShuttle", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle.SetPlayerShuttleState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRPlayer*, ::GlobalNamespace::GRPlayer_ShuttleState)>(&::GlobalNamespace::GRShuttle::SetPlayerShuttleState)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x58b6960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetPlayerShuttleState", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer_ShuttleState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRShuttle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRShuttle::*)()>(&::GlobalNamespace::GRShuttle::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58b7324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GTZone& GlobalNamespace::GRShuttle::__cordl_internal_get_zone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr ::GlobalNamespace::GTZone const& GlobalNamespace::GRShuttle::__cordl_internal_get_zone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zone;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_zone(::GlobalNamespace::GTZone  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zone = value;
}
constexpr ::GlobalNamespace::GRShuttleUI*& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleUI;
}
constexpr ::GlobalNamespace::GRShuttleUI* const& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleUI;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_shuttleUI(::GlobalNamespace::GRShuttleUI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleUI = value;
}
constexpr ::GlobalNamespace::GRDoor*& GlobalNamespace::GRShuttle::__cordl_internal_get_entryDoor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryDoor;
}
constexpr ::GlobalNamespace::GRDoor* const& GlobalNamespace::GRShuttle::__cordl_internal_get_entryDoor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryDoor;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_entryDoor(::GlobalNamespace::GRDoor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryDoor = value;
}
constexpr ::GlobalNamespace::GRShuttleGroupLoc& GlobalNamespace::GRShuttle::__cordl_internal_get_location()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr ::GlobalNamespace::GRShuttleGroupLoc const& GlobalNamespace::GRShuttle::__cordl_internal_get_location() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_location(::GlobalNamespace::GRShuttleGroupLoc  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___location = value;
}
constexpr int32_t& GlobalNamespace::GRShuttle::__cordl_internal_get_employeeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeIndex;
}
constexpr int32_t const& GlobalNamespace::GRShuttle::__cordl_internal_get_employeeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___employeeIndex;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_employeeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___employeeIndex = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRShuttle::__cordl_internal_get_takeOffSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___takeOffSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRShuttle::__cordl_internal_get_takeOffSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___takeOffSound;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_takeOffSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___takeOffSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRShuttle::__cordl_internal_get_moveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRShuttle::__cordl_internal_get_moveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___moveSound;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_moveSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___moveSound = value;
}
constexpr ::GlobalNamespace::AbilitySound*& GlobalNamespace::GRShuttle::__cordl_internal_get_landSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landSound;
}
constexpr ::GlobalNamespace::AbilitySound* const& GlobalNamespace::GRShuttle::__cordl_internal_get_landSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___landSound;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_landSound(::GlobalNamespace::AbilitySound*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___landSound = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& GlobalNamespace::GRShuttle::__cordl_internal_get_friendCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& GlobalNamespace::GRShuttle::__cordl_internal_get_friendCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___friendCollider;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_friendCollider(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___friendCollider = value;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>& GlobalNamespace::GRShuttle::__cordl_internal_get_joinTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTrigger;
}
constexpr ::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger> const& GlobalNamespace::GRShuttle::__cordl_internal_get_joinTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinTrigger;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_joinTrigger(::UnityW<::GorillaNetworking::GorillaNetworkJoinTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinTrigger = value;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle>& GlobalNamespace::GRShuttle::__cordl_internal_get_specificDestinationShuttle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificDestinationShuttle;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& GlobalNamespace::GRShuttle::__cordl_internal_get_specificDestinationShuttle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificDestinationShuttle;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_specificDestinationShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specificDestinationShuttle = value;
}
constexpr int32_t& GlobalNamespace::GRShuttle::__cordl_internal_get_specificFloor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificFloor;
}
constexpr int32_t const& GlobalNamespace::GRShuttle::__cordl_internal_get_specificFloor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___specificFloor;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_specificFloor(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___specificFloor = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GlobalNamespace::GRShuttle::__cordl_internal_get_windowFx()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowFx;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GlobalNamespace::GRShuttle::__cordl_internal_get_windowFx() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowFx;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_windowFx(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowFx = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRShuttle::__cordl_internal_get_hideOnMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideOnMove;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRShuttle::__cordl_internal_get_hideOnMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hideOnMove;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_hideOnMove(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hideOnMove = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::GRShuttle::__cordl_internal_get_showOnMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showOnMove;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::GRShuttle::__cordl_internal_get_showOnMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showOnMove;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_showOnMove(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showOnMove = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& GlobalNamespace::GRShuttle::__cordl_internal_get_inShuttleVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inShuttleVolume;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& GlobalNamespace::GRShuttle::__cordl_internal_get_inShuttleVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inShuttleVolume;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_inShuttleVolume(::UnityW<::UnityEngine::BoxCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inShuttleVolume = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRShuttle::__cordl_internal_get_entryCardScanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryCardScanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRShuttle::__cordl_internal_get_entryCardScanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entryCardScanner;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_entryCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entryCardScanner = value;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner>& GlobalNamespace::GRShuttle::__cordl_internal_get_departCardScanner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___departCardScanner;
}
constexpr ::UnityW<::GlobalNamespace::IDCardScanner> const& GlobalNamespace::GRShuttle::__cordl_internal_get_departCardScanner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___departCardScanner;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_departCardScanner(::UnityW<::GlobalNamespace::IDCardScanner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___departCardScanner = value;
}
constexpr int32_t& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleId;
}
constexpr int32_t const& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleId;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_shuttleId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleId = value;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor>& GlobalNamespace::GRShuttle::__cordl_internal_get_reactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& GlobalNamespace::GRShuttle::__cordl_internal_get_reactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reactor;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reactor = value;
}
constexpr int32_t& GlobalNamespace::GRShuttle::__cordl_internal_get_targetSection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSection;
}
constexpr int32_t const& GlobalNamespace::GRShuttle::__cordl_internal_get_targetSection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetSection;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_targetSection(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetSection = value;
}
constexpr ::GlobalNamespace::GRShuttleState& GlobalNamespace::GRShuttle::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::GRShuttleState const& GlobalNamespace::GRShuttle::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_state(::GlobalNamespace::GRShuttleState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr double_t& GlobalNamespace::GRShuttle::__cordl_internal_get_stateStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr double_t const& GlobalNamespace::GRShuttle::__cordl_internal_get_stateStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateStartTime;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_stateStartTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateStartTime = value;
}
constexpr ::UnityW<::GlobalNamespace::GRBay>& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleBay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleBay;
}
constexpr ::UnityW<::GlobalNamespace::GRBay> const& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleBay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleBay;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_shuttleBay(::UnityW<::GlobalNamespace::GRBay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleBay = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleOwner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GRShuttle::__cordl_internal_get_shuttleOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleOwner;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_shuttleOwner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleOwner = value;
}
constexpr double_t& GlobalNamespace::GRShuttle::__cordl_internal_get_lastCloseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCloseTime;
}
constexpr double_t const& GlobalNamespace::GRShuttle::__cordl_internal_get_lastCloseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCloseTime;
}
constexpr void GlobalNamespace::GRShuttle::__cordl_internal_set_lastCloseTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCloseTime = value;
}
inline void GlobalNamespace::GRShuttle::setStaticF_sectionFloors(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "sectionFloors", ::GlobalNamespace::GRShuttle*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::GRShuttle::getStaticF_sectionFloors()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "sectionFloors", ::GlobalNamespace::GRShuttle*>();
}
inline void GlobalNamespace::GRShuttle::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::Init(int32_t  shuttleId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Init", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, shuttleId);
}
inline void GlobalNamespace::GRShuttle::SetBay(::GlobalNamespace::GRBay*  bay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetBay", {}, {::i2c::type_of<::GlobalNamespace::GRBay*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bay);
}
inline void GlobalNamespace::GRShuttle::SetReactor(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetReactor", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline void GlobalNamespace::GRShuttle::SetLocation(::GlobalNamespace::GRShuttleGroupLoc  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetLocation", {}, {::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location);
}
inline void GlobalNamespace::GRShuttle::Setup(::GlobalNamespace::GhostReactor*  reactor, ::GlobalNamespace::GRShuttleGroupLoc  location, int32_t  employeeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>(), ::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor, location, employeeIndex);
}
inline int32_t GlobalNamespace::GRShuttle::GetTargetFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetTargetFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::GRShuttleState GlobalNamespace::GRShuttle::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GRShuttleState>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::GRShuttle::GetOwner()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetOwner", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::SetOwner(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GRShuttle::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::JoinShuttleRoomLocalPlayer(::GlobalNamespace::GRShuttle*  sourceShuttle, ::GlobalNamespace::GRShuttle*  destShuttle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"JoinShuttleRoomLocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRShuttle*>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceShuttle, destShuttle);
}
inline void GlobalNamespace::GRShuttle::TeleportLocalPlayer(::GlobalNamespace::GRShuttle*  sourceShuttle, ::GlobalNamespace::GRShuttle*  destShuttle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TeleportLocalPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRShuttle*>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceShuttle, destShuttle);
}
inline void GlobalNamespace::GRShuttle::SetState(::GlobalNamespace::GRShuttleState  newState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::GRShuttleState>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, force);
}
inline void GlobalNamespace::GRShuttle::UpdateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"UpdateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::RequestArrival()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"RequestArrival", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::StartMoveFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"StartMoveFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::StopMoveFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"StopMoveFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRShuttle::IsPodUnlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsPodUnlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRShuttle::GetMaxDropFloor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetMaxDropFloor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnShuttleMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnShuttleMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnShuttleMoveActorNr(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnShuttleMoveActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr);
}
inline void GlobalNamespace::GRShuttle::TargetLevelUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TargetLevelUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::TargetLevelDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TargetLevelDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRShuttle::GetTargetShuttle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"GetTargetShuttle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method);
}
inline bool GlobalNamespace::GRShuttle::IsPlayerOwner(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsPlayerOwner", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline bool GlobalNamespace::GRShuttle::IsShuttleInteractableByPlayer(::GlobalNamespace::GRPlayer*  player, bool  ignoreOwnership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsShuttleInteractableByPlayer", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, ignoreOwnership);
}
inline bool GlobalNamespace::GRShuttle::IsPlayerOwner(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"IsPlayerOwner", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline void GlobalNamespace::GRShuttle::ToggleDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"ToggleDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::ToggleDoorActorNr(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"ToggleDoorActorNr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNr);
}
inline void GlobalNamespace::GRShuttle::EmergencyOpenDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"EmergencyOpenDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnOpenDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnOpenDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OpenDoorLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OpenDoorLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::CloseDoorLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"CloseDoorLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnCloseDoor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnCloseDoor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnLaunch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnLaunch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnArrive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnArrive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnTargetLevelUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnTargetLevelUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRShuttle::OnTargetLevelDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"OnTargetLevelDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GRShuttle::ClampTargetSection(int32_t  newTargetSection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"ClampTargetSection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, newTargetSection);
}
inline void GlobalNamespace::GRShuttle::TryStartLocalPlayerShuttleMove(int32_t  currShuttleId, ::GlobalNamespace::NetPlayer*  shuttleOwner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"TryStartLocalPlayerShuttleMove", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currShuttleId, shuttleOwner);
}
inline void GlobalNamespace::GRShuttle::UpdateGRPlayerShuttle(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"UpdateGRPlayerShuttle", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline int32_t GlobalNamespace::GRShuttle::CalcTargetShuttleId(int32_t  currShuttleId, ::StringW  ownerUserId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"CalcTargetShuttleId", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, currShuttleId, ownerUserId);
}
inline void GlobalNamespace::GRShuttle::CancelPlayerShuttle(::GlobalNamespace::GRPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"CancelPlayerShuttle", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GlobalNamespace::GRShuttle::SetPlayerShuttleState(::GlobalNamespace::GRPlayer*  player, ::GlobalNamespace::GRPlayer_ShuttleState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {"SetPlayerShuttleState", {}, {::i2c::type_of<::GlobalNamespace::GRPlayer*>(), ::i2c::type_of<::GlobalNamespace::GRPlayer_ShuttleState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, newState);
}
inline void GlobalNamespace::GRShuttle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRShuttle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRShuttle* GlobalNamespace::GRShuttle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRShuttle*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GRShuttle::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GRShuttle::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRShuttle::GRShuttle()   {
}
