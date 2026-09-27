#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapKeyboardBinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapKeyboardBinding)
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
struct CustomMapKeyboardBinding;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapKeyboardBinding");
// Dependencies 
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: true
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapKeyboardBinding
struct CORDL_TYPE CustomMapKeyboardBinding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapKeyboardBinding_Unwrapped
enum struct __CustomMapKeyboardBinding_Unwrapped : int32_t {
__E_zero = static_cast<int32_t>(0x0),
__E_one = static_cast<int32_t>(0x1),
__E_two = static_cast<int32_t>(0x2),
__E_three = static_cast<int32_t>(0x3),
__E_four = static_cast<int32_t>(0x4),
__E_five = static_cast<int32_t>(0x5),
__E_six = static_cast<int32_t>(0x6),
__E_seven = static_cast<int32_t>(0x7),
__E_eight = static_cast<int32_t>(0x8),
__E_nine = static_cast<int32_t>(0x9),
__E_up = static_cast<int32_t>(0xa),
__E_down = static_cast<int32_t>(0xb),
__E_delete = static_cast<int32_t>(0xc),
__E_enter = static_cast<int32_t>(0xd),
__E_option1 = static_cast<int32_t>(0xe),
__E_option2 = static_cast<int32_t>(0xf),
__E_option3 = static_cast<int32_t>(0x10),
__E_A = static_cast<int32_t>(0x11),
__E_B = static_cast<int32_t>(0x12),
__E_C = static_cast<int32_t>(0x13),
__E_D = static_cast<int32_t>(0x14),
__E_E = static_cast<int32_t>(0x15),
__E_F = static_cast<int32_t>(0x16),
__E_G = static_cast<int32_t>(0x17),
__E_H = static_cast<int32_t>(0x18),
__E_I = static_cast<int32_t>(0x19),
__E_J = static_cast<int32_t>(0x1a),
__E_K = static_cast<int32_t>(0x1b),
__E_L = static_cast<int32_t>(0x1c),
__E_M = static_cast<int32_t>(0x1d),
__E_N = static_cast<int32_t>(0x1e),
__E_O = static_cast<int32_t>(0x1f),
__E_P = static_cast<int32_t>(0x20),
__E_Q = static_cast<int32_t>(0x21),
__E_R = static_cast<int32_t>(0x22),
__E_S = static_cast<int32_t>(0x23),
__E_T = static_cast<int32_t>(0x24),
__E_U = static_cast<int32_t>(0x25),
__E_V = static_cast<int32_t>(0x26),
__E_W = static_cast<int32_t>(0x27),
__E_X = static_cast<int32_t>(0x28),
__E_Y = static_cast<int32_t>(0x29),
__E_Z = static_cast<int32_t>(0x2a),
__E_at = static_cast<int32_t>(0x2b),
__E_dash = static_cast<int32_t>(0x2c),
__E_period = static_cast<int32_t>(0x2d),
__E_underscore = static_cast<int32_t>(0x2e),
__E_plus = static_cast<int32_t>(0x2f),
__E_space = static_cast<int32_t>(0x30),
__E_goback = static_cast<int32_t>(0x31),
__E_left = static_cast<int32_t>(0x32),
__E_right = static_cast<int32_t>(0x33),
__E_option4 = static_cast<int32_t>(0x34),
__E_sort = static_cast<int32_t>(0x35),
__E_sub = static_cast<int32_t>(0x36),
__E_map = static_cast<int32_t>(0x37),
__E_all = static_cast<int32_t>(0x38),
__E_fav = static_cast<int32_t>(0x39),
__E_inst = static_cast<int32_t>(0x3a),
__E_mustplay = static_cast<int32_t>(0x3b),
__E_rateUp = static_cast<int32_t>(0x3c),
__E_rateDown = static_cast<int32_t>(0x3d),
__E_tile1 = static_cast<int32_t>(0x3e),
__E_tile2 = static_cast<int32_t>(0x3f),
__E_tile3 = static_cast<int32_t>(0x40),
__E_tile4 = static_cast<int32_t>(0x41),
__E_tile5 = static_cast<int32_t>(0x42),
__E_tile6 = static_cast<int32_t>(0x43),
__E_tile7 = static_cast<int32_t>(0x44),
__E_tile8 = static_cast<int32_t>(0x45),
__E_tile9 = static_cast<int32_t>(0x46),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapKeyboardBinding_Unwrapped () const noexcept {
return static_cast<__CustomMapKeyboardBinding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapKeyboardBinding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapKeyboardBinding(int32_t  value__) noexcept;

/// @brief Field A value: I32(17)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const A;

/// @brief Field B value: I32(18)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const B;

/// @brief Field C value: I32(19)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const C;

/// @brief Field D value: I32(20)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const D;

/// @brief Field E value: I32(21)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const E;

/// @brief Field F value: I32(22)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const F;

/// @brief Field G value: I32(23)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const G;

/// @brief Field H value: I32(24)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const H;

/// @brief Field I value: I32(25)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const I;

/// @brief Field J value: I32(26)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const J;

/// @brief Field K value: I32(27)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const K;

/// @brief Field L value: I32(28)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const L;

/// @brief Field M value: I32(29)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const M;

/// @brief Field N value: I32(30)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const N;

/// @brief Field O value: I32(31)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const O;

/// @brief Field P value: I32(32)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const P;

/// @brief Field Q value: I32(33)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const Q;

/// @brief Field R value: I32(34)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const R;

/// @brief Field S value: I32(35)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const S;

/// @brief Field T value: I32(36)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const T;

/// @brief Field U value: I32(37)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const U;

/// @brief Field V value: I32(38)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const V;

/// @brief Field W value: I32(39)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const W;

/// @brief Field X value: I32(40)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const X;

/// @brief Field Y value: I32(41)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const Y;

/// @brief Field Z value: I32(42)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4068};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field delete value: I32(12)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const _cordl_delete;

/// @brief Field all value: I32(56)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const all;

/// @brief Field at value: I32(43)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const at;

/// @brief Field dash value: I32(44)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const dash;

/// @brief Field down value: I32(11)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const down;

/// @brief Field eight value: I32(8)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const eight;

/// @brief Field enter value: I32(13)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const enter;

/// @brief Field fav value: I32(57)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const fav;

/// @brief Field five value: I32(5)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const five;

/// @brief Field four value: I32(4)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const four;

/// @brief Field goback value: I32(49)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const goback;

/// @brief Field inst value: I32(58)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const inst;

/// @brief Field left value: I32(50)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const left;

/// @brief Field map value: I32(55)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const map;

/// @brief Field mustplay value: I32(59)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const mustplay;

/// @brief Field nine value: I32(9)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const nine;

/// @brief Field one value: I32(1)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const one;

/// @brief Field option1 value: I32(14)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const option1;

/// @brief Field option2 value: I32(15)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const option2;

/// @brief Field option3 value: I32(16)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const option3;

/// @brief Field option4 value: I32(52)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const option4;

/// @brief Field period value: I32(45)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const period;

/// @brief Field plus value: I32(47)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const plus;

/// @brief Field rateDown value: I32(61)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const rateDown;

/// @brief Field rateUp value: I32(60)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const rateUp;

/// @brief Field right value: I32(51)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const right;

/// @brief Field seven value: I32(7)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const seven;

/// @brief Field six value: I32(6)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const six;

/// @brief Field sort value: I32(53)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const sort;

/// @brief Field space value: I32(48)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const space;

/// @brief Field sub value: I32(54)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const sub;

/// @brief Field three value: I32(3)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const three;

/// @brief Field tile1 value: I32(62)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile1;

/// @brief Field tile2 value: I32(63)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile2;

/// @brief Field tile3 value: I32(64)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile3;

/// @brief Field tile4 value: I32(65)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile4;

/// @brief Field tile5 value: I32(66)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile5;

/// @brief Field tile6 value: I32(67)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile6;

/// @brief Field tile7 value: I32(68)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile7;

/// @brief Field tile8 value: I32(69)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile8;

/// @brief Field tile9 value: I32(70)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const tile9;

/// @brief Field two value: I32(2)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const two;

/// @brief Field underscore value: I32(46)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const underscore;

/// @brief Field up value: I32(10)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const up;

/// @brief Field zero value: I32(0)
static ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding const zero;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding) == 0x4, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI
