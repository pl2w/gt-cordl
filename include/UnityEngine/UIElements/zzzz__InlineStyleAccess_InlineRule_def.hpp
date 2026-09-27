#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/InlineStyleAccess_InlineRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__StylePropertyId_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(InlineStyleAccess_InlineRule)
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
// Forward declare root types
namespace GlobalNamespace {
struct InlineStyleAccess_InlineRule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InlineStyleAccess_InlineRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InlineStyleAccess_InlineRule, "UnityEngine.UIElements", "InlineStyleAccess/InlineRule");
// Dependencies UnityEngine.UIElements.StyleSheets.StylePropertyId
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.InlineStyleAccess/InlineRule
struct CORDL_TYPE InlineStyleAccess_InlineRule {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr InlineStyleAccess_InlineRule() ;

// Ctor Parameters [CppParam { name: "sheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None, comment: None }, CppParam { name: "rule", ty: "::UnityEngine::UIElements::StyleRule*", modifiers: "", def_value: None, comment: None }, CppParam { name: "propertyIds", ty: "::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None, comment: None }]
constexpr InlineStyleAccess_InlineRule(::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet, ::UnityEngine::UIElements::StyleRule*  rule, ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>  propertyIds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7918};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field sheet, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  sheet;

/// @brief Field rule, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::UIElements::StyleRule*  rule;

/// @brief Field propertyIds, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::StylePropertyId>  propertyIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InlineStyleAccess_InlineRule, sheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InlineStyleAccess_InlineRule, rule) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::InlineStyleAccess_InlineRule, propertyIds) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InlineStyleAccess_InlineRule) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
