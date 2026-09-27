#pragma once
// IWYU pragma private; include "Pathfinding/RecastBBTreeBox.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
CORDL_MODULE_EXPORT(RecastBBTreeBox)
namespace Pathfinding {
class RecastMeshObj;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RecastBBTreeBox;
}
// Write type traits
MARK_REF_T(::Pathfinding::RecastBBTreeBox*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RecastBBTreeBox*, "Pathfinding", "RecastBBTreeBox");
// Dependencies System.Object, UnityEngine.Rect
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RecastBBTreeBox
class CORDL_TYPE RecastBBTreeBox : public ::System::Object {
public:
// Declarations
/// @brief Field c1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_c1, put=__cordl_internal_set_c1)) ::Pathfinding::RecastBBTreeBox*  c1;

/// @brief Field c2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_c2, put=__cordl_internal_set_c2)) ::Pathfinding::RecastBBTreeBox*  c2;

/// @brief Field mesh, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::Pathfinding::RecastMeshObj>  mesh;

/// @brief Field rect, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_rect, put=__cordl_internal_set_rect)) ::UnityEngine::Rect  rect;

/// @brief Method Contains, addr 0x5e9c16c, size 0x44, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  p) ;

static inline ::Pathfinding::RecastBBTreeBox* New_ctor(::Pathfinding::RecastMeshObj*  mesh) ;

constexpr ::Pathfinding::RecastBBTreeBox* const& __cordl_internal_get_c1() const;

constexpr ::Pathfinding::RecastBBTreeBox*& __cordl_internal_get_c1() ;

constexpr ::Pathfinding::RecastBBTreeBox* const& __cordl_internal_get_c2() const;

constexpr ::Pathfinding::RecastBBTreeBox*& __cordl_internal_get_c2() ;

constexpr ::UnityW<::Pathfinding::RecastMeshObj> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::Pathfinding::RecastMeshObj>& __cordl_internal_get_mesh() ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_rect() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_rect() ;

constexpr void __cordl_internal_set_c1(::Pathfinding::RecastBBTreeBox*  value) ;

constexpr void __cordl_internal_set_c2(::Pathfinding::RecastBBTreeBox*  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::Pathfinding::RecastMeshObj>  value) ;

constexpr void __cordl_internal_set_rect(::UnityEngine::Rect  value) ;

/// @brief Method .ctor, addr 0x5e9c0ac, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::Pathfinding::RecastMeshObj*  mesh) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RecastBBTreeBox() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RecastBBTreeBox", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RecastBBTreeBox(RecastBBTreeBox && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RecastBBTreeBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RecastBBTreeBox(RecastBBTreeBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21355};

/// @brief Field rect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  ___rect;

/// @brief Field mesh, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Pathfinding::RecastMeshObj>  ___mesh;

/// @brief Field c1, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::RecastBBTreeBox*  ___c1;

/// @brief Field c2, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::RecastBBTreeBox*  ___c2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RecastBBTreeBox, ___rect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastBBTreeBox, ___mesh) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastBBTreeBox, ___c1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RecastBBTreeBox, ___c2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RecastBBTreeBox) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
