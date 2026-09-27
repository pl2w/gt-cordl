#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropFloat.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderConfigData_MatPropFloat)
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_MatPropFloat;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_MatPropFloat);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_MatPropFloat, "GorillaTag.Rendering.Shaders", "ShaderConfigData/MatPropFloat");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/MatPropFloat
struct CORDL_TYPE ShaderConfigData_MatPropFloat {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_MatPropFloat() ;

// Ctor Parameters [CppParam { name: "floatName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "floatVal", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_MatPropFloat(::StringW  floatName, float_t  floatVal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4820};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field floatName, offset: 0x0, size: 0x8, def value: None
 ::StringW  floatName;

/// @brief Field floatVal, offset: 0x8, size: 0x4, def value: None
 float_t  floatVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropFloat, floatName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropFloat, floatVal) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_MatPropFloat) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
