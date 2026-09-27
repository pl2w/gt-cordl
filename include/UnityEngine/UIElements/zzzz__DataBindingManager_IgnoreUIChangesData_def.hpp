#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DataBindingManager_IgnoreUIChangesData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DataBindingManager_IgnoreUIChangesData)
namespace UnityEngine::UIElements {
struct BindingId;
}
namespace UnityEngine::UIElements {
class Binding;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace GlobalNamespace {
struct DataBindingManager_IgnoreUIChangesData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData, "UnityEngine.UIElements", "DataBindingManager/IgnoreUIChangesData");
// Dependencies UnityEngine.UIElements.BindingId
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.DataBindingManager/IgnoreUIChangesData
struct CORDL_TYPE DataBindingManager_IgnoreUIChangesData {
public:
// Declarations
/// @brief Method ShouldIgnoreChange, addr 0xb729ec8, size 0x9c, virtual false, abstract: false, final false
inline bool ShouldIgnoreChange(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::Binding*  b, ::UnityEngine::UIElements::BindingId  id) ;

// Ctor Parameters []
// @brief default ctor
constexpr DataBindingManager_IgnoreUIChangesData() ;

// Ctor Parameters [CppParam { name: "element", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None, comment: None }, CppParam { name: "binding", ty: "::UnityEngine::UIElements::Binding*", modifiers: "", def_value: None, comment: None }, CppParam { name: "bindingId", ty: "::UnityEngine::UIElements::BindingId", modifiers: "", def_value: None, comment: None }]
constexpr DataBindingManager_IgnoreUIChangesData(::UnityEngine::UIElements::VisualElement*  element, ::UnityEngine::UIElements::Binding*  binding, ::UnityEngine::UIElements::BindingId  bindingId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7208};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field element, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  element;

/// @brief Field binding, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::Binding*  binding;

/// @brief Field bindingId, offset: 0x10, size: 0x98, def value: None
 ::UnityEngine::UIElements::BindingId  bindingId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData, element) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData, binding) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData, bindingId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DataBindingManager_IgnoreUIChangesData) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
