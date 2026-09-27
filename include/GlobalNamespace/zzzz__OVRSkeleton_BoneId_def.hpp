#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSkeleton_BoneId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSkeleton_BoneId)
// Forward declare root types
namespace GlobalNamespace {
struct OVRSkeleton_BoneId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSkeleton_BoneId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSkeleton_BoneId, "", "OVRSkeleton/BoneId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSkeleton/BoneId
struct CORDL_TYPE OVRSkeleton_BoneId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRSkeleton_BoneId_Unwrapped
enum struct __OVRSkeleton_BoneId_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Hand_Start = static_cast<int32_t>(0x0),
__E_Hand_WristRoot = static_cast<int32_t>(0x0),
__E_Hand_ForearmStub = static_cast<int32_t>(0x1),
__E_Hand_Thumb0 = static_cast<int32_t>(0x2),
__E_Hand_Thumb1 = static_cast<int32_t>(0x3),
__E_Hand_Thumb2 = static_cast<int32_t>(0x4),
__E_Hand_Thumb3 = static_cast<int32_t>(0x5),
__E_Hand_Index1 = static_cast<int32_t>(0x6),
__E_Hand_Index2 = static_cast<int32_t>(0x7),
__E_Hand_Index3 = static_cast<int32_t>(0x8),
__E_Hand_Middle1 = static_cast<int32_t>(0x9),
__E_Hand_Middle2 = static_cast<int32_t>(0xa),
__E_Hand_Middle3 = static_cast<int32_t>(0xb),
__E_Hand_Ring1 = static_cast<int32_t>(0xc),
__E_Hand_Ring2 = static_cast<int32_t>(0xd),
__E_Hand_Ring3 = static_cast<int32_t>(0xe),
__E_Hand_Pinky0 = static_cast<int32_t>(0xf),
__E_Hand_Pinky1 = static_cast<int32_t>(0x10),
__E_Hand_Pinky2 = static_cast<int32_t>(0x11),
__E_Hand_Pinky3 = static_cast<int32_t>(0x12),
__E_Hand_MaxSkinnable = static_cast<int32_t>(0x13),
__E_Hand_ThumbTip = static_cast<int32_t>(0x13),
__E_Hand_IndexTip = static_cast<int32_t>(0x14),
__E_Hand_MiddleTip = static_cast<int32_t>(0x15),
__E_Hand_RingTip = static_cast<int32_t>(0x16),
__E_Hand_PinkyTip = static_cast<int32_t>(0x17),
__E_Hand_End = static_cast<int32_t>(0x18),
__E_XRHand_Start = static_cast<int32_t>(0x0),
__E_XRHand_Palm = static_cast<int32_t>(0x0),
__E_XRHand_Wrist = static_cast<int32_t>(0x1),
__E_XRHand_ThumbMetacarpal = static_cast<int32_t>(0x2),
__E_XRHand_ThumbProximal = static_cast<int32_t>(0x3),
__E_XRHand_ThumbDistal = static_cast<int32_t>(0x4),
__E_XRHand_ThumbTip = static_cast<int32_t>(0x5),
__E_XRHand_IndexMetacarpal = static_cast<int32_t>(0x6),
__E_XRHand_IndexProximal = static_cast<int32_t>(0x7),
__E_XRHand_IndexIntermediate = static_cast<int32_t>(0x8),
__E_XRHand_IndexDistal = static_cast<int32_t>(0x9),
__E_XRHand_IndexTip = static_cast<int32_t>(0xa),
__E_XRHand_MiddleMetacarpal = static_cast<int32_t>(0xb),
__E_XRHand_MiddleProximal = static_cast<int32_t>(0xc),
__E_XRHand_MiddleIntermediate = static_cast<int32_t>(0xd),
__E_XRHand_MiddleDistal = static_cast<int32_t>(0xe),
__E_XRHand_MiddleTip = static_cast<int32_t>(0xf),
__E_XRHand_RingMetacarpal = static_cast<int32_t>(0x10),
__E_XRHand_RingProximal = static_cast<int32_t>(0x11),
__E_XRHand_RingIntermediate = static_cast<int32_t>(0x12),
__E_XRHand_RingDistal = static_cast<int32_t>(0x13),
__E_XRHand_RingTip = static_cast<int32_t>(0x14),
__E_XRHand_LittleMetacarpal = static_cast<int32_t>(0x15),
__E_XRHand_LittleProximal = static_cast<int32_t>(0x16),
__E_XRHand_LittleIntermediate = static_cast<int32_t>(0x17),
__E_XRHand_LittleDistal = static_cast<int32_t>(0x18),
__E_XRHand_LittleTip = static_cast<int32_t>(0x19),
__E_XRHand_Max = static_cast<int32_t>(0x1a),
__E_XRHand_End = static_cast<int32_t>(0x1a),
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
__E_Body_End = static_cast<int32_t>(0x46),
__E_FullBody_Start = static_cast<int32_t>(0x0),
__E_FullBody_Root = static_cast<int32_t>(0x0),
__E_FullBody_Hips = static_cast<int32_t>(0x1),
__E_FullBody_SpineLower = static_cast<int32_t>(0x2),
__E_FullBody_SpineMiddle = static_cast<int32_t>(0x3),
__E_FullBody_SpineUpper = static_cast<int32_t>(0x4),
__E_FullBody_Chest = static_cast<int32_t>(0x5),
__E_FullBody_Neck = static_cast<int32_t>(0x6),
__E_FullBody_Head = static_cast<int32_t>(0x7),
__E_FullBody_LeftShoulder = static_cast<int32_t>(0x8),
__E_FullBody_LeftScapula = static_cast<int32_t>(0x9),
__E_FullBody_LeftArmUpper = static_cast<int32_t>(0xa),
__E_FullBody_LeftArmLower = static_cast<int32_t>(0xb),
__E_FullBody_LeftHandWristTwist = static_cast<int32_t>(0xc),
__E_FullBody_RightShoulder = static_cast<int32_t>(0xd),
__E_FullBody_RightScapula = static_cast<int32_t>(0xe),
__E_FullBody_RightArmUpper = static_cast<int32_t>(0xf),
__E_FullBody_RightArmLower = static_cast<int32_t>(0x10),
__E_FullBody_RightHandWristTwist = static_cast<int32_t>(0x11),
__E_FullBody_LeftHandPalm = static_cast<int32_t>(0x12),
__E_FullBody_LeftHandWrist = static_cast<int32_t>(0x13),
__E_FullBody_LeftHandThumbMetacarpal = static_cast<int32_t>(0x14),
__E_FullBody_LeftHandThumbProximal = static_cast<int32_t>(0x15),
__E_FullBody_LeftHandThumbDistal = static_cast<int32_t>(0x16),
__E_FullBody_LeftHandThumbTip = static_cast<int32_t>(0x17),
__E_FullBody_LeftHandIndexMetacarpal = static_cast<int32_t>(0x18),
__E_FullBody_LeftHandIndexProximal = static_cast<int32_t>(0x19),
__E_FullBody_LeftHandIndexIntermediate = static_cast<int32_t>(0x1a),
__E_FullBody_LeftHandIndexDistal = static_cast<int32_t>(0x1b),
__E_FullBody_LeftHandIndexTip = static_cast<int32_t>(0x1c),
__E_FullBody_LeftHandMiddleMetacarpal = static_cast<int32_t>(0x1d),
__E_FullBody_LeftHandMiddleProximal = static_cast<int32_t>(0x1e),
__E_FullBody_LeftHandMiddleIntermediate = static_cast<int32_t>(0x1f),
__E_FullBody_LeftHandMiddleDistal = static_cast<int32_t>(0x20),
__E_FullBody_LeftHandMiddleTip = static_cast<int32_t>(0x21),
__E_FullBody_LeftHandRingMetacarpal = static_cast<int32_t>(0x22),
__E_FullBody_LeftHandRingProximal = static_cast<int32_t>(0x23),
__E_FullBody_LeftHandRingIntermediate = static_cast<int32_t>(0x24),
__E_FullBody_LeftHandRingDistal = static_cast<int32_t>(0x25),
__E_FullBody_LeftHandRingTip = static_cast<int32_t>(0x26),
__E_FullBody_LeftHandLittleMetacarpal = static_cast<int32_t>(0x27),
__E_FullBody_LeftHandLittleProximal = static_cast<int32_t>(0x28),
__E_FullBody_LeftHandLittleIntermediate = static_cast<int32_t>(0x29),
__E_FullBody_LeftHandLittleDistal = static_cast<int32_t>(0x2a),
__E_FullBody_LeftHandLittleTip = static_cast<int32_t>(0x2b),
__E_FullBody_RightHandPalm = static_cast<int32_t>(0x2c),
__E_FullBody_RightHandWrist = static_cast<int32_t>(0x2d),
__E_FullBody_RightHandThumbMetacarpal = static_cast<int32_t>(0x2e),
__E_FullBody_RightHandThumbProximal = static_cast<int32_t>(0x2f),
__E_FullBody_RightHandThumbDistal = static_cast<int32_t>(0x30),
__E_FullBody_RightHandThumbTip = static_cast<int32_t>(0x31),
__E_FullBody_RightHandIndexMetacarpal = static_cast<int32_t>(0x32),
__E_FullBody_RightHandIndexProximal = static_cast<int32_t>(0x33),
__E_FullBody_RightHandIndexIntermediate = static_cast<int32_t>(0x34),
__E_FullBody_RightHandIndexDistal = static_cast<int32_t>(0x35),
__E_FullBody_RightHandIndexTip = static_cast<int32_t>(0x36),
__E_FullBody_RightHandMiddleMetacarpal = static_cast<int32_t>(0x37),
__E_FullBody_RightHandMiddleProximal = static_cast<int32_t>(0x38),
__E_FullBody_RightHandMiddleIntermediate = static_cast<int32_t>(0x39),
__E_FullBody_RightHandMiddleDistal = static_cast<int32_t>(0x3a),
__E_FullBody_RightHandMiddleTip = static_cast<int32_t>(0x3b),
__E_FullBody_RightHandRingMetacarpal = static_cast<int32_t>(0x3c),
__E_FullBody_RightHandRingProximal = static_cast<int32_t>(0x3d),
__E_FullBody_RightHandRingIntermediate = static_cast<int32_t>(0x3e),
__E_FullBody_RightHandRingDistal = static_cast<int32_t>(0x3f),
__E_FullBody_RightHandRingTip = static_cast<int32_t>(0x40),
__E_FullBody_RightHandLittleMetacarpal = static_cast<int32_t>(0x41),
__E_FullBody_RightHandLittleProximal = static_cast<int32_t>(0x42),
__E_FullBody_RightHandLittleIntermediate = static_cast<int32_t>(0x43),
__E_FullBody_RightHandLittleDistal = static_cast<int32_t>(0x44),
__E_FullBody_RightHandLittleTip = static_cast<int32_t>(0x45),
__E_FullBody_LeftUpperLeg = static_cast<int32_t>(0x46),
__E_FullBody_LeftLowerLeg = static_cast<int32_t>(0x47),
__E_FullBody_LeftFootAnkleTwist = static_cast<int32_t>(0x48),
__E_FullBody_LeftFootAnkle = static_cast<int32_t>(0x49),
__E_FullBody_LeftFootSubtalar = static_cast<int32_t>(0x4a),
__E_FullBody_LeftFootTransverse = static_cast<int32_t>(0x4b),
__E_FullBody_LeftFootBall = static_cast<int32_t>(0x4c),
__E_FullBody_RightUpperLeg = static_cast<int32_t>(0x4d),
__E_FullBody_RightLowerLeg = static_cast<int32_t>(0x4e),
__E_FullBody_RightFootAnkleTwist = static_cast<int32_t>(0x4f),
__E_FullBody_RightFootAnkle = static_cast<int32_t>(0x50),
__E_FullBody_RightFootSubtalar = static_cast<int32_t>(0x51),
__E_FullBody_RightFootTransverse = static_cast<int32_t>(0x52),
__E_FullBody_RightFootBall = static_cast<int32_t>(0x53),
__E_FullBody_End = static_cast<int32_t>(0x54),
__E_Max = static_cast<int32_t>(0x54),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRSkeleton_BoneId_Unwrapped () const noexcept {
return static_cast<__OVRSkeleton_BoneId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRSkeleton_BoneId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRSkeleton_BoneId(int32_t  value__) noexcept;

/// @brief Field Body_Chest value: I32(5)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Chest;

/// @brief Field Body_End value: I32(70)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_End;

/// @brief Field Body_Head value: I32(7)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Head;

/// @brief Field Body_Hips value: I32(1)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Hips;

/// @brief Field Body_LeftArmLower value: I32(11)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftArmLower;

/// @brief Field Body_LeftArmUpper value: I32(10)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftArmUpper;

/// @brief Field Body_LeftHandIndexDistal value: I32(27)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexDistal;

/// @brief Field Body_LeftHandIndexIntermediate value: I32(26)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexIntermediate;

/// @brief Field Body_LeftHandIndexMetacarpal value: I32(24)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexMetacarpal;

/// @brief Field Body_LeftHandIndexProximal value: I32(25)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexProximal;

/// @brief Field Body_LeftHandIndexTip value: I32(28)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandIndexTip;

/// @brief Field Body_LeftHandLittleDistal value: I32(42)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleDistal;

/// @brief Field Body_LeftHandLittleIntermediate value: I32(41)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleIntermediate;

/// @brief Field Body_LeftHandLittleMetacarpal value: I32(39)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleMetacarpal;

/// @brief Field Body_LeftHandLittleProximal value: I32(40)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleProximal;

/// @brief Field Body_LeftHandLittleTip value: I32(43)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandLittleTip;

/// @brief Field Body_LeftHandMiddleDistal value: I32(32)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleDistal;

/// @brief Field Body_LeftHandMiddleIntermediate value: I32(31)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleIntermediate;

/// @brief Field Body_LeftHandMiddleMetacarpal value: I32(29)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleMetacarpal;

/// @brief Field Body_LeftHandMiddleProximal value: I32(30)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleProximal;

/// @brief Field Body_LeftHandMiddleTip value: I32(33)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandMiddleTip;

/// @brief Field Body_LeftHandPalm value: I32(18)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandPalm;

/// @brief Field Body_LeftHandRingDistal value: I32(37)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingDistal;

/// @brief Field Body_LeftHandRingIntermediate value: I32(36)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingIntermediate;

/// @brief Field Body_LeftHandRingMetacarpal value: I32(34)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingMetacarpal;

/// @brief Field Body_LeftHandRingProximal value: I32(35)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingProximal;

/// @brief Field Body_LeftHandRingTip value: I32(38)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandRingTip;

/// @brief Field Body_LeftHandThumbDistal value: I32(22)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbDistal;

/// @brief Field Body_LeftHandThumbMetacarpal value: I32(20)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbMetacarpal;

/// @brief Field Body_LeftHandThumbProximal value: I32(21)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbProximal;

/// @brief Field Body_LeftHandThumbTip value: I32(23)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandThumbTip;

/// @brief Field Body_LeftHandWrist value: I32(19)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandWrist;

/// @brief Field Body_LeftHandWristTwist value: I32(12)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftHandWristTwist;

/// @brief Field Body_LeftScapula value: I32(9)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftScapula;

/// @brief Field Body_LeftShoulder value: I32(8)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_LeftShoulder;

/// @brief Field Body_Neck value: I32(6)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Neck;

/// @brief Field Body_RightArmLower value: I32(16)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightArmLower;

/// @brief Field Body_RightArmUpper value: I32(15)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightArmUpper;

/// @brief Field Body_RightHandIndexDistal value: I32(53)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexDistal;

/// @brief Field Body_RightHandIndexIntermediate value: I32(52)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexIntermediate;

/// @brief Field Body_RightHandIndexMetacarpal value: I32(50)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexMetacarpal;

/// @brief Field Body_RightHandIndexProximal value: I32(51)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexProximal;

/// @brief Field Body_RightHandIndexTip value: I32(54)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandIndexTip;

/// @brief Field Body_RightHandLittleDistal value: I32(68)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleDistal;

/// @brief Field Body_RightHandLittleIntermediate value: I32(67)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleIntermediate;

/// @brief Field Body_RightHandLittleMetacarpal value: I32(65)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleMetacarpal;

/// @brief Field Body_RightHandLittleProximal value: I32(66)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleProximal;

/// @brief Field Body_RightHandLittleTip value: I32(69)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandLittleTip;

/// @brief Field Body_RightHandMiddleDistal value: I32(58)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleDistal;

/// @brief Field Body_RightHandMiddleIntermediate value: I32(57)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleIntermediate;

/// @brief Field Body_RightHandMiddleMetacarpal value: I32(55)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleMetacarpal;

/// @brief Field Body_RightHandMiddleProximal value: I32(56)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleProximal;

/// @brief Field Body_RightHandMiddleTip value: I32(59)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandMiddleTip;

/// @brief Field Body_RightHandPalm value: I32(44)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandPalm;

/// @brief Field Body_RightHandRingDistal value: I32(63)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingDistal;

/// @brief Field Body_RightHandRingIntermediate value: I32(62)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingIntermediate;

/// @brief Field Body_RightHandRingMetacarpal value: I32(60)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingMetacarpal;

/// @brief Field Body_RightHandRingProximal value: I32(61)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingProximal;

/// @brief Field Body_RightHandRingTip value: I32(64)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandRingTip;

/// @brief Field Body_RightHandThumbDistal value: I32(48)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbDistal;

/// @brief Field Body_RightHandThumbMetacarpal value: I32(46)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbMetacarpal;

/// @brief Field Body_RightHandThumbProximal value: I32(47)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbProximal;

/// @brief Field Body_RightHandThumbTip value: I32(49)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandThumbTip;

/// @brief Field Body_RightHandWrist value: I32(45)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandWrist;

/// @brief Field Body_RightHandWristTwist value: I32(17)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightHandWristTwist;

/// @brief Field Body_RightScapula value: I32(14)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightScapula;

/// @brief Field Body_RightShoulder value: I32(13)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_RightShoulder;

/// @brief Field Body_Root value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Root;

/// @brief Field Body_SpineLower value: I32(2)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_SpineLower;

/// @brief Field Body_SpineMiddle value: I32(3)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_SpineMiddle;

/// @brief Field Body_SpineUpper value: I32(4)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_SpineUpper;

/// @brief Field Body_Start value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const Body_Start;

/// @brief Field FullBody_Chest value: I32(5)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_Chest;

/// @brief Field FullBody_End value: I32(84)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_End;

/// @brief Field FullBody_Head value: I32(7)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_Head;

/// @brief Field FullBody_Hips value: I32(1)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_Hips;

/// @brief Field FullBody_LeftArmLower value: I32(11)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftArmLower;

/// @brief Field FullBody_LeftArmUpper value: I32(10)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftArmUpper;

/// @brief Field FullBody_LeftFootAnkle value: I32(73)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftFootAnkle;

/// @brief Field FullBody_LeftFootAnkleTwist value: I32(72)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftFootAnkleTwist;

/// @brief Field FullBody_LeftFootBall value: I32(76)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftFootBall;

/// @brief Field FullBody_LeftFootSubtalar value: I32(74)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftFootSubtalar;

/// @brief Field FullBody_LeftFootTransverse value: I32(75)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftFootTransverse;

/// @brief Field FullBody_LeftHandIndexDistal value: I32(27)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandIndexDistal;

/// @brief Field FullBody_LeftHandIndexIntermediate value: I32(26)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandIndexIntermediate;

/// @brief Field FullBody_LeftHandIndexMetacarpal value: I32(24)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandIndexMetacarpal;

/// @brief Field FullBody_LeftHandIndexProximal value: I32(25)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandIndexProximal;

/// @brief Field FullBody_LeftHandIndexTip value: I32(28)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandIndexTip;

/// @brief Field FullBody_LeftHandLittleDistal value: I32(42)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandLittleDistal;

/// @brief Field FullBody_LeftHandLittleIntermediate value: I32(41)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandLittleIntermediate;

/// @brief Field FullBody_LeftHandLittleMetacarpal value: I32(39)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandLittleMetacarpal;

/// @brief Field FullBody_LeftHandLittleProximal value: I32(40)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandLittleProximal;

/// @brief Field FullBody_LeftHandLittleTip value: I32(43)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandLittleTip;

/// @brief Field FullBody_LeftHandMiddleDistal value: I32(32)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandMiddleDistal;

/// @brief Field FullBody_LeftHandMiddleIntermediate value: I32(31)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandMiddleIntermediate;

/// @brief Field FullBody_LeftHandMiddleMetacarpal value: I32(29)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandMiddleMetacarpal;

/// @brief Field FullBody_LeftHandMiddleProximal value: I32(30)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandMiddleProximal;

/// @brief Field FullBody_LeftHandMiddleTip value: I32(33)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandMiddleTip;

/// @brief Field FullBody_LeftHandPalm value: I32(18)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandPalm;

/// @brief Field FullBody_LeftHandRingDistal value: I32(37)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandRingDistal;

/// @brief Field FullBody_LeftHandRingIntermediate value: I32(36)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandRingIntermediate;

/// @brief Field FullBody_LeftHandRingMetacarpal value: I32(34)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandRingMetacarpal;

/// @brief Field FullBody_LeftHandRingProximal value: I32(35)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandRingProximal;

/// @brief Field FullBody_LeftHandRingTip value: I32(38)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandRingTip;

/// @brief Field FullBody_LeftHandThumbDistal value: I32(22)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandThumbDistal;

/// @brief Field FullBody_LeftHandThumbMetacarpal value: I32(20)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandThumbMetacarpal;

/// @brief Field FullBody_LeftHandThumbProximal value: I32(21)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandThumbProximal;

/// @brief Field FullBody_LeftHandThumbTip value: I32(23)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandThumbTip;

/// @brief Field FullBody_LeftHandWrist value: I32(19)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandWrist;

/// @brief Field FullBody_LeftHandWristTwist value: I32(12)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftHandWristTwist;

/// @brief Field FullBody_LeftLowerLeg value: I32(71)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftLowerLeg;

/// @brief Field FullBody_LeftScapula value: I32(9)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftScapula;

/// @brief Field FullBody_LeftShoulder value: I32(8)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftShoulder;

/// @brief Field FullBody_LeftUpperLeg value: I32(70)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_LeftUpperLeg;

/// @brief Field FullBody_Neck value: I32(6)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_Neck;

/// @brief Field FullBody_RightArmLower value: I32(16)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightArmLower;

/// @brief Field FullBody_RightArmUpper value: I32(15)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightArmUpper;

/// @brief Field FullBody_RightFootAnkle value: I32(80)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightFootAnkle;

/// @brief Field FullBody_RightFootAnkleTwist value: I32(79)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightFootAnkleTwist;

/// @brief Field FullBody_RightFootBall value: I32(83)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightFootBall;

/// @brief Field FullBody_RightFootSubtalar value: I32(81)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightFootSubtalar;

/// @brief Field FullBody_RightFootTransverse value: I32(82)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightFootTransverse;

/// @brief Field FullBody_RightHandIndexDistal value: I32(53)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandIndexDistal;

/// @brief Field FullBody_RightHandIndexIntermediate value: I32(52)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandIndexIntermediate;

/// @brief Field FullBody_RightHandIndexMetacarpal value: I32(50)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandIndexMetacarpal;

/// @brief Field FullBody_RightHandIndexProximal value: I32(51)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandIndexProximal;

/// @brief Field FullBody_RightHandIndexTip value: I32(54)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandIndexTip;

/// @brief Field FullBody_RightHandLittleDistal value: I32(68)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandLittleDistal;

/// @brief Field FullBody_RightHandLittleIntermediate value: I32(67)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandLittleIntermediate;

/// @brief Field FullBody_RightHandLittleMetacarpal value: I32(65)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandLittleMetacarpal;

/// @brief Field FullBody_RightHandLittleProximal value: I32(66)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandLittleProximal;

/// @brief Field FullBody_RightHandLittleTip value: I32(69)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandLittleTip;

/// @brief Field FullBody_RightHandMiddleDistal value: I32(58)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandMiddleDistal;

/// @brief Field FullBody_RightHandMiddleIntermediate value: I32(57)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandMiddleIntermediate;

/// @brief Field FullBody_RightHandMiddleMetacarpal value: I32(55)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandMiddleMetacarpal;

/// @brief Field FullBody_RightHandMiddleProximal value: I32(56)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandMiddleProximal;

/// @brief Field FullBody_RightHandMiddleTip value: I32(59)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandMiddleTip;

/// @brief Field FullBody_RightHandPalm value: I32(44)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandPalm;

/// @brief Field FullBody_RightHandRingDistal value: I32(63)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandRingDistal;

/// @brief Field FullBody_RightHandRingIntermediate value: I32(62)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandRingIntermediate;

/// @brief Field FullBody_RightHandRingMetacarpal value: I32(60)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandRingMetacarpal;

/// @brief Field FullBody_RightHandRingProximal value: I32(61)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandRingProximal;

/// @brief Field FullBody_RightHandRingTip value: I32(64)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandRingTip;

/// @brief Field FullBody_RightHandThumbDistal value: I32(48)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandThumbDistal;

/// @brief Field FullBody_RightHandThumbMetacarpal value: I32(46)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandThumbMetacarpal;

/// @brief Field FullBody_RightHandThumbProximal value: I32(47)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandThumbProximal;

/// @brief Field FullBody_RightHandThumbTip value: I32(49)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandThumbTip;

/// @brief Field FullBody_RightHandWrist value: I32(45)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandWrist;

/// @brief Field FullBody_RightHandWristTwist value: I32(17)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightHandWristTwist;

/// @brief Field FullBody_RightLowerLeg value: I32(78)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightLowerLeg;

/// @brief Field FullBody_RightScapula value: I32(14)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightScapula;

/// @brief Field FullBody_RightShoulder value: I32(13)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightShoulder;

/// @brief Field FullBody_RightUpperLeg value: I32(77)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_RightUpperLeg;

/// @brief Field FullBody_Root value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_Root;

/// @brief Field FullBody_SpineLower value: I32(2)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_SpineLower;

/// @brief Field FullBody_SpineMiddle value: I32(3)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_SpineMiddle;

/// @brief Field FullBody_SpineUpper value: I32(4)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_SpineUpper;

/// @brief Field FullBody_Start value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const FullBody_Start;

/// @brief Field Hand_End value: I32(24)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_End;

/// @brief Field Hand_ForearmStub value: I32(1)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_ForearmStub;

/// @brief Field Hand_Index1 value: I32(6)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Index1;

/// @brief Field Hand_Index2 value: I32(7)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Index2;

/// @brief Field Hand_Index3 value: I32(8)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Index3;

/// @brief Field Hand_IndexTip value: I32(20)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_IndexTip;

/// @brief Field Hand_MaxSkinnable value: I32(19)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_MaxSkinnable;

/// @brief Field Hand_Middle1 value: I32(9)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Middle1;

/// @brief Field Hand_Middle2 value: I32(10)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Middle2;

/// @brief Field Hand_Middle3 value: I32(11)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Middle3;

/// @brief Field Hand_MiddleTip value: I32(21)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_MiddleTip;

/// @brief Field Hand_Pinky0 value: I32(15)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky0;

/// @brief Field Hand_Pinky1 value: I32(16)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky1;

/// @brief Field Hand_Pinky2 value: I32(17)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky2;

/// @brief Field Hand_Pinky3 value: I32(18)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Pinky3;

/// @brief Field Hand_PinkyTip value: I32(23)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_PinkyTip;

/// @brief Field Hand_Ring1 value: I32(12)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Ring1;

/// @brief Field Hand_Ring2 value: I32(13)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Ring2;

/// @brief Field Hand_Ring3 value: I32(14)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Ring3;

/// @brief Field Hand_RingTip value: I32(22)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_RingTip;

/// @brief Field Hand_Start value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Start;

/// @brief Field Hand_Thumb0 value: I32(2)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb0;

/// @brief Field Hand_Thumb1 value: I32(3)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb1;

/// @brief Field Hand_Thumb2 value: I32(4)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb2;

/// @brief Field Hand_Thumb3 value: I32(5)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_Thumb3;

/// @brief Field Hand_ThumbTip value: I32(19)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_ThumbTip;

/// @brief Field Hand_WristRoot value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const Hand_WristRoot;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::OVRSkeleton_BoneId const Invalid;

/// @brief Field Max value: I32(84)
static ::GlobalNamespace::OVRSkeleton_BoneId const Max;

/// @brief Field XRHand_End value: I32(26)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_End;

/// @brief Field XRHand_IndexDistal value: I32(9)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_IndexDistal;

/// @brief Field XRHand_IndexIntermediate value: I32(8)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_IndexIntermediate;

/// @brief Field XRHand_IndexMetacarpal value: I32(6)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_IndexMetacarpal;

/// @brief Field XRHand_IndexProximal value: I32(7)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_IndexProximal;

/// @brief Field XRHand_IndexTip value: I32(10)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_IndexTip;

/// @brief Field XRHand_LittleDistal value: I32(24)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_LittleDistal;

/// @brief Field XRHand_LittleIntermediate value: I32(23)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_LittleIntermediate;

/// @brief Field XRHand_LittleMetacarpal value: I32(21)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_LittleMetacarpal;

/// @brief Field XRHand_LittleProximal value: I32(22)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_LittleProximal;

/// @brief Field XRHand_LittleTip value: I32(25)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_LittleTip;

/// @brief Field XRHand_Max value: I32(26)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_Max;

/// @brief Field XRHand_MiddleDistal value: I32(14)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_MiddleDistal;

/// @brief Field XRHand_MiddleIntermediate value: I32(13)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_MiddleIntermediate;

/// @brief Field XRHand_MiddleMetacarpal value: I32(11)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_MiddleMetacarpal;

/// @brief Field XRHand_MiddleProximal value: I32(12)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_MiddleProximal;

/// @brief Field XRHand_MiddleTip value: I32(15)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_MiddleTip;

/// @brief Field XRHand_Palm value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_Palm;

/// @brief Field XRHand_RingDistal value: I32(19)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_RingDistal;

/// @brief Field XRHand_RingIntermediate value: I32(18)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_RingIntermediate;

/// @brief Field XRHand_RingMetacarpal value: I32(16)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_RingMetacarpal;

/// @brief Field XRHand_RingProximal value: I32(17)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_RingProximal;

/// @brief Field XRHand_RingTip value: I32(20)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_RingTip;

/// @brief Field XRHand_Start value: I32(0)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_Start;

/// @brief Field XRHand_ThumbDistal value: I32(4)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_ThumbDistal;

/// @brief Field XRHand_ThumbMetacarpal value: I32(2)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_ThumbMetacarpal;

/// @brief Field XRHand_ThumbProximal value: I32(3)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_ThumbProximal;

/// @brief Field XRHand_ThumbTip value: I32(5)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_ThumbTip;

/// @brief Field XRHand_Wrist value: I32(1)
static ::GlobalNamespace::OVRSkeleton_BoneId const XRHand_Wrist;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSkeleton_BoneId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSkeleton_BoneId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
