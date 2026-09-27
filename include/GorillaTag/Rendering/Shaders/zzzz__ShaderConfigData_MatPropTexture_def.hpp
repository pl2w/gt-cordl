#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_MatPropTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderConfigData_MatPropTexture)
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_MatPropTexture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_MatPropTexture);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_MatPropTexture, "GorillaTag.Rendering.Shaders", "ShaderConfigData/MatPropTexture");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/MatPropTexture
struct CORDL_TYPE ShaderConfigData_MatPropTexture {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_MatPropTexture() ;

// Ctor Parameters [CppParam { name: "textureName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "textureVal", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_MatPropTexture(::StringW  textureName, ::UnityW<::UnityEngine::Texture>  textureVal) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4823};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field textureName, offset: 0x0, size: 0x8, def value: None
 ::StringW  textureName;

/// @brief Field textureVal, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture>  textureVal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropTexture, textureName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderConfigData_MatPropTexture, textureVal) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_MatPropTexture) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
