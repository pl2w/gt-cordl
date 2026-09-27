#pragma once
// IWYU pragma private; include "GlobalNamespace/GRElevatorManager.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_DestinationVideo_impl.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorLocation_impl.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorSystemState_impl.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_impl.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CallLimitersList_2_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_DestinationVideo_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorLocation_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_ElevatorSystemState_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_RPC_def.hpp"
#include "GlobalNamespace/zzzz__GRElevatorManager_def.hpp"
#include "GlobalNamespace/zzzz__GRElevator_ButtonType_def.hpp"
#include "GlobalNamespace/zzzz__GRElevator_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttleGroupLoc_def.hpp"
#include "GlobalNamespace/zzzz__GRShuttle_def.hpp"
#include "GlobalNamespace/zzzz__GhostReactor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaFriendCollider_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaNetworking/zzzz__GorillaNetworkJoinTrigger_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.get_InPrivateRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::get_InPrivateRoom)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58790c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"get_InPrivateRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5879134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(bool)>(&::GlobalNamespace::GRElevatorManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::Awake)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0x5879144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::Start)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5879668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::OnDestroy)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5879850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::OnEnable)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5879ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::OnDisable)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5879c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.DisableVideoScreens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::UnityEngine::Video::VideoPlayer*)>(&::GlobalNamespace::GRElevatorManager::DisableVideoScreens)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5879dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"DisableVideoScreens", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::Tick)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5879e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.CheckInitializationState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::CheckInitializationState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5879f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"CheckInitializationState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ProcessElevatorSystemState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::ProcessElevatorSystemState)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5879fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ProcessElevatorSystemState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ActivateElevating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::ActivateElevating)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x587a8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ActivateElevating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.LeadElevatorJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::LeadElevatorJoin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x587b618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LeadElevatorJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.SetupFriendGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*)>(&::GlobalNamespace::GRElevatorManager::SetupFriendGroup)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x587b860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"SetupFriendGroup", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.LeadElevatorJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*, ::GorillaNetworking::GorillaNetworkJoinTrigger*)>(&::GlobalNamespace::GRElevatorManager::LeadElevatorJoin)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x587b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LeadElevatorJoin", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.LeadShuttleJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*, ::GorillaNetworking::GorillaNetworkJoinTrigger*, int32_t)>(&::GlobalNamespace::GRElevatorManager::LeadShuttleJoin)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x587bb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LeadShuttleJoin", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.UpdateElevatorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevatorManager_ElevatorSystemState, ::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::UpdateElevatorState)> {
  constexpr static std::size_t size = 0x510;
  constexpr static std::size_t addrs = 0x587a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"UpdateElevatorState", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorSystemState>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.PlayDestinationVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::PlayDestinationVideo)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x587bea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"PlayDestinationVideo", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.getClipForDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Video::VideoClip> (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::getClipForDestination)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x587c364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"getClipForDestination", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.UpdateUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::UpdateUI)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x587c14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"UpdateUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.RegisterElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRElevator*)>(&::GlobalNamespace::GRElevatorManager::RegisterElevator)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5877cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RegisterElevator", {}, {::i2c::type_of<::GlobalNamespace::GRElevator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.DeregisterElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRElevator*)>(&::GlobalNamespace::GRElevatorManager::DeregisterElevator)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5877dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"DeregisterElevator", {}, {::i2c::type_of<::GlobalNamespace::GRElevator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ElevatorButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::ElevatorButtonPressed)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x587823c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ElevatorButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ElevatorButtonPressedInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::ElevatorButtonPressedInternal)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x587c3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ElevatorButtonPressedInternal", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ProcessElevatorButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevator_ButtonType, ::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::ProcessElevatorButtonPress)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x587c55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ProcessElevatorButtonPress", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GRElevatorManager::WriteDataPUN)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x587c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GRElevatorManager::ReadDataPUN)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x587ca44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.RemoteElevatorButtonPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GRElevatorManager::RemoteElevatorButtonPress)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x587ce6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RemoteElevatorButtonPress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.RemoteActivateTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::GRElevatorManager::RemoteActivateTeleport)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x587cf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RemoteActivateTeleport", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.TeleportDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevatorManager_ElevatorLocation, ::GlobalNamespace::GRElevatorManager_ElevatorLocation, int32_t, double_t)>(&::GlobalNamespace::GRElevatorManager::TeleportDelay)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x587cffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"TeleportDelay", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ActivateTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevatorManager_ElevatorLocation, ::GlobalNamespace::GRElevatorManager_ElevatorLocation, int32_t, double_t)>(&::GlobalNamespace::GRElevatorManager::ActivateTeleport)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x587ae64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ActivateTeleport", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.CloseAllElevators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::CloseAllElevators)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x587a820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"CloseAllElevators", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OpenElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRElevatorManager_ElevatorLocation)>(&::GlobalNamespace::GRElevatorManager::OpenElevator)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x587c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OpenElevator", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::GetTime)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x587a740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ValidElevatorNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GRElevatorManager::ValidElevatorNetworking)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x587d2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ValidElevatorNetworking", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ValidShuttleNetworking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::GlobalNamespace::GRElevatorManager::ValidShuttleNetworking)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x587d550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ValidShuttleNetworking", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.IsPlayerInShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::GlobalNamespace::GRShuttle*, ::GlobalNamespace::GRShuttle*)>(&::GlobalNamespace::GRElevatorManager::IsPlayerInShuttle)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x587d914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"IsPlayerInShuttle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.LowestActorNumberInElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::GlobalNamespace::GRElevatorManager::LowestActorNumberInElevator)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x587ac24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LowestActorNumberInElevator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.LowestActorNumberInElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::GorillaFriendCollider*, ::GlobalNamespace::GorillaFriendCollider*)>(&::GlobalNamespace::GRElevatorManager::LowestActorNumberInElevator)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x587db1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LowestActorNumberInElevator", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.RefreshTeleportingPlayersJoinTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::RefreshTeleportingPlayersJoinTime)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x587d0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RefreshTeleportingPlayersJoinTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.InControlOfElevator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GRElevatorManager::InControlOfElevator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x587a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"InControlOfElevator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.JoinPublicRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GRElevatorManager::JoinPublicRoom)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x587ba68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"JoinPublicRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnReachedDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::OnReachedDestination)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x587aac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnReachedDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (*)(int32_t)>(&::GlobalNamespace::GRElevatorManager::GetShuttle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x587d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetShuttle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.InitShuttles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GhostReactor*)>(&::GlobalNamespace::GRElevatorManager::InitShuttles)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x587dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"InitShuttles", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetPlayerShuttle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::GRShuttleGroupLoc, int32_t)>(&::GlobalNamespace::GRElevatorManager::GetPlayerShuttle)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x587de3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetPlayerShuttle", {}, {::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetDrillShuttleForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRElevatorManager::*)(int32_t)>(&::GlobalNamespace::GRElevatorManager::GetDrillShuttleForPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetDrillShuttleForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetStagingShuttleForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRElevatorManager::*)(int32_t)>(&::GlobalNamespace::GRElevatorManager::GetStagingShuttleForPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetStagingShuttleForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetShuttleForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRElevatorManager::*)(int32_t, ::GlobalNamespace::GRShuttleGroupLoc)>(&::GlobalNamespace::GRElevatorManager::GetShuttleForPlayer)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x587e0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetShuttleForPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.GetShuttleById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GRShuttle> (::GlobalNamespace::GRElevatorManager::*)(int32_t)>(&::GlobalNamespace::GRElevatorManager::GetShuttleById)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587dce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetShuttleById", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.AddPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRElevatorManager::AddPlayer)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x587e260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"AddPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.RemovePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRElevatorManager::RemovePlayer)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x587e3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RemovePlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::OnLeftRoom)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x587e53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnPlayerAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRElevatorManager::OnPlayerAdded)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x587e698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnPlayerAdded", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.OnPlayerRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GRElevatorManager::OnPlayerRemoved)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x587e734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnPlayerRemoved", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::WriteDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::ReadDataFusion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587e7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x587e7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)(bool)>(&::GlobalNamespace::GRElevatorManager::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager::*)()>(&::GlobalNamespace::GRElevatorManager::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::GRElevatorManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>*& GlobalNamespace::GRElevatorManager::__cordl_internal_get_elevatorByLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elevatorByLocation;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>* const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_elevatorByLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elevatorByLocation;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_elevatorByLocation(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GRElevatorManager_ElevatorLocation,::UnityW<::GlobalNamespace::GRElevator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elevatorByLocation = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>*& GlobalNamespace::GRElevatorManager::__cordl_internal_get_allElevators()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allElevators;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>* const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_allElevators() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allElevators;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_allElevators(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRElevator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allElevators = value;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& GlobalNamespace::GRElevatorManager::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_destination(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destination = value;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& GlobalNamespace::GRElevatorManager::__cordl_internal_get_currentLocation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLocation;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_currentLocation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLocation;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_currentLocation(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLocation = value;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& GlobalNamespace::GRElevatorManager::__cordl_internal_get_lastTeleportSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTeleportSource;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_lastTeleportSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTeleportSource;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_lastTeleportSource(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTeleportSource = value;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState& GlobalNamespace::GRElevatorManager::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorSystemState const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_currentState(::GlobalNamespace::GRElevatorManager_ElevatorSystemState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr double_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_timeLastTeleported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastTeleported;
}
constexpr double_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_timeLastTeleported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastTeleported;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_timeLastTeleported(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastTeleported = value;
}
constexpr bool& GlobalNamespace::GRElevatorManager::__cordl_internal_get_cosmeticsInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsInitialized;
}
constexpr bool const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_cosmeticsInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticsInitialized;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_cosmeticsInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticsInitialized = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*& GlobalNamespace::GRElevatorManager::__cordl_internal_get_shuttleGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleGroups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>* const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_shuttleGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuttleGroups;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_shuttleGroups(::System::Collections::Generic::List_1<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuttleGroups = value;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle>& GlobalNamespace::GRElevatorManager::__cordl_internal_get_mainStagingShuttle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainStagingShuttle;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_mainStagingShuttle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainStagingShuttle;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_mainStagingShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainStagingShuttle = value;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle>& GlobalNamespace::GRElevatorManager::__cordl_internal_get_mainDrillShuttle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainDrillShuttle;
}
constexpr ::UnityW<::GlobalNamespace::GRShuttle> const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_mainDrillShuttle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainDrillShuttle;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_mainDrillShuttle(::UnityW<::GlobalNamespace::GRShuttle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainDrillShuttle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*& GlobalNamespace::GRElevatorManager::__cordl_internal_get_allShuttles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allShuttles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>* const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_allShuttles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allShuttles;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_allShuttles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allShuttles = value;
}
constexpr float_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_destinationButtonlastPressedDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationButtonlastPressedDelay;
}
constexpr float_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_destinationButtonlastPressedDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationButtonlastPressedDelay;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_destinationButtonlastPressedDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationButtonlastPressedDelay = value;
}
constexpr float_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_doorsFullyClosedDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorsFullyClosedDelay;
}
constexpr float_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_doorsFullyClosedDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorsFullyClosedDelay;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_doorsFullyClosedDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorsFullyClosedDelay = value;
}
constexpr float_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_doorMaxClosingDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorMaxClosingDelay;
}
constexpr float_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_doorMaxClosingDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorMaxClosingDelay;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_doorMaxClosingDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorMaxClosingDelay = value;
}
constexpr double_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_destinationButtonLastPressedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationButtonLastPressedTime;
}
constexpr double_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_destinationButtonLastPressedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destinationButtonLastPressedTime;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_destinationButtonLastPressedTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destinationButtonLastPressedTime = value;
}
constexpr double_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_doorsFullyClosedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorsFullyClosedTime;
}
constexpr double_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_doorsFullyClosedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doorsFullyClosedTime;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_doorsFullyClosedTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doorsFullyClosedTime = value;
}
constexpr double_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_maxDoorClosingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDoorClosingTime;
}
constexpr double_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_maxDoorClosingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDoorClosingTime;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_maxDoorClosingTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDoorClosingTime = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::GRElevatorManager::__cordl_internal_get_actorIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorIds;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_actorIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actorIds;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_actorIds(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actorIds = value;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>*& GlobalNamespace::GRElevatorManager::__cordl_internal_get_m_RpcSpamChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>* const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_m_RpcSpamChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RpcSpamChecks;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_m_RpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::GRElevatorManager_RPC>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RpcSpamChecks = value;
}
constexpr bool& GlobalNamespace::GRElevatorManager::__cordl_internal_get_justTeleported()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justTeleported;
}
constexpr bool const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_justTeleported() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___justTeleported;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_justTeleported(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___justTeleported = value;
}
constexpr bool& GlobalNamespace::GRElevatorManager::__cordl_internal_get_waitingForRemoteTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForRemoteTeleport;
}
constexpr bool const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_waitingForRemoteTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForRemoteTeleport;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_waitingForRemoteTeleport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForRemoteTeleport = value;
}
constexpr int32_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_lastLowestActorNr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLowestActorNr;
}
constexpr int32_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_lastLowestActorNr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastLowestActorNr;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_lastLowestActorNr(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastLowestActorNr = value;
}
constexpr float_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_waitForZoneLoadFallbackTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForZoneLoadFallbackTimer;
}
constexpr float_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_waitForZoneLoadFallbackTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForZoneLoadFallbackTimer;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_waitForZoneLoadFallbackTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForZoneLoadFallbackTimer = value;
}
constexpr float_t& GlobalNamespace::GRElevatorManager::__cordl_internal_get_waitForZoneLoadFallbackMaxTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForZoneLoadFallbackMaxTime;
}
constexpr float_t const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_waitForZoneLoadFallbackMaxTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitForZoneLoadFallbackMaxTime;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_waitForZoneLoadFallbackMaxTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitForZoneLoadFallbackMaxTime = value;
}
constexpr bool& GlobalNamespace::GRElevatorManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::GRElevatorManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo>& GlobalNamespace::GRElevatorManager::__cordl_internal_get_DestinationVideos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationVideos;
}
constexpr ::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo> const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_DestinationVideos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationVideos;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_DestinationVideos(::ArrayW<::GlobalNamespace::GRElevatorManager_DestinationVideo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestinationVideos = value;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& GlobalNamespace::GRElevatorManager::__cordl_internal_get_DestinationVideoPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationVideoPlayer;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_DestinationVideoPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationVideoPlayer;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_DestinationVideoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestinationVideoPlayer = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GRElevatorManager::__cordl_internal_get_DestinationVideoPlayerAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationVideoPlayerAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GRElevatorManager::__cordl_internal_get_DestinationVideoPlayerAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DestinationVideoPlayerAudioSource;
}
constexpr void GlobalNamespace::GRElevatorManager::__cordl_internal_set_DestinationVideoPlayerAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DestinationVideoPlayerAudioSource = value;
}
inline void GlobalNamespace::GRElevatorManager::setStaticF__instance(::UnityW<::GlobalNamespace::GRElevatorManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GRElevatorManager>, "_instance", ::GlobalNamespace::GRElevatorManager*>(std::forward<::UnityW<::GlobalNamespace::GRElevatorManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GRElevatorManager> GlobalNamespace::GRElevatorManager::getStaticF__instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GRElevatorManager>, "_instance", ::GlobalNamespace::GRElevatorManager*>();
}
inline bool GlobalNamespace::GRElevatorManager::get_InPrivateRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"get_InPrivateRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevatorManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GRElevatorManager::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::DisableVideoScreens(::UnityEngine::Video::VideoPlayer*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"DisableVideoScreens", {}, {::i2c::type_of<::UnityEngine::Video::VideoPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::GRElevatorManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::CheckInitializationState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"CheckInitializationState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::ProcessElevatorSystemState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ProcessElevatorSystemState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::ActivateElevating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ActivateElevating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::LeadElevatorJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LeadElevatorJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::SetupFriendGroup(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"SetupFriendGroup", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFriendCollider, destinationFriendCollider);
}
inline void GlobalNamespace::GRElevatorManager::LeadElevatorJoin(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LeadElevatorJoin", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger);
}
inline void GlobalNamespace::GRElevatorManager::LeadShuttleJoin(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider, ::GorillaNetworking::GorillaNetworkJoinTrigger*  destinationJoinTrigger, int32_t  targetLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LeadShuttleJoin", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GorillaNetworking::GorillaNetworkJoinTrigger*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceFriendCollider, destinationFriendCollider, destinationJoinTrigger, targetLevel);
}
inline void GlobalNamespace::GRElevatorManager::UpdateElevatorState(::GlobalNamespace::GRElevatorManager_ElevatorSystemState  newState, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"UpdateElevatorState", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorSystemState>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, location);
}
inline void GlobalNamespace::GRElevatorManager::PlayDestinationVideo(::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"PlayDestinationVideo", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destination);
}
inline ::UnityW<::UnityEngine::Video::VideoClip> GlobalNamespace::GRElevatorManager::getClipForDestination(::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"getClipForDestination", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Video::VideoClip>>(this, ___internal_method, destination);
}
inline void GlobalNamespace::GRElevatorManager::UpdateUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"UpdateUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::RegisterElevator(::GlobalNamespace::GRElevator*  elevator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RegisterElevator", {}, {::i2c::type_of<::GlobalNamespace::GRElevator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, elevator);
}
inline void GlobalNamespace::GRElevatorManager::DeregisterElevator(::GlobalNamespace::GRElevator*  elevator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"DeregisterElevator", {}, {::i2c::type_of<::GlobalNamespace::GRElevator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, elevator);
}
inline void GlobalNamespace::GRElevatorManager::ElevatorButtonPressed(::GlobalNamespace::GRElevator_ButtonType  type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ElevatorButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, location);
}
inline void GlobalNamespace::GRElevatorManager::ElevatorButtonPressedInternal(::GlobalNamespace::GRElevator_ButtonType  type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ElevatorButtonPressedInternal", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, location);
}
inline void GlobalNamespace::GRElevatorManager::ProcessElevatorButtonPress(::GlobalNamespace::GRElevator_ButtonType  type, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ProcessElevatorButtonPress", {}, {::i2c::type_of<::GlobalNamespace::GRElevator_ButtonType>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, location);
}
inline void GlobalNamespace::GRElevatorManager::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GRElevatorManager::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::GRElevatorManager::RemoteElevatorButtonPress(int32_t  elevatorButtonPressed, int32_t  elevatorLocation, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RemoteElevatorButtonPress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elevatorButtonPressed, elevatorLocation, info);
}
inline void GlobalNamespace::GRElevatorManager::RemoteActivateTeleport(int32_t  elevatorStartLocation, int32_t  elevatorDestinationLocation, int32_t  lowestActorNumber, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RemoteActivateTeleport", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elevatorStartLocation, elevatorDestinationLocation, lowestActorNumber, info);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GRElevatorManager::TeleportDelay(::GlobalNamespace::GRElevatorManager_ElevatorLocation  start, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination, int32_t  lowestActorNumber, double_t  sentServerTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"TeleportDelay", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, start, destination, lowestActorNumber, sentServerTime);
}
inline void GlobalNamespace::GRElevatorManager::ActivateTeleport(::GlobalNamespace::GRElevatorManager_ElevatorLocation  start, ::GlobalNamespace::GRElevatorManager_ElevatorLocation  destination, int32_t  lowestActorNumber, double_t  photonServerTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ActivateTeleport", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, destination, lowestActorNumber, photonServerTime);
}
inline void GlobalNamespace::GRElevatorManager::CloseAllElevators()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"CloseAllElevators", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::OpenElevator(::GlobalNamespace::GRElevatorManager_ElevatorLocation  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OpenElevator", {}, {::i2c::type_of<::GlobalNamespace::GRElevatorManager_ElevatorLocation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, location);
}
inline double_t GlobalNamespace::GRElevatorManager::GetTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevatorManager::ValidElevatorNetworking(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ValidElevatorNetworking", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNr);
}
inline bool GlobalNamespace::GRElevatorManager::ValidShuttleNetworking(int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"ValidShuttleNetworking", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNr);
}
inline bool GlobalNamespace::GRElevatorManager::IsPlayerInShuttle(int32_t  actorNr, ::GlobalNamespace::GRShuttle*  currShuttle, ::GlobalNamespace::GRShuttle*  targetShuttle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"IsPlayerInShuttle", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>(), ::i2c::type_of<::GlobalNamespace::GRShuttle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, actorNr, currShuttle, targetShuttle);
}
inline int32_t GlobalNamespace::GRElevatorManager::LowestActorNumberInElevator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LowestActorNumberInElevator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t GlobalNamespace::GRElevatorManager::LowestActorNumberInElevator(::GlobalNamespace::GorillaFriendCollider*  sourceFriendCollider, ::GlobalNamespace::GorillaFriendCollider*  destinationFriendCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"LowestActorNumberInElevator", {}, {::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>(), ::i2c::type_of<::GlobalNamespace::GorillaFriendCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sourceFriendCollider, destinationFriendCollider);
}
inline void GlobalNamespace::GRElevatorManager::RefreshTeleportingPlayersJoinTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RefreshTeleportingPlayersJoinTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevatorManager::InControlOfElevator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"InControlOfElevator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::JoinPublicRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"JoinPublicRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::OnReachedDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnReachedDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRElevatorManager::GetShuttle(int32_t  shuttleId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetShuttle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(nullptr, ___internal_method, shuttleId);
}
inline void GlobalNamespace::GRElevatorManager::InitShuttles(::GlobalNamespace::GhostReactor*  reactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"InitShuttles", {}, {::i2c::type_of<::GlobalNamespace::GhostReactor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reactor);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRElevatorManager::GetPlayerShuttle(::GlobalNamespace::GRShuttleGroupLoc  shuttleGroupLoc, int32_t  shuttleIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetPlayerShuttle", {}, {::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method, shuttleGroupLoc, shuttleIndex);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRElevatorManager::GetDrillShuttleForPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetDrillShuttleForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRElevatorManager::GetStagingShuttleForPlayer(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetStagingShuttleForPlayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method, actorNumber);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRElevatorManager::GetShuttleForPlayer(int32_t  actorNumber, ::GlobalNamespace::GRShuttleGroupLoc  shuttleGroupLoc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetShuttleForPlayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRShuttleGroupLoc>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method, actorNumber, shuttleGroupLoc);
}
inline ::UnityW<::GlobalNamespace::GRShuttle> GlobalNamespace::GRElevatorManager::GetShuttleById(int32_t  shuttleId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"GetShuttleById", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GRShuttle>>(this, ___internal_method, shuttleId);
}
inline int32_t GlobalNamespace::GRElevatorManager::AddPlayer(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"AddPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::GRElevatorManager::RemovePlayer(::GlobalNamespace::NetPlayer*  netPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"RemovePlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, netPlayer);
}
inline void GlobalNamespace::GRElevatorManager::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::OnPlayerAdded(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnPlayerAdded", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GRElevatorManager::OnPlayerRemoved(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {"OnPlayerRemoved", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::GRElevatorManager::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GlobalNamespace::GRElevatorManager::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRElevatorManager*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRElevatorManager* GlobalNamespace::GRElevatorManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRElevatorManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::GRElevatorManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::GRElevatorManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorManager::GRElevatorManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::*)(int32_t)>(&::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x587d09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::*)()>(&::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587e898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::*)()>(&::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::MoveNext)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x587e89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::*)()>(&::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587ea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::*)()>(&::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x587ea24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::*)()>(&::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GRElevatorManager>& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GRElevatorManager> const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GRElevatorManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set_start(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr double_t& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_sentServerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentServerTime;
}
constexpr double_t const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_sentServerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sentServerTime;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set_sentServerTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sentServerTime = value;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_destination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr ::GlobalNamespace::GRElevatorManager_ElevatorLocation const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_destination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destination;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set_destination(::GlobalNamespace::GRElevatorManager_ElevatorLocation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destination = value;
}
constexpr int32_t& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_lowestActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestActorNumber;
}
constexpr int32_t const& GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_get_lowestActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lowestActorNumber;
}
constexpr void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::__cordl_internal_set_lowestActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lowestActorNumber = value;
}
inline void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68* GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorManager__TeleportDelay_d__68::GRElevatorManager__TeleportDelay_d__68()   {
}
//  Writing Method size for method: ::GlobalNamespace::GRElevatorManager_GRShuttleGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRElevatorManager_GRShuttleGroup::*)()>(&::GlobalNamespace::GRElevatorManager_GRShuttleGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587e890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GRShuttleGroupLoc& GlobalNamespace::GRElevatorManager_GRShuttleGroup::__cordl_internal_get_location()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr ::GlobalNamespace::GRShuttleGroupLoc const& GlobalNamespace::GRElevatorManager_GRShuttleGroup::__cordl_internal_get_location() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___location;
}
constexpr void GlobalNamespace::GRElevatorManager_GRShuttleGroup::__cordl_internal_set_location(::GlobalNamespace::GRShuttleGroupLoc  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___location = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*& GlobalNamespace::GRElevatorManager_GRShuttleGroup::__cordl_internal_get_ghostReactorStagingShuttles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorStagingShuttles;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>* const& GlobalNamespace::GRElevatorManager_GRShuttleGroup::__cordl_internal_get_ghostReactorStagingShuttles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ghostReactorStagingShuttles;
}
constexpr void GlobalNamespace::GRElevatorManager_GRShuttleGroup::__cordl_internal_set_ghostReactorStagingShuttles(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GRShuttle>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ghostReactorStagingShuttles = value;
}
inline void GlobalNamespace::GRElevatorManager_GRShuttleGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRElevatorManager_GRShuttleGroup* GlobalNamespace::GRElevatorManager_GRShuttleGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRElevatorManager_GRShuttleGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRElevatorManager_GRShuttleGroup::GRElevatorManager_GRShuttleGroup()   {
}
