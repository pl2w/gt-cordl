#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Simulator.hpp"
#include "Pathfinding/RVO/zzzz__MovementPlane_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
#include "Pathfinding/RVO/Sampled/zzzz__Agent_def.hpp"
#include "Pathfinding/RVO/zzzz__IAgent_def.hpp"
#include "Pathfinding/RVO/zzzz__MovementPlane_def.hpp"
#include "Pathfinding/RVO/zzzz__ObstacleVertex_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOQuadtree_def.hpp"
#include "Pathfinding/RVO/zzzz__Simulator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ManualResetEventSlim_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.get_Quadtree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::RVOQuadtree* (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::get_Quadtree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee3244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_Quadtree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.set_Quadtree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::RVOQuadtree*)>(&::Pathfinding::RVO::Simulator::set_Quadtree)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"set_Quadtree", {}, {::i2c::type_of<::Pathfinding::RVO::RVOQuadtree*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.get_DeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::get_DeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee3254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.get_Multithreading
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::get_Multithreading)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5ee325c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_Multithreading", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.get_DesiredDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::get_DesiredDeltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee327c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_DesiredDeltaTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.set_DesiredDeltaTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)(float_t)>(&::Pathfinding::RVO::Simulator::set_DesiredDeltaTime)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5ee3284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"set_DesiredDeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.GetAgents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::GetAgents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee32f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"GetAgents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.GetObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::GetObstacles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ee32fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"GetObstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)(int32_t, bool, ::Pathfinding::RVO::MovementPlane)>(&::Pathfinding::RVO::Simulator::_ctor)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5ee3304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::RVO::MovementPlane>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.ClearAgents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::ClearAgents)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ee38ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"ClearAgents", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::OnDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5ee39e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::IAgent* (::Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::IAgent*)>(&::Pathfinding::RVO::Simulator::AddAgent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5ee3a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddAgent", {}, {::i2c::type_of<::Pathfinding::RVO::IAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::IAgent* (::Pathfinding::RVO::Simulator::*)(::UnityEngine::Vector3)>(&::Pathfinding::RVO::Simulator::AddAgent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5ee3cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddAgent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::IAgent* (::Pathfinding::RVO::Simulator::*)(::UnityEngine::Vector2, float_t)>(&::Pathfinding::RVO::Simulator::AddAgent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5ee3cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddAgent", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.RemoveAgent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::IAgent*)>(&::Pathfinding::RVO::Simulator::RemoveAgent)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5ee3f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"RemoveAgent", {}, {::i2c::type_of<::Pathfinding::RVO::IAgent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::ObstacleVertex* (::Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::ObstacleVertex*)>(&::Pathfinding::RVO::Simulator::AddObstacle)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5ee40f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::Pathfinding::RVO::ObstacleVertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::ObstacleVertex* (::Pathfinding::RVO::Simulator::*)(::ArrayW<::UnityEngine::Vector3>, float_t, bool)>(&::Pathfinding::RVO::Simulator::AddObstacle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5ee4208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::ObstacleVertex* (::Pathfinding::RVO::Simulator::*)(::ArrayW<::UnityEngine::Vector3>, float_t, ::UnityEngine::Matrix4x4, ::Pathfinding::RVO::RVOLayer, bool)>(&::Pathfinding::RVO::Simulator::AddObstacle)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5ee42a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::Pathfinding::RVO::RVOLayer>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.AddObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::RVO::ObstacleVertex* (::Pathfinding::RVO::Simulator::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Pathfinding::RVO::Simulator::AddObstacle)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x5ee48d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.UpdateObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::ObstacleVertex*, ::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Matrix4x4)>(&::Pathfinding::RVO::Simulator::UpdateObstacle)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5ee4518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"UpdateObstacle", {}, {::i2c::type_of<::Pathfinding::RVO::ObstacleVertex*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.ScheduleCleanObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::ScheduleCleanObstacles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ee4b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"ScheduleCleanObstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.CleanObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::CleanObstacles)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ee4b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"CleanObstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.RemoveObstacle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)(::Pathfinding::RVO::ObstacleVertex*)>(&::Pathfinding::RVO::Simulator::RemoveObstacle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5ee4b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"RemoveObstacle", {}, {::i2c::type_of<::Pathfinding::RVO::ObstacleVertex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.UpdateObstacles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::UpdateObstacles)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ee41fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"UpdateObstacles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.BuildQuadtree
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::BuildQuadtree)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5ee4bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"BuildQuadtree", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.BlockUntilSimulationStepIsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::BlockUntilSimulationStepIsDone)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5ee397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"BlockUntilSimulationStepIsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.PreCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::PreCalculation)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5ee509c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"PreCalculation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.CleanAndUpdateObstaclesIfNecessary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::CleanAndUpdateObstaclesIfNecessary)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ee5154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"CleanAndUpdateObstaclesIfNecessary", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator::*)()>(&::Pathfinding::RVO::Simulator::Update)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5ee5178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::RVO::Simulator::__cordl_internal_get_doubleBuffering()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doubleBuffering;
}
constexpr bool const& Pathfinding::RVO::Simulator::__cordl_internal_get_doubleBuffering() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doubleBuffering;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_doubleBuffering(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doubleBuffering = value;
}
constexpr float_t& Pathfinding::RVO::Simulator::__cordl_internal_get_desiredDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredDeltaTime;
}
constexpr float_t const& Pathfinding::RVO::Simulator::__cordl_internal_get_desiredDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredDeltaTime;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_desiredDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredDeltaTime = value;
}
constexpr ::ArrayW<::Pathfinding::RVO::Simulator_Worker*>& Pathfinding::RVO::Simulator::__cordl_internal_get_workers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workers;
}
constexpr ::ArrayW<::Pathfinding::RVO::Simulator_Worker*> const& Pathfinding::RVO::Simulator::__cordl_internal_get_workers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___workers;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_workers(::ArrayW<::Pathfinding::RVO::Simulator_Worker*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___workers = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*& Pathfinding::RVO::Simulator::__cordl_internal_get_agents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agents;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* const& Pathfinding::RVO::Simulator::__cordl_internal_get_agents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___agents;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_agents(::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___agents = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& Pathfinding::RVO::Simulator::__cordl_internal_get_obstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacles;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& Pathfinding::RVO::Simulator::__cordl_internal_get_obstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___obstacles;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___obstacles = value;
}
constexpr ::Pathfinding::RVO::RVOQuadtree*& Pathfinding::RVO::Simulator::__cordl_internal_get__Quadtree_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Quadtree_k__BackingField;
}
constexpr ::Pathfinding::RVO::RVOQuadtree* const& Pathfinding::RVO::Simulator::__cordl_internal_get__Quadtree_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Quadtree_k__BackingField;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set__Quadtree_k__BackingField(::Pathfinding::RVO::RVOQuadtree*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Quadtree_k__BackingField = value;
}
constexpr float_t& Pathfinding::RVO::Simulator::__cordl_internal_get_deltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr float_t const& Pathfinding::RVO::Simulator::__cordl_internal_get_deltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaTime;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_deltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaTime = value;
}
constexpr float_t& Pathfinding::RVO::Simulator::__cordl_internal_get_lastStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStep;
}
constexpr float_t const& Pathfinding::RVO::Simulator::__cordl_internal_get_lastStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastStep;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_lastStep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastStep = value;
}
constexpr bool& Pathfinding::RVO::Simulator::__cordl_internal_get_doUpdateObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doUpdateObstacles;
}
constexpr bool const& Pathfinding::RVO::Simulator::__cordl_internal_get_doUpdateObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doUpdateObstacles;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_doUpdateObstacles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doUpdateObstacles = value;
}
constexpr bool& Pathfinding::RVO::Simulator::__cordl_internal_get_doCleanObstacles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doCleanObstacles;
}
constexpr bool const& Pathfinding::RVO::Simulator::__cordl_internal_get_doCleanObstacles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___doCleanObstacles;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_doCleanObstacles(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___doCleanObstacles = value;
}
constexpr float_t& Pathfinding::RVO::Simulator::__cordl_internal_get_symmetryBreakingBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symmetryBreakingBias;
}
constexpr float_t const& Pathfinding::RVO::Simulator::__cordl_internal_get_symmetryBreakingBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___symmetryBreakingBias;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_symmetryBreakingBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___symmetryBreakingBias = value;
}
constexpr ::Pathfinding::RVO::MovementPlane& Pathfinding::RVO::Simulator::__cordl_internal_get_movementPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPlane;
}
constexpr ::Pathfinding::RVO::MovementPlane const& Pathfinding::RVO::Simulator::__cordl_internal_get_movementPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPlane;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_movementPlane(::Pathfinding::RVO::MovementPlane  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementPlane = value;
}
constexpr ::Pathfinding::RVO::Simulator_WorkerContext*& Pathfinding::RVO::Simulator::__cordl_internal_get_coroutineWorkerContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineWorkerContext;
}
constexpr ::Pathfinding::RVO::Simulator_WorkerContext* const& Pathfinding::RVO::Simulator::__cordl_internal_get_coroutineWorkerContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coroutineWorkerContext;
}
constexpr void Pathfinding::RVO::Simulator::__cordl_internal_set_coroutineWorkerContext(::Pathfinding::RVO::Simulator_WorkerContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coroutineWorkerContext = value;
}
inline ::Pathfinding::RVO::RVOQuadtree* Pathfinding::RVO::Simulator::get_Quadtree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_Quadtree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::RVOQuadtree*>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::set_Quadtree(::Pathfinding::RVO::RVOQuadtree*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"set_Quadtree", {}, {::i2c::type_of<::Pathfinding::RVO::RVOQuadtree*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RVO::Simulator::get_DeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_DeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Pathfinding::RVO::Simulator::get_Multithreading()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_Multithreading", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::RVO::Simulator::get_DesiredDeltaTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"get_DesiredDeltaTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::set_DesiredDeltaTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"set_DesiredDeltaTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* Pathfinding::RVO::Simulator::GetAgents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"GetAgents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* Pathfinding::RVO::Simulator::GetObstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"GetObstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::_ctor(int32_t  workers, bool  doubleBuffering, ::Pathfinding::RVO::MovementPlane  movementPlane)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::RVO::MovementPlane>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, workers, doubleBuffering, movementPlane);
}
inline void Pathfinding::RVO::Simulator::ClearAgents()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"ClearAgents", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::IAgent* Pathfinding::RVO::Simulator::AddAgent(::Pathfinding::RVO::IAgent*  agent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddAgent", {}, {::i2c::type_of<::Pathfinding::RVO::IAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::IAgent*>(this, ___internal_method, agent);
}
inline ::Pathfinding::RVO::IAgent* Pathfinding::RVO::Simulator::AddAgent(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddAgent", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::IAgent*>(this, ___internal_method, position);
}
inline ::Pathfinding::RVO::IAgent* Pathfinding::RVO::Simulator::AddAgent(::UnityEngine::Vector2  position, float_t  elevationCoordinate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddAgent", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::IAgent*>(this, ___internal_method, position, elevationCoordinate);
}
inline void Pathfinding::RVO::Simulator::RemoveAgent(::Pathfinding::RVO::IAgent*  agent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"RemoveAgent", {}, {::i2c::type_of<::Pathfinding::RVO::IAgent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, agent);
}
inline ::Pathfinding::RVO::ObstacleVertex* Pathfinding::RVO::Simulator::AddObstacle(::Pathfinding::RVO::ObstacleVertex*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::Pathfinding::RVO::ObstacleVertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::ObstacleVertex*>(this, ___internal_method, v);
}
inline ::Pathfinding::RVO::ObstacleVertex* Pathfinding::RVO::Simulator::AddObstacle(::ArrayW<::UnityEngine::Vector3>  vertices, float_t  height, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::ObstacleVertex*>(this, ___internal_method, vertices, height, cycle);
}
inline ::Pathfinding::RVO::ObstacleVertex* Pathfinding::RVO::Simulator::AddObstacle(::ArrayW<::UnityEngine::Vector3>  vertices, float_t  height, ::UnityEngine::Matrix4x4  matrix, ::Pathfinding::RVO::RVOLayer  layer, bool  cycle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::Pathfinding::RVO::RVOLayer>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::ObstacleVertex*>(this, ___internal_method, vertices, height, matrix, layer, cycle);
}
inline ::Pathfinding::RVO::ObstacleVertex* Pathfinding::RVO::Simulator::AddObstacle(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"AddObstacle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::RVO::ObstacleVertex*>(this, ___internal_method, a, b, height);
}
inline void Pathfinding::RVO::Simulator::UpdateObstacle(::Pathfinding::RVO::ObstacleVertex*  obstacle, ::ArrayW<::UnityEngine::Vector3>  vertices, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"UpdateObstacle", {}, {::i2c::type_of<::Pathfinding::RVO::ObstacleVertex*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, obstacle, vertices, matrix);
}
inline void Pathfinding::RVO::Simulator::ScheduleCleanObstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"ScheduleCleanObstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::CleanObstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"CleanObstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::RemoveObstacle(::Pathfinding::RVO::ObstacleVertex*  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"RemoveObstacle", {}, {::i2c::type_of<::Pathfinding::RVO::ObstacleVertex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Pathfinding::RVO::Simulator::UpdateObstacles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"UpdateObstacles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::BuildQuadtree()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"BuildQuadtree", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::BlockUntilSimulationStepIsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"BlockUntilSimulationStepIsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::PreCalculation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"PreCalculation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::CleanAndUpdateObstaclesIfNecessary()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"CleanAndUpdateObstaclesIfNecessary", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::Simulator* Pathfinding::RVO::Simulator::New_ctor(int32_t  workers, bool  doubleBuffering, ::Pathfinding::RVO::MovementPlane  movementPlane)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::Simulator*>(workers, doubleBuffering, movementPlane));
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::Simulator::Simulator()   {
}
//  Writing Method size for method: ::Pathfinding::RVO::Simulator_Worker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator_Worker::*)(::Pathfinding::RVO::Simulator*)>(&::Pathfinding::RVO::Simulator_Worker::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ee36fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator_Worker.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator_Worker::*)(int32_t)>(&::Pathfinding::RVO::Simulator_Worker::Execute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5ee560c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator_Worker.WaitOne
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator_Worker::*)()>(&::Pathfinding::RVO::Simulator_Worker::WaitOne)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ee5078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"WaitOne", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator_Worker.Terminate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator_Worker::*)()>(&::Pathfinding::RVO::Simulator_Worker::Terminate)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5ee3a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"Terminate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RVO::Simulator_Worker.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator_Worker::*)()>(&::Pathfinding::RVO::Simulator_Worker::Run)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x5ee5cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr int32_t const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_start(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr int32_t& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr int32_t const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_end(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr ::System::Threading::ManualResetEventSlim*& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_runFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runFlag;
}
constexpr ::System::Threading::ManualResetEventSlim* const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_runFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___runFlag;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_runFlag(::System::Threading::ManualResetEventSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___runFlag = value;
}
constexpr ::System::Threading::ManualResetEventSlim*& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_waitFlag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitFlag;
}
constexpr ::System::Threading::ManualResetEventSlim* const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_waitFlag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitFlag;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_waitFlag(::System::Threading::ManualResetEventSlim*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitFlag = value;
}
constexpr ::Pathfinding::RVO::Simulator*& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_simulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr ::Pathfinding::RVO::Simulator* const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_simulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulator;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulator = value;
}
constexpr int32_t& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr int32_t const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_task(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
constexpr bool& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_terminate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminate;
}
constexpr bool const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_terminate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___terminate;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_terminate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___terminate = value;
}
constexpr ::Pathfinding::RVO::Simulator_WorkerContext*& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_context()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr ::Pathfinding::RVO::Simulator_WorkerContext* const& Pathfinding::RVO::Simulator_Worker::__cordl_internal_get_context() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context;
}
constexpr void Pathfinding::RVO::Simulator_Worker::__cordl_internal_set_context(::Pathfinding::RVO::Simulator_WorkerContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context = value;
}
inline void Pathfinding::RVO::Simulator_Worker::_ctor(::Pathfinding::RVO::Simulator*  sim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {".ctor", {}, {::i2c::type_of<::Pathfinding::RVO::Simulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sim);
}
inline void Pathfinding::RVO::Simulator_Worker::Execute(int32_t  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"Execute", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, task);
}
inline void Pathfinding::RVO::Simulator_Worker::WaitOne()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"WaitOne", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator_Worker::Terminate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"Terminate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RVO::Simulator_Worker::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_Worker*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::Simulator_Worker* Pathfinding::RVO::Simulator_Worker::New_ctor(::Pathfinding::RVO::Simulator*  sim)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::Simulator_Worker*>(sim));
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::Simulator_Worker::Simulator_Worker()   {
}
//  Writing Method size for method: ::Pathfinding::RVO::Simulator_WorkerContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RVO::Simulator_WorkerContext::*)()>(&::Pathfinding::RVO::Simulator_WorkerContext::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5ee3568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_WorkerContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::RVO::Sampled::Agent_VOBuffer*& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_vos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vos;
}
constexpr ::Pathfinding::RVO::Sampled::Agent_VOBuffer* const& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_vos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vos;
}
constexpr void Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_set_vos(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vos = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_bestPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestPos;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_bestPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestPos;
}
constexpr void Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_set_bestPos(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestPos = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_bestSizes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestSizes;
}
constexpr ::ArrayW<float_t> const& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_bestSizes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestSizes;
}
constexpr void Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_set_bestSizes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestSizes = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_bestScores()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestScores;
}
constexpr ::ArrayW<float_t> const& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_bestScores() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bestScores;
}
constexpr void Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_set_bestScores(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bestScores = value;
}
constexpr ::ArrayW<::UnityEngine::Vector2>& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_samplePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplePos;
}
constexpr ::ArrayW<::UnityEngine::Vector2> const& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_samplePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___samplePos;
}
constexpr void Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_set_samplePos(::ArrayW<::UnityEngine::Vector2>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___samplePos = value;
}
constexpr ::ArrayW<float_t>& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_sampleSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleSize;
}
constexpr ::ArrayW<float_t> const& Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_get_sampleSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleSize;
}
constexpr void Pathfinding::RVO::Simulator_WorkerContext::__cordl_internal_set_sampleSize(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleSize = value;
}
inline void Pathfinding::RVO::Simulator_WorkerContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RVO::Simulator_WorkerContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RVO::Simulator_WorkerContext* Pathfinding::RVO::Simulator_WorkerContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RVO::Simulator_WorkerContext*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::RVO::Simulator_WorkerContext::Simulator_WorkerContext()   {
}
