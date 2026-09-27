#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigateFocusRing_FocusableHierarchyTraversal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavigateFocusRing_FocusableHierarchyTraversal)
namespace UnityEngine::UIElements {
class NavigateFocusRing_ChangeDirection;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
struct NavigateFocusRing_FocusableHierarchyTraversal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal, "UnityEngine.UIElements", "NavigateFocusRing/FocusableHierarchyTraversal");
// Dependencies UnityEngine.Rect
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.NavigateFocusRing/FocusableHierarchyTraversal
struct CORDL_TYPE NavigateFocusRing_FocusableHierarchyTraversal {
public:
// Declarations
/// @brief Method GetBestOverall, addr 0xb8ad584, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* GetBestOverall(::UnityEngine::UIElements::VisualElement*  candidate, ::UnityEngine::UIElements::VisualElement*  bestSoFar) ;

/// @brief Method Order, addr 0xb8adb80, size 0x124, virtual false, abstract: false, final false
inline int32_t Order(::UnityEngine::UIElements::VisualElement*  a, ::UnityEngine::UIElements::VisualElement*  b) ;

/// @brief Method StrictOrder, addr 0xb8adf68, size 0xb8, virtual false, abstract: false, final false
inline int32_t StrictOrder(::UnityEngine::UIElements::VisualElement*  a, ::UnityEngine::UIElements::VisualElement*  b) ;

/// @brief Method StrictOrder, addr 0xb8adca4, size 0x1b4, virtual false, abstract: false, final false
inline int32_t StrictOrder(::UnityEngine::Rect  ra, ::UnityEngine::Rect  rb) ;

/// @brief Method TieBreaker, addr 0xb8ade58, size 0x110, virtual false, abstract: false, final false
inline int32_t TieBreaker(::UnityEngine::Rect  ra, ::UnityEngine::Rect  rb) ;

/// @brief Method ValidateElement, addr 0xb8adaa4, size 0xdc, virtual false, abstract: false, final false
inline bool ValidateElement(::UnityEngine::UIElements::VisualElement*  v) ;

/// @brief Method ValidateHierarchyTraversal, addr 0xb8ad9c8, size 0xdc, virtual false, abstract: false, final false
inline bool ValidateHierarchyTraversal(::UnityEngine::UIElements::VisualElement*  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavigateFocusRing_FocusableHierarchyTraversal() ;

// Ctor Parameters [CppParam { name: "root", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentFocusable", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "validRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstPass", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*", modifiers: "", def_value: None, comment: None }]
constexpr NavigateFocusRing_FocusableHierarchyTraversal(::UnityEngine::UIElements::VisualElement*  root, ::UnityEngine::UIElements::VisualElement*  currentFocusable, ::UnityEngine::Rect  validRect, bool  firstPass, ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7763};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field root, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  root;

/// @brief Field currentFocusable, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  currentFocusable;

/// @brief Field validRect, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rect  validRect;

/// @brief Field firstPass, offset: 0x20, size: 0x1, def value: None
 bool  firstPass;

/// @brief Field direction, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::NavigateFocusRing_ChangeDirection*  direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal, root) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal, currentFocusable) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal, validRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal, firstPass) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal, direction) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NavigateFocusRing_FocusableHierarchyTraversal) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
