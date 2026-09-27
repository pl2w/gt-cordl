#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropInt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderConfigData_MatPropInt)
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_MatPropInt;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_MatPropInt);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_MatPropInt, "GorillaTag.Rendering.Shaders", "ShaderConfigData/MatPropInt");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/MatPropInt
struct CORDL_TYPE ShaderConfigData_MatPropInt {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_MatPropInt() ;

// Ctor Parameters [CppParam { name: "intName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "intVal", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_MatPropInt(::StringW  intName, int32_t  intVal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4819};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field intName, offset: 0x0, size: 0x8, def value: None
 ::StringW  intName;

/// @brief Field intVal, offset: 0x8, size: 0x4, def value: None
 int32_t  intVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropInt, intName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropInt, intVal) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_MatPropInt) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
