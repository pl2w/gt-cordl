#pragma once
// IWYU pragma private; include "Oculus/Interaction/MaterialPropertyFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MaterialPropertyFloat)
// Forward declare root types
namespace Oculus::Interaction {
struct MaterialPropertyFloat;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::MaterialPropertyFloat);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::MaterialPropertyFloat, "Oculus.Interaction", "MaterialPropertyFloat");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.MaterialPropertyFloat
struct CORDL_TYPE MaterialPropertyFloat {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MaterialPropertyFloat() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MaterialPropertyFloat(::StringW  name, float_t  value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15935};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field value, offset: 0x8, size: 0x4, def value: None
 float_t  value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::MaterialPropertyFloat, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::MaterialPropertyFloat, value) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::MaterialPropertyFloat) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
