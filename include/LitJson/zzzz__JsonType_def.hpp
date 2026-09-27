#pragma once
// IWYU pragma private; include "LitJson/JsonType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonType)
// Forward declare root types
namespace LitJson {
struct JsonType;
}
// Write type traits
MARK_VAL_T(::LitJson::JsonType);
DEFINE_IL2CPP_CLASS(::LitJson::JsonType, "LitJson", "JsonType");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.JsonType
struct CORDL_TYPE JsonType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonType_Unwrapped
enum struct __JsonType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Object = static_cast<int32_t>(0x1),
__E_Array = static_cast<int32_t>(0x2),
__E_String = static_cast<int32_t>(0x3),
__E_Int = static_cast<int32_t>(0x4),
__E_Long = static_cast<int32_t>(0x5),
__E_Double = static_cast<int32_t>(0x6),
__E_Boolean = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonType_Unwrapped () const noexcept {
return static_cast<__JsonType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonType(int32_t  value__) noexcept;

/// @brief Field Array value: I32(2)
static ::LitJson::JsonType const Array;

/// @brief Field Boolean value: I32(7)
static ::LitJson::JsonType const Boolean;

/// @brief Field Double value: I32(6)
static ::LitJson::JsonType const Double;

/// @brief Field Int value: I32(4)
static ::LitJson::JsonType const Int;

/// @brief Field Long value: I32(5)
static ::LitJson::JsonType const Long;

/// @brief Field None value: I32(0)
static ::LitJson::JsonType const None;

/// @brief Field Object value: I32(1)
static ::LitJson::JsonType const Object;

/// @brief Field String value: I32(3)
static ::LitJson::JsonType const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3817};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::JsonType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::LitJson::JsonType) == 0x4, "Size mismatch!");

} // namespace end def LitJson
