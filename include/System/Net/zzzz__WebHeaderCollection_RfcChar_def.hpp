#pragma once
// IWYU pragma private; include "System/Net/WebHeaderCollection_RfcChar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WebHeaderCollection_RfcChar)
// Forward declare root types
namespace GlobalNamespace {
struct WebHeaderCollection_RfcChar;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WebHeaderCollection_RfcChar);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WebHeaderCollection_RfcChar, "System.Net", "WebHeaderCollection/RfcChar");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.WebHeaderCollection/RfcChar
struct CORDL_TYPE WebHeaderCollection_RfcChar {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __WebHeaderCollection_RfcChar_Unwrapped
enum struct __WebHeaderCollection_RfcChar_Unwrapped : uint8_t {
__E_High = static_cast<uint8_t>(0x0u),
__E_Reg = static_cast<uint8_t>(0x1u),
__E_Ctl = static_cast<uint8_t>(0x2u),
__E_CR = static_cast<uint8_t>(0x3u),
__E_LF = static_cast<uint8_t>(0x4u),
__E_WS = static_cast<uint8_t>(0x5u),
__E_Colon = static_cast<uint8_t>(0x6u),
__E_Delim = static_cast<uint8_t>(0x7u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WebHeaderCollection_RfcChar_Unwrapped () const noexcept {
return static_cast<__WebHeaderCollection_RfcChar_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WebHeaderCollection_RfcChar() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr WebHeaderCollection_RfcChar(uint8_t  value__) noexcept;

/// @brief Field CR value: U8(3)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const CR;

/// @brief Field Colon value: U8(6)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const Colon;

/// @brief Field Ctl value: U8(2)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const Ctl;

/// @brief Field Delim value: U8(7)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const Delim;

/// @brief Field High value: U8(0)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const High;

/// @brief Field LF value: U8(4)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const LF;

/// @brief Field Reg value: U8(1)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const Reg;

/// @brief Field WS value: U8(5)
static ::GlobalNamespace::WebHeaderCollection_RfcChar const WS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10556};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WebHeaderCollection_RfcChar, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WebHeaderCollection_RfcChar) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
