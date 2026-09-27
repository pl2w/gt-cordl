#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedRenderingFeatures_LightmapMixedBakeModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedRenderingFeatures_LightmapMixedBakeModes)
// Forward declare root types
namespace GlobalNamespace {
struct SupportedRenderingFeatures_LightmapMixedBakeModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures/LightmapMixedBakeModes
struct CORDL_TYPE SupportedRenderingFeatures_LightmapMixedBakeModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped
enum struct __SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_IndirectOnly = static_cast<int32_t>(0x1),
__E_Subtractive = static_cast<int32_t>(0x2),
__E_Shadowmask = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped () const noexcept {
return static_cast<__SupportedRenderingFeatures_LightmapMixedBakeModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SupportedRenderingFeatures_LightmapMixedBakeModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SupportedRenderingFeatures_LightmapMixedBakeModes(int32_t  value__) noexcept;

/// @brief Field IndirectOnly value: I32(1)
static ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes const IndirectOnly;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes const None;

/// @brief Field Shadowmask value: I32(4)
static ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes const Shadowmask;

/// @brief Field Subtractive value: I32(2)
static ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes const Subtractive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15576};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
