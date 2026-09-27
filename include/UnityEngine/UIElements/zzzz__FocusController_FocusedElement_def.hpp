#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusController_FocusedElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(FocusController_FocusedElement)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct FocusController_FocusedElement;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FocusController_FocusedElement);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FocusController_FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.FocusController/FocusedElement
struct CORDL_TYPE FocusController_FocusedElement {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FocusController_FocusedElement() ;

// Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FocusedElement", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }]
constexpr FocusController_FocusedElement(::UnityEngine::UIElements::VisualElement*  m_SubTreeRoot, ::UnityEngine::UIElements::VisualElement*  m_FocusedElement) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7744};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_SubTreeRoot, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  m_SubTreeRoot;

/// @brief Field m_FocusedElement, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  m_FocusedElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FocusController_FocusedElement, m_SubTreeRoot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FocusController_FocusedElement, m_FocusedElement) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FocusController_FocusedElement) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
