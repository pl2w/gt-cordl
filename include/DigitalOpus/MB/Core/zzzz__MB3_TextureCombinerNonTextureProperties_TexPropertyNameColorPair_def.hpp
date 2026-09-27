#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair, "DigitalOpus.MB.Core", "MB3_TextureCombinerNonTextureProperties/TexPropertyNameColorPair");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB3_TextureCombinerNonTextureProperties/TexPropertyNameColorPair
struct CORDL_TYPE MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair {
public:
// Declarations
/// @brief Method .ctor, addr 0x9dd3520, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::StringW  nm, ::UnityEngine::Color  col) ;

// Ctor Parameters []
// @brief default ctor
constexpr MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair(::StringW  name, ::UnityEngine::Color  color) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field color, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair, color) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB3_TextureCombinerNonTextureProperties_TexPropertyNameColorPair) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
