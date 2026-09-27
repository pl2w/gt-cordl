#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugUI_Widget_NameAndTooltip.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DebugUI_Widget_NameAndTooltip)
// Forward declare root types
namespace GlobalNamespace {
struct Widget_DebugUI_NameAndTooltip;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Widget_DebugUI_NameAndTooltip);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Widget_DebugUI_NameAndTooltip, "UnityEngine.Rendering", "DebugUI/Widget/NameAndTooltip");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.DebugUI/Widget/NameAndTooltip
struct CORDL_TYPE Widget_DebugUI_NameAndTooltip {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Widget_DebugUI_NameAndTooltip() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "tooltip", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr Widget_DebugUI_NameAndTooltip(::StringW  name, ::StringW  tooltip) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field tooltip, offset: 0x8, size: 0x8, def value: None
 ::StringW  tooltip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Widget_DebugUI_NameAndTooltip, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Widget_DebugUI_NameAndTooltip, tooltip) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Widget_DebugUI_NameAndTooltip) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
