#pragma once
// IWYU pragma private; include "PlayFab/Json/PlayFabSimpleJson_TokenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayFabSimpleJson_TokenType)
// Forward declare root types
namespace GlobalNamespace {
struct PlayFabSimpleJson_TokenType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayFabSimpleJson_TokenType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayFabSimpleJson_TokenType, "PlayFab.Json", "PlayFabSimpleJson/TokenType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayFab.Json.PlayFabSimpleJson/TokenType
struct CORDL_TYPE PlayFabSimpleJson_TokenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __PlayFabSimpleJson_TokenType_Unwrapped
enum struct __PlayFabSimpleJson_TokenType_Unwrapped : uint8_t {
__E_NONE = static_cast<uint8_t>(0x0u),
__E_CURLY_OPEN = static_cast<uint8_t>(0x1u),
__E_CURLY_CLOSE = static_cast<uint8_t>(0x2u),
__E_SQUARED_OPEN = static_cast<uint8_t>(0x3u),
__E_SQUARED_CLOSE = static_cast<uint8_t>(0x4u),
__E_COLON = static_cast<uint8_t>(0x5u),
__E_COMMA = static_cast<uint8_t>(0x6u),
__E_STRING = static_cast<uint8_t>(0x7u),
__E_NUMBER = static_cast<uint8_t>(0x8u),
__E_TRUE = static_cast<uint8_t>(0x9u),
__E_FALSE = static_cast<uint8_t>(0xau),
__E_NULL = static_cast<uint8_t>(0xbu),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayFabSimpleJson_TokenType_Unwrapped () const noexcept {
return static_cast<__PlayFabSimpleJson_TokenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayFabSimpleJson_TokenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayFabSimpleJson_TokenType(uint8_t  value__) noexcept;

/// @brief Field COLON value: U8(5)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const COLON;

/// @brief Field COMMA value: U8(6)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const COMMA;

/// @brief Field CURLY_CLOSE value: U8(2)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const CURLY_CLOSE;

/// @brief Field CURLY_OPEN value: U8(1)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const CURLY_OPEN;

/// @brief Field FALSE value: U8(10)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const FALSE;

/// @brief Field NONE value: U8(0)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const NONE;

/// @brief Field NUMBER value: U8(8)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const NUMBER;

/// @brief Field SQUARED_CLOSE value: U8(4)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const SQUARED_CLOSE;

/// @brief Field SQUARED_OPEN value: U8(3)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const SQUARED_OPEN;

/// @brief Field STRING value: U8(7)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const STRING;

/// @brief Field TRUE value: U8(9)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const TRUE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19542};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field NULL value: U8(11)
static ::GlobalNamespace::PlayFabSimpleJson_TokenType const _cordl_NULL;

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayFabSimpleJson_TokenType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayFabSimpleJson_TokenType) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace
