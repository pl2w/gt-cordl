#pragma once
// IWYU pragma private; include "Pathfinding/RecastBBTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RecastBBTree)
namespace Pathfinding {
class RecastBBTreeBox;
}
namespace Pathfinding {
class RecastMeshObj;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace Pathfinding {
class RecastBBTree;
}
// Write type traits
MARK_REF_T(::Pathfinding::RecastBBTree*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastBBTree*, "Pathfinding", "RecastBBTree");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastBBTree
class CORDL_TYPE RecastBBTree : public ::System::Object {
public:
// Declarations
/// @brief Field root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::Pathfinding::RecastBBTreeBox*  root;

/// @brief Method ExpandToContain, addr 0x5e9bea8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::Rect ExpandToContain(::UnityEngine::Rect  r, ::UnityEngine::Rect  r2) ;

/// @brief Method ExpansionRequired, addr 0x5e9c114, size 0x48, virtual false, abstract: false, final false
static inline float_t ExpansionRequired(::UnityEngine::Rect  r, ::UnityEngine::Rect  r2) ;

/// @brief Method Insert, addr 0x5e9bee4, size 0x1c8, virtual false, abstract: false, final false
inline void Insert(::Pathfinding::RecastMeshObj*  mesh) ;

static inline ::Pathfinding::RecastBBTree* New_ctor() ;

/// @brief Method QueryBoxInBounds, addr 0x5e9b8d4, size 0x23c, virtual false, abstract: false, final false
inline void QueryBoxInBounds(::Pathfinding::RecastBBTreeBox*  box, ::UnityEngine::Rect  bounds, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  boxes) ;

/// @brief Method QueryInBounds, addr 0x5e9b8c0, size 0x14, virtual false, abstract: false, final false
inline void QueryInBounds(::UnityEngine::Rect  bounds, ::System::Collections::Generic::List_1<::UnityW<::Pathfinding::RecastMeshObj>>*  buffer) ;

/// @brief Method RectArea, addr 0x5e9c15c, size 0x8, virtual false, abstract: false, final false
static inline float_t RectArea(::UnityEngine::Rect  r) ;

/// @brief Method RectIntersectsRect, addr 0x5e9bb10, size 0x34, virtual false, abstract: false, final false
static inline bool RectIntersectsRect(::UnityEngine::Rect  r, ::UnityEngine::Rect  r2) ;

/// @brief Method Remove, addr 0x5e9bb44, size 0x140, virtual false, abstract: false, final false
inline bool Remove(::Pathfinding::RecastMeshObj*  mesh) ;

/// @brief Method RemoveBox, addr 0x5e9bcc0, size 0x1e8, virtual false, abstract: false, final false
inline ::Pathfinding::RecastBBTreeBox* RemoveBox(::Pathfinding::RecastBBTreeBox*  c, ::Pathfinding::RecastMeshObj*  mesh, ::UnityEngine::Rect  bounds, ::by_ref<bool>  found) ;

constexpr ::Pathfinding::RecastBBTreeBox* const& __cordl_internal_get_root() const;

constexpr ::Pathfinding::RecastBBTreeBox*& __cordl_internal_get_root() ;

constexpr void __cordl_internal_set_root(::Pathfinding::RecastBBTreeBox*  value) ;

/// @brief Method .ctor, addr 0x5e9c164, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastBBTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastBBTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastBBTree(RecastBBTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastBBTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastBBTree(RecastBBTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21354};

/// @brief Field root, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::RecastBBTreeBox*  ___root;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastBBTree, ___root) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastBBTree) == 0x18, "Size mismatch!");

} // namespace end def Pathfinding
