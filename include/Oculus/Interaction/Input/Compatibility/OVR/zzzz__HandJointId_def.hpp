#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/Compatibility/OVR/HandJointId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandJointId)
// Forward declare root types
namespace Oculus::Interaction::Input::Compatibility::OVR {
struct HandJointId;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId, "Oculus.Interaction.Input.Compatibility.OVR", "HandJointId");
// Dependencies 
namespace Oculus::Interaction::Input::Compatibility::OVR {
// Is value type: true
// CS Name: Oculus.Interaction.Input.Compatibility.OVR.HandJointId
struct CORDL_TYPE HandJointId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandJointId_Unwrapped
enum struct __HandJointId_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_HandStart = static_cast<int32_t>(0x0),
__E_HandWristRoot = static_cast<int32_t>(0x0),
__E_HandForearmStub = static_cast<int32_t>(0x1),
__E_HandThumb0 = static_cast<int32_t>(0x2),
__E_HandThumb1 = static_cast<int32_t>(0x3),
__E_HandThumb2 = static_cast<int32_t>(0x4),
__E_HandThumb3 = static_cast<int32_t>(0x5),
__E_HandIndex1 = static_cast<int32_t>(0x6),
__E_HandIndex2 = static_cast<int32_t>(0x7),
__E_HandIndex3 = static_cast<int32_t>(0x8),
__E_HandMiddle1 = static_cast<int32_t>(0x9),
__E_HandMiddle2 = static_cast<int32_t>(0xa),
__E_HandMiddle3 = static_cast<int32_t>(0xb),
__E_HandRing1 = static_cast<int32_t>(0xc),
__E_HandRing2 = static_cast<int32_t>(0xd),
__E_HandRing3 = static_cast<int32_t>(0xe),
__E_HandPinky0 = static_cast<int32_t>(0xf),
__E_HandPinky1 = static_cast<int32_t>(0x10),
__E_HandPinky2 = static_cast<int32_t>(0x11),
__E_HandPinky3 = static_cast<int32_t>(0x12),
__E_HandMaxSkinnable = static_cast<int32_t>(0x13),
__E_HandThumbTip = static_cast<int32_t>(0x13),
__E_HandIndexTip = static_cast<int32_t>(0x14),
__E_HandMiddleTip = static_cast<int32_t>(0x15),
__E_HandRingTip = static_cast<int32_t>(0x16),
__E_HandPinkyTip = static_cast<int32_t>(0x17),
__E_HandEnd = static_cast<int32_t>(0x18),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandJointId_Unwrapped () const noexcept {
return static_cast<__HandJointId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandJointId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandJointId(int32_t  value__) noexcept;

/// @brief Field HandEnd value: I32(24)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandEnd;

/// @brief Field HandForearmStub value: I32(1)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandForearmStub;

/// @brief Field HandIndex1 value: I32(6)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandIndex1;

/// @brief Field HandIndex2 value: I32(7)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandIndex2;

/// @brief Field HandIndex3 value: I32(8)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandIndex3;

/// @brief Field HandIndexTip value: I32(20)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandIndexTip;

/// @brief Field HandMaxSkinnable value: I32(19)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandMaxSkinnable;

/// @brief Field HandMiddle1 value: I32(9)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandMiddle1;

/// @brief Field HandMiddle2 value: I32(10)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandMiddle2;

/// @brief Field HandMiddle3 value: I32(11)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandMiddle3;

/// @brief Field HandMiddleTip value: I32(21)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandMiddleTip;

/// @brief Field HandPinky0 value: I32(15)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandPinky0;

/// @brief Field HandPinky1 value: I32(16)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandPinky1;

/// @brief Field HandPinky2 value: I32(17)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandPinky2;

/// @brief Field HandPinky3 value: I32(18)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandPinky3;

/// @brief Field HandPinkyTip value: I32(23)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandPinkyTip;

/// @brief Field HandRing1 value: I32(12)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandRing1;

/// @brief Field HandRing2 value: I32(13)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandRing2;

/// @brief Field HandRing3 value: I32(14)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandRing3;

/// @brief Field HandRingTip value: I32(22)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandRingTip;

/// @brief Field HandStart value: I32(0)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandStart;

/// @brief Field HandThumb0 value: I32(2)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandThumb0;

/// @brief Field HandThumb1 value: I32(3)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandThumb1;

/// @brief Field HandThumb2 value: I32(4)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandThumb2;

/// @brief Field HandThumb3 value: I32(5)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandThumb3;

/// @brief Field HandThumbTip value: I32(19)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandThumbTip;

/// @brief Field HandWristRoot value: I32(0)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const HandWristRoot;

/// @brief Field Invalid value: I32(-1)
static ::Oculus::Interaction::Input::Compatibility::OVR::HandJointId const Invalid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16532};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::Compatibility::OVR::HandJointId) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input::Compatibility::OVR
