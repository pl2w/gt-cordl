#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerColoredCosmetic_ColoringRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerColoredCosmetic_ColoringRule)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct PlayerColoredCosmetic_ColoringRule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, "", "PlayerColoredCosmetic/ColoringRule");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerColoredCosmetic/ColoringRule
struct CORDL_TYPE PlayerColoredCosmetic_ColoringRule {
public:
// Declarations
/// @brief Method Apply, addr 0x578f2e0, size 0x24c, virtual false, abstract: false, final false
inline void Apply(::UnityEngine::Color  color, bool  dontCreateMaterialInstance) ;

/// @brief Method Init, addr 0x578e818, size 0x534, virtual false, abstract: false, final false
inline void Init(bool  dontCreateMaterialInstance) ;

// Ctor Parameters []
// @brief default ctor
constexpr PlayerColoredCosmetic_ColoringRule() ;

// Ctor Parameters [CppParam { name: "shaderColorProperty", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "hashId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "meshRenderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: None, comment: None }, CppParam { name: "materialIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instancedMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "defaultMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }]
constexpr PlayerColoredCosmetic_ColoringRule(::StringW  shaderColorProperty, int32_t  hashId, ::UnityW<::UnityEngine::Renderer>  meshRenderer, int32_t  materialIndex, ::UnityW<::UnityEngine::Material>  instancedMaterial, ::UnityW<::UnityEngine::Material>  defaultMaterial) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1439};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// [SerializeField]
/// @brief Field shaderColorProperty, offset: 0x0, size: 0x8, def value: None
 ::StringW  shaderColorProperty;

/// @brief Field hashId, offset: 0x8, size: 0x4, def value: None
 int32_t  hashId;

/// [SerializeField]
/// @brief Field meshRenderer, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  meshRenderer;

/// [SerializeField]
/// @brief Field materialIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  materialIndex;

/// @brief Field instancedMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  instancedMaterial;

/// @brief Field defaultMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  defaultMaterial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, shaderColorProperty) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, hashId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, meshRenderer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, materialIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, instancedMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule, defaultMaterial) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerColoredCosmetic_ColoringRule) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
