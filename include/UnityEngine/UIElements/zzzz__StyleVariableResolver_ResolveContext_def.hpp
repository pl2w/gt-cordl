#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver_ResolveContext.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleValueHandle_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(StyleVariableResolver_ResolveContext)
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace GlobalNamespace {
struct StyleVariableResolver_ResolveContext;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleVariableResolver_ResolveContext);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleVariableResolver_ResolveContext, "UnityEngine.UIElements", "StyleVariableResolver/ResolveContext");
// Dependencies UnityEngine.UIElements.StyleValueHandle
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleVariableResolver/ResolveContext
struct CORDL_TYPE StyleVariableResolver_ResolveContext {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr StyleVariableResolver_ResolveContext() ;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None, comment: None }, CppParam { name: "handles", ty: "::ArrayW<::UnityEngine::UIElements::StyleValueHandle>", modifiers: "", def_value: None, comment: None }]
constexpr StyleVariableResolver_ResolveContext(::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet, ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet;

/// @brief Field handles, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleValueHandle>  handles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleVariableResolver_ResolveContext, sheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StyleVariableResolver_ResolveContext, handles) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleVariableResolver_ResolveContext) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
