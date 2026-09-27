#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/QHull/FaceList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FaceList)
namespace Technie::PhysicsCreator::QHull {
class Face;
}
// Forward declare root types
namespace Technie::PhysicsCreator::QHull {
class FaceList;
}
// Write type traits
MARK_REF_T(::Technie::PhysicsCreator::QHull::FaceList*);
DEFINE_IL2CPP_CLASS(::Technie::PhysicsCreator::QHull::FaceList*, "Technie.PhysicsCreator.QHull", "FaceList");
// Dependencies System.Object
namespace Technie::PhysicsCreator::QHull {
// Is value type: false
// CS Name: Technie.PhysicsCreator.QHull.FaceList
class CORDL_TYPE FaceList : public ::System::Object {
public:
// Declarations
/// @brief Field head, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_head, put=__cordl_internal_set_head)) ::Technie::PhysicsCreator::QHull::Face*  head;

/// @brief Field tail, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_tail, put=__cordl_internal_set_tail)) ::Technie::PhysicsCreator::QHull::Face*  tail;

static inline ::Technie::PhysicsCreator::QHull::FaceList* New_ctor() ;

constexpr ::Technie::PhysicsCreator::QHull::Face* const& __cordl_internal_get_head() const;

constexpr ::Technie::PhysicsCreator::QHull::Face*& __cordl_internal_get_head() ;

constexpr ::Technie::PhysicsCreator::QHull::Face* const& __cordl_internal_get_tail() const;

constexpr ::Technie::PhysicsCreator::QHull::Face*& __cordl_internal_get_tail() ;

constexpr void __cordl_internal_set_head(::Technie::PhysicsCreator::QHull::Face*  value) ;

constexpr void __cordl_internal_set_tail(::Technie::PhysicsCreator::QHull::Face*  value) ;

/// @brief Method .ctor, addr 0xadddd8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add, addr 0xadddcec, size 0x60, virtual false, abstract: false, final false
inline void add(::Technie::PhysicsCreator::QHull::Face*  vtx) ;

/// @brief Method clear, addr 0xadddd4c, size 0x28, virtual false, abstract: false, final false
inline void clear() ;

/// @brief Method first, addr 0xadddd74, size 0x8, virtual false, abstract: false, final false
inline ::Technie::PhysicsCreator::QHull::Face* first() ;

/// @brief Method isEmpty, addr 0xadddd7c, size 0x10, virtual false, abstract: false, final false
inline bool isEmpty() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FaceList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FaceList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FaceList(FaceList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FaceList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FaceList(FaceList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30537};

/// @brief Field head, offset: 0x10, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Face*  ___head;

/// @brief Field tail, offset: 0x18, size: 0x8, def value: None
 ::Technie::PhysicsCreator::QHull::Face*  ___tail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Technie::PhysicsCreator::QHull::FaceList, ___head) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Technie::PhysicsCreator::QHull::FaceList, ___tail) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Technie::PhysicsCreator::QHull::FaceList) == 0x20, "Size mismatch!");

} // namespace end def Technie::PhysicsCreator::QHull
