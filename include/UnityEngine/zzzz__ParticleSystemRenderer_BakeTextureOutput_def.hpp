#pragma once
// IWYU pragma private; include "UnityEngine/ParticleSystemRenderer_BakeTextureOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ParticleSystemRenderer_BakeTextureOutput)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct ParticleSystemRenderer_BakeTextureOutput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ParticleSystemRenderer_BakeTextureOutput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ParticleSystemRenderer_BakeTextureOutput, "UnityEngine", "ParticleSystemRenderer/BakeTextureOutput");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ParticleSystemRenderer/BakeTextureOutput
struct CORDL_TYPE ParticleSystemRenderer_BakeTextureOutput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ParticleSystemRenderer_BakeTextureOutput() ;

// Ctor Parameters [CppParam { name: "vertices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "indices", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }]
constexpr ParticleSystemRenderer_BakeTextureOutput(::UnityW<::UnityEngine::Texture2D>  vertices, ::UnityW<::UnityEngine::Texture2D>  indices) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30852};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [NativeName("first")]
/// @brief Field vertices, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  vertices;

/// [NativeName("second")]
/// @brief Field indices, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  indices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ParticleSystemRenderer_BakeTextureOutput, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ParticleSystemRenderer_BakeTextureOutput, indices) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ParticleSystemRenderer_BakeTextureOutput) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
