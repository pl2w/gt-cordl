#pragma once
// IWYU pragma private; include "Pathfinding/AILerp.hpp"
#include "Pathfinding/zzzz__OrientationMode_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__AILerp_def.hpp"
#include "Pathfinding/Util/zzzz__PathInterpolator_def.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__AutoRepathPolicy_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AILerp.get_repathRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_repathRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3b004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_repathRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_repathRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(float_t)>(&::Pathfinding::AILerp::set_repathRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3b01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_repathRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_canSearch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3b034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_canSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(bool)>(&::Pathfinding::AILerp::set_canSearch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3b054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_rotationIn2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_rotationIn2D)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e3b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_rotationIn2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_rotationIn2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(bool)>(&::Pathfinding::AILerp::set_rotationIn2D)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_rotationIn2D", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_reachedEndOfPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_reachedEndOfPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_reachedEndOfPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_reachedEndOfPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(bool)>(&::Pathfinding::AILerp::set_reachedEndOfPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_reachedEndOfPath", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_reachedDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_reachedDestination)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e3b0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_reachedDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_destination)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_destination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::UnityEngine::Vector3)>(&::Pathfinding::AILerp::set_destination)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3b1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_target)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3b1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::UnityEngine::Transform*)>(&::Pathfinding::AILerp::set_target)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5e3b28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_position)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e3b3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_rotation)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e3b400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::UnityEngine::Quaternion)>(&::Pathfinding::AILerp::set_rotation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e3b434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::UnityEngine::Vector3)>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_Move)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_set_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(float_t)>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_set_radius)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3b46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_set_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(float_t)>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_set_height)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3b478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_maxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_set_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(float_t)>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_set_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_canSearch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3b48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_canSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_set_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(bool)>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_set_canSearch)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3b4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_canMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_set_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(bool)>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_set_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_velocity)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e3b4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_desiredVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_desiredVelocity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e3b578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_desiredVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Pathfinding_IAstarAI_get_steeringTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Pathfinding_IAstarAI_get_steeringTarget)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e3b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_steeringTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_remainingDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e3b1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(float_t)>(&::Pathfinding::AILerp::set_remainingDistance)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_remainingDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_hasPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_hasPath)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3b6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_hasPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_pathPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_pathPending)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e3b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_pathPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_isStopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_isStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(bool)>(&::Pathfinding::AILerp::set_isStopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_isStopped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_onSearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_onSearchPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_onSearchPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.set_onSearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::System::Action*)>(&::Pathfinding::AILerp::set_onSearchPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3b6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_onSearchPath", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e3b6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Awake)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e3b7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3b8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::OnEnable)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e3b95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Init)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e3b8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::OnDisable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e3bae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.GetRemainingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::by_ref<bool>)>(&::Pathfinding::AILerp::GetRemainingPath)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5e3bbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::UnityEngine::Vector3, bool)>(&::Pathfinding::AILerp::Teleport)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e3ba28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.get_shouldRecalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::get_shouldRecalculatePath)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e3bcf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.ForceSearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::ForceSearchPath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e3bd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.SearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::SearchPath)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e3bd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.OnTargetReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::OnTargetReached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3c050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::Pathfinding::Path*)>(&::Pathfinding::AILerp::OnPathComplete)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x5e3c054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.ClearPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::ClearPath)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e3c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.SetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::Pathfinding::Path*, bool)>(&::Pathfinding::AILerp::SetPath)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5e3be64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"SetPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.ConfigurePathSwitchInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::ConfigurePathSwitchInterpolation)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5e3c3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.GetFeetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::GetFeetPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3c5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.ConfigureNewPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::ConfigureNewPath)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5e3c5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::Update)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e3c89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.MovementUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::AILerp::MovementUpdate)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e3c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"MovementUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.FinalizeMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Pathfinding::AILerp::FinalizeMovement)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e3ca08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"FinalizeMovement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.SimulateRotationTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::AILerp::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::AILerp::SimulateRotationTowards)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x5e3cab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"SimulateRotationTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.CalculateNextPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::Pathfinding::AILerp::CalculateNextPosition)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x5e3cccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.OnUpgradeSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AILerp::*)(int32_t, bool)>(&::Pathfinding::AILerp::OnUpgradeSerializedData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5e3cf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e3cfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AILerp*>(),
                    {::i2c::class_of<::Pathfinding::AILerp*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AILerp._Awake_b__91_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AILerp::*)()>(&::Pathfinding::AILerp::_Awake_b__91_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e3d018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"<Awake>b__91_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::AutoRepathPolicy*& Pathfinding::AILerp::__cordl_internal_get_autoRepath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRepath;
}
constexpr ::Pathfinding::AutoRepathPolicy* const& Pathfinding::AILerp::__cordl_internal_get_autoRepath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRepath;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_autoRepath(::Pathfinding::AutoRepathPolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoRepath = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_canMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canMove;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_canMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canMove;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_canMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canMove = value;
}
constexpr float_t& Pathfinding::AILerp::__cordl_internal_get_speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr float_t const& Pathfinding::AILerp::__cordl_internal_get_speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speed;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speed = value;
}
constexpr ::Pathfinding::OrientationMode& Pathfinding::AILerp::__cordl_internal_get_orientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orientation;
}
constexpr ::Pathfinding::OrientationMode const& Pathfinding::AILerp::__cordl_internal_get_orientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orientation;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_orientation(::Pathfinding::OrientationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orientation = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_enableRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_enableRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_enableRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableRotation = value;
}
constexpr float_t& Pathfinding::AILerp::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& Pathfinding::AILerp::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_interpolatePathSwitches()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatePathSwitches;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_interpolatePathSwitches() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolatePathSwitches;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_interpolatePathSwitches(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolatePathSwitches = value;
}
constexpr float_t& Pathfinding::AILerp::__cordl_internal_get_switchPathInterpolationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchPathInterpolationSpeed;
}
constexpr float_t const& Pathfinding::AILerp::__cordl_internal_get_switchPathInterpolationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___switchPathInterpolationSpeed;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_switchPathInterpolationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___switchPathInterpolationSpeed = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get__reachedEndOfPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reachedEndOfPath_k__BackingField;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get__reachedEndOfPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____reachedEndOfPath_k__BackingField;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set__reachedEndOfPath_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____reachedEndOfPath_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AILerp::__cordl_internal_get__destination_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AILerp::__cordl_internal_get__destination_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destination_k__BackingField;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destination_k__BackingField = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_updatePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePosition;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_updatePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePosition;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_updatePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatePosition = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_updateRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotation;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_updateRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotation;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_updateRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateRotation = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get__isStopped_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStopped_k__BackingField;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get__isStopped_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStopped_k__BackingField;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set__isStopped_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isStopped_k__BackingField = value;
}
constexpr ::System::Action*& Pathfinding::AILerp::__cordl_internal_get__onSearchPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSearchPath_k__BackingField;
}
constexpr ::System::Action* const& Pathfinding::AILerp::__cordl_internal_get__onSearchPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSearchPath_k__BackingField;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set__onSearchPath_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSearchPath_k__BackingField = value;
}
constexpr ::UnityW<::Pathfinding::Seeker>& Pathfinding::AILerp::__cordl_internal_get_seeker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr ::UnityW<::Pathfinding::Seeker> const& Pathfinding::AILerp::__cordl_internal_get_seeker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seeker = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::AILerp::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::AILerp::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::Pathfinding::ABPath*& Pathfinding::AILerp::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::ABPath* const& Pathfinding::AILerp::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_path(::Pathfinding::ABPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_canSearchAgain()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchAgain;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_canSearchAgain() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchAgain;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_canSearchAgain(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSearchAgain = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AILerp::__cordl_internal_get_previousMovementOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousMovementOrigin;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AILerp::__cordl_internal_get_previousMovementOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousMovementOrigin;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_previousMovementOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousMovementOrigin = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AILerp::__cordl_internal_get_previousMovementDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousMovementDirection;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AILerp::__cordl_internal_get_previousMovementDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousMovementDirection;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_previousMovementDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousMovementDirection = value;
}
constexpr float_t& Pathfinding::AILerp::__cordl_internal_get_pathSwitchInterpolationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathSwitchInterpolationTime;
}
constexpr float_t const& Pathfinding::AILerp::__cordl_internal_get_pathSwitchInterpolationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathSwitchInterpolationTime;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_pathSwitchInterpolationTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathSwitchInterpolationTime = value;
}
constexpr ::Pathfinding::Util::PathInterpolator*& Pathfinding::AILerp::__cordl_internal_get_interpolator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolator;
}
constexpr ::Pathfinding::Util::PathInterpolator* const& Pathfinding::AILerp::__cordl_internal_get_interpolator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpolator;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_interpolator(::Pathfinding::Util::PathInterpolator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpolator = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_startHasRun()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHasRun;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_startHasRun() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHasRun;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_startHasRun(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startHasRun = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AILerp::__cordl_internal_get_previousPosition1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition1;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AILerp::__cordl_internal_get_previousPosition1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition1;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_previousPosition1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPosition1 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AILerp::__cordl_internal_get_previousPosition2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition2;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AILerp::__cordl_internal_get_previousPosition2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousPosition2;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_previousPosition2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousPosition2 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AILerp::__cordl_internal_get_simulatedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedPosition;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AILerp::__cordl_internal_get_simulatedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedPosition;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_simulatedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulatedPosition = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::AILerp::__cordl_internal_get_simulatedRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedRotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::AILerp::__cordl_internal_get_simulatedRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedRotation;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_simulatedRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulatedRotation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::AILerp::__cordl_internal_get_targetCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetCompatibility;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::AILerp::__cordl_internal_get_targetCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetCompatibility;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_targetCompatibility(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetCompatibility = value;
}
constexpr float_t& Pathfinding::AILerp::__cordl_internal_get_repathRateCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repathRateCompatibility;
}
constexpr float_t const& Pathfinding::AILerp::__cordl_internal_get_repathRateCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repathRateCompatibility;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_repathRateCompatibility(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repathRateCompatibility = value;
}
constexpr bool& Pathfinding::AILerp::__cordl_internal_get_canSearchCompability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchCompability;
}
constexpr bool const& Pathfinding::AILerp::__cordl_internal_get_canSearchCompability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchCompability;
}
constexpr void Pathfinding::AILerp::__cordl_internal_set_canSearchCompability(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSearchCompability = value;
}
inline float_t Pathfinding::AILerp::get_repathRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_repathRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_repathRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_repathRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::get_canSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_canSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_canSearch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::get_rotationIn2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_rotationIn2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_rotationIn2D(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_rotationIn2D", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::get_reachedEndOfPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_reachedEndOfPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_reachedEndOfPath(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_reachedEndOfPath", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::get_reachedDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_reachedDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::get_destination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_destination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_destination(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::AILerp::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_target(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Pathfinding::AILerp::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_rotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::AILerp::Pathfinding_IAstarAI_Move(::UnityEngine::Vector3  deltaPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaPosition);
}
inline float_t Pathfinding::AILerp::Pathfinding_IAstarAI_get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Pathfinding_IAstarAI_set_radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::AILerp::Pathfinding_IAstarAI_get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Pathfinding_IAstarAI_set_height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::AILerp::Pathfinding_IAstarAI_get_maxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_maxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Pathfinding_IAstarAI_set_maxSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::Pathfinding_IAstarAI_get_canSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_canSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Pathfinding_IAstarAI_set_canSearch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::Pathfinding_IAstarAI_get_canMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_canMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Pathfinding_IAstarAI_set_canMove(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::Pathfinding_IAstarAI_get_desiredVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_desiredVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::Pathfinding_IAstarAI_get_steeringTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Pathfinding.IAstarAI.get_steeringTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Pathfinding::AILerp::get_remainingDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_remainingDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_remainingDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AILerp::get_hasPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_hasPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::AILerp::get_pathPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_pathPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::AILerp::get_isStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_isStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_isStopped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_isStopped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Pathfinding::AILerp::get_onSearchPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"get_onSearchPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Pathfinding::AILerp::set_onSearchPath(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"set_onSearchPath", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::AILerp::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, stale);
}
inline void Pathfinding::AILerp::Teleport(::UnityEngine::Vector3  position, bool  clearPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, clearPath);
}
inline bool Pathfinding::AILerp::get_shouldRecalculatePath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AILerp::ForceSearchPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::SearchPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::OnTargetReached()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::OnPathComplete(::Pathfinding::Path*  _p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p);
}
inline void Pathfinding::AILerp::ClearPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::SetPath(::Pathfinding::Path*  path, bool  updateDestinationFromPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"SetPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, updateDestinationFromPath);
}
inline void Pathfinding::AILerp::ConfigurePathSwitchInterpolation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::GetFeetPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::AILerp::ConfigureNewPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AILerp::MovementUpdate(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"MovementUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime, nextPosition, nextRotation);
}
inline void Pathfinding::AILerp::FinalizeMovement(::UnityEngine::Vector3  nextPosition, ::UnityEngine::Quaternion  nextRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"FinalizeMovement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPosition, nextRotation);
}
inline ::UnityEngine::Quaternion Pathfinding::AILerp::SimulateRotationTowards(::UnityEngine::Vector3  direction, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"SimulateRotationTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, direction, deltaTime);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::CalculateNextPosition(::by_ref<::UnityEngine::Vector3>  direction, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, direction, deltaTime);
}
inline int32_t Pathfinding::AILerp::OnUpgradeSerializedData(int32_t  version, bool  unityThread)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version, unityThread);
}
inline void Pathfinding::AILerp::OnDrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AILerp*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AILerp::_Awake_b__91_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AILerp*>(),
                        {"<Awake>b__91_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Pathfinding::AILerp* Pathfinding::AILerp::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AILerp*>());
}
/// @brief Convert operator to "::Pathfinding::IAstarAI"
constexpr  Pathfinding::AILerp::operator ::Pathfinding::IAstarAI*() noexcept {
return static_cast<::Pathfinding::IAstarAI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IAstarAI"
constexpr ::Pathfinding::IAstarAI* Pathfinding::AILerp::i___Pathfinding__IAstarAI() noexcept {
return static_cast<::Pathfinding::IAstarAI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::AILerp::AILerp()   {
}
