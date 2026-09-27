#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_Settings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPassthroughLayer_Settings)
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPassthroughLayer_Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPassthroughLayer_Settings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPassthroughLayer_Settings, "", "OVRPassthroughLayer/Settings");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPassthroughLayer/Settings
struct CORDL_TYPE OVRPassthroughLayer_Settings {
public:
// Declarations
/// @brief Method .ctor, addr 0xa60b7a4, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Texture2D*  colorLutTargetTexture, ::UnityEngine::Texture2D*  colorLutSourceTexture, float_t  saturation, float_t  posterize, float_t  brightness, float_t  contrast, ::UnityEngine::Gradient*  gradient, float_t  lutWeight, bool  flipLutY) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRPassthroughLayer_Settings() ;

// Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "colorLutSourceTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "posterize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "contrast", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: None, comment: None }, CppParam { name: "lutWeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flipLutY", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr OVRPassthroughLayer_Settings(::UnityW<::UnityEngine::Texture2D>  colorLutTargetTexture, ::UnityW<::UnityEngine::Texture2D>  colorLutSourceTexture, float_t  saturation, float_t  posterize, float_t  brightness, float_t  contrast, ::UnityEngine::Gradient*  gradient, float_t  lutWeight, bool  flipLutY) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12022};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field colorLutTargetTexture, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  colorLutTargetTexture;

/// @brief Field colorLutSourceTexture, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  colorLutSourceTexture;

/// @brief Field saturation, offset: 0x10, size: 0x4, def value: None
 float_t  saturation;

/// @brief Field posterize, offset: 0x14, size: 0x4, def value: None
 float_t  posterize;

/// @brief Field brightness, offset: 0x18, size: 0x4, def value: None
 float_t  brightness;

/// @brief Field contrast, offset: 0x1c, size: 0x4, def value: None
 float_t  contrast;

/// @brief Field gradient, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Gradient*  gradient;

/// @brief Field lutWeight, offset: 0x28, size: 0x4, def value: None
 float_t  lutWeight;

/// @brief Field flipLutY, offset: 0x2c, size: 0x1, def value: None
 bool  flipLutY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, colorLutTargetTexture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, colorLutSourceTexture) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, saturation) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, posterize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, brightness) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, contrast) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, gradient) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, lutWeight) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPassthroughLayer_Settings, flipLutY) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer_Settings) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
