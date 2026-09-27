#pragma once
// IWYU pragma private; include "Pathfinding/TileHandlerHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TileHandlerHelper)
namespace Pathfinding::Util {
class TileHandler;
}
// Forward declare root types
namespace Pathfinding {
class TileHandlerHelper;
}
// Write type traits
MARK_REF_T(::Pathfinding::TileHandlerHelper*);
DEFINE_IL2CPP_CLASS(::Pathfinding::TileHandlerHelper*, "Pathfinding", "TileHandlerHelper");
// [Obsolete("Use AstarPath.navmeshUpdates instead. You can safely remove this component.")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_tile_handler_helper.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.TileHandlerHelper
class CORDL_TYPE TileHandlerHelper : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_updateInterval, put=set_updateInterval)) float_t  updateInterval;

/// @brief Method DiscardPending, addr 0x5eab4a0, size 0x68, virtual false, abstract: false, final false
inline void DiscardPending() ;

/// @brief Method ForceUpdate, addr 0x5eab508, size 0x68, virtual false, abstract: false, final false
inline void ForceUpdate() ;

static inline ::Pathfinding::TileHandlerHelper* New_ctor() ;

/// [Obsolete("All navmesh/recast graphs now use navmesh cutting")]
/// @brief Method UseSpecifiedHandler, addr 0x5eab454, size 0x4c, virtual false, abstract: false, final false
inline void UseSpecifiedHandler(::Pathfinding::Util::TileHandler*  newHandler) ;

/// @brief Method .ctor, addr 0x5eab570, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_updateInterval, addr 0x5eab370, size 0x6c, virtual false, abstract: false, final false
inline float_t get_updateInterval() ;

/// @brief Method set_updateInterval, addr 0x5eab3dc, size 0x78, virtual false, abstract: false, final false
inline void set_updateInterval(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TileHandlerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TileHandlerHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TileHandlerHelper(TileHandlerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TileHandlerHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TileHandlerHelper(TileHandlerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::TileHandlerHelper) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
