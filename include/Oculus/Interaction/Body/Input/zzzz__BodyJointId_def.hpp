#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodyJointId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BodyJointId)
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Body::Input::BodyJointId);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Body::Input::BodyJointId, "Oculus.Interaction.Body.Input", "BodyJointId");
// Dependencies 
namespace Oculus::Interaction::Body::Input {
// Is value type: true
// CS Name: Oculus.Interaction.Body.Input.BodyJointId
struct CORDL_TYPE BodyJointId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BodyJointId_Unwrapped
enum struct __BodyJointId_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Body_Start = static_cast<int32_t>(0x0),
__E_Body_Root = static_cast<int32_t>(0x0),
__E_Body_Hips = static_cast<int32_t>(0x1),
__E_Body_SpineLower = static_cast<int32_t>(0x2),
__E_Body_SpineMiddle = static_cast<int32_t>(0x3),
__E_Body_SpineUpper = static_cast<int32_t>(0x4),
__E_Body_Chest = static_cast<int32_t>(0x5),
__E_Body_Neck = static_cast<int32_t>(0x6),
__E_Body_Head = static_cast<int32_t>(0x7),
__E_Body_LeftShoulder = static_cast<int32_t>(0x8),
__E_Body_LeftScapula = static_cast<int32_t>(0x9),
__E_Body_LeftArmUpper = static_cast<int32_t>(0xa),
__E_Body_LeftArmLower = static_cast<int32_t>(0xb),
__E_Body_LeftHandWristTwist = static_cast<int32_t>(0xc),
__E_Body_RightShoulder = static_cast<int32_t>(0xd),
__E_Body_RightScapula = static_cast<int32_t>(0xe),
__E_Body_RightArmUpper = static_cast<int32_t>(0xf),
__E_Body_RightArmLower = static_cast<int32_t>(0x10),
__E_Body_RightHandWristTwist = static_cast<int32_t>(0x11),
__E_Body_LeftHandPalm = static_cast<int32_t>(0x12),
__E_Body_LeftHandWrist = static_cast<int32_t>(0x13),
__E_Body_LeftHandThumbMetacarpal = static_cast<int32_t>(0x14),
__E_Body_LeftHandThumbProximal = static_cast<int32_t>(0x15),
__E_Body_LeftHandThumbDistal = static_cast<int32_t>(0x16),
__E_Body_LeftHandThumbTip = static_cast<int32_t>(0x17),
__E_Body_LeftHandIndexMetacarpal = static_cast<int32_t>(0x18),
__E_Body_LeftHandIndexProximal = static_cast<int32_t>(0x19),
__E_Body_LeftHandIndexIntermediate = static_cast<int32_t>(0x1a),
__E_Body_LeftHandIndexDistal = static_cast<int32_t>(0x1b),
__E_Body_LeftHandIndexTip = static_cast<int32_t>(0x1c),
__E_Body_LeftHandMiddleMetacarpal = static_cast<int32_t>(0x1d),
__E_Body_LeftHandMiddleProximal = static_cast<int32_t>(0x1e),
__E_Body_LeftHandMiddleIntermediate = static_cast<int32_t>(0x1f),
__E_Body_LeftHandMiddleDistal = static_cast<int32_t>(0x20),
__E_Body_LeftHandMiddleTip = static_cast<int32_t>(0x21),
__E_Body_LeftHandRingMetacarpal = static_cast<int32_t>(0x22),
__E_Body_LeftHandRingProximal = static_cast<int32_t>(0x23),
__E_Body_LeftHandRingIntermediate = static_cast<int32_t>(0x24),
__E_Body_LeftHandRingDistal = static_cast<int32_t>(0x25),
__E_Body_LeftHandRingTip = static_cast<int32_t>(0x26),
__E_Body_LeftHandLittleMetacarpal = static_cast<int32_t>(0x27),
__E_Body_LeftHandLittleProximal = static_cast<int32_t>(0x28),
__E_Body_LeftHandLittleIntermediate = static_cast<int32_t>(0x29),
__E_Body_LeftHandLittleDistal = static_cast<int32_t>(0x2a),
__E_Body_LeftHandLittleTip = static_cast<int32_t>(0x2b),
__E_Body_RightHandPalm = static_cast<int32_t>(0x2c),
__E_Body_RightHandWrist = static_cast<int32_t>(0x2d),
__E_Body_RightHandThumbMetacarpal = static_cast<int32_t>(0x2e),
__E_Body_RightHandThumbProximal = static_cast<int32_t>(0x2f),
__E_Body_RightHandThumbDistal = static_cast<int32_t>(0x30),
__E_Body_RightHandThumbTip = static_cast<int32_t>(0x31),
__E_Body_RightHandIndexMetacarpal = static_cast<int32_t>(0x32),
__E_Body_RightHandIndexProximal = static_cast<int32_t>(0x33),
__E_Body_RightHandIndexIntermediate = static_cast<int32_t>(0x34),
__E_Body_RightHandIndexDistal = static_cast<int32_t>(0x35),
__E_Body_RightHandIndexTip = static_cast<int32_t>(0x36),
__E_Body_RightHandMiddleMetacarpal = static_cast<int32_t>(0x37),
__E_Body_RightHandMiddleProximal = static_cast<int32_t>(0x38),
__E_Body_RightHandMiddleIntermediate = static_cast<int32_t>(0x39),
__E_Body_RightHandMiddleDistal = static_cast<int32_t>(0x3a),
__E_Body_RightHandMiddleTip = static_cast<int32_t>(0x3b),
__E_Body_RightHandRingMetacarpal = static_cast<int32_t>(0x3c),
__E_Body_RightHandRingProximal = static_cast<int32_t>(0x3d),
__E_Body_RightHandRingIntermediate = static_cast<int32_t>(0x3e),
__E_Body_RightHandRingDistal = static_cast<int32_t>(0x3f),
__E_Body_RightHandRingTip = static_cast<int32_t>(0x40),
__E_Body_RightHandLittleMetacarpal = static_cast<int32_t>(0x41),
__E_Body_RightHandLittleProximal = static_cast<int32_t>(0x42),
__E_Body_RightHandLittleIntermediate = static_cast<int32_t>(0x43),
__E_Body_RightHandLittleDistal = static_cast<int32_t>(0x44),
__E_Body_RightHandLittleTip = static_cast<int32_t>(0x45),
__E_Body_LeftLegUpper = static_cast<int32_t>(0x46),
__E_Body_LeftLegLower = static_cast<int32_t>(0x47),
__E_Body_LeftFootAnkleTwist = static_cast<int32_t>(0x48),
__E_Body_LeftFootAnkle = static_cast<int32_t>(0x49),
__E_Body_LeftFootSubtalar = static_cast<int32_t>(0x4a),
__E_Body_LeftFootTransverse = static_cast<int32_t>(0x4b),
__E_Body_LeftFootBall = static_cast<int32_t>(0x4c),
__E_Body_RightLegUpper = static_cast<int32_t>(0x4d),
__E_Body_RightLegLower = static_cast<int32_t>(0x4e),
__E_Body_RightFootAnkleTwist = static_cast<int32_t>(0x4f),
__E_Body_RightFootAnkle = static_cast<int32_t>(0x50),
__E_Body_RightFootSubtalar = static_cast<int32_t>(0x51),
__E_Body_RightFootTransverse = static_cast<int32_t>(0x52),
__E_Body_RightFootBall = static_cast<int32_t>(0x53),
__E_Body_End = static_cast<int32_t>(0x54),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BodyJointId_Unwrapped () const noexcept {
return static_cast<__BodyJointId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BodyJointId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BodyJointId(int32_t  value__) noexcept;

/// @brief Field Body_Chest value: I32(5)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_Chest;

/// @brief Field Body_End value: I32(84)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_End;

/// @brief Field Body_Head value: I32(7)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_Head;

/// @brief Field Body_Hips value: I32(1)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_Hips;

/// @brief Field Body_LeftArmLower value: I32(11)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftArmLower;

/// @brief Field Body_LeftArmUpper value: I32(10)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftArmUpper;

/// @brief Field Body_LeftFootAnkle value: I32(73)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftFootAnkle;

/// @brief Field Body_LeftFootAnkleTwist value: I32(72)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftFootAnkleTwist;

/// @brief Field Body_LeftFootBall value: I32(76)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftFootBall;

/// @brief Field Body_LeftFootSubtalar value: I32(74)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftFootSubtalar;

/// @brief Field Body_LeftFootTransverse value: I32(75)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftFootTransverse;

/// @brief Field Body_LeftHandIndexDistal value: I32(27)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandIndexDistal;

/// @brief Field Body_LeftHandIndexIntermediate value: I32(26)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandIndexIntermediate;

/// @brief Field Body_LeftHandIndexMetacarpal value: I32(24)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandIndexMetacarpal;

/// @brief Field Body_LeftHandIndexProximal value: I32(25)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandIndexProximal;

/// @brief Field Body_LeftHandIndexTip value: I32(28)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandIndexTip;

/// @brief Field Body_LeftHandLittleDistal value: I32(42)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandLittleDistal;

/// @brief Field Body_LeftHandLittleIntermediate value: I32(41)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandLittleIntermediate;

/// @brief Field Body_LeftHandLittleMetacarpal value: I32(39)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandLittleMetacarpal;

/// @brief Field Body_LeftHandLittleProximal value: I32(40)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandLittleProximal;

/// @brief Field Body_LeftHandLittleTip value: I32(43)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandLittleTip;

/// @brief Field Body_LeftHandMiddleDistal value: I32(32)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandMiddleDistal;

/// @brief Field Body_LeftHandMiddleIntermediate value: I32(31)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandMiddleIntermediate;

/// @brief Field Body_LeftHandMiddleMetacarpal value: I32(29)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandMiddleMetacarpal;

/// @brief Field Body_LeftHandMiddleProximal value: I32(30)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandMiddleProximal;

/// @brief Field Body_LeftHandMiddleTip value: I32(33)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandMiddleTip;

/// @brief Field Body_LeftHandPalm value: I32(18)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandPalm;

/// @brief Field Body_LeftHandRingDistal value: I32(37)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandRingDistal;

/// @brief Field Body_LeftHandRingIntermediate value: I32(36)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandRingIntermediate;

/// @brief Field Body_LeftHandRingMetacarpal value: I32(34)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandRingMetacarpal;

/// @brief Field Body_LeftHandRingProximal value: I32(35)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandRingProximal;

/// @brief Field Body_LeftHandRingTip value: I32(38)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandRingTip;

/// @brief Field Body_LeftHandThumbDistal value: I32(22)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandThumbDistal;

/// @brief Field Body_LeftHandThumbMetacarpal value: I32(20)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandThumbMetacarpal;

/// @brief Field Body_LeftHandThumbProximal value: I32(21)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandThumbProximal;

/// @brief Field Body_LeftHandThumbTip value: I32(23)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandThumbTip;

/// @brief Field Body_LeftHandWrist value: I32(19)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandWrist;

/// @brief Field Body_LeftHandWristTwist value: I32(12)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftHandWristTwist;

/// @brief Field Body_LeftLegLower value: I32(71)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftLegLower;

/// @brief Field Body_LeftLegUpper value: I32(70)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftLegUpper;

/// @brief Field Body_LeftScapula value: I32(9)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftScapula;

/// @brief Field Body_LeftShoulder value: I32(8)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_LeftShoulder;

/// @brief Field Body_Neck value: I32(6)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_Neck;

/// @brief Field Body_RightArmLower value: I32(16)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightArmLower;

/// @brief Field Body_RightArmUpper value: I32(15)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightArmUpper;

/// @brief Field Body_RightFootAnkle value: I32(80)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightFootAnkle;

/// @brief Field Body_RightFootAnkleTwist value: I32(79)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightFootAnkleTwist;

/// @brief Field Body_RightFootBall value: I32(83)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightFootBall;

/// @brief Field Body_RightFootSubtalar value: I32(81)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightFootSubtalar;

/// @brief Field Body_RightFootTransverse value: I32(82)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightFootTransverse;

/// @brief Field Body_RightHandIndexDistal value: I32(53)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandIndexDistal;

/// @brief Field Body_RightHandIndexIntermediate value: I32(52)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandIndexIntermediate;

/// @brief Field Body_RightHandIndexMetacarpal value: I32(50)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandIndexMetacarpal;

/// @brief Field Body_RightHandIndexProximal value: I32(51)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandIndexProximal;

/// @brief Field Body_RightHandIndexTip value: I32(54)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandIndexTip;

/// @brief Field Body_RightHandLittleDistal value: I32(68)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandLittleDistal;

/// @brief Field Body_RightHandLittleIntermediate value: I32(67)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandLittleIntermediate;

/// @brief Field Body_RightHandLittleMetacarpal value: I32(65)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandLittleMetacarpal;

/// @brief Field Body_RightHandLittleProximal value: I32(66)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandLittleProximal;

/// @brief Field Body_RightHandLittleTip value: I32(69)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandLittleTip;

/// @brief Field Body_RightHandMiddleDistal value: I32(58)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandMiddleDistal;

/// @brief Field Body_RightHandMiddleIntermediate value: I32(57)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandMiddleIntermediate;

/// @brief Field Body_RightHandMiddleMetacarpal value: I32(55)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandMiddleMetacarpal;

/// @brief Field Body_RightHandMiddleProximal value: I32(56)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandMiddleProximal;

/// @brief Field Body_RightHandMiddleTip value: I32(59)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandMiddleTip;

/// @brief Field Body_RightHandPalm value: I32(44)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandPalm;

/// @brief Field Body_RightHandRingDistal value: I32(63)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandRingDistal;

/// @brief Field Body_RightHandRingIntermediate value: I32(62)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandRingIntermediate;

/// @brief Field Body_RightHandRingMetacarpal value: I32(60)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandRingMetacarpal;

/// @brief Field Body_RightHandRingProximal value: I32(61)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandRingProximal;

/// @brief Field Body_RightHandRingTip value: I32(64)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandRingTip;

/// @brief Field Body_RightHandThumbDistal value: I32(48)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandThumbDistal;

/// @brief Field Body_RightHandThumbMetacarpal value: I32(46)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandThumbMetacarpal;

/// @brief Field Body_RightHandThumbProximal value: I32(47)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandThumbProximal;

/// @brief Field Body_RightHandThumbTip value: I32(49)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandThumbTip;

/// @brief Field Body_RightHandWrist value: I32(45)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandWrist;

/// @brief Field Body_RightHandWristTwist value: I32(17)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightHandWristTwist;

/// @brief Field Body_RightLegLower value: I32(78)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightLegLower;

/// @brief Field Body_RightLegUpper value: I32(77)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightLegUpper;

/// @brief Field Body_RightScapula value: I32(14)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightScapula;

/// @brief Field Body_RightShoulder value: I32(13)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_RightShoulder;

/// @brief Field Body_Root value: I32(0)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_Root;

/// @brief Field Body_SpineLower value: I32(2)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_SpineLower;

/// @brief Field Body_SpineMiddle value: I32(3)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_SpineMiddle;

/// @brief Field Body_SpineUpper value: I32(4)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_SpineUpper;

/// @brief Field Body_Start value: I32(0)
static ::Oculus::Interaction::Body::Input::BodyJointId const Body_Start;

/// @brief Field Invalid value: I32(-1)
static ::Oculus::Interaction::Body::Input::BodyJointId const Invalid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16403};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Body::Input::BodyJointId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Body::Input::BodyJointId) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Body::Input
