#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_ShaderConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropFloat_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropInt_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropMatrix_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropTexture_def.hpp"
#include "GorillaTag/Rendering/Shaders/zzzz__ShaderConfigData_MatPropVector_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderConfigData_ShaderConfig)
namespace GlobalNamespace {
struct ShaderConfigData_MatPropFloat;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropInt;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropMatrix;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropTexture;
}
namespace GlobalNamespace {
struct ShaderConfigData_MatPropVector;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_ShaderConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_ShaderConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_ShaderConfig, "GorillaTag.Rendering.Shaders", "ShaderConfigData/ShaderConfig");
// Dependencies GorillaTag.Rendering.Shaders.ShaderConfigData::MatPropFloat, GorillaTag.Rendering.Shaders.ShaderConfigData::MatPropInt, GorillaTag.Rendering.Shaders.ShaderConfigData::MatPropMatrix, GorillaTag.Rendering.Shaders.ShaderConfigData::MatPropTexture, GorillaTag.Rendering.Shaders.ShaderConfigData::MatPropVector
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/ShaderConfig
struct CORDL_TYPE ShaderConfigData_ShaderConfig {
public:
// Declarations
/// @brief Method .ctor, addr 0x5d5fcd4, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::StringW  shadName, ::UnityEngine::Material*  fMat, ::ArrayW<::StringW>  intNames, ::ArrayW<int32_t>  intVals, ::ArrayW<::StringW>  floatNames, ::ArrayW<float_t>  floatVals, ::ArrayW<::StringW>  matrixNames, ::ArrayW<::UnityEngine::Matrix4x4>  matrixVals, ::ArrayW<::StringW>  vectorNames, ::ArrayW<::UnityEngine::Vector4>  vectorVals, ::ArrayW<::StringW>  textureNames, ::ArrayW<::UnityEngine::Texture*>  textureVals) ;

// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_ShaderConfig() ;

// Ctor Parameters [CppParam { name: "shaderName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ints", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt>", modifiers: "", def_value: None, comment: None }, CppParam { name: "floats", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat>", modifiers: "", def_value: None, comment: None }, CppParam { name: "matrices", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix>", modifiers: "", def_value: None, comment: None }, CppParam { name: "vectors", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector>", modifiers: "", def_value: None, comment: None }, CppParam { name: "textures", ty: "::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture>", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_ShaderConfig(::StringW  shaderName, ::UnityW<::UnityEngine::Material>  firstMat, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt>  ints, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat>  floats, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix>  matrices, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector>  vectors, ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture>  textures) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4818};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field shaderName, offset: 0x0, size: 0x8, def value: None
 ::StringW  shaderName;

/// @brief Field firstMat, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  firstMat;

/// @brief Field ints, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropInt>  ints;

/// @brief Field floats, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropFloat>  floats;

/// @brief Field matrices, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropMatrix>  matrices;

/// @brief Field vectors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropVector>  vectors;

/// @brief Field textures, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ShaderConfigData_MatPropTexture>  textures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, shaderName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, firstMat) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, ints) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, floats) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, matrices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, vectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_ShaderConfig, textures) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_ShaderConfig) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
