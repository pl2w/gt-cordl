#pragma once
// IWYU pragma private; include "GlobalNamespace/PageScroll_Page.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(PageScroll_Page)
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
struct PageScroll_Page;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PageScroll_Page);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PageScroll_Page, "", "PageScroll/Page");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PageScroll/Page
struct CORDL_TYPE PageScroll_Page {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PageScroll_Page() ;

// Ctor Parameters [CppParam { name: "toggle", ty: "::UnityW<::UnityEngine::UI::Toggle>", modifiers: "", def_value: None, comment: None }, CppParam { name: "container", ty: "::UnityW<::UnityEngine::RectTransform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "canvasGroup", ty: "::UnityW<::UnityEngine::CanvasGroup>", modifiers: "", def_value: None, comment: None }]
constexpr PageScroll_Page(::UnityW<::UnityEngine::UI::Toggle>  toggle, ::UnityW<::UnityEngine::RectTransform>  container, ::UnityW<::UnityEngine::CanvasGroup>  canvasGroup) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28226};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field toggle, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Toggle>  toggle;

/// @brief Field container, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  container;

/// @brief Field canvasGroup, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  canvasGroup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PageScroll_Page, toggle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll_Page, container) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PageScroll_Page, canvasGroup) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PageScroll_Page) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
