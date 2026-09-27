#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraIntrinsics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Fovf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Sizei_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_CameraIntrinsics)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_CameraIntrinsics;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_CameraIntrinsics);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_CameraIntrinsics, "", "OVRPlugin/CameraIntrinsics");
// Dependencies OVRPlugin::Bool, OVRPlugin::Fovf, OVRPlugin::Sizei
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/CameraIntrinsics
struct CORDL_TYPE OVRPlugin_CameraIntrinsics {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_CameraIntrinsics() ;

// Ctor Parameters [CppParam { name: "IsValid", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LastChangedTimeSeconds", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "FOVPort", ty: "::GlobalNamespace::OVRPlugin_Fovf", modifiers: "", def_value: None, comment: None }, CppParam { name: "VirtualNearPlaneDistanceMeters", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "VirtualFarPlaneDistanceMeters", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ImageSensorPixelResolution", ty: "::GlobalNamespace::OVRPlugin_Sizei", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_CameraIntrinsics(::GlobalNamespace::OVRPlugin_Bool  IsValid, double_t  LastChangedTimeSeconds, ::GlobalNamespace::OVRPlugin_Fovf  FOVPort, float_t  VirtualNearPlaneDistanceMeters, float_t  VirtualFarPlaneDistanceMeters, ::GlobalNamespace::OVRPlugin_Sizei  ImageSensorPixelResolution) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12122};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field IsValid, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_Bool  IsValid;

/// @brief Field LastChangedTimeSeconds, offset: 0x8, size: 0x8, def value: None
 double_t  LastChangedTimeSeconds;

/// @brief Field FOVPort, offset: 0x10, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Fovf  FOVPort;

/// @brief Field VirtualNearPlaneDistanceMeters, offset: 0x20, size: 0x4, def value: None
 float_t  VirtualNearPlaneDistanceMeters;

/// @brief Field VirtualFarPlaneDistanceMeters, offset: 0x24, size: 0x4, def value: None
 float_t  VirtualFarPlaneDistanceMeters;

/// @brief Field ImageSensorPixelResolution, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::OVRPlugin_Sizei  ImageSensorPixelResolution;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraIntrinsics, IsValid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraIntrinsics, LastChangedTimeSeconds) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraIntrinsics, FOVPort) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraIntrinsics, VirtualNearPlaneDistanceMeters) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraIntrinsics, VirtualFarPlaneDistanceMeters) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraIntrinsics, ImageSensorPixelResolution) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_CameraIntrinsics) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
