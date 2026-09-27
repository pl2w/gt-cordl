#pragma once
// IWYU pragma private; include "System/DateTimeParse_DS.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DateTimeParse_DS)
// Forward declare root types
namespace GlobalNamespace {
struct DateTimeParse_DS;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DateTimeParse_DS);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DateTimeParse_DS, "System", "DateTimeParse/DS");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.DateTimeParse/DS
struct CORDL_TYPE DateTimeParse_DS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DateTimeParse_DS_Unwrapped
enum struct __DateTimeParse_DS_Unwrapped : int32_t {
__E_BEGIN = static_cast<int32_t>(0x0),
__E_N = static_cast<int32_t>(0x1),
__E_NN = static_cast<int32_t>(0x2),
__E_D_Nd = static_cast<int32_t>(0x3),
__E_D_NN = static_cast<int32_t>(0x4),
__E_D_NNd = static_cast<int32_t>(0x5),
__E_D_M = static_cast<int32_t>(0x6),
__E_D_MN = static_cast<int32_t>(0x7),
__E_D_NM = static_cast<int32_t>(0x8),
__E_D_MNd = static_cast<int32_t>(0x9),
__E_D_NDS = static_cast<int32_t>(0xa),
__E_D_Y = static_cast<int32_t>(0xb),
__E_D_YN = static_cast<int32_t>(0xc),
__E_D_YNd = static_cast<int32_t>(0xd),
__E_D_YM = static_cast<int32_t>(0xe),
__E_D_YMd = static_cast<int32_t>(0xf),
__E_D_S = static_cast<int32_t>(0x10),
__E_T_S = static_cast<int32_t>(0x11),
__E_T_Nt = static_cast<int32_t>(0x12),
__E_T_NNt = static_cast<int32_t>(0x13),
__E_ERROR = static_cast<int32_t>(0x14),
__E_DX_NN = static_cast<int32_t>(0x15),
__E_DX_NNN = static_cast<int32_t>(0x16),
__E_DX_MN = static_cast<int32_t>(0x17),
__E_DX_NM = static_cast<int32_t>(0x18),
__E_DX_MNN = static_cast<int32_t>(0x19),
__E_DX_DS = static_cast<int32_t>(0x1a),
__E_DX_DSN = static_cast<int32_t>(0x1b),
__E_DX_NDS = static_cast<int32_t>(0x1c),
__E_DX_NNDS = static_cast<int32_t>(0x1d),
__E_DX_YNN = static_cast<int32_t>(0x1e),
__E_DX_YMN = static_cast<int32_t>(0x1f),
__E_DX_YN = static_cast<int32_t>(0x20),
__E_DX_YM = static_cast<int32_t>(0x21),
__E_TX_N = static_cast<int32_t>(0x22),
__E_TX_NN = static_cast<int32_t>(0x23),
__E_TX_NNN = static_cast<int32_t>(0x24),
__E_TX_TS = static_cast<int32_t>(0x25),
__E_DX_NNY = static_cast<int32_t>(0x26),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DateTimeParse_DS_Unwrapped () const noexcept {
return static_cast<__DateTimeParse_DS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DateTimeParse_DS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DateTimeParse_DS(int32_t  value__) noexcept;

/// @brief Field BEGIN value: I32(0)
static ::GlobalNamespace::DateTimeParse_DS const BEGIN;

/// @brief Field DX_DS value: I32(26)
static ::GlobalNamespace::DateTimeParse_DS const DX_DS;

/// @brief Field DX_DSN value: I32(27)
static ::GlobalNamespace::DateTimeParse_DS const DX_DSN;

/// @brief Field DX_MN value: I32(23)
static ::GlobalNamespace::DateTimeParse_DS const DX_MN;

/// @brief Field DX_MNN value: I32(25)
static ::GlobalNamespace::DateTimeParse_DS const DX_MNN;

/// @brief Field DX_NDS value: I32(28)
static ::GlobalNamespace::DateTimeParse_DS const DX_NDS;

/// @brief Field DX_NM value: I32(24)
static ::GlobalNamespace::DateTimeParse_DS const DX_NM;

/// @brief Field DX_NN value: I32(21)
static ::GlobalNamespace::DateTimeParse_DS const DX_NN;

/// @brief Field DX_NNDS value: I32(29)
static ::GlobalNamespace::DateTimeParse_DS const DX_NNDS;

/// @brief Field DX_NNN value: I32(22)
static ::GlobalNamespace::DateTimeParse_DS const DX_NNN;

/// @brief Field DX_NNY value: I32(38)
static ::GlobalNamespace::DateTimeParse_DS const DX_NNY;

/// @brief Field DX_YM value: I32(33)
static ::GlobalNamespace::DateTimeParse_DS const DX_YM;

/// @brief Field DX_YMN value: I32(31)
static ::GlobalNamespace::DateTimeParse_DS const DX_YMN;

/// @brief Field DX_YN value: I32(32)
static ::GlobalNamespace::DateTimeParse_DS const DX_YN;

/// @brief Field DX_YNN value: I32(30)
static ::GlobalNamespace::DateTimeParse_DS const DX_YNN;

/// @brief Field D_M value: I32(6)
static ::GlobalNamespace::DateTimeParse_DS const D_M;

/// @brief Field D_MN value: I32(7)
static ::GlobalNamespace::DateTimeParse_DS const D_MN;

/// @brief Field D_MNd value: I32(9)
static ::GlobalNamespace::DateTimeParse_DS const D_MNd;

/// @brief Field D_NDS value: I32(10)
static ::GlobalNamespace::DateTimeParse_DS const D_NDS;

/// @brief Field D_NM value: I32(8)
static ::GlobalNamespace::DateTimeParse_DS const D_NM;

/// @brief Field D_NN value: I32(4)
static ::GlobalNamespace::DateTimeParse_DS const D_NN;

/// @brief Field D_NNd value: I32(5)
static ::GlobalNamespace::DateTimeParse_DS const D_NNd;

/// @brief Field D_Nd value: I32(3)
static ::GlobalNamespace::DateTimeParse_DS const D_Nd;

/// @brief Field D_S value: I32(16)
static ::GlobalNamespace::DateTimeParse_DS const D_S;

/// @brief Field D_Y value: I32(11)
static ::GlobalNamespace::DateTimeParse_DS const D_Y;

/// @brief Field D_YM value: I32(14)
static ::GlobalNamespace::DateTimeParse_DS const D_YM;

/// @brief Field D_YMd value: I32(15)
static ::GlobalNamespace::DateTimeParse_DS const D_YMd;

/// @brief Field D_YN value: I32(12)
static ::GlobalNamespace::DateTimeParse_DS const D_YN;

/// @brief Field D_YNd value: I32(13)
static ::GlobalNamespace::DateTimeParse_DS const D_YNd;

/// @brief Field ERROR value: I32(20)
static ::GlobalNamespace::DateTimeParse_DS const ERROR;

/// @brief Field N value: I32(1)
static ::GlobalNamespace::DateTimeParse_DS const N;

/// @brief Field NN value: I32(2)
static ::GlobalNamespace::DateTimeParse_DS const NN;

/// @brief Field TX_N value: I32(34)
static ::GlobalNamespace::DateTimeParse_DS const TX_N;

/// @brief Field TX_NN value: I32(35)
static ::GlobalNamespace::DateTimeParse_DS const TX_NN;

/// @brief Field TX_NNN value: I32(36)
static ::GlobalNamespace::DateTimeParse_DS const TX_NNN;

/// @brief Field TX_TS value: I32(37)
static ::GlobalNamespace::DateTimeParse_DS const TX_TS;

/// @brief Field T_NNt value: I32(19)
static ::GlobalNamespace::DateTimeParse_DS const T_NNt;

/// @brief Field T_Nt value: I32(18)
static ::GlobalNamespace::DateTimeParse_DS const T_Nt;

/// @brief Field T_S value: I32(17)
static ::GlobalNamespace::DateTimeParse_DS const T_S;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5494};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DateTimeParse_DS, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DateTimeParse_DS) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
