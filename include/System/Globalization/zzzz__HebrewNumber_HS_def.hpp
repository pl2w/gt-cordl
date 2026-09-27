#pragma once
// IWYU pragma private; include "System/Globalization/HebrewNumber_HS.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HebrewNumber_HS)
// Forward declare root types
namespace GlobalNamespace {
struct HebrewNumber_HS;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HebrewNumber_HS);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HebrewNumber_HS, "System.Globalization", "HebrewNumber/HS");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.HebrewNumber/HS
struct CORDL_TYPE HebrewNumber_HS {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int8_t;

/// @brief Nested struct __HebrewNumber_HS_Unwrapped
enum struct __HebrewNumber_HS_Unwrapped : int8_t {
__E__err = static_cast<int8_t>(0xff),
__E_Start = static_cast<int8_t>(0x0),
__E_S400 = static_cast<int8_t>(0x1),
__E_S400_400 = static_cast<int8_t>(0x2),
__E_S400_X00 = static_cast<int8_t>(0x3),
__E_S400_X0 = static_cast<int8_t>(0x4),
__E_X00_DQ = static_cast<int8_t>(0x5),
__E_S400_X00_X0 = static_cast<int8_t>(0x6),
__E_X0_DQ = static_cast<int8_t>(0x7),
__E_X = static_cast<int8_t>(0x8),
__E_X0 = static_cast<int8_t>(0x9),
__E_X00 = static_cast<int8_t>(0xa),
__E_S400_DQ = static_cast<int8_t>(0xb),
__E_S400_400_DQ = static_cast<int8_t>(0xc),
__E_S400_400_100 = static_cast<int8_t>(0xd),
__E_S9 = static_cast<int8_t>(0xe),
__E_X00_S9 = static_cast<int8_t>(0xf),
__E_S9_DQ = static_cast<int8_t>(0x10),
__E_END = static_cast<int8_t>(0x64),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HebrewNumber_HS_Unwrapped () const noexcept {
return static_cast<__HebrewNumber_HS_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int8_t () const noexcept {
return static_cast<int8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HebrewNumber_HS() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int8_t", modifiers: "", def_value: None, comment: None }]
constexpr HebrewNumber_HS(int8_t  value__) noexcept;

/// @brief Field END value: I8(100)
static ::GlobalNamespace::HebrewNumber_HS const END;

/// @brief Field S400 value: I8(1)
static ::GlobalNamespace::HebrewNumber_HS const S400;

/// @brief Field S400_400 value: I8(2)
static ::GlobalNamespace::HebrewNumber_HS const S400_400;

/// @brief Field S400_400_100 value: I8(13)
static ::GlobalNamespace::HebrewNumber_HS const S400_400_100;

/// @brief Field S400_400_DQ value: I8(12)
static ::GlobalNamespace::HebrewNumber_HS const S400_400_DQ;

/// @brief Field S400_DQ value: I8(11)
static ::GlobalNamespace::HebrewNumber_HS const S400_DQ;

/// @brief Field S400_X0 value: I8(4)
static ::GlobalNamespace::HebrewNumber_HS const S400_X0;

/// @brief Field S400_X00 value: I8(3)
static ::GlobalNamespace::HebrewNumber_HS const S400_X00;

/// @brief Field S400_X00_X0 value: I8(6)
static ::GlobalNamespace::HebrewNumber_HS const S400_X00_X0;

/// @brief Field S9 value: I8(14)
static ::GlobalNamespace::HebrewNumber_HS const S9;

/// @brief Field S9_DQ value: I8(16)
static ::GlobalNamespace::HebrewNumber_HS const S9_DQ;

/// @brief Field Start value: I8(0)
static ::GlobalNamespace::HebrewNumber_HS const Start;

/// @brief Field X value: I8(8)
static ::GlobalNamespace::HebrewNumber_HS const X;

/// @brief Field X0 value: I8(9)
static ::GlobalNamespace::HebrewNumber_HS const X0;

/// @brief Field X00 value: I8(10)
static ::GlobalNamespace::HebrewNumber_HS const X00;

/// @brief Field X00_DQ value: I8(5)
static ::GlobalNamespace::HebrewNumber_HS const X00_DQ;

/// @brief Field X00_S9 value: I8(15)
static ::GlobalNamespace::HebrewNumber_HS const X00_S9;

/// @brief Field X0_DQ value: I8(7)
static ::GlobalNamespace::HebrewNumber_HS const X0_DQ;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field _err value: I8(-1)
static ::GlobalNamespace::HebrewNumber_HS const _err;

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 int8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HebrewNumber_HS, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HebrewNumber_HS) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
