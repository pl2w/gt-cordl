#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_CameraStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_CameraStatus)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_CameraStatus;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_CameraStatus);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_CameraStatus, "", "OVRPlugin/CameraStatus");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/CameraStatus
struct CORDL_TYPE OVRPlugin_CameraStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_CameraStatus_Unwrapped
enum struct __OVRPlugin_CameraStatus_Unwrapped : int32_t {
__E_CameraStatus_None = static_cast<int32_t>(0x0),
__E_CameraStatus_Connected = static_cast<int32_t>(0x1),
__E_CameraStatus_Calibrating = static_cast<int32_t>(0x2),
__E_CameraStatus_CalibrationFailed = static_cast<int32_t>(0x3),
__E_CameraStatus_Calibrated = static_cast<int32_t>(0x4),
__E_CameraStatus_ThirdPerson = static_cast<int32_t>(0x5),
__E_CameraStatus_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_CameraStatus_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_CameraStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_CameraStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_CameraStatus(int32_t  value__) noexcept;

/// @brief Field CameraStatus_Calibrated value: I32(4)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_Calibrated;

/// @brief Field CameraStatus_Calibrating value: I32(2)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_Calibrating;

/// @brief Field CameraStatus_CalibrationFailed value: I32(3)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_CalibrationFailed;

/// @brief Field CameraStatus_Connected value: I32(1)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_Connected;

/// @brief Field CameraStatus_EnumSize value: I32(2147483647)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_EnumSize;

/// @brief Field CameraStatus_None value: I32(0)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_None;

/// @brief Field CameraStatus_ThirdPerson value: I32(5)
static ::GlobalNamespace::OVRPlugin_CameraStatus const CameraStatus_ThirdPerson;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_CameraStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_CameraStatus) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
