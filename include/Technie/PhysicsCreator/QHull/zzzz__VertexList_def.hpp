#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/VertexList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(VertexList)
namespace Technie::PhysicsCreator::QHull {
class Vertex;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class VertexList;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::VertexList*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::VertexList*, "Technie.PhysicsCreator.QHull", "VertexList");
// Dependencies System.Object
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.VertexList
class CORDL_TYPE VertexList : public ::System::Object {
public:
// Declarations
/// @brief Field head, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::Technie::PhysicsCreator::QHull::Vertex*  head;

/// @brief Field tail, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tail, put=__cordl_internal_set_tail)) ::Technie::PhysicsCreator::QHull::Vertex*  tail;

static inline ::Technie::PhysicsCreator::QHull::VertexList* New_ctor() ;

constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& __cordl_internal_get_head() const;

constexpr ::Technie::PhysicsCreator::QHull::Vertex*& __cordl_internal_get_head() ;

constexpr ::Technie::PhysicsCreator::QHull::Vertex* const& __cordl_internal_get_tail() const;

constexpr ::Technie::PhysicsCreator::QHull::Vertex*& __cordl_internal_get_tail() ;

constexpr void __cordl_internal_set_head(::Technie::PhysicsCreator::QHull::Vertex*  value) ;

constexpr void __cordl_internal_set_tail(::Technie::PhysicsCreator::QHull::Vertex*  value) ;

/// @brief Method delete, addr 0xadde188, size 0x58, virtual false, abstract: false, final false
inline void _cordl_delete(::Technie::PhysicsCreator::QHull::Vertex*  vtx) ;

/// @brief Method delete, addr 0xadde250, size 0x70, virtual false, abstract: false, final false
inline void _cordl_delete(::Technie::PhysicsCreator::QHull::Vertex*  vtx1, ::Technie::PhysicsCreator::QHull::Vertex*  vtx2) ;

/// @brief Method .ctor, addr 0xadde520, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add, addr 0xadde028, size 0x70, virtual false, abstract: false, final false
inline void add(::Technie::PhysicsCreator::QHull::Vertex*  vtx) ;

/// @brief Method addAll, addr 0xade0dfc, size 0x68, virtual false, abstract: false, final false
inline void addAll(::Technie::PhysicsCreator::QHull::Vertex*  vtx) ;

/// @brief Method clear, addr 0xaddf9a0, size 0x28, virtual false, abstract: false, final false
inline void clear() ;

/// @brief Method first, addr 0xade204c, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Vertex* first() ;

/// @brief Method insertBefore, addr 0xadde098, size 0x84, virtual false, abstract: false, final false
inline void insertBefore(::Technie::PhysicsCreator::QHull::Vertex*  vtx, ::Technie::PhysicsCreator::QHull::Vertex*  next) ;

/// @brief Method isEmpty, addr 0xade14e0, size 0x10, virtual false, abstract: false, final false
inline bool isEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VertexList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VertexList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VertexList(VertexList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VertexList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VertexList(VertexList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30544};

/// @brief Field head, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vertex*  ___head;

/// @brief Field tail, offset: 0x18, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Vertex*  ___tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::VertexList, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::VertexList, ___tail) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::VertexList) == 0x20, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
