#pragma once
// IWYU pragma private; include "GlobalNamespace/SITechTreeUIPage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SITechTreePageId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SITechTreeUIPage)
namespace GlobalNamespace {
template<typename T>
class GraphNode_1;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
class SITechTreeNode;
}
namespace GlobalNamespace {
class SITechTreePage;
}
namespace GlobalNamespace {
class SITechTreeStation;
}
namespace GlobalNamespace {
class SITechTreeUINode;
}
namespace GlobalNamespace {
struct SITechTreeUIPage___c__DisplayClass5_0;
}
namespace GlobalNamespace {
struct SITechTreeUIPage___c__DisplayClass5_1;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SITechTreeUIPage;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SITechTreeUIPage*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SITechTreeUIPage*, "", "SITechTreeUIPage");
// Dependencies SITechTreePageId, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SITechTreeUIPage
class CORDL_TYPE SITechTreeUIPage : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass5_0 = ::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0;

using __c__DisplayClass5_1 = ::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1;

/// @brief Field _pageNodes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__pageNodes, put=__cordl_internal_set__pageNodes)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  _pageNodes;

/// @brief Field id, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::GlobalNamespace::SITechTreePageId  id;

/// @brief Field nodeContainer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeContainer, put=__cordl_internal_set_nodeContainer)) ::UnityW<::UnityEngine::RectTransform>  nodeContainer;

/// @brief Field nodePrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodePrefab, put=__cordl_internal_set_nodePrefab)) ::UnityW<::GlobalNamespace::SITechTreeUINode>  nodePrefab;

/// @brief Field upgradeLinePrefab, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_upgradeLinePrefab, put=__cordl_internal_set_upgradeLinePrefab)) ::UnityW<::UnityEngine::UI::Image>  upgradeLinePrefab;

/// @brief Method Configure, addr 0x5af1454, size 0x380, virtual false, abstract: false, final false
inline void Configure(::GlobalNamespace::SITechTreeStation*  techTreeStation, ::GlobalNamespace::SITechTreePage*  treePage, ::UnityEngine::Transform*  imageTarget, ::UnityEngine::Transform*  textTarget) ;

/// @brief Method GetUINode, addr 0x5af5e78, size 0x14c, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SITechTreeUINode> GetUINode(::GlobalNamespace::SIUpgradeType  upgradeType) ;

static inline ::GlobalNamespace::SITechTreeUIPage* New_ctor() ;

/// @brief Method PopulateDefaultNodeData, addr 0x5af41fc, size 0x13c, virtual false, abstract: false, final false
inline void PopulateDefaultNodeData() ;

/// @brief Method PopulatePlayerNodeData, addr 0x5af4338, size 0x19c, virtual false, abstract: false, final false
inline void PopulatePlayerNodeData(::GlobalNamespace::SIPlayer*  player) ;

/// [CompilerGenerated]
/// @brief Method <Configure>g__AddNodes|5_0, addr 0x5af51f8, size 0x778, virtual false, abstract: false, final false
inline void _Configure_g__AddNodes_5_0(::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  parent, ::GlobalNamespace::GraphNode_1<::GlobalNamespace::SITechTreeNode*>*  node, ::UnityEngine::Vector3  position, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <Configure>g__AddUpgradeLines|5_1, addr 0x5af5970, size 0x508, virtual false, abstract: false, final false
inline void _Configure_g__AddUpgradeLines_5_1(::GlobalNamespace::SITechTreeUINode*  uiNode, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <Configure>g__GetOrInstantiateUINode|5_2, addr 0x5af604c, size 0xcc, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SITechTreeUINode> _Configure_g__GetOrInstantiateUINode_5_2(::GlobalNamespace::SIUpgradeType  upgradeType, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <Configure>g__GetSpacing|5_3, addr 0x5af6118, size 0xc0, virtual false, abstract: false, final false
static inline float_t _Configure_g__GetSpacing_5_3(int32_t  index, int32_t  childCount, ::by_ref<::GlobalNamespace::SITechTreeUIPage___c__DisplayClass5_1>  _cordl_fixed_empty_name_whitespace) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>* const& __cordl_internal_get__pageNodes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*& __cordl_internal_get__pageNodes() ;

constexpr ::GlobalNamespace::SITechTreePageId const& __cordl_internal_get_id() const;

constexpr ::GlobalNamespace::SITechTreePageId& __cordl_internal_get_id() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_nodeContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_nodeContainer() ;

constexpr ::UnityW<::GlobalNamespace::SITechTreeUINode> const& __cordl_internal_get_nodePrefab() const;

constexpr ::UnityW<::GlobalNamespace::SITechTreeUINode>& __cordl_internal_get_nodePrefab() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_upgradeLinePrefab() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_upgradeLinePrefab() ;

constexpr void __cordl_internal_set__pageNodes(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  value) ;

constexpr void __cordl_internal_set_id(::GlobalNamespace::SITechTreePageId  value) ;

constexpr void __cordl_internal_set_nodeContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_nodePrefab(::UnityW<::GlobalNamespace::SITechTreeUINode>  value) ;

constexpr void __cordl_internal_set_upgradeLinePrefab(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x5af5fc4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SITechTreeUIPage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeUIPage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SITechTreeUIPage(SITechTreeUIPage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SITechTreeUIPage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SITechTreeUIPage(SITechTreeUIPage const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{371};

/// [SerializeField]
/// @brief Field nodePrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SITechTreeUINode>  ___nodePrefab;

/// [SerializeField]
/// @brief Field upgradeLinePrefab, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___upgradeLinePrefab;

/// [SerializeField]
/// @brief Field nodeContainer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___nodeContainer;

/// @brief Field id, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::SITechTreePageId  ___id;

/// @brief Field _pageNodes, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITechTreeUINode>>*  ____pageNodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage, ___nodePrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage, ___upgradeLinePrefab) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage, ___nodeContainer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage, ___id) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SITechTreeUIPage, ____pageNodes) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SITechTreeUIPage) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
