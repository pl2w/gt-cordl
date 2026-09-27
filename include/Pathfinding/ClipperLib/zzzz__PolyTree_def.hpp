#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/PolyTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/ClipperLib/zzzz__PolyNode_def.hpp"
CORDL_MODULE_EXPORT(PolyTree)
namespace Pathfinding::ClipperLib {
class PolyNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Pathfinding::ClipperLib {
class PolyTree;
}
// Write type traits
MARK_REF_T(::Pathfinding::ClipperLib::PolyTree*);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::PolyTree*, "Pathfinding.ClipperLib", "PolyTree");
// Dependencies Pathfinding.ClipperLib.PolyNode
namespace Pathfinding::ClipperLib {
// Is value type: false
// CS Name: Pathfinding.ClipperLib.PolyTree
class CORDL_TYPE PolyTree : public ::Pathfinding::ClipperLib::PolyNode {
public:
// Declarations
/// @brief Field m_AllPolys, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AllPolys, put=__cordl_internal_set_m_AllPolys)) ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  m_AllPolys;

/// @brief Method Clear, addr 0xa682e70, size 0xe8, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method Finalize, addr 0xa682dec, size 0x84, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Pathfinding::ClipperLib::PolyTree* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>* const& __cordl_internal_get_m_AllPolys() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*& __cordl_internal_get_m_AllPolys() ;

constexpr void __cordl_internal_set_m_AllPolys(::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  value) ;

/// @brief Method .ctor, addr 0xa682c8c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PolyTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PolyTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PolyTree(PolyTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PolyTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PolyTree(PolyTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31646};

/// @brief Field m_AllPolys, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::ClipperLib::PolyNode*>*  ___m_AllPolys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::PolyTree, ___m_AllPolys) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::PolyTree) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
