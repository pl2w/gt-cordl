#pragma once
// IWYU pragma private; include "Pathfinding/RelevantGraphSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RelevantGraphSurface)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RelevantGraphSurface;
}
// Write type traits
MARK_REF_T(::Pathfinding::RelevantGraphSurface*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RelevantGraphSurface*, "Pathfinding", "RelevantGraphSurface");
// [AddComponentMenu("Pathfinding/Navmesh/RelevantGraphSurface")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_relevant_graph_surface.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RelevantGraphSurface
class CORDL_TYPE RelevantGraphSurface : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Next)) ::UnityW<::Pathfinding::RelevantGraphSurface>  Next;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_Prev)) ::UnityW<::Pathfinding::RelevantGraphSurface>  Prev;

/// @brief Field maxRange, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRange, put=__cordl_internal_set_maxRange)) float_t  maxRange;

/// @brief Field next, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::UnityW<::Pathfinding::RelevantGraphSurface>  next;

/// @brief Field position, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector3  position;

/// @brief Field prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::UnityW<::Pathfinding::RelevantGraphSurface>  prev;

/// @brief Field root, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_root, put=setStaticF_root)) ::UnityW<::Pathfinding::RelevantGraphSurface>  root;

/// @brief Method FindAllGraphSurfaces, addr 0x5eaaf9c, size 0x118, virtual false, abstract: false, final false
static inline void FindAllGraphSurfaces() ;

static inline ::Pathfinding::RelevantGraphSurface* New_ctor() ;

/// @brief Method OnDisable, addr 0x5eaad78, size 0x18c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5eab0b4, size 0x158, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5eab20c, size 0x154, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5eaac94, size 0xe4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateAllPositions, addr 0x5eaaf04, size 0x98, virtual false, abstract: false, final false
static inline void UpdateAllPositions() ;

/// @brief Method UpdatePosition, addr 0x5eaac64, size 0x30, virtual false, abstract: false, final false
inline void UpdatePosition() ;

constexpr float_t const& __cordl_internal_get_maxRange() const;

constexpr float_t& __cordl_internal_get_maxRange() ;

constexpr ::UnityW<::Pathfinding::RelevantGraphSurface> const& __cordl_internal_get_next() const;

constexpr ::UnityW<::Pathfinding::RelevantGraphSurface>& __cordl_internal_get_next() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_position() ;

constexpr ::UnityW<::Pathfinding::RelevantGraphSurface> const& __cordl_internal_get_prev() const;

constexpr ::UnityW<::Pathfinding::RelevantGraphSurface>& __cordl_internal_get_prev() ;

constexpr void __cordl_internal_set_maxRange(float_t  value) ;

constexpr void __cordl_internal_set_next(::UnityW<::Pathfinding::RelevantGraphSurface>  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_prev(::UnityW<::Pathfinding::RelevantGraphSurface>  value) ;

/// @brief Method .ctor, addr 0x5eab360, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::Pathfinding::RelevantGraphSurface> getStaticF_root() ;

/// @brief Method get_Next, addr 0x5eaac0c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Pathfinding::RelevantGraphSurface> get_Next() ;

/// @brief Method get_Position, addr 0x5eaac00, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_Prev, addr 0x5eaac14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Pathfinding::RelevantGraphSurface> get_Prev() ;

/// @brief Method get_Root, addr 0x5eaac1c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Pathfinding::RelevantGraphSurface> get_Root() ;

static inline void setStaticF_root(::UnityW<::Pathfinding::RelevantGraphSurface>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RelevantGraphSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RelevantGraphSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RelevantGraphSurface(RelevantGraphSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RelevantGraphSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RelevantGraphSurface(RelevantGraphSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21383};

/// @brief Field maxRange, offset: 0x24, size: 0x4, def value: None
 float_t  ___maxRange;

/// @brief Field prev, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RelevantGraphSurface>  ___prev;

/// @brief Field next, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RelevantGraphSurface>  ___next;

/// @brief Field position, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___position;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RelevantGraphSurface, ___maxRange) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RelevantGraphSurface, ___prev) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RelevantGraphSurface, ___next) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RelevantGraphSurface, ___position) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RelevantGraphSurface) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
