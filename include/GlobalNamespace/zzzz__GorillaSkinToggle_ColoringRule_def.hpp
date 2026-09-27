#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkinToggle_ColoringRule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSkinMaterials_def.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaSkinToggle_ColoringRule)
namespace GlobalNamespace {
class GorillaSkin;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaSkinToggle_ColoringRule;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaSkinToggle_ColoringRule);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSkinToggle_ColoringRule, "", "GorillaSkinToggle/ColoringRule");
// Dependencies GorillaSkinMaterials, ShaderHashId
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaSkinToggle/ColoringRule
struct CORDL_TYPE GorillaSkinToggle_ColoringRule {
public:
// Declarations
/// @brief Method Apply, addr 0x5652550, size 0xe0, virtual false, abstract: false, final false
inline void Apply(::GlobalNamespace::GorillaSkin*  skin, ::UnityEngine::Color  color) ;

/// @brief Method Init, addr 0x5652404, size 0x94, virtual false, abstract: false, final false
inline void Init() ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaSkinToggle_ColoringRule() ;

// Ctor Parameters [CppParam { name: "colorMaterials", ty: "::GlobalNamespace::GorillaSkinMaterials", modifiers: "", def_value: None, comment: None }, CppParam { name: "shaderColorProperty", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "shaderHashId", ty: "::GlobalNamespace::ShaderHashId", modifiers: "", def_value: None, comment: None }]
constexpr GorillaSkinToggle_ColoringRule(::GlobalNamespace::GorillaSkinMaterials  colorMaterials, ::StringW  shaderColorProperty, ::GlobalNamespace::ShaderHashId  shaderHashId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{732};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field colorMaterials, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GorillaSkinMaterials  colorMaterials;

/// @brief Field shaderColorProperty, offset: 0x8, size: 0x8, def value: None
 ::StringW  shaderColorProperty;

/// @brief Field shaderHashId, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  shaderHashId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle_ColoringRule, colorMaterials) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle_ColoringRule, shaderColorProperty) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle_ColoringRule, shaderHashId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSkinToggle_ColoringRule) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
