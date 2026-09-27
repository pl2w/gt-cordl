#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeManager_ElementInsertionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RenderTreeManager_ElementInsertionData)
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderTreeManager_ElementInsertionData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderTreeManager_ElementInsertionData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderTreeManager_ElementInsertionData, "UnityEngine.UIElements.UIR", "RenderTreeManager/ElementInsertionData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeManager/ElementInsertionData
struct CORDL_TYPE RenderTreeManager_ElementInsertionData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RenderTreeManager_ElementInsertionData() ;

// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "canceled", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RenderTreeManager_ElementInsertionData(::UnityEngine::UIElements::VisualElement*  element, bool  canceled) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8570};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field element, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  element;

/// @brief Field canceled, offset: 0x8, size: 0x1, def value: None
 bool  canceled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderTreeManager_ElementInsertionData, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderTreeManager_ElementInsertionData, canceled) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderTreeManager_ElementInsertionData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
