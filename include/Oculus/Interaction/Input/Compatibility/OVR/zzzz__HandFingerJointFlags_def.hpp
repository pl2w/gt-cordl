#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandFingerJointFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandFingerJointFlags)
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandFingerJointFlags;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags, "Oculus.Interaction.Input.Compatibility.OVR", "HandFingerJointFlags");
// [Flags]
// Dependencies 
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: true
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandFingerJointFlags
struct CORDL_TYPE HandFingerJointFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandFingerJointFlags_Unwrapped
enum struct __HandFingerJointFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Wrist = static_cast<int32_t>(0x1),
__E_ForearmStub = static_cast<int32_t>(0x2),
__E_Thumb0 = static_cast<int32_t>(0x4),
__E_Thumb1 = static_cast<int32_t>(0x8),
__E_Thumb2 = static_cast<int32_t>(0x10),
__E_Thumb3 = static_cast<int32_t>(0x20),
__E_Index1 = static_cast<int32_t>(0x40),
__E_Index2 = static_cast<int32_t>(0x80),
__E_Index3 = static_cast<int32_t>(0x100),
__E_Middle1 = static_cast<int32_t>(0x200),
__E_Middle2 = static_cast<int32_t>(0x400),
__E_Middle3 = static_cast<int32_t>(0x800),
__E_Ring1 = static_cast<int32_t>(0x1000),
__E_Ring2 = static_cast<int32_t>(0x2000),
__E_Ring3 = static_cast<int32_t>(0x4000),
__E_Pinky0 = static_cast<int32_t>(0x8000),
__E_Pinky1 = static_cast<int32_t>(0x10000),
__E_Pinky2 = static_cast<int32_t>(0x20000),
__E_Pinky3 = static_cast<int32_t>(0x40000),
__E_HandMaxSkinnable = static_cast<int32_t>(0x80000),
__E_ThumbTip = static_cast<int32_t>(0x80000),
__E_IndexTip = static_cast<int32_t>(0x100000),
__E_MiddleTip = static_cast<int32_t>(0x200000),
__E_RingTip = static_cast<int32_t>(0x400000),
__E_PinkyTip = static_cast<int32_t>(0x800000),
__E_All = static_cast<int32_t>(0xffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandFingerJointFlags_Unwrapped () const noexcept {
return static_cast<__HandFingerJointFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandFingerJointFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandFingerJointFlags(int32_t  value__) noexcept;

/// @brief Field All value: I32(16777215)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const All;

/// @brief Field ForearmStub value: I32(2)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const ForearmStub;

/// @brief Field HandMaxSkinnable value: I32(524288)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const HandMaxSkinnable;

/// @brief Field Index1 value: I32(64)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Index1;

/// @brief Field Index2 value: I32(128)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Index2;

/// @brief Field Index3 value: I32(256)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Index3;

/// @brief Field IndexTip value: I32(1048576)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const IndexTip;

/// @brief Field Middle1 value: I32(512)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Middle1;

/// @brief Field Middle2 value: I32(1024)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Middle2;

/// @brief Field Middle3 value: I32(2048)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Middle3;

/// @brief Field MiddleTip value: I32(2097152)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const MiddleTip;

/// @brief Field None value: I32(0)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const None;

/// @brief Field Pinky0 value: I32(32768)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Pinky0;

/// @brief Field Pinky1 value: I32(65536)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Pinky1;

/// @brief Field Pinky2 value: I32(131072)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Pinky2;

/// @brief Field Pinky3 value: I32(262144)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Pinky3;

/// @brief Field PinkyTip value: I32(8388608)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const PinkyTip;

/// @brief Field Ring1 value: I32(4096)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Ring1;

/// @brief Field Ring2 value: I32(8192)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Ring2;

/// @brief Field Ring3 value: I32(16384)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Ring3;

/// @brief Field RingTip value: I32(4194304)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const RingTip;

/// @brief Field Thumb0 value: I32(4)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Thumb0;

/// @brief Field Thumb1 value: I32(8)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Thumb1;

/// @brief Field Thumb2 value: I32(16)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Thumb2;

/// @brief Field Thumb3 value: I32(32)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Thumb3;

/// @brief Field ThumbTip value: I32(524288)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const ThumbTip;

/// @brief Field Wrist value: I32(1)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags const Wrist;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16530};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::HandFingerJointFlags) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
