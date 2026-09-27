#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/CellTree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CellTree)
namespace Photon::Pun::UtilityScripts {
class CellTreeNode;
}
// Forward declare root types
namespace Photon::Pun::UtilityScripts {
class CellTree;
}
// Write type traits
MARK_REF_T(::Photon::Pun::UtilityScripts::CellTree*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::UtilityScripts::CellTree*, "Photon.Pun.UtilityScripts", "CellTree");
// Dependencies System.Object
namespace Photon::Pun::UtilityScripts {
// Is value type: false
// CS Name: Photon.Pun.UtilityScripts.CellTree
class CORDL_TYPE CellTree : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_RootNode, put=set_RootNode)) ::Photon::Pun::UtilityScripts::CellTreeNode*  RootNode;

/// @brief Field <RootNode>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__RootNode_k__BackingField, put=__cordl_internal_set__RootNode_k__BackingField)) ::Photon::Pun::UtilityScripts::CellTreeNode*  _RootNode_k__BackingField;

static inline ::Photon::Pun::UtilityScripts::CellTree* New_ctor() ;

static inline ::Photon::Pun::UtilityScripts::CellTree* New_ctor(::Photon::Pun::UtilityScripts::CellTreeNode*  root) ;

constexpr ::Photon::Pun::UtilityScripts::CellTreeNode* const& __cordl_internal_get__RootNode_k__BackingField() const;

constexpr ::Photon::Pun::UtilityScripts::CellTreeNode*& __cordl_internal_get__RootNode_k__BackingField() ;

constexpr void __cordl_internal_set__RootNode_k__BackingField(::Photon::Pun::UtilityScripts::CellTreeNode*  value) ;

/// @brief Method .ctor, addr 0xa72fd18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa72f690, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Photon::Pun::UtilityScripts::CellTreeNode*  root) ;

/// [CompilerGenerated]
/// @brief Method get_RootNode, addr 0xa72fd08, size 0x8, virtual false, abstract: false, final false
inline ::Photon::Pun::UtilityScripts::CellTreeNode* get_RootNode() ;

/// [CompilerGenerated]
/// @brief Method set_RootNode, addr 0xa72fd10, size 0x8, virtual false, abstract: false, final false
inline void set_RootNode(::Photon::Pun::UtilityScripts::CellTreeNode*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CellTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CellTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CellTree(CellTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CellTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CellTree(CellTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31201};

/// [CompilerGenerated]
/// @brief Field <RootNode>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Photon::Pun::UtilityScripts::CellTreeNode*  ____RootNode_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Photon::Pun::UtilityScripts::CellTree, ____RootNode_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Photon::Pun::UtilityScripts::CellTree) == 0x18, "Size mismatch!");

} // namespace end def Photon::Pun::UtilityScripts
