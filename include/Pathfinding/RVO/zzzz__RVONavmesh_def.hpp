#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVONavmesh.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RVONavmesh)
namespace Pathfinding::RVO {
class ObstacleVertex;
}
namespace Pathfinding::RVO {
class RVONavmesh___c__DisplayClass8_0;
}
namespace Pathfinding::RVO {
class RVONavmesh___c__DisplayClass9_0;
}
namespace Pathfinding::RVO {
class Simulator;
}
namespace Pathfinding {
class GridGraph;
}
namespace Pathfinding {
class INavmesh;
}
namespace Pathfinding {
struct Int3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::RVO {
class RVONavmesh;
}
namespace Pathfinding::RVO {
class RVONavmesh___c__DisplayClass8_0;
}
namespace Pathfinding::RVO {
class RVONavmesh___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::RVONavmesh*);
MARK_REF_T(::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*);
MARK_REF_T(::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVONavmesh*, "Pathfinding.RVO", "RVONavmesh");
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0*, "Pathfinding.RVO", "RVONavmesh/<>c__DisplayClass8_0");
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0*, "Pathfinding.RVO", "RVONavmesh/<>c__DisplayClass9_0");
// [AddComponentMenu("Pathfinding/Local Avoidance/RVO Navmesh")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_r_v_o_1_1_r_v_o_navmesh.php")]
// Dependencies Pathfinding.GraphModifier
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVONavmesh
class CORDL_TYPE RVONavmesh : public ::Pathfinding::GraphModifier {
public:
// Declarations
using __c__DisplayClass8_0 = ::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0;

using __c__DisplayClass9_0 = ::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0;

/// @brief Field lastSim, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastSim, put=__cordl_internal_set_lastSim)) ::Pathfinding::RVO::Simulator*  lastSim;

/// @brief Field obstacles, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_obstacles, put=__cordl_internal_set_obstacles)) ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  obstacles;

/// @brief Field wallHeight, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallHeight, put=__cordl_internal_set_wallHeight)) float_t  wallHeight;

/// @brief Method AddGraphObstacles, addr 0x5ee9634, size 0x210, virtual false, abstract: false, final false
inline void AddGraphObstacles(::Pathfinding::RVO::Simulator*  sim, ::Pathfinding::GridGraph*  grid) ;

/// @brief Method AddGraphObstacles, addr 0x5ee9550, size 0xe4, virtual false, abstract: false, final false
inline void AddGraphObstacles(::Pathfinding::RVO::Simulator*  simulator, ::Pathfinding::INavmesh*  navmesh) ;

static inline ::Pathfinding::RVO::RVONavmesh* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ee9844, size 0x1c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnGraphsPostUpdate, addr 0x5ee9128, size 0x10, virtual true, abstract: false, final false
inline void OnGraphsPostUpdate() ;

/// @brief Method OnLatePostScan, addr 0x5ee9138, size 0x31c, virtual true, abstract: false, final false
inline void OnLatePostScan() ;

/// @brief Method OnPostCacheLoad, addr 0x5ee9118, size 0x10, virtual true, abstract: false, final false
inline void OnPostCacheLoad() ;

/// @brief Method RemoveObstacles, addr 0x5ee9454, size 0xfc, virtual false, abstract: false, final false
inline void RemoveObstacles() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_lastSim() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_lastSim() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>* const& __cordl_internal_get_obstacles() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*& __cordl_internal_get_obstacles() ;

constexpr float_t const& __cordl_internal_get_wallHeight() const;

constexpr float_t& __cordl_internal_get_wallHeight() ;

constexpr void __cordl_internal_set_lastSim(::Pathfinding::RVO::Simulator*  value) ;

constexpr void __cordl_internal_set_obstacles(::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  value) ;

constexpr void __cordl_internal_set_wallHeight(float_t  value) ;

/// @brief Method .ctor, addr 0x5ee9870, size 0xb4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVONavmesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVONavmesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVONavmesh(RVONavmesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVONavmesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVONavmesh(RVONavmesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21506};

/// @brief Field wallHeight, offset: 0x40, size: 0x4, def value: None
 float_t  ___wallHeight;

/// @brief Field obstacles, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::RVO::ObstacleVertex*>*  ___obstacles;

/// @brief Field lastSim, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___lastSim;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVONavmesh, ___wallHeight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVONavmesh, ___obstacles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVONavmesh, ___lastSim) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVONavmesh) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding::RVO
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVONavmesh/<>c__DisplayClass9_0
class CORDL_TYPE RVONavmesh___c__DisplayClass9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::RVO::RVONavmesh>  __4__this;

/// @brief Field simulator, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_simulator, put=__cordl_internal_set_simulator)) ::Pathfinding::RVO::Simulator*  simulator;

static inline ::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0* New_ctor() ;

/// @brief Method <AddGraphObstacles>b__0, addr 0x5ee9a14, size 0x1cc, virtual false, abstract: false, final false
inline void _AddGraphObstacles_b__0(::System::Collections::Generic::List_1<::Pathfinding::Int3>*  vertices, bool  cycle) ;

constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_simulator() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_simulator() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::RVO::RVONavmesh>  value) ;

constexpr void __cordl_internal_set_simulator(::Pathfinding::RVO::Simulator*  value) ;

/// @brief Method .ctor, addr 0x5ee9868, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVONavmesh___c__DisplayClass9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVONavmesh___c__DisplayClass9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVONavmesh___c__DisplayClass9_0(RVONavmesh___c__DisplayClass9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVONavmesh___c__DisplayClass9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVONavmesh___c__DisplayClass9_0(RVONavmesh___c__DisplayClass9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21505};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RVO::RVONavmesh>  _____4__this;

/// @brief Field simulator, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___simulator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0, ___simulator) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass9_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::RVO
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVONavmesh/<>c__DisplayClass8_0
class CORDL_TYPE RVONavmesh___c__DisplayClass8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Pathfinding::RVO::RVONavmesh>  __4__this;

/// @brief Field reverse, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_reverse, put=__cordl_internal_set_reverse)) bool  reverse;

/// @brief Field sim, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sim, put=__cordl_internal_set_sim)) ::Pathfinding::RVO::Simulator*  sim;

static inline ::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0* New_ctor() ;

/// @brief Method <AddGraphObstacles>b__0, addr 0x5ee9924, size 0xf0, virtual false, abstract: false, final false
inline void _AddGraphObstacles_b__0(::ArrayW<::UnityEngine::Vector3>  vertices) ;

constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Pathfinding::RVO::RVONavmesh>& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get_reverse() const;

constexpr bool& __cordl_internal_get_reverse() ;

constexpr ::Pathfinding::RVO::Simulator* const& __cordl_internal_get_sim() const;

constexpr ::Pathfinding::RVO::Simulator*& __cordl_internal_get_sim() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Pathfinding::RVO::RVONavmesh>  value) ;

constexpr void __cordl_internal_set_reverse(bool  value) ;

constexpr void __cordl_internal_set_sim(::Pathfinding::RVO::Simulator*  value) ;

/// @brief Method .ctor, addr 0x5ee9860, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVONavmesh___c__DisplayClass8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVONavmesh___c__DisplayClass8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVONavmesh___c__DisplayClass8_0(RVONavmesh___c__DisplayClass8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVONavmesh___c__DisplayClass8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVONavmesh___c__DisplayClass8_0(RVONavmesh___c__DisplayClass8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21504};

/// @brief Field reverse, offset: 0x10, size: 0x1, def value: None
 bool  ___reverse;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RVO::RVONavmesh>  _____4__this;

/// @brief Field sim, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::RVO::Simulator*  ___sim;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0, ___reverse) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0, ___sim) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVONavmesh___c__DisplayClass8_0) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding::RVO
