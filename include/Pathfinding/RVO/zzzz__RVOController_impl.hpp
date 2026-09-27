#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOController.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "Pathfinding/RVO/zzzz__RVOController_def.hpp"
#include "Pathfinding/RVO/zzzz__IAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__MovementPlane_def.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_radius)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ee6f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(float_t)>(&::Pathfinding::RVO::RVOController::set_radius)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ee70a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_height)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5ee7170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(float_t)>(&::Pathfinding::RVO::RVOController::set_height)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ee7238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_center)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ee7308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_center", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_center
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(float_t)>(&::Pathfinding::RVO::RVOController::set_center)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee73d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_center", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_mask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_mask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ee73dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_mask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_mask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::LayerMask)>(&::Pathfinding::RVO::RVOController::set_mask)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee73e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_mask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_enableRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_enableRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee73ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_enableRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_enableRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(bool)>(&::Pathfinding::RVO::RVOController::set_enableRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee73f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_enableRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_rotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_rotationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee73f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_rotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_rotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(float_t)>(&::Pathfinding::RVO::RVOController::set_rotationSpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee7400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_rotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee7404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_maxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(float_t)>(&::Pathfinding::RVO::RVOController::set_maxSpeed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee740c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_movementPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::MovementPlane (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_movementPlane)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5ee7410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_movementPlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_rvoAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::IAgent* (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_rvoAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee74f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_rvoAgent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_rvoAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::Pathfinding::RVO::IAgent*)>(&::Pathfinding::RVO::RVOController::set_rvoAgent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee74f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_rvoAgent", {}, {::i2c::type_of<::Pathfinding::RVO::IAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_simulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::Simulator* (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_simulator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee7500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_simulator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_simulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::Pathfinding::RVO::Simulator*)>(&::Pathfinding::RVO::RVOController::set_simulator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee7508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_simulator", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_ai
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::IAstarAI* (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_ai)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ee6fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_ai", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_ai
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::Pathfinding::IAstarAI*)>(&::Pathfinding::RVO::RVOController::set_ai)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_ai", {}, {::i2c::type_of<::Pathfinding::IAstarAI*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_position)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5ee7518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.get_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::get_velocity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ee7698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.set_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::RVOController::set_velocity)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ee79f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.CalculateMovementDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RVO::RVOController::*)(float_t)>(&::Pathfinding::RVO::RVOController::CalculateMovementDelta)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5ee76f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"CalculateMovementDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.CalculateMovementDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::RVO::RVOController::CalculateMovementDelta)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5ee7b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"CalculateMovementDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.SetCollisionNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::RVOController::SetCollisionNormal)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5ee7cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"SetCollisionNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.ForceSetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::RVOController::ForceSetVelocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee7db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"ForceSetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.To2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::RVOController::To2D)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5ee7ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"To2D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.To2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Pathfinding::RVO::RVOController::To2D)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ee7db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"To2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.To3D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector2, float_t)>(&::Pathfinding::RVO::RVOController::To3D)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5ee7658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"To3D", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ee7e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::OnEnable)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x5ee7e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.UpdateAgentProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::UpdateAgentProperties)> {
  constexpr static std::size_t size = 0x790;
  constexpr static std::size_t addrs = 0x5ee81b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"UpdateAgentProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3, float_t, float_t)>(&::Pathfinding::RVO::RVOController::SetTarget)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ee8944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::RVOController::Move)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5ee8a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::RVOController::Teleport)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ee8ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5ee8cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController.OnUpgradeSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RVO::RVOController::*)(int32_t, bool)>(&::Pathfinding::RVO::RVOController::OnUpgradeSerializedData)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ee8fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                    {::i2c::class_of<::Pathfinding::RVO::RVOController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::RVOController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::RVOController::*)()>(&::Pathfinding::RVO::RVOController::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ee90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_radiusBackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radiusBackingField;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_radiusBackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radiusBackingField;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_radiusBackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radiusBackingField = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_heightBackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightBackingField;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_heightBackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heightBackingField;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_heightBackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heightBackingField = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_centerBackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerBackingField;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_centerBackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerBackingField;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_centerBackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerBackingField = value;
}
constexpr bool& Pathfinding::RVO::RVOController::__cordl_internal_get_locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr bool const& Pathfinding::RVO::RVOController::__cordl_internal_get_locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locked = value;
}
constexpr bool& Pathfinding::RVO::RVOController::__cordl_internal_get_lockWhenNotMoving()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockWhenNotMoving;
}
constexpr bool const& Pathfinding::RVO::RVOController::__cordl_internal_get_lockWhenNotMoving() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lockWhenNotMoving;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_lockWhenNotMoving(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lockWhenNotMoving = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_agentTimeHorizon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentTimeHorizon;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_agentTimeHorizon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentTimeHorizon;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_agentTimeHorizon(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agentTimeHorizon = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_obstacleTimeHorizon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacleTimeHorizon;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_obstacleTimeHorizon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacleTimeHorizon;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_obstacleTimeHorizon(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstacleTimeHorizon = value;
}
constexpr int32_t& Pathfinding::RVO::RVOController::__cordl_internal_get_maxNeighbours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeighbours;
}
constexpr int32_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_maxNeighbours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeighbours;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_maxNeighbours(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNeighbours = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::RVOController::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::RVOController::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::RVOController::__cordl_internal_get_collidesWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidesWith;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::RVOController::__cordl_internal_get_collidesWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidesWith;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_collidesWith(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidesWith = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_wallAvoidForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallAvoidForce;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_wallAvoidForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallAvoidForce;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_wallAvoidForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallAvoidForce = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_wallAvoidFalloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallAvoidFalloff;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_wallAvoidFalloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallAvoidFalloff;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_wallAvoidFalloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallAvoidFalloff = value;
}
constexpr float_t& Pathfinding::RVO::RVOController::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr float_t const& Pathfinding::RVO::RVOController::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_priority(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
constexpr ::Pathfinding::RVO::IAgent*& Pathfinding::RVO::RVOController::__cordl_internal_get__rvoAgent_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rvoAgent_k__BackingField;
}
constexpr ::Pathfinding::RVO::IAgent* const& Pathfinding::RVO::RVOController::__cordl_internal_get__rvoAgent_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rvoAgent_k__BackingField;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set__rvoAgent_k__BackingField(::Pathfinding::RVO::IAgent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rvoAgent_k__BackingField = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::RVOController::__cordl_internal_get__simulator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulator_k__BackingField;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::RVOController::__cordl_internal_get__simulator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____simulator_k__BackingField;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set__simulator_k__BackingField(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____simulator_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::RVO::RVOController::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::RVO::RVOController::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::Pathfinding::IAstarAI*& Pathfinding::RVO::RVOController::__cordl_internal_get_aiBackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiBackingField;
}
constexpr ::Pathfinding::IAstarAI* const& Pathfinding::RVO::RVOController::__cordl_internal_get_aiBackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___aiBackingField;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_aiBackingField(::Pathfinding::IAstarAI*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___aiBackingField = value;
}
constexpr bool& Pathfinding::RVO::RVOController::__cordl_internal_get_debug()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr bool const& Pathfinding::RVO::RVOController::__cordl_internal_get_debug() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debug;
}
constexpr void Pathfinding::RVO::RVOController::__cordl_internal_set_debug(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debug = value;
}
inline float_t Pathfinding::RVO::RVOController::get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::RVOController::get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::RVOController::get_center()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_center", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_center(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_center", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask Pathfinding::RVO::RVOController::get_mask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_mask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_mask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_mask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RVO::RVOController::get_enableRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_enableRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_enableRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_enableRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::RVOController::get_rotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_rotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_rotationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_rotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::RVOController::get_maxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_maxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_maxSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::RVO::MovementPlane Pathfinding::RVO::RVOController::get_movementPlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_movementPlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::MovementPlane>(this, ___internal_method);
}
inline ::Pathfinding::RVO::IAgent* Pathfinding::RVO::RVOController::get_rvoAgent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_rvoAgent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::IAgent*>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_rvoAgent(::Pathfinding::RVO::IAgent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_rvoAgent", {}, {::i2c::type_of<::Pathfinding::RVO::IAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::RVO::Simulator* Pathfinding::RVO::RVOController::get_simulator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_simulator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::Simulator*>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_simulator(::Pathfinding::RVO::Simulator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_simulator", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::IAstarAI* Pathfinding::RVO::RVOController::get_ai()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_ai", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::IAstarAI*>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_ai(::Pathfinding::IAstarAI*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_ai", {}, {::i2c::type_of<::Pathfinding::IAstarAI*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::RVO::RVOController::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RVO::RVOController::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"get_velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::set_velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"set_velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::RVO::RVOController::CalculateMovementDelta(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"CalculateMovementDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, deltaTime);
}
inline ::UnityEngine::Vector3 Pathfinding::RVO::RVOController::CalculateMovementDelta(::UnityEngine::Vector3  position, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"CalculateMovementDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, deltaTime);
}
inline void Pathfinding::RVO::RVOController::SetCollisionNormal(::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"SetCollisionNormal", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normal);
}
inline void Pathfinding::RVO::RVOController::ForceSetVelocity(::UnityEngine::Vector3  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"ForceSetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::RVOController::To2D(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"To2D", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::RVOController::To2D(::UnityEngine::Vector3  p, ::by_ref<float_t>  elevation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"To2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p, elevation);
}
inline ::UnityEngine::Vector3 Pathfinding::RVO::RVOController::To3D(::UnityEngine::Vector2  p, float_t  elevationCoordinate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"To3D", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, p, elevationCoordinate);
}
inline void Pathfinding::RVO::RVOController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::UpdateAgentProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"UpdateAgentProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::RVOController::SetTarget(::UnityEngine::Vector3  pos, float_t  speed, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, speed, maxSpeed);
}
inline void Pathfinding::RVO::RVOController::Move(::UnityEngine::Vector3  vel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vel);
}
inline void Pathfinding::RVO::RVOController::Teleport(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"Teleport", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos);
}
inline void Pathfinding::RVO::RVOController::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::RVO::RVOController::OnUpgradeSerializedData(int32_t  version, bool  unityThread)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::RVOController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version, unityThread);
}
inline void Pathfinding::RVO::RVOController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::RVOController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::RVOController* Pathfinding::RVO::RVOController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::RVOController*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::RVOController::RVOController()   {
}
