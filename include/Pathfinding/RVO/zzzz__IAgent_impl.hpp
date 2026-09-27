#pragma once
// IWYU pragma private; include "Pathfinding/RVO/IAgent.hpp"
#include "Pathfinding/RVO/zzzz__IAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__ObstacleVertex_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::IAgent::set_Position)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_ElevationCoordinate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_ElevationCoordinate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_ElevationCoordinate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(float_t)>(&::Pathfinding::RVO::IAgent::set_ElevationCoordinate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_CalculatedTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_CalculatedTargetPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_CalculatedSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_CalculatedSpeed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::UnityEngine::Vector2, float_t, float_t)>(&::Pathfinding::RVO::IAgent::SetTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_Locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_Locked)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_Locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(bool)>(&::Pathfinding::RVO::IAgent::set_Locked)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_Radius)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(float_t)>(&::Pathfinding::RVO::IAgent::set_Radius)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_Height)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(float_t)>(&::Pathfinding::RVO::IAgent::set_Height)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_AgentTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_AgentTimeHorizon)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_AgentTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(float_t)>(&::Pathfinding::RVO::IAgent::set_AgentTimeHorizon)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_ObstacleTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_ObstacleTimeHorizon)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_ObstacleTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(float_t)>(&::Pathfinding::RVO::IAgent::set_ObstacleTimeHorizon)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_MaxNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_MaxNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_MaxNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(int32_t)>(&::Pathfinding::RVO::IAgent::set_MaxNeighbours)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_NeighbourCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_NeighbourCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::RVOLayer (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_Layer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::Pathfinding::RVO::RVOLayer)>(&::Pathfinding::RVO::IAgent::set_Layer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_CollidesWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::RVOLayer (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_CollidesWith)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_CollidesWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::Pathfinding::RVO::RVOLayer)>(&::Pathfinding::RVO::IAgent::set_CollidesWith)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_DebugDraw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(bool)>(&::Pathfinding::RVO::IAgent::set_DebugDraw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_NeighbourObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_NeighbourObstacles)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::IAgent::*)()>(&::Pathfinding::RVO::IAgent::get_Priority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(float_t)>(&::Pathfinding::RVO::IAgent::set_Priority)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.set_PreCalculationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::System::Action*)>(&::Pathfinding::RVO::IAgent::set_PreCalculationCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.SetCollisionNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::IAgent::SetCollisionNormal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::IAgent.ForceSetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::IAgent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::IAgent::ForceSetVelocity)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RVO::IAgent*>(),
                    {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 31}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector2 Pathfinding::RVO::IAgent::get_Position()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_Position(::UnityEngine::Vector2  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::IAgent::get_ElevationCoordinate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_ElevationCoordinate(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::IAgent::get_CalculatedTargetPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t Pathfinding::RVO::IAgent::get_CalculatedSpeed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::SetTarget(::UnityEngine::Vector2  targetPoint, float_t  desiredSpeed, float_t  maxSpeed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPoint, desiredSpeed, maxSpeed);
}
inline bool Pathfinding::RVO::IAgent::get_Locked()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_Locked(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::IAgent::get_Radius()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_Radius(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::IAgent::get_Height()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_Height(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::IAgent::get_AgentTimeHorizon()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_AgentTimeHorizon(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::IAgent::get_ObstacleTimeHorizon()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_ObstacleTimeHorizon(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::RVO::IAgent::get_MaxNeighbours()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_MaxNeighbours(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::RVO::IAgent::get_NeighbourCount()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Pathfinding::RVO::RVOLayer Pathfinding::RVO::IAgent::get_Layer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::RVOLayer>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_Layer(::Pathfinding::RVO::RVOLayer  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::RVO::RVOLayer Pathfinding::RVO::IAgent::get_CollidesWith()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::RVOLayer>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_CollidesWith(::Pathfinding::RVO::RVOLayer  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RVO::IAgent::get_DebugDraw()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_DebugDraw(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* Pathfinding::RVO::IAgent::get_NeighbourObstacles()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*>(this, ___internal_method);
}
inline float_t Pathfinding::RVO::IAgent::get_Priority()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::IAgent::set_Priority(float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::RVO::IAgent::set_PreCalculationCallback(::System::Action*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::RVO::IAgent::SetCollisionNormal(::UnityEngine::Vector2  normal)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normal);
}
inline void Pathfinding::RVO::IAgent::ForceSetVelocity(::UnityEngine::Vector2  velocity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RVO::IAgent*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
