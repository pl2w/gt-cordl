#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_SpatialAnchorCreateInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingOrigin_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_SpatialAnchorCreateInfo)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_SpatialAnchorCreateInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo, "", "OVRPlugin/SpatialAnchorCreateInfo");
// Dependencies OVRPlugin::Posef, OVRPlugin::TrackingOrigin
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/SpatialAnchorCreateInfo
struct CORDL_TYPE OVRPlugin_SpatialAnchorCreateInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_SpatialAnchorCreateInfo() ;

// Ctor Parameters [CppParam { name: "BaseTracking", ty: "::GlobalNamespace::OVRPlugin_TrackingOrigin", modifiers: "", def_value: None, comment: None }, CppParam { name: "PoseInSpace", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_SpatialAnchorCreateInfo(::GlobalNamespace::OVRPlugin_TrackingOrigin  BaseTracking, ::GlobalNamespace::OVRPlugin_Posef  PoseInSpace, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12214};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field BaseTracking, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingOrigin  BaseTracking;

/// @brief Field PoseInSpace, offset: 0x4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  PoseInSpace;

/// @brief Field Time, offset: 0x20, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo, BaseTracking) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo, PoseInSpace) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo, Time) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
