#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/JsonParser_JsonValueType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonParser_JsonValueType)
// Forward declare root types
namespace GlobalNamespace {
struct JsonParser_JsonValueType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonParser_JsonValueType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonParser_JsonValueType, "UnityEngine.InputSystem.Utilities", "JsonParser/JsonValueType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.JsonParser/JsonValueType
struct CORDL_TYPE JsonParser_JsonValueType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonParser_JsonValueType_Unwrapped
enum struct __JsonParser_JsonValueType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Bool = static_cast<int32_t>(0x1),
__E_Real = static_cast<int32_t>(0x2),
__E_Integer = static_cast<int32_t>(0x3),
__E_String = static_cast<int32_t>(0x4),
__E_Array = static_cast<int32_t>(0x5),
__E_Object = static_cast<int32_t>(0x6),
__E_Any = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonParser_JsonValueType_Unwrapped () const noexcept {
return static_cast<__JsonParser_JsonValueType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonParser_JsonValueType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonParser_JsonValueType(int32_t  value__) noexcept;

/// @brief Field Any value: I32(7)
static ::GlobalNamespace::JsonParser_JsonValueType const Any;

/// @brief Field Array value: I32(5)
static ::GlobalNamespace::JsonParser_JsonValueType const Array;

/// @brief Field Bool value: I32(1)
static ::GlobalNamespace::JsonParser_JsonValueType const Bool;

/// @brief Field Integer value: I32(3)
static ::GlobalNamespace::JsonParser_JsonValueType const Integer;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::JsonParser_JsonValueType const None;

/// @brief Field Object value: I32(6)
static ::GlobalNamespace::JsonParser_JsonValueType const Object;

/// @brief Field Real value: I32(2)
static ::GlobalNamespace::JsonParser_JsonValueType const Real;

/// @brief Field String value: I32(4)
static ::GlobalNamespace::JsonParser_JsonValueType const String;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13896};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonParser_JsonValueType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonParser_JsonValueType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
