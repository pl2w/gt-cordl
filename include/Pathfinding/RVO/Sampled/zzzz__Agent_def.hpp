#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Sampled/Agent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/Sampled/zzzz__Agent_VO_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Agent)
namespace GlobalNamespace {
struct Agent_VO;
}
namespace Pathfinding::RVO::Sampled {
class Agent_VOBuffer;
}
namespace Pathfinding::RVO {
class IAgent;
}
namespace Pathfinding::RVO {
class ObstacleVertex;
}
namespace Pathfinding::RVO {
struct RVOLayer;
}
namespace Pathfinding::RVO {
class Simulator_WorkerContext;
}
namespace Pathfinding::RVO {
class Simulator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::RVO::Sampled {
class Agent;
}
namespace Pathfinding::RVO::Sampled {
class Agent_VOBuffer;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::Sampled::Agent*);
MARK_REF_T(::Pathfinding::RVO::Sampled::Agent_VOBuffer*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::Sampled::Agent*, "Pathfinding.RVO.Sampled", "Agent");
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::Sampled::Agent_VOBuffer*, "Pathfinding.RVO.Sampled", "Agent/VOBuffer");
// Dependencies Pathfinding.RVO.RVOLayer, System.Object, UnityEngine.Vector2
namespace Pathfinding::RVO::Sampled {
// Is value type: false
// CS Name: Pathfinding.RVO.Sampled.Agent
class CORDL_TYPE Agent : public ::System::Object {
public:
// Declarations
using VO = ::GlobalNamespace::Agent_VO;

using VOBuffer = ::Pathfinding::RVO::Sampled::Agent_VOBuffer;

 __declspec(property(get=get_AgentTimeHorizon, put=set_AgentTimeHorizon)) float_t  AgentTimeHorizon;

 __declspec(property(get=get_CalculatedSpeed, put=set_CalculatedSpeed)) float_t  CalculatedSpeed;

 __declspec(property(get=get_CalculatedTargetPoint, put=set_CalculatedTargetPoint)) ::UnityEngine::Vector2  CalculatedTargetPoint;

 __declspec(property(get=get_CollidesWith, put=set_CollidesWith)) ::Pathfinding::RVO::RVOLayer  CollidesWith;

 __declspec(property(get=get_DebugDraw, put=set_DebugDraw)) bool  DebugDraw;

 __declspec(property(get=get_ElevationCoordinate, put=set_ElevationCoordinate)) float_t  ElevationCoordinate;

 __declspec(property(get=get_Height, put=set_Height)) float_t  Height;

 __declspec(property(get=get_Layer, put=set_Layer)) ::Pathfinding::RVO::RVOLayer  Layer;

 __declspec(property(get=get_Locked, put=set_Locked)) bool  Locked;

 __declspec(property(get=get_MaxNeighbours, put=set_MaxNeighbours)) int32_t  MaxNeighbours;

 __declspec(property(get=get_NeighbourCount, put=set_NeighbourCount)) int32_t  NeighbourCount;

 __declspec(property(get=get_NeighbourObstacles)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  NeighbourObstacles;

 __declspec(property(get=get_ObstacleTimeHorizon, put=set_ObstacleTimeHorizon)) float_t  ObstacleTimeHorizon;

 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector2  Position;

 __declspec(property(get=get_PreCalculationCallback, put=set_PreCalculationCallback)) ::System::Action*  PreCalculationCallback;

 __declspec(property(get=get_Priority, put=set_Priority)) float_t  Priority;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

/// @brief Field <AgentTimeHorizon>k__BackingField, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgentTimeHorizon_k__BackingField, put=__cordl_internal_set__AgentTimeHorizon_k__BackingField)) float_t  _AgentTimeHorizon_k__BackingField;

/// @brief Field <CalculatedSpeed>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CalculatedSpeed_k__BackingField, put=__cordl_internal_set__CalculatedSpeed_k__BackingField)) float_t  _CalculatedSpeed_k__BackingField;

/// @brief Field <CalculatedTargetPoint>k__BackingField, offset 0x84, size 0x8 
 __declspec(property(get=__cordl_internal_get__CalculatedTargetPoint_k__BackingField, put=__cordl_internal_set__CalculatedTargetPoint_k__BackingField)) ::UnityEngine::Vector2  _CalculatedTargetPoint_k__BackingField;

/// @brief Field <CollidesWith>k__BackingField, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__CollidesWith_k__BackingField, put=__cordl_internal_set__CollidesWith_k__BackingField)) ::Pathfinding::RVO::RVOLayer  _CollidesWith_k__BackingField;

/// @brief Field <ElevationCoordinate>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__ElevationCoordinate_k__BackingField, put=__cordl_internal_set__ElevationCoordinate_k__BackingField)) float_t  _ElevationCoordinate_k__BackingField;

/// @brief Field <Height>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__Height_k__BackingField, put=__cordl_internal_set__Height_k__BackingField)) float_t  _Height_k__BackingField;

/// @brief Field <Layer>k__BackingField, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__Layer_k__BackingField, put=__cordl_internal_set__Layer_k__BackingField)) ::Pathfinding::RVO::RVOLayer  _Layer_k__BackingField;

/// @brief Field <Locked>k__BackingField, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__Locked_k__BackingField, put=__cordl_internal_set__Locked_k__BackingField)) bool  _Locked_k__BackingField;

/// @brief Field <MaxNeighbours>k__BackingField, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxNeighbours_k__BackingField, put=__cordl_internal_set__MaxNeighbours_k__BackingField)) int32_t  _MaxNeighbours_k__BackingField;

/// @brief Field <NeighbourCount>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__NeighbourCount_k__BackingField, put=__cordl_internal_set__NeighbourCount_k__BackingField)) int32_t  _NeighbourCount_k__BackingField;

/// @brief Field <ObstacleTimeHorizon>k__BackingField, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__ObstacleTimeHorizon_k__BackingField, put=__cordl_internal_set__ObstacleTimeHorizon_k__BackingField)) float_t  _ObstacleTimeHorizon_k__BackingField;

/// @brief Field <Position>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Position_k__BackingField, put=__cordl_internal_set__Position_k__BackingField)) ::UnityEngine::Vector2  _Position_k__BackingField;

/// @brief Field <PreCalculationCallback>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__PreCalculationCallback_k__BackingField, put=__cordl_internal_set__PreCalculationCallback_k__BackingField)) ::System::Action*  _PreCalculationCallback_k__BackingField;

/// @brief Field <Priority>k__BackingField, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__Priority_k__BackingField, put=__cordl_internal_set__Priority_k__BackingField)) float_t  _Priority_k__BackingField;

/// @brief Field <Radius>k__BackingField, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__Radius_k__BackingField, put=__cordl_internal_set__Radius_k__BackingField)) float_t  _Radius_k__BackingField;

/// @brief Field agentTimeHorizon, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_agentTimeHorizon, put=__cordl_internal_set_agentTimeHorizon)) float_t  agentTimeHorizon;

/// @brief Field calculatedSpeed, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_calculatedSpeed, put=__cordl_internal_set_calculatedSpeed)) float_t  calculatedSpeed;

/// @brief Field calculatedTargetPoint, offset 0xcc, size 0x8 
 __declspec(property(get=__cordl_internal_get_calculatedTargetPoint, put=__cordl_internal_set_calculatedTargetPoint)) ::UnityEngine::Vector2  calculatedTargetPoint;

/// @brief Field collidesWith, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_collidesWith, put=__cordl_internal_set_collidesWith)) ::Pathfinding::RVO::RVOLayer  collidesWith;

/// @brief Field collisionNormal, offset 0x6c, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionNormal, put=__cordl_internal_set_collisionNormal)) ::UnityEngine::Vector2  collisionNormal;

/// @brief Field currentVelocity, offset 0x44, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) ::UnityEngine::Vector2  currentVelocity;

/// @brief Field debugDraw, offset 0x75, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDraw, put=__cordl_internal_set_debugDraw)) bool  debugDraw;

/// @brief Field desiredSpeed, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_desiredSpeed, put=__cordl_internal_set_desiredSpeed)) float_t  desiredSpeed;

/// @brief Field desiredTargetPointInVelocitySpace, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_desiredTargetPointInVelocitySpace, put=__cordl_internal_set_desiredTargetPointInVelocitySpace)) ::UnityEngine::Vector2  desiredTargetPointInVelocitySpace;

/// @brief Field desiredVelocity, offset 0x54, size 0x8 
 __declspec(property(get=__cordl_internal_get_desiredVelocity, put=__cordl_internal_set_desiredVelocity)) ::UnityEngine::Vector2  desiredVelocity;

/// @brief Field elevationCoordinate, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_elevationCoordinate, put=__cordl_internal_set_elevationCoordinate)) float_t  elevationCoordinate;

/// @brief Field height, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field layer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::Pathfinding::RVO::RVOLayer  layer;

/// @brief Field locked, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_locked, put=__cordl_internal_set_locked)) bool  locked;

/// @brief Field manuallyControlled, offset 0x74, size 0x1 
 __declspec(property(get=__cordl_internal_get_manuallyControlled, put=__cordl_internal_set_manuallyControlled)) bool  manuallyControlled;

/// @brief Field maxNeighbours, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNeighbours, put=__cordl_internal_set_maxNeighbours)) int32_t  maxNeighbours;

/// @brief Field maxSpeed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field neighbourDists, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_neighbourDists, put=__cordl_internal_set_neighbourDists)) ::System::Collections::Generic::List_1<float_t>*  neighbourDists;

/// @brief Field neighbours, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_neighbours, put=__cordl_internal_set_neighbours)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  neighbours;

/// @brief Field next, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Pathfinding::RVO::Sampled::Agent*  next;

/// @brief Field nextDesiredSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextDesiredSpeed, put=__cordl_internal_set_nextDesiredSpeed)) float_t  nextDesiredSpeed;

/// @brief Field nextMaxSpeed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextMaxSpeed, put=__cordl_internal_set_nextMaxSpeed)) float_t  nextMaxSpeed;

/// @brief Field nextTargetPoint, offset 0x5c, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextTargetPoint, put=__cordl_internal_set_nextTargetPoint)) ::UnityEngine::Vector2  nextTargetPoint;

/// @brief Field obstacleTimeHorizon, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_obstacleTimeHorizon, put=__cordl_internal_set_obstacleTimeHorizon)) float_t  obstacleTimeHorizon;

/// @brief Field obstacles, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_obstacles, put=__cordl_internal_set_obstacles)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  obstacles;

/// @brief Field obstaclesBuffered, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_obstaclesBuffered, put=__cordl_internal_set_obstaclesBuffered)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  obstaclesBuffered;

/// @brief Field position, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector2  position;

/// @brief Field radius, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field simulator, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_simulator, put=__cordl_internal_set_simulator)) ::Pathfinding::RVO::Simulator*  simulator;

/// @brief Convert operator to "::Pathfinding::RVO::IAgent"
constexpr operator  ::Pathfinding::RVO::IAgent*() noexcept;

/// @brief Method BiasDesiredVelocity, addr 0x5eec284, size 0x160, virtual false, abstract: false, final false
static inline bool BiasDesiredVelocity(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::by_ref<::UnityEngine::Vector2>  desiredVelocity, ::by_ref<::UnityEngine::Vector2>  targetPointInVelocitySpace, float_t  maxBiasRadians) ;

/// @brief Method BufferSwitch, addr 0x5ee5640, size 0x320, virtual false, abstract: false, final false
inline void BufferSwitch() ;

/// @brief Method CalculateNeighbours, addr 0x5ee5960, size 0xdc, virtual false, abstract: false, final false
inline void CalculateNeighbours() ;

/// @brief Method CalculateVelocity, addr 0x5ee5a3c, size 0x244, virtual false, abstract: false, final false
inline void CalculateVelocity(::Pathfinding::RVO::Simulator_WorkerContext*  context) ;

/// @brief Method DrawVO, addr 0x5eeb8e0, size 0x378, virtual false, abstract: false, final false
static inline void DrawVO(::UnityEngine::Vector2  circleCenter, float_t  radius, ::UnityEngine::Vector2  origin) ;

/// @brief Method EvaluateGradient, addr 0x5eed680, size 0x22c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 EvaluateGradient(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::UnityEngine::Vector2  p, ::by_ref<float_t>  value) ;

/// @brief Method ForceSetVelocity, addr 0x5eeb7e0, size 0xac, virtual true, abstract: false, final true
inline void ForceSetVelocity(::UnityEngine::Vector2  velocity) ;

/// @brief Method FromXZ, addr 0x5eeb89c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 FromXZ(::UnityEngine::Vector2  p) ;

/// @brief Method GenerateNeighbourAgentVOs, addr 0x5eebfe8, size 0x29c, virtual false, abstract: false, final false
inline void GenerateNeighbourAgentVOs(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos) ;

/// @brief Method GenerateObstacleVOs, addr 0x5eebc60, size 0x388, virtual false, abstract: false, final false
inline void GenerateObstacleVOs(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos) ;

/// @brief Method GradientDescent, addr 0x5eec3e4, size 0x174, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GradientDescent(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::UnityEngine::Vector2  sampleAround1, ::UnityEngine::Vector2  sampleAround2) ;

/// @brief Method InsertAgentNeighbour, addr 0x5ee6be8, size 0x328, virtual false, abstract: false, final false
inline float_t InsertAgentNeighbour(::Pathfinding::RVO::Sampled::Agent*  agent, float_t  rangeSq) ;

static inline ::Pathfinding::RVO::Sampled::Agent* New_ctor(::UnityEngine::Vector2  pos, float_t  elevationCoordinate) ;

/// @brief Method PostCalculation, addr 0x5ee55b0, size 0x5c, virtual false, abstract: false, final false
inline void PostCalculation() ;

/// @brief Method PreCalculation, addr 0x5ee5138, size 0x1c, virtual false, abstract: false, final false
inline void PreCalculation() ;

/// @brief Method Rainbow, addr 0x5eec558, size 0x40, virtual false, abstract: false, final false
static inline ::UnityEngine::Color Rainbow(float_t  v) ;

/// @brief Method SetCollisionNormal, addr 0x5eeb7d8, size 0x8, virtual true, abstract: false, final true
inline void SetCollisionNormal(::UnityEngine::Vector2  normal) ;

/// @brief Method SetTarget, addr 0x5eeb730, size 0xa8, virtual true, abstract: false, final true
inline void SetTarget(::UnityEngine::Vector2  targetPoint, float_t  desiredSpeed, float_t  maxSpeed) ;

/// @brief Method Sqr, addr 0x5eeb894, size 0x8, virtual false, abstract: false, final false
static inline float_t Sqr(float_t  x) ;

/// @brief Method To2D, addr 0x5eeb8b0, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 To2D(::UnityEngine::Vector3  p, ::by_ref<float_t>  elevation) ;

/// @brief Method ToXZ, addr 0x5eeb8a8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ToXZ(::UnityEngine::Vector3  p) ;

/// @brief Method Trace, addr 0x5eed1c4, size 0x298, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 Trace(::Pathfinding::RVO::Sampled::Agent_VOBuffer*  vos, ::UnityEngine::Vector2  p, ::by_ref<float_t>  score) ;

constexpr float_t const& __cordl_internal_get__AgentTimeHorizon_k__BackingField() const;

constexpr float_t& __cordl_internal_get__AgentTimeHorizon_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__CalculatedSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CalculatedSpeed_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__CalculatedTargetPoint_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__CalculatedTargetPoint_k__BackingField() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get__CollidesWith_k__BackingField() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get__CollidesWith_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ElevationCoordinate_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ElevationCoordinate_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Height_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Height_k__BackingField() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get__Layer_k__BackingField() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get__Layer_k__BackingField() ;

constexpr bool const& __cordl_internal_get__Locked_k__BackingField() const;

constexpr bool& __cordl_internal_get__Locked_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MaxNeighbours_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MaxNeighbours_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__NeighbourCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NeighbourCount_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ObstacleTimeHorizon_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ObstacleTimeHorizon_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__Position_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__Position_k__BackingField() ;

constexpr ::System::Action* const& __cordl_internal_get__PreCalculationCallback_k__BackingField() const;

constexpr ::System::Action*& __cordl_internal_get__PreCalculationCallback_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Priority_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Priority_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__Radius_k__BackingField() const;

constexpr float_t& __cordl_internal_get__Radius_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_agentTimeHorizon() const;

constexpr float_t& __cordl_internal_get_agentTimeHorizon() ;

constexpr float_t const& __cordl_internal_get_calculatedSpeed() const;

constexpr float_t& __cordl_internal_get_calculatedSpeed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_calculatedTargetPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_calculatedTargetPoint() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get_collidesWith() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get_collidesWith() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_collisionNormal() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_collisionNormal() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_currentVelocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_currentVelocity() ;

constexpr bool const& __cordl_internal_get_debugDraw() const;

constexpr bool& __cordl_internal_get_debugDraw() ;

constexpr float_t const& __cordl_internal_get_desiredSpeed() const;

constexpr float_t& __cordl_internal_get_desiredSpeed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_desiredTargetPointInVelocitySpace() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_desiredTargetPointInVelocitySpace() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_desiredVelocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_desiredVelocity() ;

constexpr float_t const& __cordl_internal_get_elevationCoordinate() const;

constexpr float_t& __cordl_internal_get_elevationCoordinate() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get_layer() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get_layer() ;

constexpr bool const& __cordl_internal_get_locked() const;

constexpr bool& __cordl_internal_get_locked() ;

constexpr bool const& __cordl_internal_get_manuallyControlled() const;

constexpr bool& __cordl_internal_get_manuallyControlled() ;

constexpr int32_t const& __cordl_internal_get_maxNeighbours() const;

constexpr int32_t& __cordl_internal_get_maxNeighbours() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::System::Collections::Generic::List_1<float_t>* const& __cordl_internal_get_neighbourDists() const;

constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_neighbourDists() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>* const& __cordl_internal_get_neighbours() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*& __cordl_internal_get_neighbours() ;

constexpr ::Pathfinding::RVO::Sampled::Agent* const& __cordl_internal_get_next() const;

constexpr ::Pathfinding::RVO::Sampled::Agent*& __cordl_internal_get_next() ;

constexpr float_t const& __cordl_internal_get_nextDesiredSpeed() const;

constexpr float_t& __cordl_internal_get_nextDesiredSpeed() ;

constexpr float_t const& __cordl_internal_get_nextMaxSpeed() const;

constexpr float_t& __cordl_internal_get_nextMaxSpeed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_nextTargetPoint() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_nextTargetPoint() ;

constexpr float_t const& __cordl_internal_get_obstacleTimeHorizon() const;

constexpr float_t& __cordl_internal_get_obstacleTimeHorizon() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& __cordl_internal_get_obstacles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& __cordl_internal_get_obstacles() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& __cordl_internal_get_obstaclesBuffered() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& __cordl_internal_get_obstaclesBuffered() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_position() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_simulator() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_simulator() ;

constexpr void __cordl_internal_set__AgentTimeHorizon_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__CalculatedSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__CalculatedTargetPoint_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__CollidesWith_k__BackingField(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set__ElevationCoordinate_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Height_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Layer_k__BackingField(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set__Locked_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__MaxNeighbours_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__NeighbourCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ObstacleTimeHorizon_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Position_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__PreCalculationCallback_k__BackingField(::System::Action*  value) ;

constexpr void __cordl_internal_set__Priority_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__Radius_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_agentTimeHorizon(float_t  value) ;

constexpr void __cordl_internal_set_calculatedSpeed(float_t  value) ;

constexpr void __cordl_internal_set_calculatedTargetPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_collidesWith(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set_collisionNormal(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_debugDraw(bool  value) ;

constexpr void __cordl_internal_set_desiredSpeed(float_t  value) ;

constexpr void __cordl_internal_set_desiredTargetPointInVelocitySpace(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_desiredVelocity(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_elevationCoordinate(float_t  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set_locked(bool  value) ;

constexpr void __cordl_internal_set_manuallyControlled(bool  value) ;

constexpr void __cordl_internal_set_maxNeighbours(int32_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_neighbourDists(::System::Collections::Generic::List_1<float_t>*  value) ;

constexpr void __cordl_internal_set_neighbours(::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  value) ;

constexpr void __cordl_internal_set_next(::Pathfinding::RVO::Sampled::Agent*  value) ;

constexpr void __cordl_internal_set_nextDesiredSpeed(float_t  value) ;

constexpr void __cordl_internal_set_nextMaxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_nextTargetPoint(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_obstacleTimeHorizon(float_t  value) ;

constexpr void __cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value) ;

constexpr void __cordl_internal_set_obstaclesBuffered(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value) ;

/// @brief Method .ctor, addr 0x5ee3d40, size 0x1c4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector2  pos, float_t  elevationCoordinate) ;

/// [CompilerGenerated]
/// @brief Method get_AgentTimeHorizon, addr 0x5eeb664, size 0x8, virtual true, abstract: false, final true
inline float_t get_AgentTimeHorizon() ;

/// [CompilerGenerated]
/// @brief Method get_CalculatedSpeed, addr 0x5eeb624, size 0x8, virtual true, abstract: false, final true
inline float_t get_CalculatedSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_CalculatedTargetPoint, addr 0x5eeb614, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_CalculatedTargetPoint() ;

/// [CompilerGenerated]
/// @brief Method get_CollidesWith, addr 0x5eeb6b4, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::RVO::RVOLayer get_CollidesWith() ;

/// @brief Method get_DebugDraw, addr 0x5eeb6c4, size 0x8, virtual true, abstract: false, final true
inline bool get_DebugDraw() ;

/// [CompilerGenerated]
/// @brief Method get_ElevationCoordinate, addr 0x5eeb604, size 0x8, virtual true, abstract: false, final true
inline float_t get_ElevationCoordinate() ;

/// [CompilerGenerated]
/// @brief Method get_Height, addr 0x5eeb654, size 0x8, virtual true, abstract: false, final true
inline float_t get_Height() ;

/// [CompilerGenerated]
/// @brief Method get_Layer, addr 0x5eeb6a4, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::RVO::RVOLayer get_Layer() ;

/// [CompilerGenerated]
/// @brief Method get_Locked, addr 0x5eeb634, size 0x8, virtual true, abstract: false, final true
inline bool get_Locked() ;

/// [CompilerGenerated]
/// @brief Method get_MaxNeighbours, addr 0x5eeb684, size 0x8, virtual true, abstract: false, final true
inline int32_t get_MaxNeighbours() ;

/// [CompilerGenerated]
/// @brief Method get_NeighbourCount, addr 0x5eeb694, size 0x8, virtual true, abstract: false, final true
inline int32_t get_NeighbourCount() ;

/// @brief Method get_NeighbourObstacles, addr 0x5eeb88c, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* get_NeighbourObstacles() ;

/// [CompilerGenerated]
/// @brief Method get_ObstacleTimeHorizon, addr 0x5eeb674, size 0x8, virtual true, abstract: false, final true
inline float_t get_ObstacleTimeHorizon() ;

/// [CompilerGenerated]
/// @brief Method get_Position, addr 0x5eeb5f4, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 get_Position() ;

/// [CompilerGenerated]
/// @brief Method get_PreCalculationCallback, addr 0x5eeb720, size 0x8, virtual false, abstract: false, final false
inline ::System::Action* get_PreCalculationCallback() ;

/// [CompilerGenerated]
/// @brief Method get_Priority, addr 0x5eeb710, size 0x8, virtual true, abstract: false, final true
inline float_t get_Priority() ;

/// [CompilerGenerated]
/// @brief Method get_Radius, addr 0x5eeb644, size 0x8, virtual true, abstract: false, final true
inline float_t get_Radius() ;

/// @brief Convert to "::Pathfinding::RVO::IAgent"
constexpr ::Pathfinding::RVO::IAgent* i___Pathfinding__RVO__IAgent() noexcept;

/// [CompilerGenerated]
/// @brief Method set_AgentTimeHorizon, addr 0x5eeb66c, size 0x8, virtual true, abstract: false, final true
inline void set_AgentTimeHorizon(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CalculatedSpeed, addr 0x5eeb62c, size 0x8, virtual false, abstract: false, final false
inline void set_CalculatedSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CalculatedTargetPoint, addr 0x5eeb61c, size 0x8, virtual false, abstract: false, final false
inline void set_CalculatedTargetPoint(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_CollidesWith, addr 0x5eeb6bc, size 0x8, virtual true, abstract: false, final true
inline void set_CollidesWith(::Pathfinding::RVO::RVOLayer  value) ;

/// @brief Method set_DebugDraw, addr 0x5eeb6cc, size 0x44, virtual true, abstract: false, final true
inline void set_DebugDraw(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ElevationCoordinate, addr 0x5eeb60c, size 0x8, virtual true, abstract: false, final true
inline void set_ElevationCoordinate(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Height, addr 0x5eeb65c, size 0x8, virtual true, abstract: false, final true
inline void set_Height(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Layer, addr 0x5eeb6ac, size 0x8, virtual true, abstract: false, final true
inline void set_Layer(::Pathfinding::RVO::RVOLayer  value) ;

/// [CompilerGenerated]
/// @brief Method set_Locked, addr 0x5eeb63c, size 0x8, virtual true, abstract: false, final true
inline void set_Locked(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_MaxNeighbours, addr 0x5eeb68c, size 0x8, virtual true, abstract: false, final true
inline void set_MaxNeighbours(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_NeighbourCount, addr 0x5eeb69c, size 0x8, virtual false, abstract: false, final false
inline void set_NeighbourCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ObstacleTimeHorizon, addr 0x5eeb67c, size 0x8, virtual true, abstract: false, final true
inline void set_ObstacleTimeHorizon(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Position, addr 0x5eeb5fc, size 0x8, virtual true, abstract: false, final true
inline void set_Position(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreCalculationCallback, addr 0x5eeb728, size 0x8, virtual true, abstract: false, final true
inline void set_PreCalculationCallback(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Priority, addr 0x5eeb718, size 0x8, virtual true, abstract: false, final true
inline void set_Priority(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Radius, addr 0x5eeb64c, size 0x8, virtual true, abstract: false, final true
inline void set_Radius(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Agent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Agent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Agent(Agent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Agent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Agent(Agent const& ) = delete;

/// @brief Field DesiredVelocityWeight offset 0xffffffff size 0x4
static constexpr float_t  DesiredVelocityWeight{static_cast<float_t>(0.1f)};

/// @brief Field WallWeight offset 0xffffffff size 0x4
static constexpr float_t  WallWeight{static_cast<float_t>(5.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21513};

/// @brief Field radius, offset: 0x10, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field height, offset: 0x14, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field desiredSpeed, offset: 0x18, size: 0x4, def value: None
 float_t  ___desiredSpeed;

/// @brief Field maxSpeed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field agentTimeHorizon, offset: 0x20, size: 0x4, def value: None
 float_t  ___agentTimeHorizon;

/// @brief Field obstacleTimeHorizon, offset: 0x24, size: 0x4, def value: None
 float_t  ___obstacleTimeHorizon;

/// @brief Field locked, offset: 0x28, size: 0x1, def value: None
 bool  ___locked;

/// @brief Field layer, offset: 0x2c, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ___layer;

/// @brief Field collidesWith, offset: 0x30, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ___collidesWith;

/// @brief Field maxNeighbours, offset: 0x34, size: 0x4, def value: None
 int32_t  ___maxNeighbours;

/// @brief Field position, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___position;

/// @brief Field elevationCoordinate, offset: 0x40, size: 0x4, def value: None
 float_t  ___elevationCoordinate;

/// @brief Field currentVelocity, offset: 0x44, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___currentVelocity;

/// @brief Field desiredTargetPointInVelocitySpace, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___desiredTargetPointInVelocitySpace;

/// @brief Field desiredVelocity, offset: 0x54, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___desiredVelocity;

/// @brief Field nextTargetPoint, offset: 0x5c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___nextTargetPoint;

/// @brief Field nextDesiredSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ___nextDesiredSpeed;

/// @brief Field nextMaxSpeed, offset: 0x68, size: 0x4, def value: None
 float_t  ___nextMaxSpeed;

/// @brief Field collisionNormal, offset: 0x6c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___collisionNormal;

/// @brief Field manuallyControlled, offset: 0x74, size: 0x1, def value: None
 bool  ___manuallyControlled;

/// @brief Field debugDraw, offset: 0x75, size: 0x1, def value: None
 bool  ___debugDraw;

/// [CompilerGenerated]
/// @brief Field <Position>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____Position_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ElevationCoordinate>k__BackingField, offset: 0x80, size: 0x4, def value: None
 float_t  ____ElevationCoordinate_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CalculatedTargetPoint>k__BackingField, offset: 0x84, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____CalculatedTargetPoint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CalculatedSpeed>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 float_t  ____CalculatedSpeed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Locked>k__BackingField, offset: 0x90, size: 0x1, def value: None
 bool  ____Locked_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Radius>k__BackingField, offset: 0x94, size: 0x4, def value: None
 float_t  ____Radius_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Height>k__BackingField, offset: 0x98, size: 0x4, def value: None
 float_t  ____Height_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgentTimeHorizon>k__BackingField, offset: 0x9c, size: 0x4, def value: None
 float_t  ____AgentTimeHorizon_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ObstacleTimeHorizon>k__BackingField, offset: 0xa0, size: 0x4, def value: None
 float_t  ____ObstacleTimeHorizon_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxNeighbours>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____MaxNeighbours_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <NeighbourCount>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____NeighbourCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Layer>k__BackingField, offset: 0xac, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ____Layer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CollidesWith>k__BackingField, offset: 0xb0, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ____CollidesWith_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Priority>k__BackingField, offset: 0xb4, size: 0x4, def value: None
 float_t  ____Priority_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PreCalculationCallback>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::System::Action*  ____PreCalculationCallback_k__BackingField;

/// @brief Field next, offset: 0xc0, size: 0x8, def value: None
 ::Pathfinding::RVO::Sampled::Agent*  ___next;

/// @brief Field calculatedSpeed, offset: 0xc8, size: 0x4, def value: None
 float_t  ___calculatedSpeed;

/// @brief Field calculatedTargetPoint, offset: 0xcc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___calculatedTargetPoint;

/// @brief Field simulator, offset: 0xd8, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___simulator;

/// @brief Field neighbours, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::Sampled::Agent*>*  ___neighbours;

/// @brief Field neighbourDists, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<float_t>*  ___neighbourDists;

/// @brief Field obstaclesBuffered, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  ___obstaclesBuffered;

/// @brief Field obstacles, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  ___obstacles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___radius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___height) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___desiredSpeed) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___maxSpeed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___agentTimeHorizon) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___obstacleTimeHorizon) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___locked) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___layer) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___collidesWith) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___maxNeighbours) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___position) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___elevationCoordinate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___currentVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___desiredTargetPointInVelocitySpace) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___desiredVelocity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___nextTargetPoint) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___nextDesiredSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___nextMaxSpeed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___collisionNormal) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___manuallyControlled) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___debugDraw) == 0x75, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____Position_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____ElevationCoordinate_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____CalculatedTargetPoint_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____CalculatedSpeed_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____Locked_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____Radius_k__BackingField) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____Height_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____AgentTimeHorizon_k__BackingField) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____ObstacleTimeHorizon_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____MaxNeighbours_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____NeighbourCount_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____Layer_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____CollidesWith_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____Priority_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ____PreCalculationCallback_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___next) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___calculatedSpeed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___calculatedTargetPoint) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___simulator) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___neighbours) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___neighbourDists) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___obstaclesBuffered) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent, ___obstacles) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::Sampled::Agent) == 0x100, "Size mismatch!");

} // namespace end def Pathfinding::RVO::Sampled
// Dependencies Pathfinding.RVO.Sampled.Agent::VO, System.Object
namespace Pathfinding::RVO::Sampled {
// Is value type: false
// CS Name: Pathfinding.RVO.Sampled.Agent/VOBuffer
class CORDL_TYPE Agent_VOBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<::GlobalNamespace::Agent_VO>  buffer;

/// @brief Field length, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_length, put=__cordl_internal_set_length)) int32_t  length;

/// @brief Method Add, addr 0x5eecb10, size 0x118, virtual false, abstract: false, final false
inline void Add(::GlobalNamespace::Agent_VO  vo) ;

/// @brief Method Clear, addr 0x5eebc58, size 0x8, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::Pathfinding::RVO::Sampled::Agent_VOBuffer* New_ctor(int32_t  n) ;

constexpr ::ArrayW<::GlobalNamespace::Agent_VO> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<::GlobalNamespace::Agent_VO>& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_length() const;

constexpr int32_t& __cordl_internal_get_length() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<::GlobalNamespace::Agent_VO>  value) ;

constexpr void __cordl_internal_set_length(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ee5c80, size 0x78, virtual false, abstract: false, final false
inline void _ctor(int32_t  n) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Agent_VOBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Agent_VOBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Agent_VOBuffer(Agent_VOBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Agent_VOBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Agent_VOBuffer(Agent_VOBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21512};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::Agent_VO>  ___buffer;

/// @brief Field length, offset: 0x18, size: 0x4, def value: None
 int32_t  ___length;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent_VOBuffer, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Sampled::Agent_VOBuffer, ___length) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::Sampled::Agent_VOBuffer) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::RVO::Sampled
