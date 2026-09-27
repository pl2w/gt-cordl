#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ShaderGroup)
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
struct ShaderGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ShaderGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderGroup, "", "ShaderGroup");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ShaderGroup
struct CORDL_TYPE ShaderGroup {
public:
// Declarations
/// @brief Method .ctor, addr 0x5b3fd10, size 0x60, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  material, ::UnityEngine::Shader*  original, ::UnityEngine::Shader*  gameplay, ::UnityEngine::Shader*  baking) ;

// Ctor Parameters []
// @brief default ctor
constexpr ShaderGroup() ;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "originalShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None, comment: None }, CppParam { name: "gameplayShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None, comment: None }, CppParam { name: "bakingShader", ty: "::UnityW<::UnityEngine::Shader>", modifiers: "", def_value: None, comment: None }]
constexpr ShaderGroup(::UnityW<::UnityEngine::Material>  material, ::UnityW<::UnityEngine::Shader>  originalShader, ::UnityW<::UnityEngine::Shader>  gameplayShader, ::UnityW<::UnityEngine::Shader>  bakingShader) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3714};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field material, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field originalShader, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  originalShader;

/// @brief Field gameplayShader, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  gameplayShader;

/// @brief Field bakingShader, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  bakingShader;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ShaderGroup, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderGroup, originalShader) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderGroup, gameplayShader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ShaderGroup, bakingShader) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ShaderGroup) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
