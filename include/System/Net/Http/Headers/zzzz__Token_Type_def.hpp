#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/Token_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Token_Type)
// Forward declare root types
namespace GlobalNamespace {
struct Token_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Token_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Token_Type, "System.Net.Http.Headers", "Token/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Net.Http.Headers.Token/Type
struct CORDL_TYPE Token_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Token_Type_Unwrapped
enum struct __Token_Type_Unwrapped : int32_t {
__E_Error = static_cast<int32_t>(0x0),
__E_End = static_cast<int32_t>(0x1),
__E_Token = static_cast<int32_t>(0x2),
__E_QuotedString = static_cast<int32_t>(0x3),
__E_SeparatorEqual = static_cast<int32_t>(0x4),
__E_SeparatorSemicolon = static_cast<int32_t>(0x5),
__E_SeparatorSlash = static_cast<int32_t>(0x6),
__E_SeparatorDash = static_cast<int32_t>(0x7),
__E_SeparatorComma = static_cast<int32_t>(0x8),
__E_OpenParens = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Token_Type_Unwrapped () const noexcept {
return static_cast<__Token_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Token_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Token_Type(int32_t  value__) noexcept;

/// @brief Field End value: I32(1)
static ::GlobalNamespace::Token_Type const End;

/// @brief Field Error value: I32(0)
static ::GlobalNamespace::Token_Type const Error;

/// @brief Field OpenParens value: I32(9)
static ::GlobalNamespace::Token_Type const OpenParens;

/// @brief Field QuotedString value: I32(3)
static ::GlobalNamespace::Token_Type const QuotedString;

/// @brief Field SeparatorComma value: I32(8)
static ::GlobalNamespace::Token_Type const SeparatorComma;

/// @brief Field SeparatorDash value: I32(7)
static ::GlobalNamespace::Token_Type const SeparatorDash;

/// @brief Field SeparatorEqual value: I32(4)
static ::GlobalNamespace::Token_Type const SeparatorEqual;

/// @brief Field SeparatorSemicolon value: I32(5)
static ::GlobalNamespace::Token_Type const SeparatorSemicolon;

/// @brief Field SeparatorSlash value: I32(6)
static ::GlobalNamespace::Token_Type const SeparatorSlash;

/// @brief Field Token value: I32(2)
static ::GlobalNamespace::Token_Type const Token;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Token_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Token_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
