#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/AnchoredWorldSpaceDistanceScaler_ScalingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnchoredWorldSpaceDistanceScaler_ScalingMode)
// Forward declare root types
namespace GlobalNamespace {
struct AnchoredWorldSpaceDistanceScaler_ScalingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode, "Oculus.Interaction.Samples", "AnchoredWorldSpaceDistanceScaler/ScalingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Samples.AnchoredWorldSpaceDistanceScaler/ScalingMode
struct CORDL_TYPE AnchoredWorldSpaceDistanceScaler_ScalingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AnchoredWorldSpaceDistanceScaler_ScalingMode_Unwrapped
enum struct __AnchoredWorldSpaceDistanceScaler_ScalingMode_Unwrapped : int32_t {
__E_TwoDimensional = static_cast<int32_t>(0x0),
__E_ThreeDimensional = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnchoredWorldSpaceDistanceScaler_ScalingMode_Unwrapped () const noexcept {
return static_cast<__AnchoredWorldSpaceDistanceScaler_ScalingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AnchoredWorldSpaceDistanceScaler_ScalingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AnchoredWorldSpaceDistanceScaler_ScalingMode(int32_t  value__) noexcept;

/// @brief Field ThreeDimensional value: I32(1)
static ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode const ThreeDimensional;

/// @brief Field TwoDimensional value: I32(0)
static ::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode const TwoDimensional;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28310};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnchoredWorldSpaceDistanceScaler_ScalingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
