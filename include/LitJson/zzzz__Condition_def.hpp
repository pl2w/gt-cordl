#pragma once
// IWYU pragma private; include "LitJson/Condition.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Condition)
// Forward declare root types
namespace LitJson {
struct Condition;
}
// Write type traits
MARK_VAL_T(::LitJson::Condition);
DEFINE_IL2CPP_CLASS(::LitJson::Condition, "LitJson", "Condition");
// Dependencies 
namespace LitJson {
// Is value type: true
// CS Name: LitJson.Condition
struct CORDL_TYPE Condition {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Condition_Unwrapped
enum struct __Condition_Unwrapped : int32_t {
__E_InArray = static_cast<int32_t>(0x0),
__E_InObject = static_cast<int32_t>(0x1),
__E_NotAProperty = static_cast<int32_t>(0x2),
__E_Property = static_cast<int32_t>(0x3),
__E_Value = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Condition_Unwrapped () const noexcept {
return static_cast<__Condition_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Condition() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Condition(int32_t  value__) noexcept;

/// @brief Field InArray value: I32(0)
static ::LitJson::Condition const InArray;

/// @brief Field InObject value: I32(1)
static ::LitJson::Condition const InObject;

/// @brief Field NotAProperty value: I32(2)
static ::LitJson::Condition const NotAProperty;

/// @brief Field Property value: I32(3)
static ::LitJson::Condition const Property;

/// @brief Field Value value: I32(4)
static ::LitJson::Condition const Value;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3836};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LitJson::Condition, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::LitJson::Condition) == 0x4, "Size mismatch!");

} // namespace end def LitJson
