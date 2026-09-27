#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksKeyboardBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksKeyboardBindings)
// Forward declare root types
namespace GorillaTagScripts::Builder {
struct SharedBlocksKeyboardBindings;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings, "GorillaTagScripts.Builder", "SharedBlocksKeyboardBindings");
// Dependencies 
namespace GorillaTagScripts::Builder {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksKeyboardBindings
struct CORDL_TYPE SharedBlocksKeyboardBindings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SharedBlocksKeyboardBindings_Unwrapped
enum struct __SharedBlocksKeyboardBindings_Unwrapped : int32_t {
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
__E_A = static_cast<int32_t>(0xa),
__E_B = static_cast<int32_t>(0xb),
__E_C = static_cast<int32_t>(0xc),
__E_D = static_cast<int32_t>(0xd),
__E_E = static_cast<int32_t>(0xe),
__E_F = static_cast<int32_t>(0xf),
__E_G = static_cast<int32_t>(0x10),
__E_H = static_cast<int32_t>(0x11),
__E_I = static_cast<int32_t>(0x12),
__E_J = static_cast<int32_t>(0x13),
__E_K = static_cast<int32_t>(0x14),
__E_L = static_cast<int32_t>(0x15),
__E_M = static_cast<int32_t>(0x16),
__E_N = static_cast<int32_t>(0x17),
__E_O = static_cast<int32_t>(0x18),
__E_P = static_cast<int32_t>(0x19),
__E_Q = static_cast<int32_t>(0x1a),
__E_R = static_cast<int32_t>(0x1b),
__E_S = static_cast<int32_t>(0x1c),
__E_T = static_cast<int32_t>(0x1d),
__E_U = static_cast<int32_t>(0x1e),
__E_V = static_cast<int32_t>(0x1f),
__E_W = static_cast<int32_t>(0x20),
__E_X = static_cast<int32_t>(0x21),
__E_Y = static_cast<int32_t>(0x22),
__E_Z = static_cast<int32_t>(0x23),
__E_up = static_cast<int32_t>(0x24),
__E_down = static_cast<int32_t>(0x25),
__E_delete = static_cast<int32_t>(0x26),
__E_enter = static_cast<int32_t>(0x27),
__E_back = static_cast<int32_t>(0x28),
__E_random = static_cast<int32_t>(0x29),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SharedBlocksKeyboardBindings_Unwrapped () const noexcept {
return static_cast<__SharedBlocksKeyboardBindings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksKeyboardBindings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksKeyboardBindings(int32_t  value__) noexcept;

/// @brief Field A value: I32(10)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const A;

/// @brief Field B value: I32(11)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const B;

/// @brief Field C value: I32(12)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const C;

/// @brief Field D value: I32(13)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const D;

/// @brief Field E value: I32(14)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const E;

/// @brief Field F value: I32(15)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const F;

/// @brief Field G value: I32(16)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const G;

/// @brief Field H value: I32(17)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const H;

/// @brief Field I value: I32(18)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const I;

/// @brief Field J value: I32(19)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const J;

/// @brief Field K value: I32(20)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const K;

/// @brief Field L value: I32(21)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const L;

/// @brief Field M value: I32(22)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const M;

/// @brief Field N value: I32(23)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const N;

/// @brief Field O value: I32(24)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const O;

/// @brief Field P value: I32(25)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const P;

/// @brief Field Q value: I32(26)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const Q;

/// @brief Field R value: I32(27)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const R;

/// @brief Field S value: I32(28)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const S;

/// @brief Field T value: I32(29)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const T;

/// @brief Field U value: I32(30)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const U;

/// @brief Field V value: I32(31)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const V;

/// @brief Field W value: I32(32)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const W;

/// @brief Field X value: I32(33)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const X;

/// @brief Field Y value: I32(34)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const Y;

/// @brief Field Z value: I32(35)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field delete value: I32(38)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const _cordl_delete;

/// @brief Field back value: I32(40)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const back;

/// @brief Field down value: I32(37)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const down;

/// @brief Field eight value: I32(8)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const eight;

/// @brief Field enter value: I32(39)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const enter;

/// @brief Field five value: I32(5)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const five;

/// @brief Field four value: I32(4)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const four;

/// @brief Field nine value: I32(9)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const nine;

/// @brief Field one value: I32(1)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const one;

/// @brief Field random value: I32(41)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const random;

/// @brief Field seven value: I32(7)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const seven;

/// @brief Field six value: I32(6)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const six;

/// @brief Field three value: I32(3)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const three;

/// @brief Field two value: I32(2)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const two;

/// @brief Field up value: I32(36)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const up;

/// @brief Field zero value: I32(0)
static ::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings const zero;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::SharedBlocksKeyboardBindings) == 0x4, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
