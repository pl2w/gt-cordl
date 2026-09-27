#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeUINode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUpgradeType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreeUINode)
namespace GlobalNamespace {
template<typename T>
class GraphNode_1;
}
namespace GlobalNamespace {
class ObjectHierarchyFlattener;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
class SITechTreeStation;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SITechTreeUINode;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITechTreeUINode*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeUINode*, "", "SITechTreeUINode");
// Dependencies SIUpgradeType, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeUINode
class CORDL_TYPE SITechTreeUINode : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Children)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  Children;

 __declspec(property(get=get_IsConfigured)) bool  IsConfigured;

 __declspec(property(get=get_Parents)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  Parents;

 __declspec(property(get=get_UpgradeLines)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  UpgradeLines;

/// @brief Field <Children>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__Children_k__BackingField, put=__cordl_internal_set__Children_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  _Children_k__BackingField;

/// @brief Field <Parents>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__Parents_k__BackingField, put=__cordl_internal_set__Parents_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  _Parents_k__BackingField;

/// @brief Field <UpgradeLines>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpgradeLines_k__BackingField, put=__cordl_internal_set__UpgradeLines_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  _UpgradeLines_k__BackingField;

/// @brief Field _node, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__node, put=__cordl_internal_set__node)) ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  _node;

/// @brief Field blackMat, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_blackMat, put=__cordl_internal_set_blackMat)) ::UnityW<::UnityEngine::Material>  blackMat;

/// @brief Field button, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_button, put=__cordl_internal_set_button)) ::UnityW<::GlobalNamespace::SITouchscreenButton>  button;

/// @brief Field circle, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_circle, put=__cordl_internal_set_circle)) ::UnityW<::UnityEngine::MeshRenderer>  circle;

/// @brief Field greenMat, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_greenMat, put=__cordl_internal_set_greenMat)) ::UnityW<::UnityEngine::Material>  greenMat;

/// @brief Field imageFlattener, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_imageFlattener, put=__cordl_internal_set_imageFlattener)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  imageFlattener;

/// @brief Field nodeNickName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeNickName, put=__cordl_internal_set_nodeNickName)) ::UnityW<::TMPro::TextMeshProUGUI>  nodeNickName;

/// @brief Field redMat, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_redMat, put=__cordl_internal_set_redMat)) ::UnityW<::UnityEngine::Material>  redMat;

/// @brief Field textFlattener, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFlattener, put=__cordl_internal_set_textFlattener)) ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  textFlattener;

/// @brief Field triangle, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_triangle, put=__cordl_internal_set_triangle)) ::UnityW<::UnityEngine::MeshRenderer>  triangle;

/// @brief Field upgradeType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_upgradeType, put=__cordl_internal_set_upgradeType)) ::GlobalNamespace::SIUpgradeType  upgradeType;

/// @brief Method AdjustPosition, addr 0x5af4f70, size 0x188, virtual false, abstract: false, final false
inline void AdjustPosition(::UnityEngine::Vector3  positionOffset) ;

/// @brief Method GetMaxWordLength, addr 0x5af4cb0, size 0x80, virtual false, abstract: false, final false
inline int32_t GetMaxWordLength(::StringW  text) ;

static inline ::GlobalNamespace::SITechTreeUINode* New_ctor() ;

/// @brief Method SetGadgetUnlockNode, addr 0x5af4d30, size 0x30, virtual false, abstract: false, final false
inline void SetGadgetUnlockNode(bool  isUnlockNode) ;

/// @brief Method SetNodeLockStateColor, addr 0x5af4d60, size 0x210, virtual false, abstract: false, final false
inline void SetNodeLockStateColor(::UnityEngine::Color  color) ;

/// @brief Method SetTechTreeNode, addr 0x5af49d4, size 0x2dc, virtual false, abstract: false, final false
inline void SetTechTreeNode(::GlobalNamespace::SITechTreeStation*  techTreeStation, ::GlobalNamespace::SIUpgradeType  nodeUpgradeType) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* const& __cordl_internal_get__Children_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*& __cordl_internal_get__Children_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* const& __cordl_internal_get__Parents_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*& __cordl_internal_get__Parents_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* const& __cordl_internal_get__UpgradeLines_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*& __cordl_internal_get__UpgradeLines_k__BackingField() ;

constexpr ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>* const& __cordl_internal_get__node() const;

constexpr ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*& __cordl_internal_get__node() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_blackMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_blackMat() ;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton> const& __cordl_internal_get_button() const;

constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton>& __cordl_internal_get_button() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_circle() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_circle() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_greenMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_greenMat() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_imageFlattener() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_imageFlattener() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_nodeNickName() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_nodeNickName() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_redMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_redMat() ;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener> const& __cordl_internal_get_textFlattener() const;

constexpr ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>& __cordl_internal_get_textFlattener() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_triangle() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_triangle() ;

constexpr ::GlobalNamespace::SIUpgradeType const& __cordl_internal_get_upgradeType() const;

constexpr ::GlobalNamespace::SIUpgradeType& __cordl_internal_get_upgradeType() ;

constexpr void __cordl_internal_set__Children_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  value) ;

constexpr void __cordl_internal_set__Parents_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  value) ;

constexpr void __cordl_internal_set__UpgradeLines_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  value) ;

constexpr void __cordl_internal_set__node(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  value) ;

constexpr void __cordl_internal_set_blackMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_button(::UnityW<::GlobalNamespace::SITouchscreenButton>  value) ;

constexpr void __cordl_internal_set_circle(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_greenMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_imageFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

constexpr void __cordl_internal_set_nodeNickName(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_redMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_textFlattener(::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  value) ;

constexpr void __cordl_internal_set_triangle(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_upgradeType(::GlobalNamespace::SIUpgradeType  value) ;

/// @brief Method .ctor, addr 0x5af50f8, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Children, addr 0x5af49bc, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* get_Children() ;

/// @brief Method get_IsConfigured, addr 0x5af49c4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsConfigured() ;

/// [CompilerGenerated]
/// @brief Method get_Parents, addr 0x5af49b4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* get_Parents() ;

/// [CompilerGenerated]
/// @brief Method get_UpgradeLines, addr 0x5af49ac, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* get_UpgradeLines() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeUINode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeUINode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeUINode(SITechTreeUINode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeUINode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeUINode(SITechTreeUINode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{368};

/// @brief Field upgradeType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::SIUpgradeType  ___upgradeType;

/// @brief Field nodeNickName, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___nodeNickName;

/// @brief Field circle, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___circle;

/// @brief Field triangle, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___triangle;

/// @brief Field button, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITouchscreenButton>  ___button;

/// @brief Field greenMat, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___greenMat;

/// @brief Field redMat, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___redMat;

/// @brief Field blackMat, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___blackMat;

/// @brief Field imageFlattener, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___imageFlattener;

/// @brief Field textFlattener, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObjectHierarchyFlattener>  ___textFlattener;

/// [CompilerGenerated]
/// @brief Field <UpgradeLines>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*  ____UpgradeLines_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Parents>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  ____Parents_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Children>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  ____Children_k__BackingField;

/// @brief Field _node, offset: 0x88, size: 0x8, def value: None
 ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  ____node;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___upgradeType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___nodeNickName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___circle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___triangle) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___button) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___greenMat) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___redMat) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___blackMat) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___imageFlattener) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ___textFlattener) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ____UpgradeLines_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ____Parents_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ____Children_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUINode, ____node) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeUINode) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
