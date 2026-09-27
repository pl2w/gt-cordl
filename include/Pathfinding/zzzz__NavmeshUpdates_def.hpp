#pragma once
// IWYU pragma private; include "Pathfinding/NavmeshUpdates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(NavmeshUpdates)
namespace Pathfinding::Util {
class TileHandler;
}
namespace Pathfinding {
struct IntRect;
}
namespace Pathfinding {
class NavmeshBase;
}
namespace Pathfinding {
class NavmeshClipper;
}
namespace Pathfinding {
class NavmeshTile;
}
namespace Pathfinding {
class NavmeshUpdates_NavmeshUpdateSettings;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding {
class NavmeshUpdates;
}
namespace Pathfinding {
class NavmeshUpdates_NavmeshUpdateSettings;
}
// Write type traits
MARK_REF_T(::Pathfinding::NavmeshUpdates*);
MARK_REF_T(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*);
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshUpdates*, "Pathfinding", "NavmeshUpdates");
DEFINE_IL2CPP_CLASS(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings*, "Pathfinding", "NavmeshUpdates/NavmeshUpdateSettings");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshUpdates
class CORDL_TYPE NavmeshUpdates : public ::System::Object {
public:
// Declarations
using NavmeshUpdateSettings = ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings;

/// @brief Field lastUpdateTime, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastUpdateTime, put=__cordl_internal_set_lastUpdateTime)) float_t  lastUpdateTime;

/// @brief Field updateInterval, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateInterval, put=__cordl_internal_set_updateInterval)) float_t  updateInterval;

/// @brief Method DiscardPending, addr 0x5ea9ad4, size 0x210, virtual false, abstract: false, final false
inline void DiscardPending() ;

/// @brief Method ForceUpdate, addr 0x5eaa678, size 0x49c, virtual false, abstract: false, final false
inline void ForceUpdate() ;

/// @brief Method HandleOnDisableCallback, addr 0x5ea9ee0, size 0x11c, virtual false, abstract: false, final false
inline void HandleOnDisableCallback(::Pathfinding::NavmeshClipper*  obj) ;

/// @brief Method HandleOnEnableCallback, addr 0x5ea9ce4, size 0x11c, virtual false, abstract: false, final false
inline void HandleOnEnableCallback(::Pathfinding::NavmeshClipper*  obj) ;

static inline ::Pathfinding::NavmeshUpdates* New_ctor() ;

/// @brief Method OnDisable, addr 0x5ea99f8, size 0xdc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5ea991c, size 0xdc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5eaa118, size 0x1bc, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_lastUpdateTime() const;

constexpr float_t& __cordl_internal_get_lastUpdateTime() ;

constexpr float_t const& __cordl_internal_get_updateInterval() const;

constexpr float_t& __cordl_internal_get_updateInterval() ;

constexpr void __cordl_internal_set_lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set_updateInterval(float_t  value) ;

/// @brief Method .ctor, addr 0x5eaab14, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshUpdates() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshUpdates", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshUpdates(NavmeshUpdates && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshUpdates", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshUpdates(NavmeshUpdates const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21382};

/// @brief Field updateInterval, offset: 0x10, size: 0x4, def value: None
 float_t  ___updateInterval;

/// @brief Field lastUpdateTime, offset: 0x14, size: 0x4, def value: None
 float_t  ___lastUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshUpdates, ___updateInterval) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshUpdates, ___lastUpdateTime) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshUpdates) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.NavmeshUpdates/NavmeshUpdateSettings
class CORDL_TYPE NavmeshUpdates_NavmeshUpdateSettings : public ::System::Object {
public:
// Declarations
/// @brief Field forcedReloadRects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_forcedReloadRects, put=__cordl_internal_set_forcedReloadRects)) ::System::Collections::Generic::List_1<::Pathfinding::IntRect>*  forcedReloadRects;

/// @brief Field graph, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::NavmeshBase*  graph;

/// @brief Field handler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Pathfinding::Util::TileHandler*  handler;

/// @brief Method AddClipper, addr 0x5ea9e00, size 0xe0, virtual false, abstract: false, final false
inline void AddClipper(::Pathfinding::NavmeshClipper*  obj) ;

static inline ::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings* New_ctor(::Pathfinding::NavmeshBase*  graph) ;

/// @brief Method OnRecalculatedTiles, addr 0x5eaabc0, size 0x40, virtual false, abstract: false, final false
inline void OnRecalculatedTiles(::ArrayW<::Pathfinding::NavmeshTile*>  tiles) ;

/// @brief Method Refresh, addr 0x5eaa2d4, size 0x3a4, virtual false, abstract: false, final false
inline void Refresh(bool  forceCreate) ;

/// @brief Method RemoveClipper, addr 0x5ea9ffc, size 0x11c, virtual false, abstract: false, final false
inline void RemoveClipper(::Pathfinding::NavmeshClipper*  obj) ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::IntRect>* const& __cordl_internal_get_forcedReloadRects() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::IntRect>*& __cordl_internal_get_forcedReloadRects() ;

constexpr ::Pathfinding::NavmeshBase* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::NavmeshBase*& __cordl_internal_get_graph() ;

constexpr ::Pathfinding::Util::TileHandler* const& __cordl_internal_get_handler() const;

constexpr ::Pathfinding::Util::TileHandler*& __cordl_internal_get_handler() ;

constexpr void __cordl_internal_set_forcedReloadRects(::System::Collections::Generic::List_1<::Pathfinding::IntRect>*  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::NavmeshBase*  value) ;

constexpr void __cordl_internal_set_handler(::Pathfinding::Util::TileHandler*  value) ;

/// @brief Method .ctor, addr 0x5eaab24, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::NavmeshBase*  graph) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NavmeshUpdates_NavmeshUpdateSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NavmeshUpdates_NavmeshUpdateSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NavmeshUpdates_NavmeshUpdateSettings(NavmeshUpdates_NavmeshUpdateSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NavmeshUpdates_NavmeshUpdateSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NavmeshUpdates_NavmeshUpdateSettings(NavmeshUpdates_NavmeshUpdateSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21381};

/// @brief Field handler, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Util::TileHandler*  ___handler;

/// @brief Field forcedReloadRects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::IntRect>*  ___forcedReloadRects;

/// @brief Field graph, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::NavmeshBase*  ___graph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings, ___handler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings, ___forcedReloadRects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings, ___graph) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::NavmeshUpdates_NavmeshUpdateSettings) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding
