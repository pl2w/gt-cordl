#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/Shaders/ShaderConfigData_RenderersForShaderWithSameProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderConfigData_RenderersForShaderWithSameProperties)
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShaderConfigData_RenderersForShaderWithSameProperties;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderConfigData_RenderersForShaderWithSameProperties);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderConfigData_RenderersForShaderWithSameProperties, "GorillaTag.Rendering.Shaders", "ShaderConfigData/RenderersForShaderWithSameProperties");
// Dependencies UnityEngine.MeshRenderer
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.Shaders.ShaderConfigData/RenderersForShaderWithSameProperties
struct CORDL_TYPE ShaderConfigData_RenderersForShaderWithSameProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ShaderConfigData_RenderersForShaderWithSameProperties() ;

// Ctor Parameters [CppParam { name: "renderers", ty: "::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>", modifiers: "", def_value: None, comment: None }]
constexpr ShaderConfigData_RenderersForShaderWithSameProperties(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  renderers) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4824};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field renderers, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  renderers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderConfigData_RenderersForShaderWithSameProperties, renderers) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderConfigData_RenderersForShaderWithSameProperties) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
