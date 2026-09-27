#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/PinchGrabParam.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PinchGrabParam)
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct PinchGrabParam;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam, "Oculus.Interaction.Input.Compatibility.OVR", "PinchGrabParam");
// Dependencies 
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: true
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.PinchGrabParam
struct CORDL_TYPE PinchGrabParam {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PinchGrabParam_Unwrapped
enum struct __PinchGrabParam_Unwrapped : int32_t {
__E_PinchDistanceStart = static_cast<int32_t>(0x0),
__E_PinchDistanceStopMax = static_cast<int32_t>(0x1),
__E_PinchDistanceStopOffset = static_cast<int32_t>(0x2),
__E_PinchHqDistanceStart = static_cast<int32_t>(0x3),
__E_PinchHqDistanceStopMax = static_cast<int32_t>(0x4),
__E_PinchHqDistanceStopOffset = static_cast<int32_t>(0x5),
__E_PinchHqViewAngleThreshold = static_cast<int32_t>(0x6),
__E_ThumbDistanceStart = static_cast<int32_t>(0x7),
__E_ThumbDistanceStopMax = static_cast<int32_t>(0x8),
__E_ThumbDistanceStopOffset = static_cast<int32_t>(0x9),
__E_ThumbMaxDot = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PinchGrabParam_Unwrapped () const noexcept {
return static_cast<__PinchGrabParam_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PinchGrabParam() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PinchGrabParam(int32_t  value__) noexcept;

/// @brief Field PinchDistanceStart value: I32(0)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchDistanceStart;

/// @brief Field PinchDistanceStopMax value: I32(1)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchDistanceStopMax;

/// @brief Field PinchDistanceStopOffset value: I32(2)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchDistanceStopOffset;

/// @brief Field PinchHqDistanceStart value: I32(3)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchHqDistanceStart;

/// @brief Field PinchHqDistanceStopMax value: I32(4)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchHqDistanceStopMax;

/// @brief Field PinchHqDistanceStopOffset value: I32(5)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchHqDistanceStopOffset;

/// @brief Field PinchHqViewAngleThreshold value: I32(6)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const PinchHqViewAngleThreshold;

/// @brief Field ThumbDistanceStart value: I32(7)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const ThumbDistanceStart;

/// @brief Field ThumbDistanceStopMax value: I32(8)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const ThumbDistanceStopMax;

/// @brief Field ThumbDistanceStopOffset value: I32(9)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const ThumbDistanceStopOffset;

/// @brief Field ThumbMaxDot value: I32(10)
static ::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam const ThumbMaxDot;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16528};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::PinchGrabParam) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
