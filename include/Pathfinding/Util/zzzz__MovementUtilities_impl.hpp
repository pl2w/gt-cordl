#pragma once
// IWYU pragma private; include "Pathfinding/Util/MovementUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__MovementUtilities_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Pathfinding::Util::MovementUtilities.ClampVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t, float_t, bool, ::UnityEngine::Vector2)>(&::Pathfinding::Util::MovementUtilities::ClampVelocity)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5ed61c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::MovementUtilities*>(),
                        {"ClampVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Util::MovementUtilities.CalculateAccelerationToReachPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, float_t, float_t, ::UnityEngine::Vector2)>(&::Pathfinding::Util::MovementUtilities::CalculateAccelerationToReachPoint)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x5ed6390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::MovementUtilities*>(),
                        {"CalculateAccelerationToReachPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Pathfinding::Util::MovementUtilities::ClampVelocity(::UnityEngine::Vector2  velocity, float_t  maxSpeed, float_t  slowdownFactor, bool  slowWhenNotFacingTarget, ::UnityEngine::Vector2  forward)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::MovementUtilities*>(),
                        {"ClampVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, velocity, maxSpeed, slowdownFactor, slowWhenNotFacingTarget, forward);
}
inline ::UnityEngine::Vector2 Pathfinding::Util::MovementUtilities::CalculateAccelerationToReachPoint(::UnityEngine::Vector2  deltaPosition, ::UnityEngine::Vector2  targetVelocity, ::UnityEngine::Vector2  currentVelocity, float_t  forwardsAcceleration, float_t  rotationSpeed, float_t  maxSpeed, ::UnityEngine::Vector2  forwardsVector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::MovementUtilities*>(),
                        {"CalculateAccelerationToReachPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, deltaPosition, targetVelocity, currentVelocity, forwardsAcceleration, rotationSpeed, maxSpeed, forwardsVector);
}
// Ctor Parameters []
constexpr ::Pathfinding::Util::MovementUtilities::MovementUtilities()   {
}
