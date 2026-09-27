#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonWriter_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonWriter_State)
// Forward declare root types
namespace GlobalNamespace {
struct JsonWriter_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonWriter_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonWriter_State, "Newtonsoft.Json", "JsonWriter/State");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonWriter/State
struct CORDL_TYPE JsonWriter_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonWriter_State_Unwrapped
enum struct __JsonWriter_State_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Property = static_cast<int32_t>(0x1),
__E_ObjectStart = static_cast<int32_t>(0x2),
__E_Object = static_cast<int32_t>(0x3),
__E_ArrayStart = static_cast<int32_t>(0x4),
__E_Array = static_cast<int32_t>(0x5),
__E_ConstructorStart = static_cast<int32_t>(0x6),
__E_Constructor = static_cast<int32_t>(0x7),
__E_Closed = static_cast<int32_t>(0x8),
__E_Error = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonWriter_State_Unwrapped () const noexcept {
return static_cast<__JsonWriter_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonWriter_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonWriter_State(int32_t  value__) noexcept;

/// @brief Field Array value: I32(5)
static ::GlobalNamespace::JsonWriter_State const Array;

/// @brief Field ArrayStart value: I32(4)
static ::GlobalNamespace::JsonWriter_State const ArrayStart;

/// @brief Field Closed value: I32(8)
static ::GlobalNamespace::JsonWriter_State const Closed;

/// @brief Field Constructor value: I32(7)
static ::GlobalNamespace::JsonWriter_State const Constructor;

/// @brief Field ConstructorStart value: I32(6)
static ::GlobalNamespace::JsonWriter_State const ConstructorStart;

/// @brief Field Error value: I32(9)
static ::GlobalNamespace::JsonWriter_State const Error;

/// @brief Field Object value: I32(3)
static ::GlobalNamespace::JsonWriter_State const Object;

/// @brief Field ObjectStart value: I32(2)
static ::GlobalNamespace::JsonWriter_State const ObjectStart;

/// @brief Field Property value: I32(1)
static ::GlobalNamespace::JsonWriter_State const Property;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::JsonWriter_State const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonWriter_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonWriter_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
