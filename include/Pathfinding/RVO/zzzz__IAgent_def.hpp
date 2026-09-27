#pragma once
// IWYU pragma private; include "Pathfinding/RVO/IAgent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IAgent)
namespace Pathfinding::RVO {
class ObstacleVertex;
}
namespace Pathfinding::RVO {
struct RVOLayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Pathfinding::RVO {
class IAgent;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::IAgent*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::IAgent*, "Pathfinding.RVO", "IAgent");
// Dependencies 
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.IAgent
class CORDL_TYPE IAgent {
public:
// Declarations
 __declspec(property(get=get_AgentTimeHorizon, put=set_AgentTimeHorizon)) float_t  AgentTimeHorizon;

 __declspec(property(get=get_CalculatedSpeed)) float_t  CalculatedSpeed;

 __declspec(property(get=get_CalculatedTargetPoint)) ::UnityEngine::Vector2  CalculatedTargetPoint;

 __declspec(property(get=get_CollidesWith, put=set_CollidesWith)) ::Pathfinding::RVO::RVOLayer  CollidesWith;

 __declspec(property(get=get_DebugDraw, put=set_DebugDraw)) bool  DebugDraw;

 __declspec(property(get=get_ElevationCoordinate, put=set_ElevationCoordinate)) float_t  ElevationCoordinate;

 __declspec(property(get=get_Height, put=set_Height)) float_t  Height;

 __declspec(property(get=get_Layer, put=set_Layer)) ::Pathfinding::RVO::RVOLayer  Layer;

 __declspec(property(get=get_Locked, put=set_Locked)) bool  Locked;

 __declspec(property(get=get_MaxNeighbours, put=set_MaxNeighbours)) int32_t  MaxNeighbours;

 __declspec(property(get=get_NeighbourCount)) int32_t  NeighbourCount;

/// @brief [Obsolete]
 __declspec(property(get=get_NeighbourObstacles)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  NeighbourObstacles;

 __declspec(property(get=get_ObstacleTimeHorizon, put=set_ObstacleTimeHorizon)) float_t  ObstacleTimeHorizon;

 __declspec(property(get=get_Position, put=set_Position)) ::UnityEngine::Vector2  Position;

 __declspec(property(put=set_PreCalculationCallback)) ::System::Action*  PreCalculationCallback;

 __declspec(property(get=get_Priority, put=set_Priority)) float_t  Priority;

 __declspec(property(get=get_Radius, put=set_Radius)) float_t  Radius;

/// @brief Method ForceSetVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ForceSetVelocity(::UnityEngine::Vector2  velocity) ;

/// @brief Method SetCollisionNormal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetCollisionNormal(::UnityEngine::Vector2  normal) ;

/// @brief Method SetTarget, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetTarget(::UnityEngine::Vector2  targetPoint, float_t  desiredSpeed, float_t  maxSpeed) ;

/// @brief Method get_AgentTimeHorizon, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_AgentTimeHorizon() ;

/// @brief Method get_CalculatedSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_CalculatedSpeed() ;

/// @brief Method get_CalculatedTargetPoint, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 get_CalculatedTargetPoint() ;

/// @brief Method get_CollidesWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::RVO::RVOLayer get_CollidesWith() ;

/// @brief Method get_DebugDraw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_DebugDraw() ;

/// @brief Method get_ElevationCoordinate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_ElevationCoordinate() ;

/// @brief Method get_Height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Height() ;

/// @brief Method get_Layer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::RVO::RVOLayer get_Layer() ;

/// @brief Method get_Locked, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_Locked() ;

/// @brief Method get_MaxNeighbours, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_MaxNeighbours() ;

/// @brief Method get_NeighbourCount, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_NeighbourCount() ;

/// @brief Method get_NeighbourObstacles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* get_NeighbourObstacles() ;

/// @brief Method get_ObstacleTimeHorizon, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_ObstacleTimeHorizon() ;

/// @brief Method get_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector2 get_Position() ;

/// @brief Method get_Priority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Priority() ;

/// @brief Method get_Radius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Radius() ;

/// @brief Method set_AgentTimeHorizon, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_AgentTimeHorizon(float_t  value) ;

/// @brief Method set_CollidesWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_CollidesWith(::Pathfinding::RVO::RVOLayer  value) ;

/// @brief Method set_DebugDraw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_DebugDraw(bool  value) ;

/// @brief Method set_ElevationCoordinate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ElevationCoordinate(float_t  value) ;

/// @brief Method set_Height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Height(float_t  value) ;

/// @brief Method set_Layer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Layer(::Pathfinding::RVO::RVOLayer  value) ;

/// @brief Method set_Locked, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Locked(bool  value) ;

/// @brief Method set_MaxNeighbours, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_MaxNeighbours(int32_t  value) ;

/// @brief Method set_ObstacleTimeHorizon, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_ObstacleTimeHorizon(float_t  value) ;

/// @brief Method set_Position, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Position(::UnityEngine::Vector2  value) ;

/// @brief Method set_PreCalculationCallback, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_PreCalculationCallback(::System::Action*  value) ;

/// @brief Method set_Priority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Priority(float_t  value) ;

/// @brief Method set_Radius, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void set_Radius(float_t  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IAgent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAgent(IAgent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21493};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding::RVO
