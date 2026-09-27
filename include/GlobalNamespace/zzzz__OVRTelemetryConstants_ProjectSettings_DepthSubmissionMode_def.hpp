#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryConstants_ProjectSettings_DepthSubmissionMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryConstants_ProjectSettings_DepthSubmissionMode)
// Forward declare root types
namespace GlobalNamespace {
struct ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode, "", "OVRTelemetryConstants/ProjectSettings/DepthSubmissionMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryConstants/ProjectSettings/DepthSubmissionMode
struct CORDL_TYPE ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode_Unwrapped
enum struct __ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_None = static_cast<int32_t>(0x1),
__E_Depth16Bit = static_cast<int32_t>(0x2),
__E_Depth24Bit = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode_Unwrapped () const noexcept {
return static_cast<__ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode(int32_t  value__) noexcept;

/// @brief Field Depth16Bit value: I32(2)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode const Depth16Bit;

/// @brief Field Depth24Bit value: I32(3)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode const Depth24Bit;

/// @brief Field None value: I32(1)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode const None;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12512};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_DepthSubmissionMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
