#pragma once
// IWYU pragma private; include "Pathfinding/AIPath.hpp"
#include "Pathfinding/zzzz__AIBase_impl.hpp"
#include "Pathfinding/zzzz__CloseToDestinationMode_impl.hpp"
#include "Pathfinding/zzzz__AIPath_def.hpp"
#include "Pathfinding/Util/zzzz__PathInterpolator_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AIPath.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(::UnityEngine::Vector3, bool)>(&::Pathfinding::AIPath::Teleport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_remainingDistance)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5e3d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_reachedDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_reachedDestination)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5e3d1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_reachedDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_reachedEndOfPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_reachedEndOfPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_reachedEndOfPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.set_reachedEndOfPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(bool)>(&::Pathfinding::AIPath::set_reachedEndOfPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"set_reachedEndOfPath", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_hasPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_hasPath)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3d420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_hasPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_pathPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_pathPending)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_pathPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_steeringTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_steeringTarget)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5e3d440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_steeringTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_set_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t)>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_set_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t)>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_set_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_get_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_get_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_maxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_set_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t)>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_set_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_get_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_get_canSearch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3d4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_canSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_set_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(bool)>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_set_canSearch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_get_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_get_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_canMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.Pathfinding_IAstarAI_set_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(bool)>(&::Pathfinding::AIPath::Pathfinding_IAstarAI_set_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3d4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.GetRemainingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::by_ref<bool>)>(&::Pathfinding::AIPath::GetRemainingPath)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5e3d4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3d5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.OnTargetReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::OnTargetReached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3d650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(::Pathfinding::Path*)>(&::Pathfinding::AIPath::OnPathComplete)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x5e3d654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.ClearPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::ClearPath)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3dc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.MovementUpdateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::AIPath::MovementUpdateInternal)> {
  constexpr static std::size_t size = 0x8f4;
  constexpr static std::size_t addrs = 0x5e3dc8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.CalculateNextRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::AIPath::CalculateNextRotation)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5e3e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.ClampToNavmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIPath::*)(::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::AIPath::ClampToNavmesh)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x5e3e728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.OnUpgradeSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AIPath::*)(int32_t, bool)>(&::Pathfinding::AIPath::OnUpgradeSerializedData)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e3ea2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIPath*>(),
                    {::i2c::class_of<::Pathfinding::AIPath*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_TargetReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_TargetReached)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3ea60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_TargetReached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_turningSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_turningSpeed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ea68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_turningSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.set_turningSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t)>(&::Pathfinding::AIPath::set_turningSpeed)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e3ea7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"set_turningSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_speed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_speed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.set_speed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)(float_t)>(&::Pathfinding::AIPath::set_speed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3ea98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"set_speed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.get_targetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::get_targetDirection)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e3eaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_targetDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath.CalculateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIPath::*)(::UnityEngine::Vector3)>(&::Pathfinding::AIPath::CalculateVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3ebac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"CalculateVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIPath::*)()>(&::Pathfinding::AIPath::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e3ebb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::AIPath::__cordl_internal_get_maxAcceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAcceleration;
}
constexpr float_t const& Pathfinding::AIPath::__cordl_internal_get_maxAcceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxAcceleration;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_maxAcceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxAcceleration = value;
}
constexpr float_t& Pathfinding::AIPath::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& Pathfinding::AIPath::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr float_t& Pathfinding::AIPath::__cordl_internal_get_slowdownDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownDistance;
}
constexpr float_t const& Pathfinding::AIPath::__cordl_internal_get_slowdownDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownDistance;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_slowdownDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowdownDistance = value;
}
constexpr float_t& Pathfinding::AIPath::__cordl_internal_get_pickNextWaypointDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickNextWaypointDist;
}
constexpr float_t const& Pathfinding::AIPath::__cordl_internal_get_pickNextWaypointDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickNextWaypointDist;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_pickNextWaypointDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickNextWaypointDist = value;
}
constexpr float_t& Pathfinding::AIPath::__cordl_internal_get_endReachedDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endReachedDistance;
}
constexpr float_t const& Pathfinding::AIPath::__cordl_internal_get_endReachedDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endReachedDistance;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_endReachedDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endReachedDistance = value;
}
constexpr bool& Pathfinding::AIPath::__cordl_internal_get_alwaysDrawGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysDrawGizmos;
}
constexpr bool const& Pathfinding::AIPath::__cordl_internal_get_alwaysDrawGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___alwaysDrawGizmos;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_alwaysDrawGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___alwaysDrawGizmos = value;
}
constexpr bool& Pathfinding::AIPath::__cordl_internal_get_slowWhenNotFacingTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowWhenNotFacingTarget;
}
constexpr bool const& Pathfinding::AIPath::__cordl_internal_get_slowWhenNotFacingTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowWhenNotFacingTarget;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_slowWhenNotFacingTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowWhenNotFacingTarget = value;
}
constexpr ::Pathfinding::CloseToDestinationMode& Pathfinding::AIPath::__cordl_internal_get_whenCloseToDestination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenCloseToDestination;
}
constexpr ::Pathfinding::CloseToDestinationMode const& Pathfinding::AIPath::__cordl_internal_get_whenCloseToDestination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___whenCloseToDestination;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_whenCloseToDestination(::Pathfinding::CloseToDestinationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___whenCloseToDestination = value;
}
constexpr bool& Pathfinding::AIPath::__cordl_internal_get_constrainInsideGraph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainInsideGraph;
}
constexpr bool const& Pathfinding::AIPath::__cordl_internal_get_constrainInsideGraph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constrainInsideGraph;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_constrainInsideGraph(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constrainInsideGraph = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::AIPath::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& Pathfinding::AIPath::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::Pathfinding::Util::PathInterpolator*& Pathfinding::AIPath::__cordl_internal_get_interpolator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolator;
}
constexpr ::Pathfinding::Util::PathInterpolator* const& Pathfinding::AIPath::__cordl_internal_get_interpolator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolator;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set_interpolator(::Pathfinding::Util::PathInterpolator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolator = value;
}
constexpr bool& Pathfinding::AIPath::__cordl_internal_get__reachedEndOfPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reachedEndOfPath_k__BackingField;
}
constexpr bool const& Pathfinding::AIPath::__cordl_internal_get__reachedEndOfPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reachedEndOfPath_k__BackingField;
}
constexpr void Pathfinding::AIPath::__cordl_internal_set__reachedEndOfPath_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reachedEndOfPath_k__BackingField = value;
}
inline void Pathfinding::AIPath::setStaticF_cachedNNConstraint(::Pathfinding::NNConstraint*  value)  {
::cordl_internals::setStaticField<::Pathfinding::NNConstraint*, "cachedNNConstraint", ::Pathfinding::AIPath*>(std::forward<::Pathfinding::NNConstraint*>(value));
}
inline ::Pathfinding::NNConstraint* Pathfinding::AIPath::getStaticF_cachedNNConstraint()  {
return ::cordl_internals::getStaticField<::Pathfinding::NNConstraint*, "cachedNNConstraint", ::Pathfinding::AIPath*>();
}
inline void Pathfinding::AIPath::Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPosition, clearPath);
}
inline float_t Pathfinding::AIPath::get_remainingDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Pathfinding::AIPath::get_reachedDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_reachedDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::AIPath::get_reachedEndOfPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_reachedEndOfPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIPath::set_reachedEndOfPath(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"set_reachedEndOfPath", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIPath::get_hasPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_hasPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::AIPath::get_pathPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_pathPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AIPath::get_steeringTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_steeringTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Pathfinding::AIPath::Pathfinding_IAstarAI_get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIPath::Pathfinding_IAstarAI_set_radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::AIPath::Pathfinding_IAstarAI_get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIPath::Pathfinding_IAstarAI_set_height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::AIPath::Pathfinding_IAstarAI_get_maxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_maxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIPath::Pathfinding_IAstarAI_set_maxSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIPath::Pathfinding_IAstarAI_get_canSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_canSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIPath::Pathfinding_IAstarAI_set_canSearch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIPath::Pathfinding_IAstarAI_get_canMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.get_canMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIPath::Pathfinding_IAstarAI_set_canMove(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"Pathfinding.IAstarAI.set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::AIPath::GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, stale);
}
inline void Pathfinding::AIPath::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIPath::OnTargetReached()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIPath::OnPathComplete(::Pathfinding::Path*  newPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPath);
}
inline void Pathfinding::AIPath::ClearPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIPath::MovementUpdateInternal(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime, nextPosition, nextRotation);
}
inline void Pathfinding::AIPath::CalculateNextRotation(float_t  slowdown, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, slowdown, nextRotation);
}
inline ::UnityEngine::Vector3 Pathfinding::AIPath::ClampToNavmesh(::UnityEngine::Vector3  position, ::by_ref<bool>  positionChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, positionChanged);
}
inline int32_t Pathfinding::AIPath::OnUpgradeSerializedData(int32_t  version, bool  unityThread)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIPath*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version, unityThread);
}
inline bool Pathfinding::AIPath::get_TargetReached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_TargetReached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::AIPath::get_turningSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_turningSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIPath::set_turningSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"set_turningSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::AIPath::get_speed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_speed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIPath::set_speed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"set_speed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::AIPath::get_targetDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"get_targetDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AIPath::CalculateVelocity(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {"CalculateVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position);
}
inline void Pathfinding::AIPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::AIPath* Pathfinding::AIPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AIPath*>());
}
/// @brief Convert operator to "::Pathfinding::IAstarAI"
constexpr  Pathfinding::AIPath::operator ::Pathfinding::IAstarAI*() noexcept {
return static_cast<::Pathfinding::IAstarAI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IAstarAI"
constexpr ::Pathfinding::IAstarAI* Pathfinding::AIPath::i___Pathfinding__IAstarAI() noexcept {
return static_cast<::Pathfinding::IAstarAI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::AIPath::AIPath()   {
}
