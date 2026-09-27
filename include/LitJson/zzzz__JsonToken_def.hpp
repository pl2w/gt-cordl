#pragma once
// IWYU pragma private; include "LitJson/JsonToken.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonToken)
// Forward declare root types
namespace LitJson {
struct JsonToken;
}
// Write type traits
MARK_VAL_T(::LitJson::JsonToken);
DEFINE_IL2CPP_CLASS(::LitJson::JsonToken, "LitJson", "JsonToken");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.JsonToken
struct CORDL_TYPE JsonToken {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonToken_Unwrapped
enum struct __JsonToken_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ObjectStart = static_cast<int32_t>(0x1),
__E_PropertyName = static_cast<int32_t>(0x2),
__E_ObjectEnd = static_cast<int32_t>(0x3),
__E_ArrayStart = static_cast<int32_t>(0x4),
__E_ArrayEnd = static_cast<int32_t>(0x5),
__E_Int = static_cast<int32_t>(0x6),
__E_Long = static_cast<int32_t>(0x7),
__E_Double = static_cast<int32_t>(0x8),
__E_String = static_cast<int32_t>(0x9),
__E_Boolean = static_cast<int32_t>(0xa),
__E_Null = static_cast<int32_t>(0xb),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonToken_Unwrapped () const noexcept {
return static_cast<__JsonToken_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonToken() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonToken(int32_t  value__) noexcept;

/// @brief Field ArrayEnd value: I32(5)
static ::LitJson::JsonToken const ArrayEnd;

/// @brief Field ArrayStart value: I32(4)
static ::LitJson::JsonToken const ArrayStart;

/// @brief Field Boolean value: I32(10)
static ::LitJson::JsonToken const Boolean;

/// @brief Field Double value: I32(8)
static ::LitJson::JsonToken const Double;

/// @brief Field Int value: I32(6)
static ::LitJson::JsonToken const Int;

/// @brief Field Long value: I32(7)
static ::LitJson::JsonToken const Long;

/// @brief Field None value: I32(0)
static ::LitJson::JsonToken const None;

/// @brief Field Null value: I32(11)
static ::LitJson::JsonToken const Null;

/// @brief Field ObjectEnd value: I32(3)
static ::LitJson::JsonToken const ObjectEnd;

/// @brief Field ObjectStart value: I32(1)
static ::LitJson::JsonToken const ObjectStart;

/// @brief Field PropertyName value: I32(2)
static ::LitJson::JsonToken const PropertyName;

/// @brief Field String value: I32(9)
static ::LitJson::JsonToken const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::JsonToken, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::LitJson::JsonToken) == 0x4, "Size mismatch!");

} // namespace end def LitJson
