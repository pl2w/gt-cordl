#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Blitter_BlitShaderPassNames.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Blitter_BlitShaderPassNames)
// Forward declare root types
namespace GlobalNamespace {
struct Blitter_BlitShaderPassNames;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Blitter_BlitShaderPassNames);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Blitter_BlitShaderPassNames, "UnityEngine.Rendering", "Blitter/BlitShaderPassNames");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Blitter/BlitShaderPassNames
struct CORDL_TYPE Blitter_BlitShaderPassNames {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Blitter_BlitShaderPassNames_Unwrapped
enum struct __Blitter_BlitShaderPassNames_Unwrapped : int32_t {
__E_Nearest = static_cast<int32_t>(0x0),
__E_Bilinear = static_cast<int32_t>(0x1),
__E_NearestQuad = static_cast<int32_t>(0x2),
__E_BilinearQuad = static_cast<int32_t>(0x3),
__E_NearestQuadPadding = static_cast<int32_t>(0x4),
__E_BilinearQuadPadding = static_cast<int32_t>(0x5),
__E_NearestQuadPaddingRepeat = static_cast<int32_t>(0x6),
__E_BilinearQuadPaddingRepeat = static_cast<int32_t>(0x7),
__E_BilinearQuadPaddingOctahedral = static_cast<int32_t>(0x8),
__E_NearestQuadPaddingAlphaBlend = static_cast<int32_t>(0x9),
__E_BilinearQuadPaddingAlphaBlend = static_cast<int32_t>(0xa),
__E_NearestQuadPaddingAlphaBlendRepeat = static_cast<int32_t>(0xb),
__E_BilinearQuadPaddingAlphaBlendRepeat = static_cast<int32_t>(0xc),
__E_BilinearQuadPaddingAlphaBlendOctahedral = static_cast<int32_t>(0xd),
__E_CubeToOctahedral = static_cast<int32_t>(0xe),
__E_CubeToOctahedralLuminance = static_cast<int32_t>(0xf),
__E_CubeToOctahedralAlpha = static_cast<int32_t>(0x10),
__E_CubeToOctahedralRed = static_cast<int32_t>(0x11),
__E_BilinearQuadLuminance = static_cast<int32_t>(0x12),
__E_BilinearQuadAlpha = static_cast<int32_t>(0x13),
__E_BilinearQuadRed = static_cast<int32_t>(0x14),
__E_NearestCubeToOctahedralPadding = static_cast<int32_t>(0x15),
__E_BilinearCubeToOctahedralPadding = static_cast<int32_t>(0x16),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Blitter_BlitShaderPassNames_Unwrapped () const noexcept {
return static_cast<__Blitter_BlitShaderPassNames_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Blitter_BlitShaderPassNames() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Blitter_BlitShaderPassNames(int32_t  value__) noexcept;

/// @brief Field Bilinear value: I32(1)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const Bilinear;

/// @brief Field BilinearCubeToOctahedralPadding value: I32(22)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearCubeToOctahedralPadding;

/// @brief Field BilinearQuad value: I32(3)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuad;

/// @brief Field BilinearQuadAlpha value: I32(19)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadAlpha;

/// @brief Field BilinearQuadLuminance value: I32(18)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadLuminance;

/// @brief Field BilinearQuadPadding value: I32(5)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadPadding;

/// @brief Field BilinearQuadPaddingAlphaBlend value: I32(10)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadPaddingAlphaBlend;

/// @brief Field BilinearQuadPaddingAlphaBlendOctahedral value: I32(13)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadPaddingAlphaBlendOctahedral;

/// @brief Field BilinearQuadPaddingAlphaBlendRepeat value: I32(12)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadPaddingAlphaBlendRepeat;

/// @brief Field BilinearQuadPaddingOctahedral value: I32(8)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadPaddingOctahedral;

/// @brief Field BilinearQuadPaddingRepeat value: I32(7)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadPaddingRepeat;

/// @brief Field BilinearQuadRed value: I32(20)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const BilinearQuadRed;

/// @brief Field CubeToOctahedral value: I32(14)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const CubeToOctahedral;

/// @brief Field CubeToOctahedralAlpha value: I32(16)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const CubeToOctahedralAlpha;

/// @brief Field CubeToOctahedralLuminance value: I32(15)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const CubeToOctahedralLuminance;

/// @brief Field CubeToOctahedralRed value: I32(17)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const CubeToOctahedralRed;

/// @brief Field Nearest value: I32(0)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const Nearest;

/// @brief Field NearestCubeToOctahedralPadding value: I32(21)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const NearestCubeToOctahedralPadding;

/// @brief Field NearestQuad value: I32(2)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const NearestQuad;

/// @brief Field NearestQuadPadding value: I32(4)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const NearestQuadPadding;

/// @brief Field NearestQuadPaddingAlphaBlend value: I32(9)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const NearestQuadPaddingAlphaBlend;

/// @brief Field NearestQuadPaddingAlphaBlendRepeat value: I32(11)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const NearestQuadPaddingAlphaBlendRepeat;

/// @brief Field NearestQuadPaddingRepeat value: I32(6)
static ::GlobalNamespace::Blitter_BlitShaderPassNames const NearestQuadPaddingRepeat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16992};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Blitter_BlitShaderPassNames, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Blitter_BlitShaderPassNames) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
