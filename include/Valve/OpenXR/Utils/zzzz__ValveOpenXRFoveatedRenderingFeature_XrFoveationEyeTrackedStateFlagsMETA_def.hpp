#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA)
// Forward declare root types
namespace GlobalNamespace {
struct ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA, "Valve.OpenXR.Utils", "ValveOpenXRFoveatedRenderingFeature/XrFoveationEyeTrackedStateFlagsMETA");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Valve.OpenXR.Utils.ValveOpenXRFoveatedRenderingFeature/XrFoveationEyeTrackedStateFlagsMETA
struct CORDL_TYPE ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_Unwrapped
enum struct __ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_Unwrapped : int32_t {
__E_XR_FOVEATION_EYE_TRACKED_STATE_VALID_BIT_META = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_Unwrapped () const noexcept {
return static_cast<__ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA(int32_t  value__) noexcept;

/// @brief Field XR_FOVEATION_EYE_TRACKED_STATE_VALID_BIT_META value: I32(1)
static ::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA const XR_FOVEATION_EYE_TRACKED_STATE_VALID_BIT_META;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ValveOpenXRFoveatedRenderingFeature_XrFoveationEyeTrackedStateFlagsMETA) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
