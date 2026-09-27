#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardLocationInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardLocationType_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_VirtualKeyboardLocationInfo)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardLocationInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo, "", "OVRPlugin/VirtualKeyboardLocationInfo");
// Dependencies OVRPlugin::Posef, OVRPlugin::TrackingOrigin, OVRPlugin::VirtualKeyboardLocationType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/VirtualKeyboardLocationInfo
struct CORDL_TYPE OVRPlugin_VirtualKeyboardLocationInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardLocationInfo() ;

// Ctor Parameters [CppParam { name: "locationType", ty: "::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType", modifiers: "", def_value: None, comment: None }, CppParam { name: "pose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "trackingOriginType", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_VirtualKeyboardLocationInfo(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType  locationType, ::GlobalNamespace::OVRPlugin_Posef  pose, float_t  scale, ::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOriginType) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field locationType, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType  locationType;

/// @brief Field pose, offset: 0x4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  pose;

/// @brief Field scale, offset: 0x20, size: 0x4, def value: None
 float_t  scale;

/// @brief Field trackingOriginType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOriginType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo, locationType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo, pose) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo, scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo, trackingOriginType) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
