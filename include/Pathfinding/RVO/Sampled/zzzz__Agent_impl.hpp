#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Sampled/Agent.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_VO_impl.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_def.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_VO_def.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_def.hpp"
#include "Pathfinding/RVO/zzzz__IAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__ObstacleVertex_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_Position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::set_Position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_ElevationCoordinate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_ElevationCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_ElevationCoordinate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_ElevationCoordinate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_ElevationCoordinate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_ElevationCoordinate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_CalculatedTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_CalculatedTargetPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_CalculatedTargetPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_CalculatedTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::set_CalculatedTargetPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_CalculatedTargetPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_CalculatedSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_CalculatedSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_CalculatedSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_CalculatedSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_CalculatedSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_CalculatedSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_Locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_Locked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Locked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_Locked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(bool)>(&::Pathfinding::RVO::Sampled::Agent::set_Locked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Locked", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb65c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_AgentTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_AgentTimeHorizon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_AgentTimeHorizon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_AgentTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_AgentTimeHorizon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_AgentTimeHorizon", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_ObstacleTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_ObstacleTimeHorizon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_ObstacleTimeHorizon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_ObstacleTimeHorizon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_ObstacleTimeHorizon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb67c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_ObstacleTimeHorizon", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_MaxNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_MaxNeighbours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_MaxNeighbours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_MaxNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(int32_t)>(&::Pathfinding::RVO::Sampled::Agent::set_MaxNeighbours)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_MaxNeighbours", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_NeighbourCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_NeighbourCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_NeighbourCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_NeighbourCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(int32_t)>(&::Pathfinding::RVO::Sampled::Agent::set_NeighbourCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_NeighbourCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::RVOLayer (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_Layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Layer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_Layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::RVOLayer)>(&::Pathfinding::RVO::Sampled::Agent::set_Layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Layer", {}, {::i2c::type_of<::Pathfinding::RVO::RVOLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_CollidesWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::RVOLayer (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_CollidesWith)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_CollidesWith", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_CollidesWith
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::RVOLayer)>(&::Pathfinding::RVO::Sampled::Agent::set_CollidesWith)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_CollidesWith", {}, {::i2c::type_of<::Pathfinding::RVO::RVOLayer>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_DebugDraw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_DebugDraw", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_DebugDraw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(bool)>(&::Pathfinding::RVO::Sampled::Agent::set_DebugDraw)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5eeb6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_DebugDraw", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_Priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Priority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_Priority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::set_Priority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Priority", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_PreCalculationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_PreCalculationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_PreCalculationCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.set_PreCalculationCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::System::Action*)>(&::Pathfinding::RVO::Sampled::Agent::set_PreCalculationCallback)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_PreCalculationCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.SetTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector2, float_t, float_t)>(&::Pathfinding::RVO::Sampled::Agent::SetTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5eeb730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.SetCollisionNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::SetCollisionNormal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"SetCollisionNormal", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.ForceSetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::ForceSetVelocity)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5eeb7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"ForceSetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.get_NeighbourObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::get_NeighbourObstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_NeighbourObstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector2, float_t)>(&::Pathfinding::RVO::Sampled::Agent::_ctor)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5ee3d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.BufferSwitch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::BufferSwitch)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5ee5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"BufferSwitch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.PreCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::PreCalculation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ee5138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"PreCalculation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.PostCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::PostCalculation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5ee55b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"PostCalculation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.CalculateNeighbours
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)()>(&::Pathfinding::RVO::Sampled::Agent::CalculateNeighbours)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5ee5960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"CalculateNeighbours", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.Sqr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::Sqr)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"Sqr", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.InsertAgentNeighbour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Sampled::Agent*, float_t)>(&::Pathfinding::RVO::Sampled::Agent::InsertAgentNeighbour)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x5ee6be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"InsertAgentNeighbour", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.FromXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::FromXZ)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5eeb89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"FromXZ", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.ToXZ
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::Sampled::Agent::ToXZ)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eeb8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"ToXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.To2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::Sampled::Agent::*)(::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Pathfinding::RVO::Sampled::Agent::To2D)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5eeb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"To2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.DrawVO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::DrawVO)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x5eeb8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"DrawVO", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.CalculateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Simulator_WorkerContext*)>(&::Pathfinding::RVO::Sampled::Agent::CalculateVelocity)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5ee5a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"CalculateVelocity", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator_WorkerContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.Rainbow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(float_t)>(&::Pathfinding::RVO::Sampled::Agent::Rainbow)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5eec558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"Rainbow", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.GenerateObstacleVOs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Sampled::Agent_VOBuffer*)>(&::Pathfinding::RVO::Sampled::Agent::GenerateObstacleVOs)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0x5eebc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"GenerateObstacleVOs", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.GenerateNeighbourAgentVOs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Sampled::Agent_VOBuffer*)>(&::Pathfinding::RVO::Sampled::Agent::GenerateNeighbourAgentVOs)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x5eebfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"GenerateNeighbourAgentVOs", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.GradientDescent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Sampled::Agent_VOBuffer*, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::Pathfinding::RVO::Sampled::Agent::GradientDescent)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5eec3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"GradientDescent", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.BiasDesiredVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::RVO::Sampled::Agent_VOBuffer*, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>, float_t)>(&::Pathfinding::RVO::Sampled::Agent::BiasDesiredVelocity)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5eec284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"BiasDesiredVelocity", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.EvaluateGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Sampled::Agent_VOBuffer*, ::UnityEngine::Vector2, ::by_ref<float_t>)>(&::Pathfinding::RVO::Sampled::Agent::EvaluateGradient)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5eed680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"EvaluateGradient", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RVO::Sampled::Agent::*)(::Pathfinding::RVO::Sampled::Agent_VOBuffer*, ::UnityEngine::Vector2, ::by_ref<float_t>)>(&::Pathfinding::RVO::Sampled::Agent::Trace)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5eed1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"Trace", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_desiredSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredSpeed;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_desiredSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredSpeed;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_desiredSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredSpeed = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_agentTimeHorizon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentTimeHorizon;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_agentTimeHorizon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agentTimeHorizon;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_agentTimeHorizon(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agentTimeHorizon = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_obstacleTimeHorizon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacleTimeHorizon;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_obstacleTimeHorizon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacleTimeHorizon;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_obstacleTimeHorizon(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstacleTimeHorizon = value;
}
constexpr bool& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_locked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr bool const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_locked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locked;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_locked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locked = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_collidesWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidesWith;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_collidesWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidesWith;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_collidesWith(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidesWith = value;
}
constexpr int32_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_maxNeighbours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeighbours;
}
constexpr int32_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_maxNeighbours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxNeighbours;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_maxNeighbours(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxNeighbours = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_position(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_elevationCoordinate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elevationCoordinate;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_elevationCoordinate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elevationCoordinate;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_elevationCoordinate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elevationCoordinate = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_currentVelocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVelocity = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_desiredTargetPointInVelocitySpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredTargetPointInVelocitySpace;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_desiredTargetPointInVelocitySpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredTargetPointInVelocitySpace;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_desiredTargetPointInVelocitySpace(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredTargetPointInVelocitySpace = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_desiredVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredVelocity;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_desiredVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredVelocity;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_desiredVelocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredVelocity = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_nextTargetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTargetPoint;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_nextTargetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextTargetPoint;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_nextTargetPoint(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextTargetPoint = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_nextDesiredSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextDesiredSpeed;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_nextDesiredSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextDesiredSpeed;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_nextDesiredSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextDesiredSpeed = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_nextMaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextMaxSpeed;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_nextMaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextMaxSpeed;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_nextMaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextMaxSpeed = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_collisionNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionNormal;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_collisionNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionNormal;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_collisionNormal(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionNormal = value;
}
constexpr bool& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_manuallyControlled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manuallyControlled;
}
constexpr bool const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_manuallyControlled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manuallyControlled;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_manuallyControlled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manuallyControlled = value;
}
constexpr bool& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_debugDraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr bool const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_debugDraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugDraw;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_debugDraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugDraw = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Position_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Position_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Position_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Position_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__ElevationCoordinate_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElevationCoordinate_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__ElevationCoordinate_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ElevationCoordinate_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__ElevationCoordinate_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ElevationCoordinate_k__BackingField = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__CalculatedTargetPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculatedTargetPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__CalculatedTargetPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculatedTargetPoint_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__CalculatedTargetPoint_k__BackingField(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CalculatedTargetPoint_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__CalculatedSpeed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculatedSpeed_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__CalculatedSpeed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CalculatedSpeed_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__CalculatedSpeed_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CalculatedSpeed_k__BackingField = value;
}
constexpr bool& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Locked_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locked_k__BackingField;
}
constexpr bool const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Locked_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Locked_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__Locked_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Locked_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Radius_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Radius_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Radius_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Radius_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__Radius_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Radius_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Height_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Height_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Height_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Height_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__Height_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Height_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__AgentTimeHorizon_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgentTimeHorizon_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__AgentTimeHorizon_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AgentTimeHorizon_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__AgentTimeHorizon_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AgentTimeHorizon_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__ObstacleTimeHorizon_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObstacleTimeHorizon_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__ObstacleTimeHorizon_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ObstacleTimeHorizon_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__ObstacleTimeHorizon_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ObstacleTimeHorizon_k__BackingField = value;
}
constexpr int32_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__MaxNeighbours_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxNeighbours_k__BackingField;
}
constexpr int32_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__MaxNeighbours_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MaxNeighbours_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__MaxNeighbours_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MaxNeighbours_k__BackingField = value;
}
constexpr int32_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__NeighbourCount_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeighbourCount_k__BackingField;
}
constexpr int32_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__NeighbourCount_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NeighbourCount_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__NeighbourCount_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NeighbourCount_k__BackingField = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Layer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer_k__BackingField;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Layer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Layer_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__Layer_k__BackingField(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Layer_k__BackingField = value;
}
constexpr ::Pathfinding::RVO::RVOLayer& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__CollidesWith_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollidesWith_k__BackingField;
}
constexpr ::Pathfinding::RVO::RVOLayer const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__CollidesWith_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CollidesWith_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__CollidesWith_k__BackingField(::Pathfinding::RVO::RVOLayer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CollidesWith_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Priority_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Priority_k__BackingField;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__Priority_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Priority_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__Priority_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Priority_k__BackingField = value;
}
constexpr ::System::Action*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__PreCalculationCallback_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreCalculationCallback_k__BackingField;
}
constexpr ::System::Action* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get__PreCalculationCallback_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PreCalculationCallback_k__BackingField;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set__PreCalculationCallback_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PreCalculationCallback_k__BackingField = value;
}
constexpr ::Pathfinding::RVO::Sampled::Agent*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Pathfinding::RVO::Sampled::Agent* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_next(::Pathfinding::RVO::Sampled::Agent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr float_t& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_calculatedSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatedSpeed;
}
constexpr float_t const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_calculatedSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatedSpeed;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_calculatedSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calculatedSpeed = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_calculatedTargetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatedTargetPoint;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_calculatedTargetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calculatedTargetPoint;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_calculatedTargetPoint(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calculatedTargetPoint = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_simulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_simulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulator = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_neighbours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbours;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_neighbours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbours;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_neighbours(::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbours = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_neighbourDists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourDists;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_neighbourDists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___neighbourDists;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_neighbourDists(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___neighbourDists = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_obstaclesBuffered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstaclesBuffered;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_obstaclesBuffered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstaclesBuffered;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_obstaclesBuffered(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstaclesBuffered = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_obstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacles;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& Pathfinding::RVO::Sampled::Agent::__cordl_internal_get_obstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacles;
}
constexpr void Pathfinding::RVO::Sampled::Agent::__cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstacles = value;
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::get_Position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_Position(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Position", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_ElevationCoordinate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_ElevationCoordinate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_ElevationCoordinate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_ElevationCoordinate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::get_CalculatedTargetPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_CalculatedTargetPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_CalculatedTargetPoint(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_CalculatedTargetPoint", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_CalculatedSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_CalculatedSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_CalculatedSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_CalculatedSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RVO::Sampled::Agent::get_Locked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Locked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_Locked(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Locked", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_Height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_AgentTimeHorizon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_AgentTimeHorizon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_AgentTimeHorizon(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_AgentTimeHorizon", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_ObstacleTimeHorizon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_ObstacleTimeHorizon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_ObstacleTimeHorizon(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_ObstacleTimeHorizon", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::RVO::Sampled::Agent::get_MaxNeighbours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_MaxNeighbours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_MaxNeighbours(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_MaxNeighbours", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::RVO::Sampled::Agent::get_NeighbourCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_NeighbourCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_NeighbourCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_NeighbourCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::RVO::RVOLayer Pathfinding::RVO::Sampled::Agent::get_Layer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Layer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::RVOLayer>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_Layer(::Pathfinding::RVO::RVOLayer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Layer", {}, {::i2c::type_of<::Pathfinding::RVO::RVOLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::RVO::RVOLayer Pathfinding::RVO::Sampled::Agent::get_CollidesWith()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_CollidesWith", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::RVOLayer>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_CollidesWith(::Pathfinding::RVO::RVOLayer  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_CollidesWith", {}, {::i2c::type_of<::Pathfinding::RVO::RVOLayer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RVO::Sampled::Agent::get_DebugDraw()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_DebugDraw", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_DebugDraw(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_DebugDraw", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Sampled::Agent::get_Priority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_Priority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_Priority(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_Priority", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Pathfinding::RVO::Sampled::Agent::get_PreCalculationCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_PreCalculationCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::set_PreCalculationCallback(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"set_PreCalculationCallback", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::RVO::Sampled::Agent::SetTarget(::UnityEngine::Vector2  targetPoint, float_t  desiredSpeed, float_t  maxSpeed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"SetTarget", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPoint, desiredSpeed, maxSpeed);
}
inline void Pathfinding::RVO::Sampled::Agent::SetCollisionNormal(::UnityEngine::Vector2  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"SetCollisionNormal", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, normal);
}
inline void Pathfinding::RVO::Sampled::Agent::ForceSetVelocity(::UnityEngine::Vector2  velocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"ForceSetVelocity", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, velocity);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* Pathfinding::RVO::Sampled::Agent::get_NeighbourObstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"get_NeighbourObstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::_ctor(::UnityEngine::Vector2  pos, float_t  elevationCoordinate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, elevationCoordinate);
}
inline void Pathfinding::RVO::Sampled::Agent::BufferSwitch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"BufferSwitch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::PreCalculation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"PreCalculation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::PostCalculation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"PostCalculation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent::CalculateNeighbours()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"CalculateNeighbours", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Pathfinding::RVO::Sampled::Agent::Sqr(float_t  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"Sqr", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x);
}
inline float_t Pathfinding::RVO::Sampled::Agent::InsertAgentNeighbour(::Pathfinding::RVO::Sampled::Agent*  agent, float_t  rangeSq)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"InsertAgentNeighbour", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, agent, rangeSq);
}
inline ::UnityEngine::Vector3 Pathfinding::RVO::Sampled::Agent::FromXZ(::UnityEngine::Vector2  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"FromXZ", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, p);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::ToXZ(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"ToXZ", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, p);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::To2D(::UnityEngine::Vector3  p, ::by_ref<float_t>  elevation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"To2D", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, p, elevation);
}
inline void Pathfinding::RVO::Sampled::Agent::DrawVO(::UnityEngine::Vector2  circleCenter, float_t  radius, ::UnityEngine::Vector2  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"DrawVO", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, circleCenter, radius, origin);
}
inline void Pathfinding::RVO::Sampled::Agent::CalculateVelocity(::Pathfinding::RVO::Simulator_WorkerContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"CalculateVelocity", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator_WorkerContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline ::UnityEngine::Color Pathfinding::RVO::Sampled::Agent::Rainbow(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"Rainbow", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, v);
}
inline void Pathfinding::RVO::Sampled::Agent::GenerateObstacleVOs(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"GenerateObstacleVOs", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vos);
}
inline void Pathfinding::RVO::Sampled::Agent::GenerateNeighbourAgentVOs(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"GenerateNeighbourAgentVOs", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vos);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::GradientDescent(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::UnityEngine::Vector2  sampleAround1, ::UnityEngine::Vector2  sampleAround2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"GradientDescent", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, vos, sampleAround1, sampleAround2);
}
inline bool Pathfinding::RVO::Sampled::Agent::BiasDesiredVelocity(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::by_ref<::UnityEngine::Vector2>  desiredVelocity, ::by_ref<::UnityEngine::Vector2>  targetPointInVelocitySpace, float_t  maxBiasRadians)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"BiasDesiredVelocity", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, vos, desiredVelocity, targetPointInVelocitySpace, maxBiasRadians);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::EvaluateGradient(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::UnityEngine::Vector2  p, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"EvaluateGradient", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, vos, p, value);
}
inline ::UnityEngine::Vector2 Pathfinding::RVO::Sampled::Agent::Trace(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::UnityEngine::Vector2  p, ::by_ref<float_t>  score)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent*>(),
                        {"Trace", {}, {::i2c::type_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, vos, p, score);
}
inline ::Pathfinding::RVO::Sampled::Agent* Pathfinding::RVO::Sampled::Agent::New_ctor(::UnityEngine::Vector2  pos, float_t  elevationCoordinate)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::Sampled::Agent*>(pos, elevationCoordinate));
}
/// @brief Convert operator to "::Pathfinding::RVO::IAgent"
constexpr  Pathfinding::RVO::Sampled::Agent::operator ::Pathfinding::RVO::IAgent*() noexcept {
return static_cast<::Pathfinding::RVO::IAgent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::RVO::IAgent"
constexpr ::Pathfinding::RVO::IAgent* Pathfinding::RVO::Sampled::Agent::i___Pathfinding__RVO__IAgent() noexcept {
return static_cast<::Pathfinding::RVO::IAgent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::Sampled::Agent::Agent()   {
}
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent_VOBuffer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent_VOBuffer::*)()>(&::Pathfinding::RVO::Sampled::Agent_VOBuffer::Clear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eebc58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent_VOBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent_VOBuffer::*)(int32_t)>(&::Pathfinding::RVO::Sampled::Agent_VOBuffer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5ee5c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Sampled::Agent_VOBuffer.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Sampled::Agent_VOBuffer::*)(::GlobalNamespace::Agent_VO)>(&::Pathfinding::RVO::Sampled::Agent_VOBuffer::Add)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5eecb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::Agent_VO>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::Agent_VO>& Pathfinding::RVO::Sampled::Agent_VOBuffer::__cordl_internal_get_buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr ::ArrayW<::GlobalNamespace::Agent_VO> const& Pathfinding::RVO::Sampled::Agent_VOBuffer::__cordl_internal_get_buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buffer;
}
constexpr void Pathfinding::RVO::Sampled::Agent_VOBuffer::__cordl_internal_set_buffer(::ArrayW<::GlobalNamespace::Agent_VO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buffer = value;
}
constexpr int32_t& Pathfinding::RVO::Sampled::Agent_VOBuffer::__cordl_internal_get_length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr int32_t const& Pathfinding::RVO::Sampled::Agent_VOBuffer::__cordl_internal_get_length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___length;
}
constexpr void Pathfinding::RVO::Sampled::Agent_VOBuffer::__cordl_internal_set_length(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___length = value;
}
inline void Pathfinding::RVO::Sampled::Agent_VOBuffer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Sampled::Agent_VOBuffer::_ctor(int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n);
}
inline void Pathfinding::RVO::Sampled::Agent_VOBuffer::Add(::GlobalNamespace::Agent_VO  vo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(),
                        {"Add", {}, {::i2c::type_of<::GlobalNamespace::Agent_VO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vo);
}
inline ::Pathfinding::RVO::Sampled::Agent_VOBuffer* Pathfinding::RVO::Sampled::Agent_VOBuffer::New_ctor(int32_t  n)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::Sampled::Agent_VOBuffer*>(n));
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::Sampled::Agent_VOBuffer::Agent_VOBuffer()   {
}
