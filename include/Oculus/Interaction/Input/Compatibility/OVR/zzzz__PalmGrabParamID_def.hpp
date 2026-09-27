#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/PalmGrabParamID.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PalmGrabParamID)
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct PalmGrabParamID;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID, "Oculus.Interaction.Input.Compatibility.OVR", "PalmGrabParamID");
// Dependencies 
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: true
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.PalmGrabParamID
struct CORDL_TYPE PalmGrabParamID {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PalmGrabParamID_Unwrapped
enum struct __PalmGrabParamID_Unwrapped : int32_t {
__E_PoseVolumeOffsetRightVec3 = static_cast<int32_t>(0x0),
__E_PoseVolumeOffsetLeftVec3 = static_cast<int32_t>(0x1),
__E_StartThresholdFloat = static_cast<int32_t>(0x2),
__E_ReleaseThresholdFloat = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PalmGrabParamID_Unwrapped () const noexcept {
return static_cast<__PalmGrabParamID_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PalmGrabParamID() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PalmGrabParamID(int32_t  value__) noexcept;

/// @brief Field PoseVolumeOffsetLeftVec3 value: I32(1)
static ::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID const PoseVolumeOffsetLeftVec3;

/// @brief Field PoseVolumeOffsetRightVec3 value: I32(0)
static ::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID const PoseVolumeOffsetRightVec3;

/// @brief Field ReleaseThresholdFloat value: I32(3)
static ::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID const ReleaseThresholdFloat;

/// @brief Field StartThresholdFloat value: I32(2)
static ::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID const StartThresholdFloat;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::PalmGrabParamID) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
