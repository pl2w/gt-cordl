#pragma once
// IWYU pragma private; include "Pathfinding/Examples/LightweightRVO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Examples/zzzz__LightweightRVO_RVOExampleType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LightweightRVO)
namespace GlobalNamespace {
struct LightweightRVO_RVOExampleType;
}
namespace Pathfinding::RVO {
class IAgent;
}
namespace Pathfinding::RVO {
class Simulator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Examples {
class LightweightRVO;
}
// Write type traits
MARK_REF_T(::Pathfinding::Examples::LightweightRVO*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Examples::LightweightRVO*, "Pathfinding.Examples", "LightweightRVO");
// [RequireComponent(typeof(UnityEngine.MeshFilter))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_examples_1_1_lightweight_r_v_o.php")]
// Dependencies Pathfinding.Examples.LightweightRVO::RVOExampleType, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace Pathfinding::Examples {
// Is value type: false
// CS Name: Pathfinding.Examples.LightweightRVO
class CORDL_TYPE LightweightRVO : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RVOExampleType = ::GlobalNamespace::LightweightRVO_RVOExampleType;

/// @brief Field agentCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_agentCount, put=__cordl_internal_set_agentCount)) int32_t  agentCount;

/// @brief Field agentTimeHorizon, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_agentTimeHorizon, put=__cordl_internal_set_agentTimeHorizon)) float_t  agentTimeHorizon;

/// @brief Field agents, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_agents, put=__cordl_internal_set_agents)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>*  agents;

/// @brief Field colors, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::System::Collections::Generic::List_1<::UnityEngine::Color>*  colors;

/// @brief Field debug, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_debug, put=__cordl_internal_set_debug)) bool  debug;

/// @brief Field exampleScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_exampleScale, put=__cordl_internal_set_exampleScale)) float_t  exampleScale;

/// @brief Field goals, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_goals, put=__cordl_internal_set_goals)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  goals;

/// @brief Field interpolatedRotations, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_interpolatedRotations, put=__cordl_internal_set_interpolatedRotations)) ::ArrayW<::UnityEngine::Vector2>  interpolatedRotations;

/// @brief Field interpolatedVelocities, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_interpolatedVelocities, put=__cordl_internal_set_interpolatedVelocities)) ::ArrayW<::UnityEngine::Vector2>  interpolatedVelocities;

/// @brief Field maxNeighbours, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNeighbours, put=__cordl_internal_set_maxNeighbours)) int32_t  maxNeighbours;

/// @brief Field maxSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field mesh, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Mesh>  mesh;

/// @brief Field meshColors, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_meshColors, put=__cordl_internal_set_meshColors)) ::ArrayW<::UnityEngine::Color>  meshColors;

/// @brief Field obstacleTimeHorizon, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_obstacleTimeHorizon, put=__cordl_internal_set_obstacleTimeHorizon)) float_t  obstacleTimeHorizon;

/// @brief Field radius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field renderingOffset, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_renderingOffset, put=__cordl_internal_set_renderingOffset)) ::UnityEngine::Vector3  renderingOffset;

/// @brief Field sim, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_sim, put=__cordl_internal_set_sim)) ::Pathfinding::RVO::Simulator*  sim;

/// @brief Field tris, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_tris, put=__cordl_internal_set_tris)) ::ArrayW<int32_t>  tris;

/// @brief Field type, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::LightweightRVO_RVOExampleType  type;

/// @brief Field uv, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_uv, put=__cordl_internal_set_uv)) ::ArrayW<::UnityEngine::Vector2>  uv;

/// @brief Field verts, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_verts, put=__cordl_internal_set_verts)) ::ArrayW<::UnityEngine::Vector3>  verts;

/// @brief Method CreateAgents, addr 0x5eee790, size 0xf70, virtual false, abstract: false, final false
inline void CreateAgents(int32_t  num) ;

static inline ::Pathfinding::Examples::LightweightRVO* New_ctor() ;

/// @brief Method OnGUI, addr 0x5eef700, size 0x6b8, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method SetAgentSettings, addr 0x5eefe00, size 0x2b8, virtual false, abstract: false, final false
inline void SetAgentSettings() ;

/// @brief Method Start, addr 0x5eee598, size 0x1f8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x5ef00b8, size 0xf94, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_agentCount() const;

constexpr int32_t& __cordl_internal_get_agentCount() ;

constexpr float_t const& __cordl_internal_get_agentTimeHorizon() const;

constexpr float_t& __cordl_internal_get_agentTimeHorizon() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>* const& __cordl_internal_get_agents() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>*& __cordl_internal_get_agents() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>* const& __cordl_internal_get_colors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_colors() ;

constexpr bool const& __cordl_internal_get_debug() const;

constexpr bool& __cordl_internal_get_debug() ;

constexpr float_t const& __cordl_internal_get_exampleScale() const;

constexpr float_t& __cordl_internal_get_exampleScale() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_goals() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_goals() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_interpolatedRotations() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_interpolatedRotations() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_interpolatedVelocities() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_interpolatedVelocities() ;

constexpr int32_t const& __cordl_internal_get_maxNeighbours() const;

constexpr int32_t& __cordl_internal_get_maxNeighbours() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_mesh() ;

constexpr ::ArrayW<::UnityEngine::Color> const& __cordl_internal_get_meshColors() const;

constexpr ::ArrayW<::UnityEngine::Color>& __cordl_internal_get_meshColors() ;

constexpr float_t const& __cordl_internal_get_obstacleTimeHorizon() const;

constexpr float_t& __cordl_internal_get_obstacleTimeHorizon() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_renderingOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_renderingOffset() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_sim() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_sim() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tris() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tris() ;

constexpr ::GlobalNamespace::LightweightRVO_RVOExampleType const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::LightweightRVO_RVOExampleType& __cordl_internal_get_type() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_uv() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_uv() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_verts() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_verts() ;

constexpr void __cordl_internal_set_agentCount(int32_t  value) ;

constexpr void __cordl_internal_set_agentTimeHorizon(float_t  value) ;

constexpr void __cordl_internal_set_agents(::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>*  value) ;

constexpr void __cordl_internal_set_colors(::System::Collections::Generic::List_1<::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set_debug(bool  value) ;

constexpr void __cordl_internal_set_exampleScale(float_t  value) ;

constexpr void __cordl_internal_set_goals(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_interpolatedRotations(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_interpolatedVelocities(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_maxNeighbours(int32_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Mesh>  value) ;

constexpr void __cordl_internal_set_meshColors(::ArrayW<::UnityEngine::Color>  value) ;

constexpr void __cordl_internal_set_obstacleTimeHorizon(float_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_renderingOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_sim(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_tris(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::LightweightRVO_RVOExampleType  value) ;

constexpr void __cordl_internal_set_uv(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_verts(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5ef104c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method uniformDistance, addr 0x5eefdb8, size 0x48, virtual false, abstract: false, final false
inline float_t uniformDistance(float_t  radius) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightweightRVO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightweightRVO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightweightRVO(LightweightRVO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightweightRVO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightweightRVO(LightweightRVO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21517};

/// @brief Field agentCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___agentCount;

/// @brief Field exampleScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___exampleScale;

/// @brief Field type, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::LightweightRVO_RVOExampleType  ___type;

/// @brief Field radius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field maxSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field agentTimeHorizon, offset: 0x34, size: 0x4, def value: None
 float_t  ___agentTimeHorizon;

/// [HideInInspector]
/// @brief Field obstacleTimeHorizon, offset: 0x38, size: 0x4, def value: None
 float_t  ___obstacleTimeHorizon;

/// @brief Field maxNeighbours, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___maxNeighbours;

/// @brief Field renderingOffset, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___renderingOffset;

/// @brief Field debug, offset: 0x4c, size: 0x1, def value: None
 bool  ___debug;

/// @brief Field mesh, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Mesh>  ___mesh;

/// @brief Field sim, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___sim;

/// @brief Field agents, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>*  ___agents;

/// @brief Field goals, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___goals;

/// @brief Field colors, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Color>*  ___colors;

/// @brief Field verts, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___verts;

/// @brief Field uv, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___uv;

/// @brief Field tris, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tris;

/// @brief Field meshColors, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color>  ___meshColors;

/// @brief Field interpolatedVelocities, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___interpolatedVelocities;

/// @brief Field interpolatedRotations, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___interpolatedRotations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___agentCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___exampleScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___maxSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___agentTimeHorizon) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___obstacleTimeHorizon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___maxNeighbours) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___renderingOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___debug) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___mesh) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___sim) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___agents) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___goals) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___colors) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___verts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___uv) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___tris) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___meshColors) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___interpolatedVelocities) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Examples::LightweightRVO, ___interpolatedRotations) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Examples::LightweightRVO) == 0xa8, "Size mismatch!");

} // namespace end def Pathfinding::Examples
