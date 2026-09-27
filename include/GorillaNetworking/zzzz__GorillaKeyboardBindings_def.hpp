#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaKeyboardBindings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaKeyboardBindings)
// Forward declare root types
namespace GorillaNetworking {
struct GorillaKeyboardBindings;
}
// Write type traits
MARK_VAL_T(::GorillaNetworking::GorillaKeyboardBindings);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GorillaKeyboardBindings, "GorillaNetworking", "GorillaKeyboardBindings");
// Dependencies 
namespace GorillaNetworking {
// Is value type: true
// CS Name: GorillaNetworking.GorillaKeyboardBindings
struct CORDL_TYPE GorillaKeyboardBindings {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaKeyboardBindings_Unwrapped
enum struct __GorillaKeyboardBindings_Unwrapped : int32_t {
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
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaKeyboardBindings_Unwrapped () const noexcept {
return static_cast<__GorillaKeyboardBindings_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaKeyboardBindings() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaKeyboardBindings(int32_t  value__) noexcept;

/// @brief Field A value: I32(17)
static ::GorillaNetworking::GorillaKeyboardBindings const A;

/// @brief Field B value: I32(18)
static ::GorillaNetworking::GorillaKeyboardBindings const B;

/// @brief Field C value: I32(19)
static ::GorillaNetworking::GorillaKeyboardBindings const C;

/// @brief Field D value: I32(20)
static ::GorillaNetworking::GorillaKeyboardBindings const D;

/// @brief Field E value: I32(21)
static ::GorillaNetworking::GorillaKeyboardBindings const E;

/// @brief Field F value: I32(22)
static ::GorillaNetworking::GorillaKeyboardBindings const F;

/// @brief Field G value: I32(23)
static ::GorillaNetworking::GorillaKeyboardBindings const G;

/// @brief Field H value: I32(24)
static ::GorillaNetworking::GorillaKeyboardBindings const H;

/// @brief Field I value: I32(25)
static ::GorillaNetworking::GorillaKeyboardBindings const I;

/// @brief Field J value: I32(26)
static ::GorillaNetworking::GorillaKeyboardBindings const J;

/// @brief Field K value: I32(27)
static ::GorillaNetworking::GorillaKeyboardBindings const K;

/// @brief Field L value: I32(28)
static ::GorillaNetworking::GorillaKeyboardBindings const L;

/// @brief Field M value: I32(29)
static ::GorillaNetworking::GorillaKeyboardBindings const M;

/// @brief Field N value: I32(30)
static ::GorillaNetworking::GorillaKeyboardBindings const N;

/// @brief Field O value: I32(31)
static ::GorillaNetworking::GorillaKeyboardBindings const O;

/// @brief Field P value: I32(32)
static ::GorillaNetworking::GorillaKeyboardBindings const P;

/// @brief Field Q value: I32(33)
static ::GorillaNetworking::GorillaKeyboardBindings const Q;

/// @brief Field R value: I32(34)
static ::GorillaNetworking::GorillaKeyboardBindings const R;

/// @brief Field S value: I32(35)
static ::GorillaNetworking::GorillaKeyboardBindings const S;

/// @brief Field T value: I32(36)
static ::GorillaNetworking::GorillaKeyboardBindings const T;

/// @brief Field U value: I32(37)
static ::GorillaNetworking::GorillaKeyboardBindings const U;

/// @brief Field V value: I32(38)
static ::GorillaNetworking::GorillaKeyboardBindings const V;

/// @brief Field W value: I32(39)
static ::GorillaNetworking::GorillaKeyboardBindings const W;

/// @brief Field X value: I32(40)
static ::GorillaNetworking::GorillaKeyboardBindings const X;

/// @brief Field Y value: I32(41)
static ::GorillaNetworking::GorillaKeyboardBindings const Y;

/// @brief Field Z value: I32(42)
static ::GorillaNetworking::GorillaKeyboardBindings const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4334};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field delete value: I32(12)
static ::GorillaNetworking::GorillaKeyboardBindings const _cordl_delete;

/// @brief Field down value: I32(11)
static ::GorillaNetworking::GorillaKeyboardBindings const down;

/// @brief Field eight value: I32(8)
static ::GorillaNetworking::GorillaKeyboardBindings const eight;

/// @brief Field enter value: I32(13)
static ::GorillaNetworking::GorillaKeyboardBindings const enter;

/// @brief Field five value: I32(5)
static ::GorillaNetworking::GorillaKeyboardBindings const five;

/// @brief Field four value: I32(4)
static ::GorillaNetworking::GorillaKeyboardBindings const four;

/// @brief Field nine value: I32(9)
static ::GorillaNetworking::GorillaKeyboardBindings const nine;

/// @brief Field one value: I32(1)
static ::GorillaNetworking::GorillaKeyboardBindings const one;

/// @brief Field option1 value: I32(14)
static ::GorillaNetworking::GorillaKeyboardBindings const option1;

/// @brief Field option2 value: I32(15)
static ::GorillaNetworking::GorillaKeyboardBindings const option2;

/// @brief Field option3 value: I32(16)
static ::GorillaNetworking::GorillaKeyboardBindings const option3;

/// @brief Field seven value: I32(7)
static ::GorillaNetworking::GorillaKeyboardBindings const seven;

/// @brief Field six value: I32(6)
static ::GorillaNetworking::GorillaKeyboardBindings const six;

/// @brief Field three value: I32(3)
static ::GorillaNetworking::GorillaKeyboardBindings const three;

/// @brief Field two value: I32(2)
static ::GorillaNetworking::GorillaKeyboardBindings const two;

/// @brief Field up value: I32(10)
static ::GorillaNetworking::GorillaKeyboardBindings const up;

/// @brief Field zero value: I32(0)
static ::GorillaNetworking::GorillaKeyboardBindings const zero;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GorillaKeyboardBindings, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GorillaKeyboardBindings) == 0x4, "Size mismatch!");

} // namespace end def GorillaNetworking
