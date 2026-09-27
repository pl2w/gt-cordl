#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropMatrix.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderConfigData_MatPropMatrix)
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_MatPropMatrix;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_MatPropMatrix);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_MatPropMatrix, "GorillaTag.Rendering.Shaders", "ShaderConfigData/MatPropMatrix");
// Dependencies UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/MatPropMatrix
struct CORDL_TYPE ShaderConfigData_MatPropMatrix {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_MatPropMatrix() ;

// Ctor Parameters [CppParam { name: "matrixName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrixVal", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_MatPropMatrix(::StringW  matrixName, ::UnityEngine::Matrix4x4  matrixVal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4821};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field matrixName, offset: 0x0, size: 0x8, def value: None
 ::StringW  matrixName;

/// @brief Field matrixVal, offset: 0x8, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  matrixVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropMatrix, matrixName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropMatrix, matrixVal) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_MatPropMatrix) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
