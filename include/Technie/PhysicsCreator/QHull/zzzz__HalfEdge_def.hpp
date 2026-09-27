#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/HalfEdge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HalfEdge)
namespace Technie::PhysicsCreator::QHull {
class Face;
}
namespace Technie::PhysicsCreator::QHull {
class Vertex;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class HalfEdge;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::HalfEdge*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::HalfEdge*, "Technie.PhysicsCreator.QHull", "HalfEdge");
// Dependencies System.Object
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.HalfEdge
class CORDL_TYPE HalfEdge : public ::System::Object {
public:
// Declarations
/// @brief Field face, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_face, put=__cordl_internal_set_face)) ::Technie::PhysicsCreator::QHull::Face*  face;

/// @brief Field next, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Technie::PhysicsCreator::QHull::HalfEdge*  next;

/// @brief Field opposite, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_opposite, put=__cordl_internal_set_opposite)) ::Technie::PhysicsCreator::QHull::HalfEdge*  opposite;

/// @brief Field prev, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_prev, put=__cordl_internal_set_prev)) ::Technie::PhysicsCreator::QHull::HalfEdge*  prev;

/// @brief Field vertex, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_vertex, put=__cordl_internal_set_vertex)) ::Technie::PhysicsCreator::QHull::Vertex*  vertex;

static inline ::Technie::PhysicsCreator::QHull::HalfEdge* New_ctor() ;

static inline ::Technie::PhysicsCreator::QHull::HalfEdge* New_ctor(::Technie::PhysicsCreator::QHull::Vertex*  v, ::Technie::PhysicsCreator::QHull::Face*  f) ;

constexpr ::Technie::PhysicsCreator::QHull::Face* const& __cordl_internal_get_face() const;

constexpr ::Technie::PhysicsCreator::QHull::Face*& __cordl_internal_get_face() ;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& __cordl_internal_get_next() const;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& __cordl_internal_get_next() ;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& __cordl_internal_get_opposite() const;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& __cordl_internal_get_opposite() ;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge* const& __cordl_internal_get_prev() const;

constexpr ::Technie::PhysicsCreator::QHull::HalfEdge*& __cordl_internal_get_prev() ;

constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& __cordl_internal_get_vertex() const;

constexpr ::Technie::PhysicsCreator::QHull::Vertex*& __cordl_internal_get_vertex() ;

constexpr void __cordl_internal_set_face(::Technie::PhysicsCreator::QHull::Face*  value) ;

constexpr void __cordl_internal_set_next(::Technie::PhysicsCreator::QHull::HalfEdge*  value) ;

constexpr void __cordl_internal_set_opposite(::Technie::PhysicsCreator::QHull::HalfEdge*  value) ;

constexpr void __cordl_internal_set_prev(::Technie::PhysicsCreator::QHull::HalfEdge*  value) ;

constexpr void __cordl_internal_set_vertex(::Technie::PhysicsCreator::QHull::Vertex*  value) ;

/// @brief Method .ctor, addr 0xadddd94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xaddcd2c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::Technie::PhysicsCreator::QHull::Vertex*  v, ::Technie::PhysicsCreator::QHull::Face*  f) ;

/// @brief Method getFace, addr 0xaddddbc, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Face* getFace() ;

/// @brief Method getNext, addr 0xadddda4, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* getNext() ;

/// @brief Method getOpposite, addr 0xaddddc4, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* getOpposite() ;

/// @brief Method getPrev, addr 0xaddddb4, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::HalfEdge* getPrev() ;

/// @brief Method getVertexString, addr 0xaddd734, size 0xcc, virtual false, abstract: false, final false
inline ::StringW getVertexString() ;

/// @brief Method head, addr 0xaddddcc, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Vertex* head() ;

/// @brief Method length, addr 0xaddddd4, size 0x40, virtual false, abstract: false, final false
inline double_t length() ;

/// @brief Method lengthSquared, addr 0xaddc688, size 0x40, virtual false, abstract: false, final false
inline double_t lengthSquared() ;

/// @brief Method oppositeFace, addr 0xaddd1e0, size 0x18, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Face* oppositeFace() ;

/// @brief Method setNext, addr 0xadddd9c, size 0x8, virtual false, abstract: false, final false
inline void setNext(::Technie::PhysicsCreator::QHull::HalfEdge*  edge) ;

/// @brief Method setOpposite, addr 0xadddcb4, size 0x38, virtual false, abstract: false, final false
inline void setOpposite(::Technie::PhysicsCreator::QHull::HalfEdge*  edge) ;

/// @brief Method setPrev, addr 0xaddddac, size 0x8, virtual false, abstract: false, final false
inline void setPrev(::Technie::PhysicsCreator::QHull::HalfEdge*  edge) ;

/// @brief Method tail, addr 0xaddc6c8, size 0x18, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Vertex* tail() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HalfEdge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HalfEdge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HalfEdge(HalfEdge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HalfEdge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HalfEdge(HalfEdge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30538};

/// @brief Field vertex, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vertex*  ___vertex;

/// @brief Field face, offset: 0x18, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Face*  ___face;

/// @brief Field next, offset: 0x20, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::HalfEdge*  ___next;

/// @brief Field prev, offset: 0x28, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::HalfEdge*  ___prev;

/// @brief Field opposite, offset: 0x30, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::HalfEdge*  ___opposite;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::HalfEdge, ___vertex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::HalfEdge, ___face) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::HalfEdge, ___next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::HalfEdge, ___prev) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::HalfEdge, ___opposite) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::HalfEdge) == 0x38, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
