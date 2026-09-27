#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TreeViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseTreeViewController_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TreeViewController)
namespace UnityEngine::UIElements {
class TreeView;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TreeViewController;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::TreeViewController*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::TreeViewController*, "UnityEngine.UIElements", "TreeViewController");
// Dependencies UnityEngine.UIElements.BaseTreeViewController
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TreeViewController
class CORDL_TYPE TreeViewController : public ::UnityEngine::UIElements::BaseTreeViewController {
public:
// Declarations
 __declspec(property(get=get_treeView)) ::UnityEngine::UIElements::TreeView*  treeView;

/// @brief Method BindItem, addr 0xb73b1fc, size 0x188, virtual true, abstract: false, final false
inline void BindItem(::UnityEngine::UIElements::VisualElement*  element, int32_t  index) ;

/// @brief Method DestroyItem, addr 0xb73b3d4, size 0x3c, virtual true, abstract: false, final false
inline void DestroyItem(::UnityEngine::UIElements::VisualElement*  element) ;

/// @brief Method MakeItem, addr 0xb73b10c, size 0xf0, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* MakeItem() ;

static inline ::UnityEngine::UIElements::TreeViewController* New_ctor() ;

/// @brief Method UnbindItem, addr 0xb73b384, size 0x50, virtual true, abstract: false, final false
inline void UnbindItem(::UnityEngine::UIElements::VisualElement*  element, int32_t  index) ;

/// @brief Method .ctor, addr 0xb73b410, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_treeView, addr 0xb73b090, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::TreeView* get_treeView() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TreeViewController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TreeViewController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TreeViewController(TreeViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TreeViewController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TreeViewController(TreeViewController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7246};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::TreeViewController) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
