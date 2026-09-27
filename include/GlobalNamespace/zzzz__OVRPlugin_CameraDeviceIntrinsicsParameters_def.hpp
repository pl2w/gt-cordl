#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraDeviceIntrinsicsParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_CameraDeviceIntrinsicsParameters)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_CameraDeviceIntrinsicsParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, "", "OVRPlugin/CameraDeviceIntrinsicsParameters");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/CameraDeviceIntrinsicsParameters
struct CORDL_TYPE OVRPlugin_CameraDeviceIntrinsicsParameters {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_CameraDeviceIntrinsicsParameters() ;

// Ctor Parameters [CppParam { name: "fx", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fy", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cx", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cy", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disto0", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disto1", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disto2", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disto3", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "disto4", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "v_fov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h_fov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "d_fov", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "w", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "h", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_CameraDeviceIntrinsicsParameters(float_t  fx, float_t  fy, float_t  cx, float_t  cy, double_t  disto0, double_t  disto1, double_t  disto2, double_t  disto3, double_t  disto4, float_t  v_fov, float_t  h_fov, float_t  d_fov, int32_t  w, int32_t  h) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12081};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field fx, offset: 0x0, size: 0x4, def value: None
 float_t  fx;

/// @brief Field fy, offset: 0x4, size: 0x4, def value: None
 float_t  fy;

/// @brief Field cx, offset: 0x8, size: 0x4, def value: None
 float_t  cx;

/// @brief Field cy, offset: 0xc, size: 0x4, def value: None
 float_t  cy;

/// @brief Field disto0, offset: 0x10, size: 0x8, def value: None
 double_t  disto0;

/// @brief Field disto1, offset: 0x18, size: 0x8, def value: None
 double_t  disto1;

/// @brief Field disto2, offset: 0x20, size: 0x8, def value: None
 double_t  disto2;

/// @brief Field disto3, offset: 0x28, size: 0x8, def value: None
 double_t  disto3;

/// @brief Field disto4, offset: 0x30, size: 0x8, def value: None
 double_t  disto4;

/// @brief Field v_fov, offset: 0x38, size: 0x4, def value: None
 float_t  v_fov;

/// @brief Field h_fov, offset: 0x3c, size: 0x4, def value: None
 float_t  h_fov;

/// @brief Field d_fov, offset: 0x40, size: 0x4, def value: None
 float_t  d_fov;

/// @brief Field w, offset: 0x44, size: 0x4, def value: None
 int32_t  w;

/// @brief Field h, offset: 0x48, size: 0x4, def value: None
 int32_t  h;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, fx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, fy) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, cx) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, cy) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, disto0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, disto1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, disto2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, disto3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, disto4) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, v_fov) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, h_fov) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, d_fov) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, w) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters, h) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
