#pragma once
// IWYU pragma private; include "Pathfinding/RecastTileUpdateHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecastTileUpdateHandler)
namespace Pathfinding {
class RecastGraph;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Pathfinding {
class RecastTileUpdateHandler;
}
// Write type traits
MARK_REF_T(::Pathfinding::RecastTileUpdateHandler*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastTileUpdateHandler*, "Pathfinding", "RecastTileUpdateHandler");
// [AddComponentMenu("Pathfinding/Navmesh/RecastTileUpdateHandler")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_recast_tile_update_handler.php")]
// Dependencies UnityEngine.MonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastTileUpdateHandler
class CORDL_TYPE RecastTileUpdateHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field anyDirtyTiles, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyDirtyTiles, put=__cordl_internal_set_anyDirtyTiles)) bool  anyDirtyTiles;

/// @brief Field dirtyTiles, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtyTiles, put=__cordl_internal_set_dirtyTiles)) ::ArrayW<bool>  dirtyTiles;

/// @brief Field earliestDirty, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_earliestDirty, put=__cordl_internal_set_earliestDirty)) float_t  earliestDirty;

/// @brief Field graph, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::RecastGraph*  graph;

/// @brief Field maxThrottlingDelay, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxThrottlingDelay, put=__cordl_internal_set_maxThrottlingDelay)) float_t  maxThrottlingDelay;

static inline ::Pathfinding::RecastTileUpdateHandler* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e6ba28, size 0x7c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e6b9ac, size 0x7c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ScheduleUpdate, addr 0x5e6b6c8, size 0x2e4, virtual false, abstract: false, final false
inline void ScheduleUpdate(::UnityEngine::Bounds  bounds) ;

/// @brief Method SetGraph, addr 0x5e6b64c, size 0x7c, virtual false, abstract: false, final false
inline void SetGraph(::Pathfinding::RecastGraph*  graph) ;

/// @brief Method Update, addr 0x5e6baa4, size 0x44, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDirtyTiles, addr 0x5e6bae8, size 0x2a8, virtual false, abstract: false, final false
inline void UpdateDirtyTiles() ;

constexpr bool const& __cordl_internal_get_anyDirtyTiles() const;

constexpr bool& __cordl_internal_get_anyDirtyTiles() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_dirtyTiles() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_dirtyTiles() ;

constexpr float_t const& __cordl_internal_get_earliestDirty() const;

constexpr float_t& __cordl_internal_get_earliestDirty() ;

constexpr ::Pathfinding::RecastGraph* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::RecastGraph*& __cordl_internal_get_graph() ;

constexpr float_t const& __cordl_internal_get_maxThrottlingDelay() const;

constexpr float_t& __cordl_internal_get_maxThrottlingDelay() ;

constexpr void __cordl_internal_set_anyDirtyTiles(bool  value) ;

constexpr void __cordl_internal_set_dirtyTiles(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_earliestDirty(float_t  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::RecastGraph*  value) ;

constexpr void __cordl_internal_set_maxThrottlingDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x5e6bd90, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastTileUpdateHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastTileUpdateHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastTileUpdateHandler(RecastTileUpdateHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastTileUpdateHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastTileUpdateHandler(RecastTileUpdateHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21286};

/// @brief Field graph, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::RecastGraph*  ___graph;

/// @brief Field dirtyTiles, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<bool>  ___dirtyTiles;

/// @brief Field anyDirtyTiles, offset: 0x30, size: 0x1, def value: None
 bool  ___anyDirtyTiles;

/// @brief Field earliestDirty, offset: 0x34, size: 0x4, def value: None
 float_t  ___earliestDirty;

/// @brief Field maxThrottlingDelay, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxThrottlingDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastTileUpdateHandler, ___graph) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastTileUpdateHandler, ___dirtyTiles) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastTileUpdateHandler, ___anyDirtyTiles) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastTileUpdateHandler, ___earliestDirty) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastTileUpdateHandler, ___maxThrottlingDelay) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastTileUpdateHandler) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
