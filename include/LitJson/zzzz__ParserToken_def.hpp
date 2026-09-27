#pragma once
// IWYU pragma private; include "LitJson/ParserToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParserToken)
// Forward declare root types
namespace LitJson {
struct ParserToken;
}
// Write type traits
MARK_VAL_T(::LitJson::ParserToken);
DEFINE_IL2CPP_CLASS(::LitJson::ParserToken, "LitJson", "ParserToken");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.ParserToken
struct CORDL_TYPE ParserToken {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParserToken_Unwrapped
enum struct __ParserToken_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x10000),
__E_Number = static_cast<int32_t>(0x10001),
__E_True = static_cast<int32_t>(0x10002),
__E_False = static_cast<int32_t>(0x10003),
__E_Null = static_cast<int32_t>(0x10004),
__E_CharSeq = static_cast<int32_t>(0x10005),
__E_Char = static_cast<int32_t>(0x10006),
__E_Text = static_cast<int32_t>(0x10007),
__E_Object = static_cast<int32_t>(0x10008),
__E_ObjectPrime = static_cast<int32_t>(0x10009),
__E_Pair = static_cast<int32_t>(0x1000a),
__E_PairRest = static_cast<int32_t>(0x1000b),
__E_Array = static_cast<int32_t>(0x1000c),
__E_ArrayPrime = static_cast<int32_t>(0x1000d),
__E_Value = static_cast<int32_t>(0x1000e),
__E_ValueRest = static_cast<int32_t>(0x1000f),
__E_String = static_cast<int32_t>(0x10010),
__E_End = static_cast<int32_t>(0x10011),
__E_Epsilon = static_cast<int32_t>(0x10012),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ParserToken_Unwrapped () const noexcept {
return static_cast<__ParserToken_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ParserToken() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ParserToken(int32_t  value__) noexcept;

/// @brief Field Array value: I32(65548)
static ::LitJson::ParserToken const Array;

/// @brief Field ArrayPrime value: I32(65549)
static ::LitJson::ParserToken const ArrayPrime;

/// @brief Field Char value: I32(65542)
static ::LitJson::ParserToken const Char;

/// @brief Field CharSeq value: I32(65541)
static ::LitJson::ParserToken const CharSeq;

/// @brief Field End value: I32(65553)
static ::LitJson::ParserToken const End;

/// @brief Field Epsilon value: I32(65554)
static ::LitJson::ParserToken const Epsilon;

/// @brief Field False value: I32(65539)
static ::LitJson::ParserToken const False;

/// @brief Field None value: I32(65536)
static ::LitJson::ParserToken const None;

/// @brief Field Null value: I32(65540)
static ::LitJson::ParserToken const Null;

/// @brief Field Number value: I32(65537)
static ::LitJson::ParserToken const Number;

/// @brief Field Object value: I32(65544)
static ::LitJson::ParserToken const Object;

/// @brief Field ObjectPrime value: I32(65545)
static ::LitJson::ParserToken const ObjectPrime;

/// @brief Field Pair value: I32(65546)
static ::LitJson::ParserToken const Pair;

/// @brief Field PairRest value: I32(65547)
static ::LitJson::ParserToken const PairRest;

/// @brief Field String value: I32(65552)
static ::LitJson::ParserToken const String;

/// @brief Field Text value: I32(65543)
static ::LitJson::ParserToken const Text;

/// @brief Field True value: I32(65538)
static ::LitJson::ParserToken const True;

/// @brief Field Value value: I32(65550)
static ::LitJson::ParserToken const Value;

/// @brief Field ValueRest value: I32(65551)
static ::LitJson::ParserToken const ValueRest;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3842};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::ParserToken, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::LitJson::ParserToken) == 0x4, "Size mismatch!");

} // namespace end def LitJson
