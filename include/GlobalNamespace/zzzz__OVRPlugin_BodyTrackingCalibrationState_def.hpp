#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyTrackingCalibrationState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BodyTrackingCalibrationState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingCalibrationState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState, "", "OVRPlugin/BodyTrackingCalibrationState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BodyTrackingCalibrationState
struct CORDL_TYPE OVRPlugin_BodyTrackingCalibrationState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_BodyTrackingCalibrationState_Unwrapped
enum struct __OVRPlugin_BodyTrackingCalibrationState_Unwrapped : int32_t {
__E_Valid = static_cast<int32_t>(0x1),
__E_Calibrating = static_cast<int32_t>(0x2),
__E_Invalid = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_BodyTrackingCalibrationState_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_BodyTrackingCalibrationState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BodyTrackingCalibrationState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BodyTrackingCalibrationState(int32_t  value__) noexcept;

/// @brief Field Calibrating value: I32(2)
static ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState const Calibrating;

/// @brief Field Invalid value: I32(3)
static ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState const Invalid;

/// @brief Field Valid value: I32(1)
static ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState const Valid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12156};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
