#pragma once
// IWYU pragma private; include "GorillaTag/CosmeticSystem/GTHardCodedBones_EBone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTHardCodedBones_EBone)
// Forward declare root types
namespace GlobalNamespace {
struct GTHardCodedBones_EBone;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTHardCodedBones_EBone);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTHardCodedBones_EBone, "GorillaTag.CosmeticSystem", "GTHardCodedBones/EBone");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.CosmeticSystem.GTHardCodedBones/EBone
struct CORDL_TYPE GTHardCodedBones_EBone {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTHardCodedBones_EBone_Unwrapped
enum struct __GTHardCodedBones_EBone_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_rig = static_cast<int32_t>(0x1),
__E_body = static_cast<int32_t>(0x2),
__E_head = static_cast<int32_t>(0x3),
__E_head_end = static_cast<int32_t>(0x4),
__E_shoulder_L = static_cast<int32_t>(0x5),
__E_upper_arm_L = static_cast<int32_t>(0x6),
__E_forearm_L = static_cast<int32_t>(0x7),
__E_hand_L = static_cast<int32_t>(0x8),
__E_palm_01_L = static_cast<int32_t>(0x9),
__E_palm_02_L = static_cast<int32_t>(0xa),
__E_thumb_01_L = static_cast<int32_t>(0xb),
__E_thumb_02_L = static_cast<int32_t>(0xc),
__E_thumb_03_L = static_cast<int32_t>(0xd),
__E_thumb_03_L_end = static_cast<int32_t>(0xe),
__E_f_index_01_L = static_cast<int32_t>(0xf),
__E_f_index_02_L = static_cast<int32_t>(0x10),
__E_f_index_03_L = static_cast<int32_t>(0x11),
__E_f_index_03_L_end = static_cast<int32_t>(0x12),
__E_f_middle_01_L = static_cast<int32_t>(0x13),
__E_f_middle_02_L = static_cast<int32_t>(0x14),
__E_f_middle_03_L = static_cast<int32_t>(0x15),
__E_f_middle_03_L_end = static_cast<int32_t>(0x16),
__E_shoulder_R = static_cast<int32_t>(0x17),
__E_upper_arm_R = static_cast<int32_t>(0x18),
__E_forearm_R = static_cast<int32_t>(0x19),
__E_hand_R = static_cast<int32_t>(0x1a),
__E_palm_01_R = static_cast<int32_t>(0x1b),
__E_palm_02_R = static_cast<int32_t>(0x1c),
__E_thumb_01_R = static_cast<int32_t>(0x1d),
__E_thumb_02_R = static_cast<int32_t>(0x1e),
__E_thumb_03_R = static_cast<int32_t>(0x1f),
__E_thumb_03_R_end = static_cast<int32_t>(0x20),
__E_f_index_01_R = static_cast<int32_t>(0x21),
__E_f_index_02_R = static_cast<int32_t>(0x22),
__E_f_index_03_R = static_cast<int32_t>(0x23),
__E_f_index_03_R_end = static_cast<int32_t>(0x24),
__E_f_middle_01_R = static_cast<int32_t>(0x25),
__E_f_middle_02_R = static_cast<int32_t>(0x26),
__E_f_middle_03_R = static_cast<int32_t>(0x27),
__E_f_middle_03_R_end = static_cast<int32_t>(0x28),
__E_body_AnchorTop_Neck = static_cast<int32_t>(0x29),
__E_body_AnchorFront_StowSlot = static_cast<int32_t>(0x2a),
__E_body_AnchorFrontLeft_Badge = static_cast<int32_t>(0x2b),
__E_body_AnchorFrontRight_NameTag = static_cast<int32_t>(0x2c),
__E_body_AnchorBack = static_cast<int32_t>(0x2d),
__E_body_AnchorBackLeft_StowSlot = static_cast<int32_t>(0x2e),
__E_body_AnchorBackRight_StowSlot = static_cast<int32_t>(0x2f),
__E_body_AnchorBottom = static_cast<int32_t>(0x30),
__E_body_AnchorBackBottom_Tail = static_cast<int32_t>(0x31),
__E_hand_L_AnchorBack = static_cast<int32_t>(0x32),
__E_hand_R_AnchorBack = static_cast<int32_t>(0x33),
__E_hand_L_AnchorFront_GameModeItemSlot = static_cast<int32_t>(0x34),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTHardCodedBones_EBone_Unwrapped () const noexcept {
return static_cast<__GTHardCodedBones_EBone_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTHardCodedBones_EBone() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTHardCodedBones_EBone(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GTHardCodedBones_EBone const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4756};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field body value: I32(2)
static ::GlobalNamespace::GTHardCodedBones_EBone const body;

/// @brief Field body_AnchorBack value: I32(45)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorBack;

/// @brief Field body_AnchorBackBottom_Tail value: I32(49)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorBackBottom_Tail;

/// @brief Field body_AnchorBackLeft_StowSlot value: I32(46)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorBackLeft_StowSlot;

/// @brief Field body_AnchorBackRight_StowSlot value: I32(47)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorBackRight_StowSlot;

/// @brief Field body_AnchorBottom value: I32(48)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorBottom;

/// @brief Field body_AnchorFrontLeft_Badge value: I32(43)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorFrontLeft_Badge;

/// @brief Field body_AnchorFrontRight_NameTag value: I32(44)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorFrontRight_NameTag;

/// @brief Field body_AnchorFront_StowSlot value: I32(42)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorFront_StowSlot;

/// @brief Field body_AnchorTop_Neck value: I32(41)
static ::GlobalNamespace::GTHardCodedBones_EBone const body_AnchorTop_Neck;

/// @brief Field f_index_01_L value: I32(15)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_01_L;

/// @brief Field f_index_01_R value: I32(33)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_01_R;

/// @brief Field f_index_02_L value: I32(16)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_02_L;

/// @brief Field f_index_02_R value: I32(34)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_02_R;

/// @brief Field f_index_03_L value: I32(17)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_03_L;

/// @brief Field f_index_03_L_end value: I32(18)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_03_L_end;

/// @brief Field f_index_03_R value: I32(35)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_03_R;

/// @brief Field f_index_03_R_end value: I32(36)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_index_03_R_end;

/// @brief Field f_middle_01_L value: I32(19)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_01_L;

/// @brief Field f_middle_01_R value: I32(37)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_01_R;

/// @brief Field f_middle_02_L value: I32(20)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_02_L;

/// @brief Field f_middle_02_R value: I32(38)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_02_R;

/// @brief Field f_middle_03_L value: I32(21)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_03_L;

/// @brief Field f_middle_03_L_end value: I32(22)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_03_L_end;

/// @brief Field f_middle_03_R value: I32(39)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_03_R;

/// @brief Field f_middle_03_R_end value: I32(40)
static ::GlobalNamespace::GTHardCodedBones_EBone const f_middle_03_R_end;

/// @brief Field forearm_L value: I32(7)
static ::GlobalNamespace::GTHardCodedBones_EBone const forearm_L;

/// @brief Field forearm_R value: I32(25)
static ::GlobalNamespace::GTHardCodedBones_EBone const forearm_R;

/// @brief Field hand_L value: I32(8)
static ::GlobalNamespace::GTHardCodedBones_EBone const hand_L;

/// @brief Field hand_L_AnchorBack value: I32(50)
static ::GlobalNamespace::GTHardCodedBones_EBone const hand_L_AnchorBack;

/// @brief Field hand_L_AnchorFront_GameModeItemSlot value: I32(52)
static ::GlobalNamespace::GTHardCodedBones_EBone const hand_L_AnchorFront_GameModeItemSlot;

/// @brief Field hand_R value: I32(26)
static ::GlobalNamespace::GTHardCodedBones_EBone const hand_R;

/// @brief Field hand_R_AnchorBack value: I32(51)
static ::GlobalNamespace::GTHardCodedBones_EBone const hand_R_AnchorBack;

/// @brief Field head value: I32(3)
static ::GlobalNamespace::GTHardCodedBones_EBone const head;

/// @brief Field head_end value: I32(4)
static ::GlobalNamespace::GTHardCodedBones_EBone const head_end;

/// @brief Field palm_01_L value: I32(9)
static ::GlobalNamespace::GTHardCodedBones_EBone const palm_01_L;

/// @brief Field palm_01_R value: I32(27)
static ::GlobalNamespace::GTHardCodedBones_EBone const palm_01_R;

/// @brief Field palm_02_L value: I32(10)
static ::GlobalNamespace::GTHardCodedBones_EBone const palm_02_L;

/// @brief Field palm_02_R value: I32(28)
static ::GlobalNamespace::GTHardCodedBones_EBone const palm_02_R;

/// @brief Field rig value: I32(1)
static ::GlobalNamespace::GTHardCodedBones_EBone const rig;

/// @brief Field shoulder_L value: I32(5)
static ::GlobalNamespace::GTHardCodedBones_EBone const shoulder_L;

/// @brief Field shoulder_R value: I32(23)
static ::GlobalNamespace::GTHardCodedBones_EBone const shoulder_R;

/// @brief Field thumb_01_L value: I32(11)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_01_L;

/// @brief Field thumb_01_R value: I32(29)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_01_R;

/// @brief Field thumb_02_L value: I32(12)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_02_L;

/// @brief Field thumb_02_R value: I32(30)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_02_R;

/// @brief Field thumb_03_L value: I32(13)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_03_L;

/// @brief Field thumb_03_L_end value: I32(14)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_03_L_end;

/// @brief Field thumb_03_R value: I32(31)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_03_R;

/// @brief Field thumb_03_R_end value: I32(32)
static ::GlobalNamespace::GTHardCodedBones_EBone const thumb_03_R_end;

/// @brief Field upper_arm_L value: I32(6)
static ::GlobalNamespace::GTHardCodedBones_EBone const upper_arm_L;

/// @brief Field upper_arm_R value: I32(24)
static ::GlobalNamespace::GTHardCodedBones_EBone const upper_arm_R;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTHardCodedBones_EBone, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTHardCodedBones_EBone) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
