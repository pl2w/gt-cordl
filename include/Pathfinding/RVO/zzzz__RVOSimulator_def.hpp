#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__MovementPlane_def.hpp"
#include "Pathfinding/zzzz__ThreadCount_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOSimulator)
namespace Pathfinding::RVO {
class Simulator;
}
// Forward declare root types
namespace Pathfinding::RVO {
class RVOSimulator;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::RVOSimulator*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVOSimulator*, "Pathfinding.RVO", "RVOSimulator");
// [ExecuteInEditMode]
// [AddComponentMenu("Pathfinding/Local Avoidance/RVO Simulator")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_r_v_o_1_1_r_v_o_simulator.php")]
// Dependencies Pathfinding.RVO.MovementPlane, Pathfinding.ThreadCount, Pathfinding.VersionedMonoBehaviour
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVOSimulator
class CORDL_TYPE RVOSimulator : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field <active>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__active_k__BackingField, put=setStaticF__active_k__BackingField)) ::UnityW<::Pathfinding::RVO::RVOSimulator>  _active_k__BackingField;

/// @brief Field desiredSimulationFPS, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_desiredSimulationFPS, put=__cordl_internal_set_desiredSimulationFPS)) int32_t  desiredSimulationFPS;

/// @brief Field doubleBuffering, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_doubleBuffering, put=__cordl_internal_set_doubleBuffering)) bool  doubleBuffering;

/// @brief Field drawObstacles, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawObstacles, put=__cordl_internal_set_drawObstacles)) bool  drawObstacles;

/// @brief Field movementPlane, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_movementPlane, put=__cordl_internal_set_movementPlane)) ::Pathfinding::RVO::MovementPlane  movementPlane;

/// @brief Field simulator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_simulator, put=__cordl_internal_set_simulator)) ::Pathfinding::RVO::Simulator*  simulator;

/// @brief Field symmetryBreakingBias, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_symmetryBreakingBias, put=__cordl_internal_set_symmetryBreakingBias)) float_t  symmetryBreakingBias;

/// @brief Field workerThreads, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_workerThreads, put=__cordl_internal_set_workerThreads)) ::Pathfinding::ThreadCount  workerThreads;

/// @brief Method Awake, addr 0x5eeb144, size 0x15c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSimulator, addr 0x5ee8188, size 0x2c, virtual false, abstract: false, final false
inline ::Pathfinding::RVO::Simulator* GetSimulator() ;

static inline ::Pathfinding::RVO::RVOSimulator* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5eeb364, size 0x70, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5eeb0ec, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5eeb2a0, size 0xc4, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_desiredSimulationFPS() const;

constexpr int32_t& __cordl_internal_get_desiredSimulationFPS() ;

constexpr bool const& __cordl_internal_get_doubleBuffering() const;

constexpr bool& __cordl_internal_get_doubleBuffering() ;

constexpr bool const& __cordl_internal_get_drawObstacles() const;

constexpr bool& __cordl_internal_get_drawObstacles() ;

constexpr ::Pathfinding::RVO::MovementPlane const& __cordl_internal_get_movementPlane() const;

constexpr ::Pathfinding::RVO::MovementPlane& __cordl_internal_get_movementPlane() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_simulator() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_simulator() ;

constexpr float_t const& __cordl_internal_get_symmetryBreakingBias() const;

constexpr float_t& __cordl_internal_get_symmetryBreakingBias() ;

constexpr ::Pathfinding::ThreadCount const& __cordl_internal_get_workerThreads() const;

constexpr ::Pathfinding::ThreadCount& __cordl_internal_get_workerThreads() ;

constexpr void __cordl_internal_set_desiredSimulationFPS(int32_t  value) ;

constexpr void __cordl_internal_set_doubleBuffering(bool  value) ;

constexpr void __cordl_internal_set_drawObstacles(bool  value) ;

constexpr void __cordl_internal_set_movementPlane(::Pathfinding::RVO::MovementPlane  value) ;

constexpr void __cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_symmetryBreakingBias(float_t  value) ;

constexpr void __cordl_internal_set_workerThreads(::Pathfinding::ThreadCount  value) ;

/// @brief Method .ctor, addr 0x5eeb3d4, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Pathfinding::RVO::RVOSimulator> getStaticF__active_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_active, addr 0x5eeb04c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Pathfinding::RVO::RVOSimulator> get_active() ;

static inline void setStaticF__active_k__BackingField(::UnityW<::Pathfinding::RVO::RVOSimulator>  value) ;

/// [CompilerGenerated]
/// @brief Method set_active, addr 0x5eeb094, size 0x58, virtual false, abstract: false, final false
static inline void set_active(::Pathfinding::RVO::RVOSimulator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOSimulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOSimulator(RVOSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOSimulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOSimulator(RVOSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21509};

/// [Tooltip("Desired FPS for rvo simulation. It is usually not necessary to run a crowd simulation at a very high fps.\nUsually 10-30 fps is enough, but can be increased for better quality.\nThe rvo simulation will never run at a higher fps than the game")]
/// @brief Field desiredSimulationFPS, offset: 0x24, size: 0x4, def value: None
 int32_t  ___desiredSimulationFPS;

/// [Tooltip("Number of RVO worker threads. If set to None, no multithreading will be used.")]
/// @brief Field workerThreads, offset: 0x28, size: 0x4, def value: None
 ::Pathfinding::ThreadCount  ___workerThreads;

/// [Tooltip("Calculate local avoidance in between frames.\nThis can increase jitter in the agents\' movement so use it only if you really need the performance boost. It will also reduce the responsiveness of the agents to the commands you send to them.")]
/// @brief Field doubleBuffering, offset: 0x2c, size: 0x1, def value: None
 bool  ___doubleBuffering;

/// [Tooltip("Bias agents to pass each other on the right side.\nIf the desired velocity of an agent puts it on a collision course with another agent or an obstacle its desired velocity will be rotated this number of radians (1 radian is approximately 57\u{b0}) to the right. This helps to break up symmetries and makes it possible to resolve some situations much faster.\n\nWhen many agents have the same goal this can however have the side effect that the group clustered around the target point may as a whole start to spin around the target point.")]
/// [Range(0, 0.2)]
/// @brief Field symmetryBreakingBias, offset: 0x30, size: 0x4, def value: None
 float_t  ___symmetryBreakingBias;

/// [Tooltip("Determines if the XY (2D) or XZ (3D) plane is used for movement")]
/// @brief Field movementPlane, offset: 0x34, size: 0x4, def value: None
 ::Pathfinding::RVO::MovementPlane  ___movementPlane;

/// @brief Field drawObstacles, offset: 0x38, size: 0x1, def value: None
 bool  ___drawObstacles;

/// @brief Field simulator, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___simulator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___desiredSimulationFPS) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___workerThreads) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___doubleBuffering) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___symmetryBreakingBias) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___movementPlane) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___drawObstacles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSimulator, ___simulator) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVOSimulator) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::RVO
