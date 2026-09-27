#pragma once
// IWYU pragma private; include "Oculus/Interaction/MaterialPropertyColor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MaterialPropertyColor)
// Forward declare root types
namespace Oculus::Interaction {
struct MaterialPropertyColor;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::MaterialPropertyColor);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MaterialPropertyColor, "Oculus.Interaction", "MaterialPropertyColor");
// Dependencies UnityEngine.Color
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.MaterialPropertyColor
struct CORDL_TYPE MaterialPropertyColor {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyColor() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr MaterialPropertyColor(::StringW  name, ::UnityEngine::Color  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15934};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// [ColorUsage(true, true)]
/// @brief Field value, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MaterialPropertyColor, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyColor, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MaterialPropertyColor) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction
