#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse_TTT.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeSpanParse_TTT)
// Forward declare root types
namespace GlobalNamespace {
struct TimeSpanParse_TTT;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeSpanParse_TTT);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeSpanParse_TTT, "System.Globalization", "TimeSpanParse/TTT");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.TimeSpanParse/TTT
struct CORDL_TYPE TimeSpanParse_TTT {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __TimeSpanParse_TTT_Unwrapped
enum struct __TimeSpanParse_TTT_Unwrapped : uint8_t {
__E_None = static_cast<uint8_t>(0x0u),
__E_End = static_cast<uint8_t>(0x1u),
__E_Num = static_cast<uint8_t>(0x2u),
__E_Sep = static_cast<uint8_t>(0x3u),
__E_NumOverflow = static_cast<uint8_t>(0x4u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TimeSpanParse_TTT_Unwrapped () const noexcept {
return static_cast<__TimeSpanParse_TTT_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanParse_TTT() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr TimeSpanParse_TTT(uint8_t  value__) noexcept;

/// @brief Field End value: U8(1)
static ::GlobalNamespace::TimeSpanParse_TTT const End;

/// @brief Field None value: U8(0)
static ::GlobalNamespace::TimeSpanParse_TTT const None;

/// @brief Field Num value: U8(2)
static ::GlobalNamespace::TimeSpanParse_TTT const Num;

/// @brief Field NumOverflow value: U8(4)
static ::GlobalNamespace::TimeSpanParse_TTT const NumOverflow;

/// @brief Field Sep value: U8(3)
static ::GlobalNamespace::TimeSpanParse_TTT const Sep;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6737};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeSpanParse_TTT, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeSpanParse_TTT) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
