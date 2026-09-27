#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeAdjustmentVolume_Mode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeAdjustmentVolume_Mode)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeAdjustmentVolume_Mode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeAdjustmentVolume_Mode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeAdjustmentVolume_Mode, "UnityEngine.Rendering", "ProbeAdjustmentVolume/Mode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeAdjustmentVolume/Mode
struct CORDL_TYPE ProbeAdjustmentVolume_Mode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProbeAdjustmentVolume_Mode_Unwrapped
enum struct __ProbeAdjustmentVolume_Mode_Unwrapped : int32_t {
__E_InvalidateProbes = static_cast<int32_t>(0x0),
__E_OverrideValidityThreshold = static_cast<int32_t>(0x1),
__E_ApplyVirtualOffset = static_cast<int32_t>(0x2),
__E_OverrideVirtualOffsetSettings = static_cast<int32_t>(0x3),
__E_OverrideSkyDirection = static_cast<int32_t>(0x4),
__E_OverrideSampleCount = static_cast<int32_t>(0x5),
__E_OverrideRenderingLayerMask = static_cast<int32_t>(0x6),
__E_IntensityScale = static_cast<int32_t>(0x63),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProbeAdjustmentVolume_Mode_Unwrapped () const noexcept {
return static_cast<__ProbeAdjustmentVolume_Mode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProbeAdjustmentVolume_Mode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeAdjustmentVolume_Mode(int32_t  value__) noexcept;

/// @brief Field ApplyVirtualOffset value: I32(2)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const ApplyVirtualOffset;

/// @brief Field IntensityScale value: I32(99)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const IntensityScale;

/// @brief Field InvalidateProbes value: I32(0)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const InvalidateProbes;

/// @brief Field OverrideRenderingLayerMask value: I32(6)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const OverrideRenderingLayerMask;

/// @brief Field OverrideSampleCount value: I32(5)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const OverrideSampleCount;

/// @brief Field OverrideSkyDirection value: I32(4)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const OverrideSkyDirection;

/// @brief Field OverrideValidityThreshold value: I32(1)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const OverrideValidityThreshold;

/// @brief Field OverrideVirtualOffsetSettings value: I32(3)
static ::GlobalNamespace::ProbeAdjustmentVolume_Mode const OverrideVirtualOffsetSettings;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16794};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeAdjustmentVolume_Mode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeAdjustmentVolume_Mode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
