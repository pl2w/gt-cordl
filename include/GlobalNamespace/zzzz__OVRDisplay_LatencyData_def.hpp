#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDisplay_LatencyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRDisplay_LatencyData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDisplay_LatencyData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDisplay_LatencyData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDisplay_LatencyData, "", "OVRDisplay/LatencyData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDisplay/LatencyData
struct CORDL_TYPE OVRDisplay_LatencyData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDisplay_LatencyData() ;

// Ctor Parameters [CppParam { name: "render", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeWarp", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "postPresent", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderError", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeWarpError", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDisplay_LatencyData(float_t  render, float_t  timeWarp, float_t  postPresent, float_t  renderError, float_t  timeWarpError) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field render, offset: 0x0, size: 0x4, def value: None
 float_t  render;

/// @brief Field timeWarp, offset: 0x4, size: 0x4, def value: None
 float_t  timeWarp;

/// @brief Field postPresent, offset: 0x8, size: 0x4, def value: None
 float_t  postPresent;

/// @brief Field renderError, offset: 0xc, size: 0x4, def value: None
 float_t  renderError;

/// @brief Field timeWarpError, offset: 0x10, size: 0x4, def value: None
 float_t  timeWarpError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, render) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, timeWarp) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, postPresent) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, renderError) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDisplay_LatencyData, timeWarpError) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDisplay_LatencyData) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
