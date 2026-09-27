#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/UnderwaterCameraEffect_CameraOverlapWaterState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnderwaterCameraEffect_CameraOverlapWaterState)
// Forward declare root types
namespace GlobalNamespace {
struct UnderwaterCameraEffect_CameraOverlapWaterState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState, "GorillaLocomotion.Swimming", "UnderwaterCameraEffect/CameraOverlapWaterState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaLocomotion.Swimming.UnderwaterCameraEffect/CameraOverlapWaterState
struct CORDL_TYPE UnderwaterCameraEffect_CameraOverlapWaterState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UnderwaterCameraEffect_CameraOverlapWaterState_Unwrapped
enum struct __UnderwaterCameraEffect_CameraOverlapWaterState_Unwrapped : int32_t {
__E_Uninitialized = static_cast<int32_t>(0x0),
__E_OutOfWater = static_cast<int32_t>(0x1),
__E_PartiallySubmerged = static_cast<int32_t>(0x2),
__E_FullySubmerged = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnderwaterCameraEffect_CameraOverlapWaterState_Unwrapped () const noexcept {
return static_cast<__UnderwaterCameraEffect_CameraOverlapWaterState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnderwaterCameraEffect_CameraOverlapWaterState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnderwaterCameraEffect_CameraOverlapWaterState(int32_t  value__) noexcept;

/// @brief Field FullySubmerged value: I32(3)
static ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState const FullySubmerged;

/// @brief Field OutOfWater value: I32(1)
static ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState const OutOfWater;

/// @brief Field PartiallySubmerged value: I32(2)
static ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState const PartiallySubmerged;

/// @brief Field Uninitialized value: I32(0)
static ::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState const Uninitialized;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4513};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnderwaterCameraEffect_CameraOverlapWaterState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
