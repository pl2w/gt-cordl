#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOObstacle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOLayer_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOObstacle_ObstacleVertexWinding_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RVOObstacle)
namespace GlobalNamespace {
struct RVOObstacle_ObstacleVertexWinding;
}
namespace Pathfinding::RVO {
class ObstacleVertex;
}
namespace Pathfinding::RVO {
class Simulator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::RVO {
class RVOObstacle;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::RVOObstacle*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVOObstacle*, "Pathfinding.RVO", "RVOObstacle");
// Dependencies Pathfinding.RVO.RVOLayer, Pathfinding.RVO.RVOObstacle::ObstacleVertexWinding, Pathfinding.VersionedMonoBehaviour, UnityEngine.Matrix4x4
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVOObstacle
class CORDL_TYPE RVOObstacle : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using ObstacleVertexWinding = ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding;

 __declspec(property(get=get_ExecuteInEditor)) bool  ExecuteInEditor;

 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_LocalCoordinates)) bool  LocalCoordinates;

 __declspec(property(get=get_StaticObstacle)) bool  StaticObstacle;

/// @brief Field _obstacleMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__obstacleMode, put=__cordl_internal_set__obstacleMode)) ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding  _obstacleMode;

/// @brief Field addedObstacles, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_addedObstacles, put=__cordl_internal_set_addedObstacles)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  addedObstacles;

/// @brief Field gizmoDrawing, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_gizmoDrawing, put=__cordl_internal_set_gizmoDrawing)) bool  gizmoDrawing;

/// @brief Field gizmoVerts, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gizmoVerts, put=__cordl_internal_set_gizmoVerts)) ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*  gizmoVerts;

/// @brief Field layer, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_layer, put=__cordl_internal_set_layer)) ::Pathfinding::RVO::RVOLayer  layer;

/// @brief Field obstacleMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_obstacleMode, put=__cordl_internal_set_obstacleMode)) ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding  obstacleMode;

/// @brief Field prevUpdateMatrix, offset 0x5c, size 0x40 
 __declspec(property(get=__cordl_internal_get_prevUpdateMatrix, put=__cordl_internal_set_prevUpdateMatrix)) ::UnityEngine::Matrix4x4  prevUpdateMatrix;

/// @brief Field sim, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sim, put=__cordl_internal_set_sim)) ::Pathfinding::RVO::Simulator*  sim;

/// @brief Field sourceObstacles, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_sourceObstacles, put=__cordl_internal_set_sourceObstacles)) ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*  sourceObstacles;

/// @brief Method AddObstacle, addr 0x5eea9f0, size 0x214, virtual false, abstract: false, final false
inline void AddObstacle(::ArrayW<::UnityEngine::Vector3>  vertices, float_t  height) ;

/// @brief Method AddObstacleInternal, addr 0x5eeaeb8, size 0x184, virtual false, abstract: false, final false
inline void AddObstacleInternal(::ArrayW<::UnityEngine::Vector3>  vertices, float_t  height) ;

/// @brief Method AreGizmosDirty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool AreGizmosDirty() ;

/// @brief Method CreateObstacles, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CreateObstacles() ;

/// @brief Method FindSimulator, addr 0x5eea8b4, size 0x13c, virtual false, abstract: false, final false
inline void FindSimulator() ;

/// @brief Method GetMatrix, addr 0x5eea380, size 0xa8, virtual true, abstract: false, final false
inline ::UnityEngine::Matrix4x4 GetMatrix() ;

static inline ::Pathfinding::RVO::RVOObstacle* New_ctor() ;

/// @brief Method OnDisable, addr 0x5eea428, size 0xec, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5ee9be0, size 0x8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmos, addr 0x5ee9be8, size 0x790, virtual false, abstract: false, final false
inline void OnDrawGizmos(bool  selected) ;

/// @brief Method OnDrawGizmosSelected, addr 0x5eea378, size 0x8, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5eea514, size 0x11c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5eea630, size 0x11c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5eea74c, size 0x168, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WindCorrectly, addr 0x5eeac04, size 0x2b4, virtual false, abstract: false, final false
inline void WindCorrectly(::ArrayW<::UnityEngine::Vector3>  vertices) ;

constexpr ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding const& __cordl_internal_get__obstacleMode() const;

constexpr ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding& __cordl_internal_get__obstacleMode() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& __cordl_internal_get_addedObstacles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& __cordl_internal_get_addedObstacles() ;

constexpr bool const& __cordl_internal_get_gizmoDrawing() const;

constexpr bool& __cordl_internal_get_gizmoDrawing() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>* const& __cordl_internal_get_gizmoVerts() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*& __cordl_internal_get_gizmoVerts() ;

constexpr ::Pathfinding::RVO::RVOLayer const& __cordl_internal_get_layer() const;

constexpr ::Pathfinding::RVO::RVOLayer& __cordl_internal_get_layer() ;

constexpr ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding const& __cordl_internal_get_obstacleMode() const;

constexpr ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding& __cordl_internal_get_obstacleMode() ;

constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_prevUpdateMatrix() const;

constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_prevUpdateMatrix() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_sim() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_sim() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>* const& __cordl_internal_get_sourceObstacles() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*& __cordl_internal_get_sourceObstacles() ;

constexpr void __cordl_internal_set__obstacleMode(::GlobalNamespace::RVOObstacle_ObstacleVertexWinding  value) ;

constexpr void __cordl_internal_set_addedObstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value) ;

constexpr void __cordl_internal_set_gizmoDrawing(bool  value) ;

constexpr void __cordl_internal_set_gizmoVerts(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*  value) ;

constexpr void __cordl_internal_set_layer(::Pathfinding::RVO::RVOLayer  value) ;

constexpr void __cordl_internal_set_obstacleMode(::GlobalNamespace::RVOObstacle_ObstacleVertexWinding  value) ;

constexpr void __cordl_internal_set_prevUpdateMatrix(::UnityEngine::Matrix4x4  value) ;

constexpr void __cordl_internal_set_sim(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_sourceObstacles(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*  value) ;

/// @brief Method .ctor, addr 0x5eeb03c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExecuteInEditor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ExecuteInEditor() ;

/// @brief Method get_Height, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline float_t get_Height() ;

/// @brief Method get_LocalCoordinates, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_LocalCoordinates() ;

/// @brief Method get_StaticObstacle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_StaticObstacle() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOObstacle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOObstacle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOObstacle(RVOObstacle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOObstacle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOObstacle(RVOObstacle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21508};

/// @brief Field obstacleMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding  ___obstacleMode;

/// @brief Field layer, offset: 0x28, size: 0x4, def value: None
 ::Pathfinding::RVO::RVOLayer  ___layer;

/// @brief Field sim, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___sim;

/// @brief Field addedObstacles, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  ___addedObstacles;

/// @brief Field sourceObstacles, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*  ___sourceObstacles;

/// @brief Field gizmoDrawing, offset: 0x48, size: 0x1, def value: None
 bool  ___gizmoDrawing;

/// @brief Field gizmoVerts, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Vector3>>*  ___gizmoVerts;

/// @brief Field _obstacleMode, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding  ____obstacleMode;

/// @brief Field prevUpdateMatrix, offset: 0x5c, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  ___prevUpdateMatrix;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___obstacleMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___layer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___sim) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___addedObstacles) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___sourceObstacles) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___gizmoDrawing) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___gizmoVerts) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ____obstacleMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOObstacle, ___prevUpdateMatrix) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVOObstacle) == 0xa0, "Size mismatch!");

} // namespace end def Pathfinding::RVO
