#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/UvUnwrapping_UVTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(UvUnwrapping_UVTransform)
// Forward declare root types
namespace GlobalNamespace {
struct UvUnwrapping_UVTransform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UvUnwrapping_UVTransform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UvUnwrapping_UVTransform, "UnityEngine.ProBuilder", "UvUnwrapping/UVTransform");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.UvUnwrapping/UVTransform
struct CORDL_TYPE UvUnwrapping_UVTransform {
public:
// Declarations
/// @brief Method ToString, addr 0xb0ca580, size 0x160, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr UvUnwrapping_UVTransform() ;

// Ctor Parameters [CppParam { name: "translation", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr UvUnwrapping_UVTransform(::UnityEngine::Vector2  translation, float_t  rotation, ::UnityEngine::Vector2  scale) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24298};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field translation, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  translation;

/// @brief Field rotation, offset: 0x8, size: 0x4, def value: None
 float_t  rotation;

/// @brief Field scale, offset: 0xc, size: 0x8, def value: None
 ::UnityEngine::Vector2  scale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UvUnwrapping_UVTransform, translation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UvUnwrapping_UVTransform, rotation) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UvUnwrapping_UVTransform, scale) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UvUnwrapping_UVTransform) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
