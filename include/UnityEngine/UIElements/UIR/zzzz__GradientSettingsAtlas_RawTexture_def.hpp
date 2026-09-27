#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/GradientSettingsAtlas_RawTexture.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GradientSettingsAtlas_RawTexture)
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace GlobalNamespace {
struct GradientSettingsAtlas_RawTexture;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GradientSettingsAtlas_RawTexture);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GradientSettingsAtlas_RawTexture, "UnityEngine.UIElements.UIR", "GradientSettingsAtlas/RawTexture");
// Dependencies UnityEngine.Color32
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.GradientSettingsAtlas/RawTexture
struct CORDL_TYPE GradientSettingsAtlas_RawTexture {
public:
// Declarations
/// @brief Method WriteRawFloat4Packed, addr 0xb7d7c44, size 0xb8, virtual false, abstract: false, final false
inline void WriteRawFloat4Packed(float_t  f0, float_t  f1, float_t  f2, float_t  f3, int32_t  destX, int32_t  destY) ;

/// @brief Method WriteRawInt2Packed, addr 0xb7d7cfc, size 0x80, virtual false, abstract: false, final false
inline void WriteRawInt2Packed(int32_t  v0, int32_t  v1, int32_t  destX, int32_t  destY) ;

// Ctor Parameters []
// @brief default ctor
constexpr GradientSettingsAtlas_RawTexture() ;

// Ctor Parameters [CppParam { name: "rgba", ty: "::ArrayW<::UnityEngine::Color32>", modifiers: "", def_value: None, comment: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GradientSettingsAtlas_RawTexture(::ArrayW<::UnityEngine::Color32>  rgba, int32_t  width, int32_t  height) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8524};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field rgba, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32>  rgba;

/// @brief Field width, offset: 0x8, size: 0x4, def value: None
 int32_t  width;

/// @brief Field height, offset: 0xc, size: 0x4, def value: None
 int32_t  height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GradientSettingsAtlas_RawTexture, rgba) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientSettingsAtlas_RawTexture, width) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GradientSettingsAtlas_RawTexture, height) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GradientSettingsAtlas_RawTexture) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
