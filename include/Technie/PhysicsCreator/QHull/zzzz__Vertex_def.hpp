#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/Vertex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Vertex)
namespace Technie::PhysicsCreator::QHull {
class Face;
}
namespace Technie::PhysicsCreator::QHull {
class Point3d;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class Vertex;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::Vertex*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::Vertex*, "Technie.PhysicsCreator.QHull", "Vertex");
// Dependencies System.Object
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.Vertex
class CORDL_TYPE Vertex : public ::System::Object {
public:
// Declarations
/// @brief Field face, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_face, put=__cordl_internal_set_face)) ::Technie::PhysicsCreator::QHull::Face*  face;

/// @brief Field index, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field next, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Technie::PhysicsCreator::QHull::Vertex*  next;

/// @brief Field pnt, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pnt, put=__cordl_internal_set_pnt)) ::Technie::PhysicsCreator::QHull::Point3d*  pnt;

/// @brief Field prev, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Technie::PhysicsCreator::QHull::Vertex*  prev;

static inline ::Technie::PhysicsCreator::QHull::Vertex* New_ctor() ;

static inline ::Technie::PhysicsCreator::QHull::Vertex* New_ctor(double_t  x, double_t  y, double_t  z, int32_t  idx) ;

constexpr ::Technie::PhysicsCreator::QHull::Face* const& __cordl_internal_get_face() const;

constexpr ::Technie::PhysicsCreator::QHull::Face*& __cordl_internal_get_face() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& __cordl_internal_get_next() const;

constexpr ::Technie::PhysicsCreator::QHull::Vertex*& __cordl_internal_get_next() ;

constexpr ::Technie::PhysicsCreator::QHull::Point3d* const& __cordl_internal_get_pnt() const;

constexpr ::Technie::PhysicsCreator::QHull::Point3d*& __cordl_internal_get_pnt() ;

constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& __cordl_internal_get_prev() const;

constexpr ::Technie::PhysicsCreator::QHull::Vertex*& __cordl_internal_get_prev() ;

constexpr void __cordl_internal_set_face(::Technie::PhysicsCreator::QHull::Face*  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_next(::Technie::PhysicsCreator::QHull::Vertex*  value) ;

constexpr void __cordl_internal_set_pnt(::Technie::PhysicsCreator::QHull::Point3d*  value) ;

constexpr void __cordl_internal_set_prev(::Technie::PhysicsCreator::QHull::Vertex*  value) ;

/// @brief Method .ctor, addr 0xaddf934, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xade1fa8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(double_t  x, double_t  y, double_t  z, int32_t  idx) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Vertex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Vertex(Vertex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vertex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vertex(Vertex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30543};

/// @brief Field pnt, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Point3d*  ___pnt;

/// @brief Field index, offset: 0x18, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field prev, offset: 0x20, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vertex*  ___prev;

/// @brief Field next, offset: 0x28, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vertex*  ___next;

/// @brief Field face, offset: 0x30, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Face*  ___face;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vertex, ___pnt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vertex, ___index) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vertex, ___prev) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vertex, ___next) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::Vertex, ___face) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::Vertex) == 0x38, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
