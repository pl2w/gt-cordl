#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshAgent.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/AI/zzzz__NavMeshAgent_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/AI/zzzz__NavMeshPathStatus_def.hpp"
#include "UnityEngine/AI/zzzz__OffMeshLinkData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.SetDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshAgent::SetDestination)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb51e458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"SetDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_destination)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb51e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_destination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshAgent::set_destination)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb51e60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_stoppingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_stoppingDistance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51e6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_stoppingDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_velocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb51e794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshAgent::set_velocity)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb51e870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_desiredVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_desiredVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb51e944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_desiredVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_remainingDistance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51ea20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_isOnOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_isOnOffMeshLink)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51ead4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnOffMeshLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_currentOffMeshLinkData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::OffMeshLinkData (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_currentOffMeshLinkData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb51eb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_currentOffMeshLinkData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.GetCurrentOffMeshLinkDataInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::OffMeshLinkData (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::GetCurrentOffMeshLinkDataInternal)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb51ebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"GetCurrentOffMeshLinkDataInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.CompleteOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::CompleteOffMeshLink)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51eca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"CompleteOffMeshLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_autoTraverseOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_autoTraverseOffMeshLink)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51ed5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_autoTraverseOffMeshLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_autoTraverseOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(bool)>(&::UnityEngine::AI::NavMeshAgent::set_autoTraverseOffMeshLink)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51ee10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_autoTraverseOffMeshLink", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_pathPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_pathPending)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51eed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_pathStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshPathStatus (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_pathStatus)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51ef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.Warp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)(::UnityEngine::Vector3)>(&::UnityEngine::AI::NavMeshAgent::Warp)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb51f03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"Warp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_isStopped)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51f114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(bool)>(&::UnityEngine::AI::NavMeshAgent::set_isStopped)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51f1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_isStopped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_agentTypeID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(int32_t)>(&::UnityEngine::AI::NavMeshAgent::set_agentTypeID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51f28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_speed)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51f350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(float_t)>(&::UnityEngine::AI::NavMeshAgent::set_speed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb51f404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_angularSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(float_t)>(&::UnityEngine::AI::NavMeshAgent::set_angularSpeed)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb51f4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_angularSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_acceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(float_t)>(&::UnityEngine::AI::NavMeshAgent::set_acceleration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb51f5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_updateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_updateRotation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51f680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_updateRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_updateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)(bool)>(&::UnityEngine::AI::NavMeshAgent::set_updateRotation)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb51f734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_updateRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_isOnNavMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::get_isOnNavMesh)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb51f7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnNavMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AI::NavMeshAgent::*)()>(&::UnityEngine::AI::NavMeshAgent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb51f8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.SetDestination_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::SetDestination_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51e4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"SetDestination_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_destination_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::get_destination_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51e5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_destination_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_destination_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::set_destination_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51e69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_destination_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_stoppingDistance_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_stoppingDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51e758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_stoppingDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_velocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::get_velocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51e82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_velocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_velocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::set_velocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_velocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_desiredVelocity_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::get_desiredVelocity_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51e9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_desiredVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_remainingDistance_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_remainingDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51ea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_remainingDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_isOnOffMeshLink_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_isOnOffMeshLink_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51eb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.GetCurrentOffMeshLinkDataInternal_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::AI::OffMeshLinkData>)>(&::UnityEngine::AI::NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51ec64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"GetCurrentOffMeshLinkDataInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::OffMeshLinkData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.CompleteOffMeshLink_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::CompleteOffMeshLink_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51ed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"CompleteOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_autoTraverseOffMeshLink_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_autoTraverseOffMeshLink_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51edd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_autoTraverseOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_autoTraverseOffMeshLink_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AI::NavMeshAgent::set_autoTraverseOffMeshLink_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51ee90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_autoTraverseOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_pathPending_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_pathPending_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51ef4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathPending_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_pathStatus_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AI::NavMeshPathStatus (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_pathStatus_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51f000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathStatus_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.Warp_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::AI::NavMeshAgent::Warp_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"Warp_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_isStopped_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_isStopped_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51f18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isStopped_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_isStopped_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AI::NavMeshAgent::set_isStopped_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51f248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_isStopped_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_agentTypeID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::AI::NavMeshAgent::set_agentTypeID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51f30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_agentTypeID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_speed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_speed_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51f3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_speed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_speed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AI::NavMeshAgent::set_speed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51f48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_speed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_angularSpeed_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AI::NavMeshAgent::set_angularSpeed_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51f560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_angularSpeed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_acceleration_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::AI::NavMeshAgent::set_acceleration_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb51f634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_acceleration_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_updateRotation_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_updateRotation_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51f6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_updateRotation_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.set_updateRotation_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::AI::NavMeshAgent::set_updateRotation_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb51f7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_updateRotation_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AI::NavMeshAgent.get_isOnNavMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::AI::NavMeshAgent::get_isOnNavMesh_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb51f870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnNavMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::AI::NavMeshAgent::SetDestination(::UnityEngine::Vector3  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"SetDestination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshAgent::get_destination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_destination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::set_destination(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AI::NavMeshAgent::get_stoppingDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_stoppingDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshAgent::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::set_velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::AI::NavMeshAgent::get_desiredVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_desiredVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t UnityEngine::AI::NavMeshAgent::get_remainingDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshAgent::get_isOnOffMeshLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnOffMeshLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AI::OffMeshLinkData UnityEngine::AI::NavMeshAgent::get_currentOffMeshLinkData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_currentOffMeshLinkData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::OffMeshLinkData>(this, ___internal_method);
}
inline ::UnityEngine::AI::OffMeshLinkData UnityEngine::AI::NavMeshAgent::GetCurrentOffMeshLinkDataInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"GetCurrentOffMeshLinkDataInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::OffMeshLinkData>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::CompleteOffMeshLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"CompleteOffMeshLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshAgent::get_autoTraverseOffMeshLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_autoTraverseOffMeshLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::set_autoTraverseOffMeshLink(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_autoTraverseOffMeshLink", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshAgent::get_pathPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshAgent::get_pathStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshPathStatus>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshAgent::Warp(::UnityEngine::Vector3  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"Warp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newPosition);
}
inline bool UnityEngine::AI::NavMeshAgent::get_isStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::set_isStopped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_isStopped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshAgent::set_agentTypeID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_agentTypeID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::AI::NavMeshAgent::get_speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::set_speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshAgent::set_angularSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_angularSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::AI::NavMeshAgent::set_acceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_acceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshAgent::get_updateRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_updateRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::set_updateRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_updateRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::AI::NavMeshAgent::get_isOnNavMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnNavMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::AI::NavMeshAgent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::AI::NavMeshAgent::SetDestination_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"SetDestination_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, target);
}
inline void UnityEngine::AI::NavMeshAgent::get_destination_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_destination_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AI::NavMeshAgent::set_destination_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_destination_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AI::NavMeshAgent::get_stoppingDistance_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_stoppingDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AI::NavMeshAgent::get_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_velocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AI::NavMeshAgent::set_velocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_velocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshAgent::get_desiredVelocity_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_desiredVelocity_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline float_t UnityEngine::AI::NavMeshAgent::get_remainingDistance_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_remainingDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AI::NavMeshAgent::get_isOnOffMeshLink_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AI::NavMeshAgent::GetCurrentOffMeshLinkDataInternal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::AI::OffMeshLinkData>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"GetCurrentOffMeshLinkDataInternal_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::AI::OffMeshLinkData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::AI::NavMeshAgent::CompleteOffMeshLink_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"CompleteOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AI::NavMeshAgent::get_autoTraverseOffMeshLink_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_autoTraverseOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AI::NavMeshAgent::set_autoTraverseOffMeshLink_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_autoTraverseOffMeshLink_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AI::NavMeshAgent::get_pathPending_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathPending_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AI::NavMeshPathStatus UnityEngine::AI::NavMeshAgent::get_pathStatus_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_pathStatus_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AI::NavMeshPathStatus>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::AI::NavMeshAgent::Warp_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"Warp_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, newPosition);
}
inline bool UnityEngine::AI::NavMeshAgent::get_isStopped_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isStopped_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AI::NavMeshAgent::set_isStopped_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_isStopped_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshAgent::set_agentTypeID_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_agentTypeID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::AI::NavMeshAgent::get_speed_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_speed_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AI::NavMeshAgent::set_speed_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_speed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshAgent::set_angularSpeed_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_angularSpeed_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::AI::NavMeshAgent::set_acceleration_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_acceleration_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AI::NavMeshAgent::get_updateRotation_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_updateRotation_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::AI::NavMeshAgent::set_updateRotation_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"set_updateRotation_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::AI::NavMeshAgent::get_isOnNavMesh_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AI::NavMeshAgent*>(),
                        {"get_isOnNavMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::AI::NavMeshAgent* UnityEngine::AI::NavMeshAgent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AI::NavMeshAgent*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AI::NavMeshAgent::NavMeshAgent()   {
}
