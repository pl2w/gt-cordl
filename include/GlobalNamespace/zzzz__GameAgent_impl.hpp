#pragma once
// IWYU pragma private; include "GlobalNamespace/GameAgent.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameAgentManager_def.hpp"
#include "GlobalNamespace/zzzz__GameAgent_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameAgentComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPathStatus_def.hpp"
#include "UnityEngine/AI/zzzz__OffMeshLinkData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameAgent.add_onBodyStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_StateChangedEvent*)>(&::GlobalNamespace::GameAgent::add_onBodyStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onBodyStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.remove_onBodyStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_StateChangedEvent*)>(&::GlobalNamespace::GameAgent::remove_onBodyStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onBodyStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.add_onBehaviorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_StateChangedEvent*)>(&::GlobalNamespace::GameAgent::add_onBehaviorStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onBehaviorStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.remove_onBehaviorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_StateChangedEvent*)>(&::GlobalNamespace::GameAgent::remove_onBehaviorStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onBehaviorStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.add_onReachedNavigationLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*)>(&::GlobalNamespace::GameAgent::add_onReachedNavigationLink)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onReachedNavigationLink", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.remove_onReachedNavigationLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*)>(&::GlobalNamespace::GameAgent::remove_onReachedNavigationLink)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onReachedNavigationLink", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.add_onJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_JumpRequestedEvent*)>(&::GlobalNamespace::GameAgent::add_onJumpRequested)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onJumpRequested", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.remove_onJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_JumpRequestedEvent*)>(&::GlobalNamespace::GameAgent::remove_onJumpRequested)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580c978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onJumpRequested", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.add_onNavigationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_NavigationFailedEvent*)>(&::GlobalNamespace::GameAgent::add_onNavigationFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580ca14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onNavigationFailed", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.remove_onNavigationFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::GameAgent_NavigationFailedEvent*)>(&::GlobalNamespace::GameAgent::remove_onNavigationFailed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x580cab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onNavigationFailed", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.GetGameAgentManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameAgentManager> (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::GetGameAgentManager)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x580cb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"GetGameAgentManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x580cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnEntityInit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::OnEntityInit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x580cc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnEntityInit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnEntityDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::OnEntityDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x580cce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnEntityStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(int64_t, int64_t)>(&::GlobalNamespace::GameAgent::OnEntityStateChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x580cd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnBehaviorStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(uint8_t)>(&::GlobalNamespace::GameAgent::OnBehaviorStateChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x580cd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnBehaviorStateChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnBodyStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(uint8_t)>(&::GlobalNamespace::GameAgent::OnBodyStateChanged)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x580cd7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnBodyStateChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnThink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(float_t)>(&::GlobalNamespace::GameAgent::OnThink)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x580cd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnThink", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::OnUpdate)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x580ceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.OnJumpRequested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GameAgent::OnJumpRequested)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x580d5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.IsOnNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::IsOnNavMesh)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x580d5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"IsOnNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.GetLastPosOnNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::GetLastPosOnNavMesh)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580d670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"GetLastPosOnNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.RequestDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgent::RequestDestination)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x580d67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.RequestBehaviorChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(uint8_t)>(&::GlobalNamespace::GameAgent::RequestBehaviorChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x580da40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestBehaviorChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.RequestStateChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(uint8_t)>(&::GlobalNamespace::GameAgent::RequestStateChange)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x580dc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.RequestTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameAgent::RequestTarget)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x580de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestTarget", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.ApplyDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgent::ApplyDestination)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x580e08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"ApplyDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.SetDisableNetworkSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(bool)>(&::GlobalNamespace::GameAgent::SetDisableNetworkSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x580e190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetDisableNetworkSync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.SetIsPathing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(bool, bool)>(&::GlobalNamespace::GameAgent::SetIsPathing)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x580e198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetIsPathing", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.SetStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(bool)>(&::GlobalNamespace::GameAgent::SetStopped)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x580e274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetStopped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.SetSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(float_t)>(&::GlobalNamespace::GameAgent::SetSpeed)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x580e30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.SetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameAgent::SetVelocity)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x580e3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.ClearLastRequestedDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::ClearLastRequestedDestination)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x580e458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"ClearLastRequestedDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.ApplyNetworkUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GameAgent::ApplyNetworkUpdate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x580e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"ApplyNetworkUpdate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.UpdateFacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::AI::NavMeshAgent*, ::GlobalNamespace::NetPlayer*, float_t)>(&::GlobalNamespace::GameAgent::UpdateFacing)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x580e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacing", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.UpdateFacingTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::AI::NavMeshAgent*, ::UnityEngine::Transform*, float_t)>(&::GlobalNamespace::GameAgent::UpdateFacingTarget)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x580e7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.UpdateFacingForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::AI::NavMeshAgent*, float_t)>(&::GlobalNamespace::GameAgent::UpdateFacingForward)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x580ebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingForward", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.UpdateFacingPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::AI::NavMeshAgent*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GameAgent::UpdateFacingPos)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x580eee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingPos", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent.UpdateFacingDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::AI::NavMeshAgent*, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GameAgent::UpdateFacingDir)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x580ed24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingDir", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent::*)()>(&::GlobalNamespace::GameAgent::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x580eff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameAgent::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameAgent::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent>& GlobalNamespace::GameAgent::__cordl_internal_get_navAgent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr ::UnityW<::UnityEngine::AI::NavMeshAgent> const& GlobalNamespace::GameAgent::__cordl_internal_get_navAgent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgent;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_navAgent(::UnityW<::UnityEngine::AI::NavMeshAgent>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgent = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GameAgent::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GameAgent::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr float_t& GlobalNamespace::GameAgent::__cordl_internal_get_networkPositionCorrectionDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkPositionCorrectionDist;
}
constexpr float_t const& GlobalNamespace::GameAgent::__cordl_internal_get_networkPositionCorrectionDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkPositionCorrectionDist;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_networkPositionCorrectionDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkPositionCorrectionDist = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::GameAgent::__cordl_internal_get_targetPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::GameAgent::__cordl_internal_get_targetPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPlayer;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_targetPlayer(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPlayer = value;
}
constexpr bool& GlobalNamespace::GameAgent::__cordl_internal_get_disableNetworkSync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableNetworkSync;
}
constexpr bool const& GlobalNamespace::GameAgent::__cordl_internal_get_disableNetworkSync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableNetworkSync;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_disableNetworkSync(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableNetworkSync = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameAgent::__cordl_internal_get_lastPosOnNavMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosOnNavMesh;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameAgent::__cordl_internal_get_lastPosOnNavMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPosOnNavMesh;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_lastPosOnNavMesh(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPosOnNavMesh = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameAgent::__cordl_internal_get_lastRequestedDest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedDest;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameAgent::__cordl_internal_get_lastRequestedDest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRequestedDest;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_lastRequestedDest(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRequestedDest = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameAgent::__cordl_internal_get_lastReceivedDest()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReceivedDest;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameAgent::__cordl_internal_get_lastReceivedDest() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastReceivedDest;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_lastReceivedDest(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastReceivedDest = value;
}
constexpr ::GlobalNamespace::GameAgent_StateChangedEvent*& GlobalNamespace::GameAgent::__cordl_internal_get_onBodyStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBodyStateChanged;
}
constexpr ::GlobalNamespace::GameAgent_StateChangedEvent* const& GlobalNamespace::GameAgent::__cordl_internal_get_onBodyStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBodyStateChanged;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBodyStateChanged = value;
}
constexpr ::GlobalNamespace::GameAgent_StateChangedEvent*& GlobalNamespace::GameAgent::__cordl_internal_get_onBehaviorStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBehaviorStateChanged;
}
constexpr ::GlobalNamespace::GameAgent_StateChangedEvent* const& GlobalNamespace::GameAgent::__cordl_internal_get_onBehaviorStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBehaviorStateChanged;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBehaviorStateChanged = value;
}
constexpr ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*& GlobalNamespace::GameAgent::__cordl_internal_get_onReachedNavigationLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedNavigationLink;
}
constexpr ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* const& GlobalNamespace::GameAgent::__cordl_internal_get_onReachedNavigationLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedNavigationLink;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReachedNavigationLink = value;
}
constexpr ::GlobalNamespace::GameAgent_JumpRequestedEvent*& GlobalNamespace::GameAgent::__cordl_internal_get_onJumpRequested()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onJumpRequested;
}
constexpr ::GlobalNamespace::GameAgent_JumpRequestedEvent* const& GlobalNamespace::GameAgent::__cordl_internal_get_onJumpRequested() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onJumpRequested;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onJumpRequested = value;
}
constexpr ::GlobalNamespace::GameAgent_NavigationFailedEvent*& GlobalNamespace::GameAgent::__cordl_internal_get_onNavigationFailed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNavigationFailed;
}
constexpr ::GlobalNamespace::GameAgent_NavigationFailedEvent* const& GlobalNamespace::GameAgent::__cordl_internal_get_onNavigationFailed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onNavigationFailed;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onNavigationFailed = value;
}
constexpr bool& GlobalNamespace::GameAgent::__cordl_internal_get_hasNotifiedNavigationFailure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasNotifiedNavigationFailure;
}
constexpr bool const& GlobalNamespace::GameAgent::__cordl_internal_get_hasNotifiedNavigationFailure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasNotifiedNavigationFailure;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_hasNotifiedNavigationFailure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasNotifiedNavigationFailure = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>*& GlobalNamespace::GameAgent::__cordl_internal_get_agentComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>* const& GlobalNamespace::GameAgent::__cordl_internal_get_agentComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentComponents;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_agentComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IGameAgentComponent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agentComponents = value;
}
constexpr bool& GlobalNamespace::GameAgent::__cordl_internal_get_wasOnOffMeshNavLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasOnOffMeshNavLink;
}
constexpr bool const& GlobalNamespace::GameAgent::__cordl_internal_get_wasOnOffMeshNavLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasOnOffMeshNavLink;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_wasOnOffMeshNavLink(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasOnOffMeshNavLink = value;
}
constexpr bool& GlobalNamespace::GameAgent::__cordl_internal_get_navAgentless()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgentless;
}
constexpr bool const& GlobalNamespace::GameAgent::__cordl_internal_get_navAgentless() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___navAgentless;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_navAgentless(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___navAgentless = value;
}
constexpr bool& GlobalNamespace::GameAgent::__cordl_internal_get_pauseEntityThink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseEntityThink;
}
constexpr bool const& GlobalNamespace::GameAgent::__cordl_internal_get_pauseEntityThink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pauseEntityThink;
}
constexpr void GlobalNamespace::GameAgent::__cordl_internal_set_pauseEntityThink(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pauseEntityThink = value;
}
inline void GlobalNamespace::GameAgent::add_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onBodyStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::remove_onBodyStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onBodyStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::add_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onBehaviorStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::remove_onBehaviorStateChanged(::GlobalNamespace::GameAgent_StateChangedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onBehaviorStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_StateChangedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::add_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onReachedNavigationLink", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::remove_onReachedNavigationLink(::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onReachedNavigationLink", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::add_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onJumpRequested", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::remove_onJumpRequested(::GlobalNamespace::GameAgent_JumpRequestedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onJumpRequested", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::add_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"add_onNavigationFailed", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameAgent::remove_onNavigationFailed(::GlobalNamespace::GameAgent_NavigationFailedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"remove_onNavigationFailed", {}, {::i2c::type_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::GameAgentManager> GlobalNamespace::GameAgent::GetGameAgentManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"GetGameAgentManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameAgentManager>>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::OnEntityInit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnEntityInit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::OnEntityDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnEntityDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::OnEntityStateChange(int64_t  prevState, int64_t  nextState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnEntityStateChange", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline void GlobalNamespace::GameAgent::OnBehaviorStateChanged(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnBehaviorStateChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GameAgent::OnBodyStateChanged(uint8_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnBodyStateChanged", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GameAgent::OnThink(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnThink", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::GameAgent::OnUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::OnJumpRequested(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"OnJumpRequested", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline bool GlobalNamespace::GameAgent::IsOnNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"IsOnNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GameAgent::GetLastPosOnNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"GetLastPosOnNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::RequestDestination(::UnityEngine::Vector3  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest);
}
inline void GlobalNamespace::GameAgent::RequestBehaviorChange(uint8_t  behavior)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestBehaviorChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behavior);
}
inline void GlobalNamespace::GameAgent::RequestStateChange(uint8_t  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestStateChange", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GlobalNamespace::GameAgent::RequestTarget(::GlobalNamespace::NetPlayer*  targetPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"RequestTarget", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer);
}
inline void GlobalNamespace::GameAgent::ApplyDestination(::UnityEngine::Vector3  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"ApplyDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest);
}
inline void GlobalNamespace::GameAgent::SetDisableNetworkSync(bool  disable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetDisableNetworkSync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disable);
}
inline void GlobalNamespace::GameAgent::SetIsPathing(bool  isPathing, bool  ignoreRigiBody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetIsPathing", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isPathing, ignoreRigiBody);
}
inline void GlobalNamespace::GameAgent::SetStopped(bool  stopMovement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetStopped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stopMovement);
}
inline void GlobalNamespace::GameAgent::SetSpeed(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void GlobalNamespace::GameAgent::SetVelocity(::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"SetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vel);
}
inline void GlobalNamespace::GameAgent::ClearLastRequestedDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"ClearLastRequestedDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameAgent::ApplyNetworkUpdate(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"ApplyNetworkUpdate", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void GlobalNamespace::GameAgent::UpdateFacing(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::GlobalNamespace::NetPlayer*  targetPlayer, float_t  turnspeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacing", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, navAgent, targetPlayer, turnspeed);
}
inline void GlobalNamespace::GameAgent::UpdateFacingTarget(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::UnityEngine::Transform*  target, float_t  turnspeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, navAgent, target, turnspeed);
}
inline void GlobalNamespace::GameAgent::UpdateFacingForward(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, float_t  turnspeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingForward", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, navAgent, turnspeed);
}
inline void GlobalNamespace::GameAgent::UpdateFacingPos(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::UnityEngine::Vector3  facingPos, float_t  turnspeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingPos", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, navAgent, facingPos, turnspeed);
}
inline void GlobalNamespace::GameAgent::UpdateFacingDir(::UnityEngine::Transform*  transform, ::UnityEngine::AI::NavMeshAgent*  navAgent, ::UnityEngine::Vector3  facingDir, float_t  turnspeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {"UpdateFacingDir", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::AI::NavMeshAgent*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, navAgent, facingDir, turnspeed);
}
inline void GlobalNamespace::GameAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameAgent* GlobalNamespace::GameAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAgent*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr  GlobalNamespace::GameAgent::operator ::GlobalNamespace::IGameEntityComponent*() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* GlobalNamespace::GameAgent::i___GlobalNamespace__IGameEntityComponent() noexcept {
return static_cast<::GlobalNamespace::IGameEntityComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAgent::GameAgent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationFailedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_NavigationFailedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameAgent_NavigationFailedEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x580f434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationFailedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_NavigationFailedEvent::*)(::UnityEngine::AI::NavMeshPathStatus, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GameAgent_NavigationFailedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x580f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationFailedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameAgent_NavigationFailedEvent::*)(::UnityEngine::AI::NavMeshPathStatus, ::UnityEngine::Vector3, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameAgent_NavigationFailedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x580f4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationFailedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_NavigationFailedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameAgent_NavigationFailedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580f5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameAgent_NavigationFailedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameAgent_NavigationFailedEvent::Invoke(::UnityEngine::AI::NavMeshPathStatus  status, ::UnityEngine::Vector3  destination, float_t  remainingDistance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, status, destination, remainingDistance);
}
inline ::System::IAsyncResult* GlobalNamespace::GameAgent_NavigationFailedEvent::BeginInvoke(::UnityEngine::AI::NavMeshPathStatus  status, ::UnityEngine::Vector3  destination, float_t  remainingDistance, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, status, destination, remainingDistance, callback, object);
}
inline void GlobalNamespace::GameAgent_NavigationFailedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameAgent_NavigationFailedEvent* GlobalNamespace::GameAgent_NavigationFailedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAgent_NavigationFailedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAgent_NavigationFailedEvent::GameAgent_NavigationFailedEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameAgent_JumpRequestedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_JumpRequestedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameAgent_JumpRequestedEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x580f290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_JumpRequestedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_JumpRequestedEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t)>(&::GlobalNamespace::GameAgent_JumpRequestedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x580f330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_JumpRequestedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameAgent_JumpRequestedEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameAgent_JumpRequestedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x580f344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_JumpRequestedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_JumpRequestedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameAgent_JumpRequestedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580f428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameAgent_JumpRequestedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameAgent_JumpRequestedEvent::Invoke(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end, heightScale, speedScale);
}
inline ::System::IAsyncResult* GlobalNamespace::GameAgent_JumpRequestedEvent::BeginInvoke(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, float_t  heightScale, float_t  speedScale, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, start, end, heightScale, speedScale, callback, object);
}
inline void GlobalNamespace::GameAgent_JumpRequestedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameAgent_JumpRequestedEvent* GlobalNamespace::GameAgent_JumpRequestedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAgent_JumpRequestedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAgent_JumpRequestedEvent::GameAgent_JumpRequestedEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x580f11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::*)(::UnityEngine::AI::OffMeshLinkData)>(&::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::Invoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x580f1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::*)(::UnityEngine::AI::OffMeshLinkData, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x580f1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580f284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameAgent_NavigationLinkReachedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameAgent_NavigationLinkReachedEvent::Invoke(::UnityEngine::AI::OffMeshLinkData  linkData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linkData);
}
inline ::System::IAsyncResult* GlobalNamespace::GameAgent_NavigationLinkReachedEvent::BeginInvoke(::UnityEngine::AI::OffMeshLinkData  linkData, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, linkData, callback, object);
}
inline void GlobalNamespace::GameAgent_NavigationLinkReachedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent* GlobalNamespace::GameAgent_NavigationLinkReachedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAgent_NavigationLinkReachedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAgent_NavigationLinkReachedEvent::GameAgent_NavigationLinkReachedEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameAgent_StateChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_StateChangedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameAgent_StateChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x580f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_StateChangedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_StateChangedEvent::*)(uint8_t)>(&::GlobalNamespace::GameAgent_StateChangedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x580f0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_StateChangedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameAgent_StateChangedEvent::*)(uint8_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameAgent_StateChangedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x580f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameAgent_StateChangedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameAgent_StateChangedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameAgent_StateChangedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x580f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameAgent_StateChangedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameAgent_StateChangedEvent::Invoke(uint8_t  newState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::System::IAsyncResult* GlobalNamespace::GameAgent_StateChangedEvent::BeginInvoke(uint8_t  newState, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, newState, callback, object);
}
inline void GlobalNamespace::GameAgent_StateChangedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameAgent_StateChangedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameAgent_StateChangedEvent* GlobalNamespace::GameAgent_StateChangedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameAgent_StateChangedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameAgent_StateChangedEvent::GameAgent_StateChangedEvent()   {
}
