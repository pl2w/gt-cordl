#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRMixedRealityCaptureTest_CameraMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureTest_CameraMode)
// Forward declare root types
namespace GlobalNamespace {
struct OVRMixedRealityCaptureTest_CameraMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRMixedRealityCaptureTest/CameraMode
struct CORDL_TYPE OVRMixedRealityCaptureTest_CameraMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRMixedRealityCaptureTest_CameraMode_Unwrapped
enum struct __OVRMixedRealityCaptureTest_CameraMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_OverrideFov = static_cast<int32_t>(0x1),
__E_ThirdPerson = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRMixedRealityCaptureTest_CameraMode_Unwrapped () const noexcept {
return static_cast<__OVRMixedRealityCaptureTest_CameraMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRMixedRealityCaptureTest_CameraMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRMixedRealityCaptureTest_CameraMode(int32_t  value__) noexcept;

/// @brief Field Normal value: I32(0)
static ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const Normal;

/// @brief Field OverrideFov value: I32(1)
static ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const OverrideFov;

/// @brief Field ThirdPerson value: I32(2)
static ::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode const ThirdPerson;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12669};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRMixedRealityCaptureTest_CameraMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
