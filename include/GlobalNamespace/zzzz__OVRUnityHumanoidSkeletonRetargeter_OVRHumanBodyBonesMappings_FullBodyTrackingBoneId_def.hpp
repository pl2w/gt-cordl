#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_FullBodyTrackingBoneId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRUnityHumanoidSkeletonRetargeter_OVRHumanBodyBonesMappings_FullBodyTrackingBoneId)
// Forward declare root types
namespace GlobalNamespace {
struct OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId, "", "OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/FullBodyTrackingBoneId");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRUnityHumanoidSkeletonRetargeter/OVRHumanBodyBonesMappings/FullBodyTrackingBoneId
struct CORDL_TYPE OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped
enum struct __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped : int32_t {
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
__E_NoOverride = static_cast<int32_t>(0x55),
__E_Remove = static_cast<int32_t>(0x56),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped () const noexcept {
return static_cast<__OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId(int32_t  value__) noexcept;

/// @brief Field FullBody_Chest value: I32(5)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Chest;

/// @brief Field FullBody_End value: I32(84)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_End;

/// @brief Field FullBody_Head value: I32(7)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Head;

/// @brief Field FullBody_Hips value: I32(1)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Hips;

/// @brief Field FullBody_LeftArmLower value: I32(11)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftArmLower;

/// @brief Field FullBody_LeftArmUpper value: I32(10)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftArmUpper;

/// @brief Field FullBody_LeftFootAnkle value: I32(73)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootAnkle;

/// @brief Field FullBody_LeftFootAnkleTwist value: I32(72)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootAnkleTwist;

/// @brief Field FullBody_LeftFootBall value: I32(76)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootBall;

/// @brief Field FullBody_LeftFootSubtalar value: I32(74)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootSubtalar;

/// @brief Field FullBody_LeftFootTransverse value: I32(75)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftFootTransverse;

/// @brief Field FullBody_LeftHandIndexDistal value: I32(27)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexDistal;

/// @brief Field FullBody_LeftHandIndexIntermediate value: I32(26)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexIntermediate;

/// @brief Field FullBody_LeftHandIndexMetacarpal value: I32(24)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexMetacarpal;

/// @brief Field FullBody_LeftHandIndexProximal value: I32(25)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexProximal;

/// @brief Field FullBody_LeftHandIndexTip value: I32(28)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandIndexTip;

/// @brief Field FullBody_LeftHandLittleDistal value: I32(42)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleDistal;

/// @brief Field FullBody_LeftHandLittleIntermediate value: I32(41)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleIntermediate;

/// @brief Field FullBody_LeftHandLittleMetacarpal value: I32(39)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleMetacarpal;

/// @brief Field FullBody_LeftHandLittleProximal value: I32(40)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleProximal;

/// @brief Field FullBody_LeftHandLittleTip value: I32(43)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandLittleTip;

/// @brief Field FullBody_LeftHandMiddleDistal value: I32(32)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleDistal;

/// @brief Field FullBody_LeftHandMiddleIntermediate value: I32(31)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleIntermediate;

/// @brief Field FullBody_LeftHandMiddleMetacarpal value: I32(29)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleMetacarpal;

/// @brief Field FullBody_LeftHandMiddleProximal value: I32(30)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleProximal;

/// @brief Field FullBody_LeftHandMiddleTip value: I32(33)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandMiddleTip;

/// @brief Field FullBody_LeftHandPalm value: I32(18)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandPalm;

/// @brief Field FullBody_LeftHandRingDistal value: I32(37)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingDistal;

/// @brief Field FullBody_LeftHandRingIntermediate value: I32(36)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingIntermediate;

/// @brief Field FullBody_LeftHandRingMetacarpal value: I32(34)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingMetacarpal;

/// @brief Field FullBody_LeftHandRingProximal value: I32(35)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingProximal;

/// @brief Field FullBody_LeftHandRingTip value: I32(38)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandRingTip;

/// @brief Field FullBody_LeftHandThumbDistal value: I32(22)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbDistal;

/// @brief Field FullBody_LeftHandThumbMetacarpal value: I32(20)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbMetacarpal;

/// @brief Field FullBody_LeftHandThumbProximal value: I32(21)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbProximal;

/// @brief Field FullBody_LeftHandThumbTip value: I32(23)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandThumbTip;

/// @brief Field FullBody_LeftHandWrist value: I32(19)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandWrist;

/// @brief Field FullBody_LeftHandWristTwist value: I32(12)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftHandWristTwist;

/// @brief Field FullBody_LeftLowerLeg value: I32(71)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftLowerLeg;

/// @brief Field FullBody_LeftScapula value: I32(9)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftScapula;

/// @brief Field FullBody_LeftShoulder value: I32(8)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftShoulder;

/// @brief Field FullBody_LeftUpperLeg value: I32(70)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_LeftUpperLeg;

/// @brief Field FullBody_Neck value: I32(6)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Neck;

/// @brief Field FullBody_RightArmLower value: I32(16)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightArmLower;

/// @brief Field FullBody_RightArmUpper value: I32(15)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightArmUpper;

/// @brief Field FullBody_RightFootAnkle value: I32(80)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootAnkle;

/// @brief Field FullBody_RightFootAnkleTwist value: I32(79)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootAnkleTwist;

/// @brief Field FullBody_RightFootBall value: I32(83)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootBall;

/// @brief Field FullBody_RightFootSubtalar value: I32(81)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootSubtalar;

/// @brief Field FullBody_RightFootTransverse value: I32(82)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightFootTransverse;

/// @brief Field FullBody_RightHandIndexDistal value: I32(53)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexDistal;

/// @brief Field FullBody_RightHandIndexIntermediate value: I32(52)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexIntermediate;

/// @brief Field FullBody_RightHandIndexMetacarpal value: I32(50)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexMetacarpal;

/// @brief Field FullBody_RightHandIndexProximal value: I32(51)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexProximal;

/// @brief Field FullBody_RightHandIndexTip value: I32(54)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandIndexTip;

/// @brief Field FullBody_RightHandLittleDistal value: I32(68)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleDistal;

/// @brief Field FullBody_RightHandLittleIntermediate value: I32(67)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleIntermediate;

/// @brief Field FullBody_RightHandLittleMetacarpal value: I32(65)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleMetacarpal;

/// @brief Field FullBody_RightHandLittleProximal value: I32(66)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleProximal;

/// @brief Field FullBody_RightHandLittleTip value: I32(69)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandLittleTip;

/// @brief Field FullBody_RightHandMiddleDistal value: I32(58)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleDistal;

/// @brief Field FullBody_RightHandMiddleIntermediate value: I32(57)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleIntermediate;

/// @brief Field FullBody_RightHandMiddleMetacarpal value: I32(55)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleMetacarpal;

/// @brief Field FullBody_RightHandMiddleProximal value: I32(56)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleProximal;

/// @brief Field FullBody_RightHandMiddleTip value: I32(59)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandMiddleTip;

/// @brief Field FullBody_RightHandPalm value: I32(44)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandPalm;

/// @brief Field FullBody_RightHandRingDistal value: I32(63)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingDistal;

/// @brief Field FullBody_RightHandRingIntermediate value: I32(62)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingIntermediate;

/// @brief Field FullBody_RightHandRingMetacarpal value: I32(60)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingMetacarpal;

/// @brief Field FullBody_RightHandRingProximal value: I32(61)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingProximal;

/// @brief Field FullBody_RightHandRingTip value: I32(64)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandRingTip;

/// @brief Field FullBody_RightHandThumbDistal value: I32(48)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbDistal;

/// @brief Field FullBody_RightHandThumbMetacarpal value: I32(46)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbMetacarpal;

/// @brief Field FullBody_RightHandThumbProximal value: I32(47)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbProximal;

/// @brief Field FullBody_RightHandThumbTip value: I32(49)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandThumbTip;

/// @brief Field FullBody_RightHandWrist value: I32(45)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandWrist;

/// @brief Field FullBody_RightHandWristTwist value: I32(17)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightHandWristTwist;

/// @brief Field FullBody_RightLowerLeg value: I32(78)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightLowerLeg;

/// @brief Field FullBody_RightScapula value: I32(14)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightScapula;

/// @brief Field FullBody_RightShoulder value: I32(13)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightShoulder;

/// @brief Field FullBody_RightUpperLeg value: I32(77)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_RightUpperLeg;

/// @brief Field FullBody_Root value: I32(0)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Root;

/// @brief Field FullBody_SpineLower value: I32(2)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_SpineLower;

/// @brief Field FullBody_SpineMiddle value: I32(3)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_SpineMiddle;

/// @brief Field FullBody_SpineUpper value: I32(4)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_SpineUpper;

/// @brief Field FullBody_Start value: I32(0)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const FullBody_Start;

/// @brief Field NoOverride value: I32(85)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const NoOverride;

/// @brief Field Remove value: I32(86)
static ::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId const Remove;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11798};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRHumanBodyBonesMappings_OVRUnityHumanoidSkeletonRetargeter_FullBodyTrackingBoneId) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
