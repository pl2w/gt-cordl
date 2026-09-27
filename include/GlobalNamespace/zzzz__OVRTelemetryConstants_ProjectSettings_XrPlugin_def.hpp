#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryConstants_ProjectSettings_XrPlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryConstants_ProjectSettings_XrPlugin)
// Forward declare root types
namespace GlobalNamespace {
struct ProjectSettings_OVRTelemetryConstants_XrPlugin;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin, "", "OVRTelemetryConstants/ProjectSettings/XrPlugin");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryConstants/ProjectSettings/XrPlugin
struct CORDL_TYPE ProjectSettings_OVRTelemetryConstants_XrPlugin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProjectSettings_OVRTelemetryConstants_XrPlugin_Unwrapped
enum struct __ProjectSettings_OVRTelemetryConstants_XrPlugin_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Oculus = static_cast<int32_t>(0x1),
__E_OpenXR = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProjectSettings_OVRTelemetryConstants_XrPlugin_Unwrapped () const noexcept {
return static_cast<__ProjectSettings_OVRTelemetryConstants_XrPlugin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProjectSettings_OVRTelemetryConstants_XrPlugin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProjectSettings_OVRTelemetryConstants_XrPlugin(int32_t  value__) noexcept;

/// @brief Field Oculus value: I32(1)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin const Oculus;

/// @brief Field OpenXR value: I32(2)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin const OpenXR;

/// @brief Field Unknown value: I32(0)
static ::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12515};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectSettings_OVRTelemetryConstants_XrPlugin) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
