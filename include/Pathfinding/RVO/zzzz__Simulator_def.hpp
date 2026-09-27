#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Simulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__MovementPlane_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulator)
namespace Pathfinding::RVO::Sampled {
class Agent_VOBuffer;
}
namespace Pathfinding::RVO::Sampled {
class Agent;
}
namespace Pathfinding::RVO {
class IAgent;
}
namespace Pathfinding::RVO {
struct MovementPlane;
}
namespace Pathfinding::RVO {
class ObstacleVertex;
}
namespace Pathfinding::RVO {
struct RVOLayer;
}
namespace Pathfinding::RVO {
class RVOQuadtree;
}
namespace Pathfinding::RVO {
class Simulator_WorkerContext;
}
namespace Pathfinding::RVO {
class Simulator_Worker;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading {
class ManualResetEventSlim;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::RVO {
class Simulator;
}
namespace Pathfinding::RVO {
class Simulator_Worker;
}
namespace Pathfinding::RVO {
class Simulator_WorkerContext;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::Simulator*);
MARK_REF_T(::Pathfinding::RVO::Simulator_Worker*);
MARK_REF_T(::Pathfinding::RVO::Simulator_WorkerContext*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::Simulator*, "Pathfinding.RVO", "Simulator");
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::Simulator_Worker*, "Pathfinding.RVO", "Simulator/Worker");
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::Simulator_WorkerContext*, "Pathfinding.RVO", "Simulator/WorkerContext");
// Dependencies Pathfinding.RVO.MovementPlane, Pathfinding.RVO.Simulator::Worker, System.Object
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.Simulator
class CORDL_TYPE Simulator : public ::System::Object {
public:
// Declarations
using Worker = ::Pathfinding::RVO::Simulator_Worker;

using WorkerContext = ::Pathfinding::RVO::Simulator_WorkerContext;

 __declspec(property(get=get_DeltaTime)) float_t  DeltaTime;

 __declspec(property(get=get_DesiredDeltaTime, put=set_DesiredDeltaTime)) float_t  DesiredDeltaTime;

 __declspec(property(get=get_Multithreading)) bool  Multithreading;

 __declspec(property(get=get_Quadtree, put=set_Quadtree)) ::Pathfinding::RVO::RVOQuadtree*  Quadtree;

/// @brief Field <Quadtree>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Quadtree_k__BackingField, put=__cordl_internal_set__Quadtree_k__BackingField)) ::Pathfinding::RVO::RVOQuadtree*  _Quadtree_k__BackingField;

/// @brief Field agents, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_agents, put=__cordl_internal_set_agents)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  agents;

/// @brief Field coroutineWorkerContext, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_coroutineWorkerContext, put=__cordl_internal_set_coroutineWorkerContext)) ::Pathfinding::RVO::Simulator_WorkerContext*  coroutineWorkerContext;

/// @brief Field deltaTime, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_deltaTime, put=__cordl_internal_set_deltaTime)) float_t  deltaTime;

/// @brief Field desiredDeltaTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_desiredDeltaTime, put=__cordl_internal_set_desiredDeltaTime)) float_t  desiredDeltaTime;

/// @brief Field doCleanObstacles, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_doCleanObstacles, put=__cordl_internal_set_doCleanObstacles)) bool  doCleanObstacles;

/// @brief Field doUpdateObstacles, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_doUpdateObstacles, put=__cordl_internal_set_doUpdateObstacles)) bool  doUpdateObstacles;

/// @brief Field doubleBuffering, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_doubleBuffering, put=__cordl_internal_set_doubleBuffering)) bool  doubleBuffering;

/// @brief Field lastStep, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStep, put=__cordl_internal_set_lastStep)) float_t  lastStep;

/// @brief Field movementPlane, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementPlane, put=__cordl_internal_set_movementPlane)) ::Pathfinding::RVO::MovementPlane  movementPlane;

/// @brief Field obstacles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_obstacles, put=__cordl_internal_set_obstacles)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  obstacles;

/// @brief Field symmetryBreakingBias, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_symmetryBreakingBias, put=__cordl_internal_set_symmetryBreakingBias)) float_t  symmetryBreakingBias;

/// @brief Field workers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_workers, put=__cordl_internal_set_workers)) ::ArrayW<::Pathfinding::RVO::Simulator_Worker*>  workers;

/// @brief Method AddAgent, addr 0x5ee3a88, size 0x228, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::IAgent* AddAgent(::Pathfinding::RVO::IAgent*  agent) ;

/// @brief Method AddAgent, addr 0x5ee3cc0, size 0x80, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::IAgent* AddAgent(::UnityEngine::Vector2  position, float_t  elevationCoordinate) ;

/// [Obsolete("Use AddAgent(Vector2,float) instead")]
/// @brief Method AddAgent, addr 0x5ee3cb0, size 0x10, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::IAgent* AddAgent(::UnityEngine::Vector3  position) ;

/// @brief Method AddObstacle, addr 0x5ee48d8, size 0x25c, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  height) ;

/// @brief Method AddObstacle, addr 0x5ee40f0, size 0x10c, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::Pathfinding::RVO::ObstacleVertex*  v) ;

/// @brief Method AddObstacle, addr 0x5ee4208, size 0x98, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::ArrayW<::UnityEngine::Vector3>  vertices, float_t  height, bool  cycle) ;

/// @brief Method AddObstacle, addr 0x5ee42a0, size 0x278, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::ObstacleVertex* AddObstacle(::ArrayW<::UnityEngine::Vector3>  vertices, float_t  height, ::UnityEngine::Matrix4x4  matrix, ::Pathfinding::RVO::RVOLayer  layer, bool  cycle) ;

/// @brief Method BlockUntilSimulationStepIsDone, addr 0x5ee397c, size 0x6c, virtual false, abstract: false, final false
inline void BlockUntilSimulationStepIsDone() ;

/// @brief Method BuildQuadtree, addr 0x5ee4bfc, size 0x1d8, virtual false, abstract: false, final false
inline void BuildQuadtree() ;

/// @brief Method CleanAndUpdateObstaclesIfNecessary, addr 0x5ee5154, size 0x24, virtual false, abstract: false, final false
inline void CleanAndUpdateObstaclesIfNecessary() ;

/// @brief Method CleanObstacles, addr 0x5ee4b40, size 0x4, virtual false, abstract: false, final false
inline void CleanObstacles() ;

/// @brief Method ClearAgents, addr 0x5ee38ac, size 0xd0, virtual false, abstract: false, final false
inline void ClearAgents() ;

/// @brief Method GetAgents, addr 0x5ee32f4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* GetAgents() ;

/// @brief Method GetObstacles, addr 0x5ee32fc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* GetObstacles() ;

static inline ::Pathfinding::RVO::Simulator* New_ctor(int32_t  workers, bool  doubleBuffering, ::Pathfinding::RVO::MovementPlane  movementPlane) ;

/// @brief Method OnDestroy, addr 0x5ee39e8, size 0x7c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PreCalculation, addr 0x5ee509c, size 0x9c, virtual false, abstract: false, final false
inline void PreCalculation() ;

/// @brief Method RemoveAgent, addr 0x5ee3f04, size 0x1ec, virtual false, abstract: false, final false
inline void RemoveAgent(::Pathfinding::RVO::IAgent*  agent) ;

/// @brief Method RemoveObstacle, addr 0x5ee4b44, size 0xb8, virtual false, abstract: false, final false
inline void RemoveObstacle(::Pathfinding::RVO::ObstacleVertex*  v) ;

/// @brief Method ScheduleCleanObstacles, addr 0x5ee4b34, size 0xc, virtual false, abstract: false, final false
inline void ScheduleCleanObstacles() ;

/// @brief Method Update, addr 0x5ee5178, size 0x438, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateObstacle, addr 0x5ee4518, size 0x3c0, virtual false, abstract: false, final false
inline void UpdateObstacle(::Pathfinding::RVO::ObstacleVertex*  obstacle, ::ArrayW<::UnityEngine::Vector3>  vertices, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method UpdateObstacles, addr 0x5ee41fc, size 0xc, virtual false, abstract: false, final false
inline void UpdateObstacles() ;

constexpr ::Pathfinding::RVO::RVOQuadtree* const& __cordl_internal_get__Quadtree_k__BackingField() const;

constexpr ::Pathfinding::RVO::RVOQuadtree*& __cordl_internal_get__Quadtree_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* const& __cordl_internal_get_agents() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*& __cordl_internal_get_agents() ;

constexpr ::Pathfinding::RVO::Simulator_WorkerContext* const& __cordl_internal_get_coroutineWorkerContext() const;

constexpr ::Pathfinding::RVO::Simulator_WorkerContext*& __cordl_internal_get_coroutineWorkerContext() ;

constexpr float_t const& __cordl_internal_get_deltaTime() const;

constexpr float_t& __cordl_internal_get_deltaTime() ;

constexpr float_t const& __cordl_internal_get_desiredDeltaTime() const;

constexpr float_t& __cordl_internal_get_desiredDeltaTime() ;

constexpr bool const& __cordl_internal_get_doCleanObstacles() const;

constexpr bool& __cordl_internal_get_doCleanObstacles() ;

constexpr bool const& __cordl_internal_get_doUpdateObstacles() const;

constexpr bool& __cordl_internal_get_doUpdateObstacles() ;

constexpr bool const& __cordl_internal_get_doubleBuffering() const;

constexpr bool& __cordl_internal_get_doubleBuffering() ;

constexpr float_t const& __cordl_internal_get_lastStep() const;

constexpr float_t& __cordl_internal_get_lastStep() ;

constexpr ::Pathfinding::RVO::MovementPlane const& __cordl_internal_get_movementPlane() const;

constexpr ::Pathfinding::RVO::MovementPlane& __cordl_internal_get_movementPlane() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& __cordl_internal_get_obstacles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& __cordl_internal_get_obstacles() ;

constexpr float_t const& __cordl_internal_get_symmetryBreakingBias() const;

constexpr float_t& __cordl_internal_get_symmetryBreakingBias() ;

constexpr ::ArrayW<::Pathfinding::RVO::Simulator_Worker*> const& __cordl_internal_get_workers() const;

constexpr ::ArrayW<::Pathfinding::RVO::Simulator_Worker*>& __cordl_internal_get_workers() ;

constexpr void __cordl_internal_set__Quadtree_k__BackingField(::Pathfinding::RVO::RVOQuadtree*  value) ;

constexpr void __cordl_internal_set_agents(::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  value) ;

constexpr void __cordl_internal_set_coroutineWorkerContext(::Pathfinding::RVO::Simulator_WorkerContext*  value) ;

constexpr void __cordl_internal_set_deltaTime(float_t  value) ;

constexpr void __cordl_internal_set_desiredDeltaTime(float_t  value) ;

constexpr void __cordl_internal_set_doCleanObstacles(bool  value) ;

constexpr void __cordl_internal_set_doUpdateObstacles(bool  value) ;

constexpr void __cordl_internal_set_doubleBuffering(bool  value) ;

constexpr void __cordl_internal_set_lastStep(float_t  value) ;

constexpr void __cordl_internal_set_movementPlane(::Pathfinding::RVO::MovementPlane  value) ;

constexpr void __cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value) ;

constexpr void __cordl_internal_set_symmetryBreakingBias(float_t  value) ;

constexpr void __cordl_internal_set_workers(::ArrayW<::Pathfinding::RVO::Simulator_Worker*>  value) ;

/// @brief Method .ctor, addr 0x5ee3304, size 0x264, virtual false, abstract: false, final false
inline void _ctor(int32_t  workers, bool  doubleBuffering, ::Pathfinding::RVO::MovementPlane  movementPlane) ;

/// @brief Method get_DeltaTime, addr 0x5ee3254, size 0x8, virtual false, abstract: false, final false
inline float_t get_DeltaTime() ;

/// @brief Method get_DesiredDeltaTime, addr 0x5ee327c, size 0x8, virtual false, abstract: false, final false
inline float_t get_DesiredDeltaTime() ;

/// @brief Method get_Multithreading, addr 0x5ee325c, size 0x20, virtual false, abstract: false, final false
inline bool get_Multithreading() ;

/// [CompilerGenerated]
/// @brief Method get_Quadtree, addr 0x5ee3244, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::RVOQuadtree* get_Quadtree() ;

/// @brief Method set_DesiredDeltaTime, addr 0x5ee3284, size 0x70, virtual false, abstract: false, final false
inline void set_DesiredDeltaTime(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Quadtree, addr 0x5ee324c, size 0x8, virtual false, abstract: false, final false
inline void set_Quadtree(::Pathfinding::RVO::RVOQuadtree*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulator(Simulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulator(Simulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21498};

/// @brief Field doubleBuffering, offset: 0x10, size: 0x1, def value: None
 bool  ___doubleBuffering;

/// @brief Field desiredDeltaTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___desiredDeltaTime;

/// @brief Field workers, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::RVO::Simulator_Worker*>  ___workers;

/// @brief Field agents, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  ___agents;

/// @brief Field obstacles, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  ___obstacles;

/// [CompilerGenerated]
/// @brief Field <Quadtree>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RVO::RVOQuadtree*  ____Quadtree_k__BackingField;

/// @brief Field deltaTime, offset: 0x38, size: 0x4, def value: None
 float_t  ___deltaTime;

/// @brief Field lastStep, offset: 0x3c, size: 0x4, def value: None
 float_t  ___lastStep;

/// @brief Field doUpdateObstacles, offset: 0x40, size: 0x1, def value: None
 bool  ___doUpdateObstacles;

/// @brief Field doCleanObstacles, offset: 0x41, size: 0x1, def value: None
 bool  ___doCleanObstacles;

/// @brief Field symmetryBreakingBias, offset: 0x44, size: 0x4, def value: None
 float_t  ___symmetryBreakingBias;

/// @brief Field movementPlane, offset: 0x48, size: 0x4, def value: None
 ::Pathfinding::RVO::MovementPlane  ___movementPlane;

/// @brief Field coroutineWorkerContext, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator_WorkerContext*  ___coroutineWorkerContext;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::Simulator, ___doubleBuffering) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___desiredDeltaTime) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___workers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___agents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___obstacles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ____Quadtree_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___deltaTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___lastStep) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___doUpdateObstacles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___doCleanObstacles) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___symmetryBreakingBias) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___movementPlane) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator, ___coroutineWorkerContext) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::Simulator) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::RVO
// Dependencies System.Object
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.Simulator/Worker
class CORDL_TYPE Simulator_Worker : public ::System::Object {
public:
// Declarations
/// @brief Field context, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_context, put=__cordl_internal_set_context)) ::Pathfinding::RVO::Simulator_WorkerContext*  context;

/// @brief Field end, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_end, put=__cordl_internal_set_end)) int32_t  end;

/// @brief Field runFlag, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_runFlag, put=__cordl_internal_set_runFlag)) ::System::Threading::ManualResetEventSlim*  runFlag;

/// @brief Field simulator, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_simulator, put=__cordl_internal_set_simulator)) ::Pathfinding::RVO::Simulator*  simulator;

/// @brief Field start, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) int32_t  start;

/// @brief Field task, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) int32_t  task;

/// @brief Field terminate, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_terminate, put=__cordl_internal_set_terminate)) bool  terminate;

/// @brief Field waitFlag, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitFlag, put=__cordl_internal_set_waitFlag)) ::System::Threading::ManualResetEventSlim*  waitFlag;

/// @brief Method Execute, addr 0x5ee560c, size 0x34, virtual false, abstract: false, final false
inline void Execute(int32_t  task) ;

static inline ::Pathfinding::RVO::Simulator_Worker* New_ctor(::Pathfinding::RVO::Simulator*  sim) ;

/// @brief Method Run, addr 0x5ee5cf8, size 0x340, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method Terminate, addr 0x5ee3a64, size 0x24, virtual false, abstract: false, final false
inline void Terminate() ;

/// @brief Method WaitOne, addr 0x5ee5078, size 0x24, virtual false, abstract: false, final false
inline void WaitOne() ;

constexpr ::Pathfinding::RVO::Simulator_WorkerContext* const& __cordl_internal_get_context() const;

constexpr ::Pathfinding::RVO::Simulator_WorkerContext*& __cordl_internal_get_context() ;

constexpr int32_t const& __cordl_internal_get_end() const;

constexpr int32_t& __cordl_internal_get_end() ;

constexpr ::System::Threading::ManualResetEventSlim* const& __cordl_internal_get_runFlag() const;

constexpr ::System::Threading::ManualResetEventSlim*& __cordl_internal_get_runFlag() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_simulator() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_simulator() ;

constexpr int32_t const& __cordl_internal_get_start() const;

constexpr int32_t& __cordl_internal_get_start() ;

constexpr int32_t const& __cordl_internal_get_task() const;

constexpr int32_t& __cordl_internal_get_task() ;

constexpr bool const& __cordl_internal_get_terminate() const;

constexpr bool& __cordl_internal_get_terminate() ;

constexpr ::System::Threading::ManualResetEventSlim* const& __cordl_internal_get_waitFlag() const;

constexpr ::System::Threading::ManualResetEventSlim*& __cordl_internal_get_waitFlag() ;

constexpr void __cordl_internal_set_context(::Pathfinding::RVO::Simulator_WorkerContext*  value) ;

constexpr void __cordl_internal_set_end(int32_t  value) ;

constexpr void __cordl_internal_set_runFlag(::System::Threading::ManualResetEventSlim*  value) ;

constexpr void __cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_start(int32_t  value) ;

constexpr void __cordl_internal_set_task(int32_t  value) ;

constexpr void __cordl_internal_set_terminate(bool  value) ;

constexpr void __cordl_internal_set_waitFlag(::System::Threading::ManualResetEventSlim*  value) ;

/// @brief Method .ctor, addr 0x5ee36fc, size 0x1b0, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::RVO::Simulator*  sim) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulator_Worker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulator_Worker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulator_Worker(Simulator_Worker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulator_Worker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulator_Worker(Simulator_Worker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21497};

/// @brief Field start, offset: 0x10, size: 0x4, def value: None
 int32_t  ___start;

/// @brief Field end, offset: 0x14, size: 0x4, def value: None
 int32_t  ___end;

/// @brief Field runFlag, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::ManualResetEventSlim*  ___runFlag;

/// @brief Field waitFlag, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::ManualResetEventSlim*  ___waitFlag;

/// @brief Field simulator, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___simulator;

/// @brief Field task, offset: 0x30, size: 0x4, def value: None
 int32_t  ___task;

/// @brief Field terminate, offset: 0x34, size: 0x1, def value: None
 bool  ___terminate;

/// @brief Field context, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator_WorkerContext*  ___context;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___start) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___end) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___runFlag) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___waitFlag) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___simulator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___task) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___terminate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_Worker, ___context) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::Simulator_Worker) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::RVO
// Dependencies System.Object, UnityEngine.Vector2
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.Simulator/WorkerContext
class CORDL_TYPE Simulator_WorkerContext : public ::System::Object {
public:
// Declarations
/// @brief Field bestPos, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestPos, put=__cordl_internal_set_bestPos)) ::ArrayW<::UnityEngine::Vector2>  bestPos;

/// @brief Field bestScores, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestScores, put=__cordl_internal_set_bestScores)) ::ArrayW<float_t>  bestScores;

/// @brief Field bestSizes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_bestSizes, put=__cordl_internal_set_bestSizes)) ::ArrayW<float_t>  bestSizes;

/// @brief Field samplePos, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_samplePos, put=__cordl_internal_set_samplePos)) ::ArrayW<::UnityEngine::Vector2>  samplePos;

/// @brief Field sampleSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleSize, put=__cordl_internal_set_sampleSize)) ::ArrayW<float_t>  sampleSize;

/// @brief Field vos, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_vos, put=__cordl_internal_set_vos)) ::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos;

static inline ::Pathfinding::RVO::Simulator_WorkerContext* New_ctor() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_bestPos() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_bestPos() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_bestScores() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_bestScores() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_bestSizes() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_bestSizes() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_samplePos() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_samplePos() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_sampleSize() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_sampleSize() ;

constexpr ::Pathfinding::RVO::Sampled::Agent_VOBuffer* const& __cordl_internal_get_vos() const;

constexpr ::Pathfinding::RVO::Sampled::Agent_VOBuffer*& __cordl_internal_get_vos() ;

constexpr void __cordl_internal_set_bestPos(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_bestScores(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_bestSizes(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_samplePos(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_sampleSize(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_vos(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  value) ;

/// @brief Method .ctor, addr 0x5ee3568, size 0x128, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Simulator_WorkerContext() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Simulator_WorkerContext", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Simulator_WorkerContext(Simulator_WorkerContext && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Simulator_WorkerContext", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Simulator_WorkerContext(Simulator_WorkerContext const& ) = delete;

/// @brief Field KeepCount offset 0xffffffff size 0x4
static constexpr int32_t  KeepCount{static_cast<int32_t>(0x3)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21496};

/// @brief Field vos, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::RVO::Sampled::Agent_VOBuffer*  ___vos;

/// @brief Field bestPos, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___bestPos;

/// @brief Field bestSizes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___bestSizes;

/// @brief Field bestScores, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<float_t>  ___bestScores;

/// @brief Field samplePos, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___samplePos;

/// @brief Field sampleSize, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  ___sampleSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::Simulator_WorkerContext, ___vos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_WorkerContext, ___bestPos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_WorkerContext, ___bestSizes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_WorkerContext, ___bestScores) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_WorkerContext, ___samplePos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Simulator_WorkerContext, ___sampleSize) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::Simulator_WorkerContext) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::RVO
