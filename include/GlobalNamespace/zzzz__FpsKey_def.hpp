#pragma once
// IWYU pragma private; include "GlobalNamespace/FpsKey.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FpsKey)
// Forward declare root types
namespace GlobalNamespace {
struct FpsKey;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FpsKey);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FpsKey, "", "FpsKey");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FpsKey
struct CORDL_TYPE FpsKey {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FpsKey_Unwrapped
enum struct __FpsKey_Unwrapped : int32_t {
__E_LMouse = static_cast<int32_t>(0x1),
__E_RMouse = static_cast<int32_t>(0x2),
__E_MMouse = static_cast<int32_t>(0x4),
__E_Back = static_cast<int32_t>(0x8),
__E_Tab = static_cast<int32_t>(0x9),
__E_Return = static_cast<int32_t>(0xd),
__E_Shift = static_cast<int32_t>(0x10),
__E_Ctrl = static_cast<int32_t>(0x11),
__E_Alt = static_cast<int32_t>(0x12),
__E_Escape = static_cast<int32_t>(0x1b),
__E_Space = static_cast<int32_t>(0x20),
__E_Left = static_cast<int32_t>(0x25),
__E_Up = static_cast<int32_t>(0x26),
__E_Right = static_cast<int32_t>(0x27),
__E_Down = static_cast<int32_t>(0x28),
__E_Digit0 = static_cast<int32_t>(0x30),
__E_Digit1 = static_cast<int32_t>(0x31),
__E_Digit2 = static_cast<int32_t>(0x32),
__E_Digit3 = static_cast<int32_t>(0x33),
__E_Digit4 = static_cast<int32_t>(0x34),
__E_Digit5 = static_cast<int32_t>(0x35),
__E_Digit6 = static_cast<int32_t>(0x36),
__E_Digit7 = static_cast<int32_t>(0x37),
__E_Digit8 = static_cast<int32_t>(0x38),
__E_Digit9 = static_cast<int32_t>(0x39),
__E_A = static_cast<int32_t>(0x41),
__E_B = static_cast<int32_t>(0x42),
__E_C = static_cast<int32_t>(0x43),
__E_D = static_cast<int32_t>(0x44),
__E_E = static_cast<int32_t>(0x45),
__E_F = static_cast<int32_t>(0x46),
__E_G = static_cast<int32_t>(0x47),
__E_H = static_cast<int32_t>(0x48),
__E_I = static_cast<int32_t>(0x49),
__E_J = static_cast<int32_t>(0x4a),
__E_K = static_cast<int32_t>(0x4b),
__E_L = static_cast<int32_t>(0x4c),
__E_M = static_cast<int32_t>(0x4d),
__E_N = static_cast<int32_t>(0x4e),
__E_O = static_cast<int32_t>(0x4f),
__E_P = static_cast<int32_t>(0x50),
__E_Q = static_cast<int32_t>(0x51),
__E_R = static_cast<int32_t>(0x52),
__E_S = static_cast<int32_t>(0x53),
__E_T = static_cast<int32_t>(0x54),
__E_U = static_cast<int32_t>(0x55),
__E_V = static_cast<int32_t>(0x56),
__E_W = static_cast<int32_t>(0x57),
__E_X = static_cast<int32_t>(0x58),
__E_Y = static_cast<int32_t>(0x59),
__E_Z = static_cast<int32_t>(0x5a),
__E_F1 = static_cast<int32_t>(0x70),
__E_F2 = static_cast<int32_t>(0x71),
__E_F3 = static_cast<int32_t>(0x72),
__E_F4 = static_cast<int32_t>(0x73),
__E_F5 = static_cast<int32_t>(0x74),
__E_F6 = static_cast<int32_t>(0x75),
__E_F7 = static_cast<int32_t>(0x76),
__E_F8 = static_cast<int32_t>(0x77),
__E_F9 = static_cast<int32_t>(0x78),
__E_F10 = static_cast<int32_t>(0x79),
__E_F11 = static_cast<int32_t>(0x7a),
__E_F12 = static_cast<int32_t>(0x7b),
__E_LeftShift = static_cast<int32_t>(0xa0),
__E_RightShift = static_cast<int32_t>(0xa1),
__E_LeftCtrl = static_cast<int32_t>(0xa2),
__E_RightCtrl = static_cast<int32_t>(0xa3),
__E_LeftAlt = static_cast<int32_t>(0xa4),
__E_RightAlt = static_cast<int32_t>(0xa5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FpsKey_Unwrapped () const noexcept {
return static_cast<__FpsKey_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FpsKey() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FpsKey(int32_t  value__) noexcept;

/// @brief Field A value: I32(65)
static ::GlobalNamespace::FpsKey const A;

/// @brief Field Alt value: I32(18)
static ::GlobalNamespace::FpsKey const Alt;

/// @brief Field B value: I32(66)
static ::GlobalNamespace::FpsKey const B;

/// @brief Field Back value: I32(8)
static ::GlobalNamespace::FpsKey const Back;

/// @brief Field C value: I32(67)
static ::GlobalNamespace::FpsKey const C;

/// @brief Field Ctrl value: I32(17)
static ::GlobalNamespace::FpsKey const Ctrl;

/// @brief Field D value: I32(68)
static ::GlobalNamespace::FpsKey const D;

/// @brief Field Digit0 value: I32(48)
static ::GlobalNamespace::FpsKey const Digit0;

/// @brief Field Digit1 value: I32(49)
static ::GlobalNamespace::FpsKey const Digit1;

/// @brief Field Digit2 value: I32(50)
static ::GlobalNamespace::FpsKey const Digit2;

/// @brief Field Digit3 value: I32(51)
static ::GlobalNamespace::FpsKey const Digit3;

/// @brief Field Digit4 value: I32(52)
static ::GlobalNamespace::FpsKey const Digit4;

/// @brief Field Digit5 value: I32(53)
static ::GlobalNamespace::FpsKey const Digit5;

/// @brief Field Digit6 value: I32(54)
static ::GlobalNamespace::FpsKey const Digit6;

/// @brief Field Digit7 value: I32(55)
static ::GlobalNamespace::FpsKey const Digit7;

/// @brief Field Digit8 value: I32(56)
static ::GlobalNamespace::FpsKey const Digit8;

/// @brief Field Digit9 value: I32(57)
static ::GlobalNamespace::FpsKey const Digit9;

/// @brief Field Down value: I32(40)
static ::GlobalNamespace::FpsKey const Down;

/// @brief Field E value: I32(69)
static ::GlobalNamespace::FpsKey const E;

/// @brief Field Escape value: I32(27)
static ::GlobalNamespace::FpsKey const Escape;

/// @brief Field F value: I32(70)
static ::GlobalNamespace::FpsKey const F;

/// @brief Field F1 value: I32(112)
static ::GlobalNamespace::FpsKey const F1;

/// @brief Field F10 value: I32(121)
static ::GlobalNamespace::FpsKey const F10;

/// @brief Field F11 value: I32(122)
static ::GlobalNamespace::FpsKey const F11;

/// @brief Field F12 value: I32(123)
static ::GlobalNamespace::FpsKey const F12;

/// @brief Field F2 value: I32(113)
static ::GlobalNamespace::FpsKey const F2;

/// @brief Field F3 value: I32(114)
static ::GlobalNamespace::FpsKey const F3;

/// @brief Field F4 value: I32(115)
static ::GlobalNamespace::FpsKey const F4;

/// @brief Field F5 value: I32(116)
static ::GlobalNamespace::FpsKey const F5;

/// @brief Field F6 value: I32(117)
static ::GlobalNamespace::FpsKey const F6;

/// @brief Field F7 value: I32(118)
static ::GlobalNamespace::FpsKey const F7;

/// @brief Field F8 value: I32(119)
static ::GlobalNamespace::FpsKey const F8;

/// @brief Field F9 value: I32(120)
static ::GlobalNamespace::FpsKey const F9;

/// @brief Field G value: I32(71)
static ::GlobalNamespace::FpsKey const G;

/// @brief Field H value: I32(72)
static ::GlobalNamespace::FpsKey const H;

/// @brief Field I value: I32(73)
static ::GlobalNamespace::FpsKey const I;

/// @brief Field J value: I32(74)
static ::GlobalNamespace::FpsKey const J;

/// @brief Field K value: I32(75)
static ::GlobalNamespace::FpsKey const K;

/// @brief Field L value: I32(76)
static ::GlobalNamespace::FpsKey const L;

/// @brief Field LMouse value: I32(1)
static ::GlobalNamespace::FpsKey const LMouse;

/// @brief Field Left value: I32(37)
static ::GlobalNamespace::FpsKey const Left;

/// @brief Field LeftAlt value: I32(164)
static ::GlobalNamespace::FpsKey const LeftAlt;

/// @brief Field LeftCtrl value: I32(162)
static ::GlobalNamespace::FpsKey const LeftCtrl;

/// @brief Field LeftShift value: I32(160)
static ::GlobalNamespace::FpsKey const LeftShift;

/// @brief Field M value: I32(77)
static ::GlobalNamespace::FpsKey const M;

/// @brief Field MMouse value: I32(4)
static ::GlobalNamespace::FpsKey const MMouse;

/// @brief Field N value: I32(78)
static ::GlobalNamespace::FpsKey const N;

/// @brief Field O value: I32(79)
static ::GlobalNamespace::FpsKey const O;

/// @brief Field P value: I32(80)
static ::GlobalNamespace::FpsKey const P;

/// @brief Field Q value: I32(81)
static ::GlobalNamespace::FpsKey const Q;

/// @brief Field R value: I32(82)
static ::GlobalNamespace::FpsKey const R;

/// @brief Field RMouse value: I32(2)
static ::GlobalNamespace::FpsKey const RMouse;

/// @brief Field Return value: I32(13)
static ::GlobalNamespace::FpsKey const Return;

/// @brief Field Right value: I32(39)
static ::GlobalNamespace::FpsKey const Right;

/// @brief Field RightAlt value: I32(165)
static ::GlobalNamespace::FpsKey const RightAlt;

/// @brief Field RightCtrl value: I32(163)
static ::GlobalNamespace::FpsKey const RightCtrl;

/// @brief Field RightShift value: I32(161)
static ::GlobalNamespace::FpsKey const RightShift;

/// @brief Field S value: I32(83)
static ::GlobalNamespace::FpsKey const S;

/// @brief Field Shift value: I32(16)
static ::GlobalNamespace::FpsKey const Shift;

/// @brief Field Space value: I32(32)
static ::GlobalNamespace::FpsKey const Space;

/// @brief Field T value: I32(84)
static ::GlobalNamespace::FpsKey const T;

/// @brief Field Tab value: I32(9)
static ::GlobalNamespace::FpsKey const Tab;

/// @brief Field U value: I32(85)
static ::GlobalNamespace::FpsKey const U;

/// @brief Field Up value: I32(38)
static ::GlobalNamespace::FpsKey const Up;

/// @brief Field V value: I32(86)
static ::GlobalNamespace::FpsKey const V;

/// @brief Field W value: I32(87)
static ::GlobalNamespace::FpsKey const W;

/// @brief Field X value: I32(88)
static ::GlobalNamespace::FpsKey const X;

/// @brief Field Y value: I32(89)
static ::GlobalNamespace::FpsKey const Y;

/// @brief Field Z value: I32(90)
static ::GlobalNamespace::FpsKey const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3440};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FpsKey, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FpsKey) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
