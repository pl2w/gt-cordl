#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass_ShaderPasses.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ScreenSpaceAmbientOcclusionPass_ShaderPasses)
// Forward declare root types
namespace GlobalNamespace {
struct ScreenSpaceAmbientOcclusionPass_ShaderPasses;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses, "UnityEngine.Rendering.Universal", "ScreenSpaceAmbientOcclusionPass/ShaderPasses");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPass/ShaderPasses
struct CORDL_TYPE ScreenSpaceAmbientOcclusionPass_ShaderPasses {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped
enum struct __ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped : int32_t {
__E_AmbientOcclusion = static_cast<int32_t>(0x0),
__E_BilateralBlurHorizontal = static_cast<int32_t>(0x1),
__E_BilateralBlurVertical = static_cast<int32_t>(0x2),
__E_BilateralBlurFinal = static_cast<int32_t>(0x3),
__E_BilateralAfterOpaque = static_cast<int32_t>(0x4),
__E_GaussianBlurHorizontal = static_cast<int32_t>(0x5),
__E_GaussianBlurVertical = static_cast<int32_t>(0x6),
__E_GaussianAfterOpaque = static_cast<int32_t>(0x7),
__E_KawaseBlur = static_cast<int32_t>(0x8),
__E_KawaseAfterOpaque = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped () const noexcept {
return static_cast<__ScreenSpaceAmbientOcclusionPass_ShaderPasses_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ScreenSpaceAmbientOcclusionPass_ShaderPasses() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ScreenSpaceAmbientOcclusionPass_ShaderPasses(int32_t  value__) noexcept;

/// @brief Field AmbientOcclusion value: I32(0)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const AmbientOcclusion;

/// @brief Field BilateralAfterOpaque value: I32(4)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralAfterOpaque;

/// @brief Field BilateralBlurFinal value: I32(3)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralBlurFinal;

/// @brief Field BilateralBlurHorizontal value: I32(1)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralBlurHorizontal;

/// @brief Field BilateralBlurVertical value: I32(2)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const BilateralBlurVertical;

/// @brief Field GaussianAfterOpaque value: I32(7)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const GaussianAfterOpaque;

/// @brief Field GaussianBlurHorizontal value: I32(5)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const GaussianBlurHorizontal;

/// @brief Field GaussianBlurVertical value: I32(6)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const GaussianBlurVertical;

/// @brief Field KawaseAfterOpaque value: I32(9)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const KawaseAfterOpaque;

/// @brief Field KawaseBlur value: I32(8)
static ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses const KawaseBlur;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_ShaderPasses) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
