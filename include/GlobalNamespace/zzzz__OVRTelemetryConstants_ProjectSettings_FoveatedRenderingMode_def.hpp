#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryConstants_ProjectSettings_FoveatedRenderingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryConstants_ProjectSettings_FoveatedRenderingMode)
// Forward declare root types
namespace GlobalNamespace {
struct ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode, "", "OVRTelemetryConstants/ProjectSettings/FoveatedRenderingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryConstants/ProjectSettings/FoveatedRenderingMode
struct CORDL_TYPE ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode_Unwrapped
enum struct __ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_FixedFoveatedRendering = static_cast<int32_t>(0x1),
__E_EyeTrackedFoveatedRendering = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode_Unwrapped () const noexcept {
return static_cast<__ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode(int32_t  value__) noexcept;

/// @brief Field EyeTrackedFoveatedRendering value: I32(2)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode const EyeTrackedFoveatedRendering;

/// @brief Field FixedFoveatedRendering value: I32(1)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode const FixedFoveatedRendering;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12510};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_FoveatedRenderingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
