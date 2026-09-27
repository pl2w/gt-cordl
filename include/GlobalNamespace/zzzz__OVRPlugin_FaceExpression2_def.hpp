#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceExpression2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_FaceExpression2)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceExpression2;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceExpression2);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceExpression2, "", "OVRPlugin/FaceExpression2");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceExpression2
struct CORDL_TYPE OVRPlugin_FaceExpression2 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_FaceExpression2_Unwrapped
enum struct __OVRPlugin_FaceExpression2_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_Brow_Lowerer_L = static_cast<int32_t>(0x0),
__E_Brow_Lowerer_R = static_cast<int32_t>(0x1),
__E_Cheek_Puff_L = static_cast<int32_t>(0x2),
__E_Cheek_Puff_R = static_cast<int32_t>(0x3),
__E_Cheek_Raiser_L = static_cast<int32_t>(0x4),
__E_Cheek_Raiser_R = static_cast<int32_t>(0x5),
__E_Cheek_Suck_L = static_cast<int32_t>(0x6),
__E_Cheek_Suck_R = static_cast<int32_t>(0x7),
__E_Chin_Raiser_B = static_cast<int32_t>(0x8),
__E_Chin_Raiser_T = static_cast<int32_t>(0x9),
__E_Dimpler_L = static_cast<int32_t>(0xa),
__E_Dimpler_R = static_cast<int32_t>(0xb),
__E_Eyes_Closed_L = static_cast<int32_t>(0xc),
__E_Eyes_Closed_R = static_cast<int32_t>(0xd),
__E_Eyes_Look_Down_L = static_cast<int32_t>(0xe),
__E_Eyes_Look_Down_R = static_cast<int32_t>(0xf),
__E_Eyes_Look_Left_L = static_cast<int32_t>(0x10),
__E_Eyes_Look_Left_R = static_cast<int32_t>(0x11),
__E_Eyes_Look_Right_L = static_cast<int32_t>(0x12),
__E_Eyes_Look_Right_R = static_cast<int32_t>(0x13),
__E_Eyes_Look_Up_L = static_cast<int32_t>(0x14),
__E_Eyes_Look_Up_R = static_cast<int32_t>(0x15),
__E_Inner_Brow_Raiser_L = static_cast<int32_t>(0x16),
__E_Inner_Brow_Raiser_R = static_cast<int32_t>(0x17),
__E_Jaw_Drop = static_cast<int32_t>(0x18),
__E_Jaw_Sideways_Left = static_cast<int32_t>(0x19),
__E_Jaw_Sideways_Right = static_cast<int32_t>(0x1a),
__E_Jaw_Thrust = static_cast<int32_t>(0x1b),
__E_Lid_Tightener_L = static_cast<int32_t>(0x1c),
__E_Lid_Tightener_R = static_cast<int32_t>(0x1d),
__E_Lip_Corner_Depressor_L = static_cast<int32_t>(0x1e),
__E_Lip_Corner_Depressor_R = static_cast<int32_t>(0x1f),
__E_Lip_Corner_Puller_L = static_cast<int32_t>(0x20),
__E_Lip_Corner_Puller_R = static_cast<int32_t>(0x21),
__E_Lip_Funneler_LB = static_cast<int32_t>(0x22),
__E_Lip_Funneler_LT = static_cast<int32_t>(0x23),
__E_Lip_Funneler_RB = static_cast<int32_t>(0x24),
__E_Lip_Funneler_RT = static_cast<int32_t>(0x25),
__E_Lip_Pressor_L = static_cast<int32_t>(0x26),
__E_Lip_Pressor_R = static_cast<int32_t>(0x27),
__E_Lip_Pucker_L = static_cast<int32_t>(0x28),
__E_Lip_Pucker_R = static_cast<int32_t>(0x29),
__E_Lip_Stretcher_L = static_cast<int32_t>(0x2a),
__E_Lip_Stretcher_R = static_cast<int32_t>(0x2b),
__E_Lip_Suck_LB = static_cast<int32_t>(0x2c),
__E_Lip_Suck_LT = static_cast<int32_t>(0x2d),
__E_Lip_Suck_RB = static_cast<int32_t>(0x2e),
__E_Lip_Suck_RT = static_cast<int32_t>(0x2f),
__E_Lip_Tightener_L = static_cast<int32_t>(0x30),
__E_Lip_Tightener_R = static_cast<int32_t>(0x31),
__E_Lips_Toward = static_cast<int32_t>(0x32),
__E_Lower_Lip_Depressor_L = static_cast<int32_t>(0x33),
__E_Lower_Lip_Depressor_R = static_cast<int32_t>(0x34),
__E_Mouth_Left = static_cast<int32_t>(0x35),
__E_Mouth_Right = static_cast<int32_t>(0x36),
__E_Nose_Wrinkler_L = static_cast<int32_t>(0x37),
__E_Nose_Wrinkler_R = static_cast<int32_t>(0x38),
__E_Outer_Brow_Raiser_L = static_cast<int32_t>(0x39),
__E_Outer_Brow_Raiser_R = static_cast<int32_t>(0x3a),
__E_Upper_Lid_Raiser_L = static_cast<int32_t>(0x3b),
__E_Upper_Lid_Raiser_R = static_cast<int32_t>(0x3c),
__E_Upper_Lip_Raiser_L = static_cast<int32_t>(0x3d),
__E_Upper_Lip_Raiser_R = static_cast<int32_t>(0x3e),
__E_Tongue_Tip_Interdental = static_cast<int32_t>(0x3f),
__E_Tongue_Tip_Alveolar = static_cast<int32_t>(0x40),
__E_Tongue_Front_Dorsal_Palate = static_cast<int32_t>(0x41),
__E_Tongue_Mid_Dorsal_Palate = static_cast<int32_t>(0x42),
__E_Tongue_Back_Dorsal_Velar = static_cast<int32_t>(0x43),
__E_Tongue_Out = static_cast<int32_t>(0x44),
__E_Tongue_Retreat = static_cast<int32_t>(0x45),
__E_Max = static_cast<int32_t>(0x46),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_FaceExpression2_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_FaceExpression2_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceExpression2() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceExpression2(int32_t  value__) noexcept;

/// @brief Field Brow_Lowerer_L value: I32(0)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Brow_Lowerer_L;

/// @brief Field Brow_Lowerer_R value: I32(1)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Brow_Lowerer_R;

/// @brief Field Cheek_Puff_L value: I32(2)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Cheek_Puff_L;

/// @brief Field Cheek_Puff_R value: I32(3)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Cheek_Puff_R;

/// @brief Field Cheek_Raiser_L value: I32(4)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Cheek_Raiser_L;

/// @brief Field Cheek_Raiser_R value: I32(5)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Cheek_Raiser_R;

/// @brief Field Cheek_Suck_L value: I32(6)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Cheek_Suck_L;

/// @brief Field Cheek_Suck_R value: I32(7)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Cheek_Suck_R;

/// @brief Field Chin_Raiser_B value: I32(8)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Chin_Raiser_B;

/// @brief Field Chin_Raiser_T value: I32(9)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Chin_Raiser_T;

/// @brief Field Dimpler_L value: I32(10)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Dimpler_L;

/// @brief Field Dimpler_R value: I32(11)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Dimpler_R;

/// @brief Field Eyes_Closed_L value: I32(12)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Closed_L;

/// @brief Field Eyes_Closed_R value: I32(13)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Closed_R;

/// @brief Field Eyes_Look_Down_L value: I32(14)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Down_L;

/// @brief Field Eyes_Look_Down_R value: I32(15)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Down_R;

/// @brief Field Eyes_Look_Left_L value: I32(16)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Left_L;

/// @brief Field Eyes_Look_Left_R value: I32(17)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Left_R;

/// @brief Field Eyes_Look_Right_L value: I32(18)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Right_L;

/// @brief Field Eyes_Look_Right_R value: I32(19)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Right_R;

/// @brief Field Eyes_Look_Up_L value: I32(20)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Up_L;

/// @brief Field Eyes_Look_Up_R value: I32(21)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Eyes_Look_Up_R;

/// @brief Field Inner_Brow_Raiser_L value: I32(22)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Inner_Brow_Raiser_L;

/// @brief Field Inner_Brow_Raiser_R value: I32(23)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Inner_Brow_Raiser_R;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Invalid;

/// @brief Field Jaw_Drop value: I32(24)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Jaw_Drop;

/// @brief Field Jaw_Sideways_Left value: I32(25)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Jaw_Sideways_Left;

/// @brief Field Jaw_Sideways_Right value: I32(26)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Jaw_Sideways_Right;

/// @brief Field Jaw_Thrust value: I32(27)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Jaw_Thrust;

/// @brief Field Lid_Tightener_L value: I32(28)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lid_Tightener_L;

/// @brief Field Lid_Tightener_R value: I32(29)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lid_Tightener_R;

/// @brief Field Lip_Corner_Depressor_L value: I32(30)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Corner_Depressor_L;

/// @brief Field Lip_Corner_Depressor_R value: I32(31)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Corner_Depressor_R;

/// @brief Field Lip_Corner_Puller_L value: I32(32)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Corner_Puller_L;

/// @brief Field Lip_Corner_Puller_R value: I32(33)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Corner_Puller_R;

/// @brief Field Lip_Funneler_LB value: I32(34)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Funneler_LB;

/// @brief Field Lip_Funneler_LT value: I32(35)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Funneler_LT;

/// @brief Field Lip_Funneler_RB value: I32(36)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Funneler_RB;

/// @brief Field Lip_Funneler_RT value: I32(37)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Funneler_RT;

/// @brief Field Lip_Pressor_L value: I32(38)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Pressor_L;

/// @brief Field Lip_Pressor_R value: I32(39)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Pressor_R;

/// @brief Field Lip_Pucker_L value: I32(40)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Pucker_L;

/// @brief Field Lip_Pucker_R value: I32(41)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Pucker_R;

/// @brief Field Lip_Stretcher_L value: I32(42)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Stretcher_L;

/// @brief Field Lip_Stretcher_R value: I32(43)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Stretcher_R;

/// @brief Field Lip_Suck_LB value: I32(44)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Suck_LB;

/// @brief Field Lip_Suck_LT value: I32(45)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Suck_LT;

/// @brief Field Lip_Suck_RB value: I32(46)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Suck_RB;

/// @brief Field Lip_Suck_RT value: I32(47)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Suck_RT;

/// @brief Field Lip_Tightener_L value: I32(48)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Tightener_L;

/// @brief Field Lip_Tightener_R value: I32(49)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lip_Tightener_R;

/// @brief Field Lips_Toward value: I32(50)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lips_Toward;

/// @brief Field Lower_Lip_Depressor_L value: I32(51)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lower_Lip_Depressor_L;

/// @brief Field Lower_Lip_Depressor_R value: I32(52)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Lower_Lip_Depressor_R;

/// @brief Field Max value: I32(70)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Max;

/// @brief Field Mouth_Left value: I32(53)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Mouth_Left;

/// @brief Field Mouth_Right value: I32(54)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Mouth_Right;

/// @brief Field Nose_Wrinkler_L value: I32(55)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Nose_Wrinkler_L;

/// @brief Field Nose_Wrinkler_R value: I32(56)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Nose_Wrinkler_R;

/// @brief Field Outer_Brow_Raiser_L value: I32(57)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Outer_Brow_Raiser_L;

/// @brief Field Outer_Brow_Raiser_R value: I32(58)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Outer_Brow_Raiser_R;

/// @brief Field Tongue_Back_Dorsal_Velar value: I32(67)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Back_Dorsal_Velar;

/// @brief Field Tongue_Front_Dorsal_Palate value: I32(65)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Front_Dorsal_Palate;

/// @brief Field Tongue_Mid_Dorsal_Palate value: I32(66)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Mid_Dorsal_Palate;

/// @brief Field Tongue_Out value: I32(68)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Out;

/// @brief Field Tongue_Retreat value: I32(69)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Retreat;

/// @brief Field Tongue_Tip_Alveolar value: I32(64)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Tip_Alveolar;

/// @brief Field Tongue_Tip_Interdental value: I32(63)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Tongue_Tip_Interdental;

/// @brief Field Upper_Lid_Raiser_L value: I32(59)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Upper_Lid_Raiser_L;

/// @brief Field Upper_Lid_Raiser_R value: I32(60)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Upper_Lid_Raiser_R;

/// @brief Field Upper_Lip_Raiser_L value: I32(61)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Upper_Lip_Raiser_L;

/// @brief Field Upper_Lip_Raiser_R value: I32(62)
static ::GlobalNamespace::OVRPlugin_FaceExpression2 const Upper_Lip_Raiser_R;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceExpression2, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceExpression2) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
