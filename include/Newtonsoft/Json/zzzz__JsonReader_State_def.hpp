#pragma once
// IWYU pragma private; include "Newtonsoft/Json/JsonReader_State.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonReader_State)
// Forward declare root types
namespace GlobalNamespace {
struct JsonReader_State;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonReader_State);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonReader_State, "Newtonsoft.Json", "JsonReader/State");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.JsonReader/State
struct CORDL_TYPE JsonReader_State {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonReader_State_Unwrapped
enum struct __JsonReader_State_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Complete = static_cast<int32_t>(0x1),
__E_Property = static_cast<int32_t>(0x2),
__E_ObjectStart = static_cast<int32_t>(0x3),
__E_Object = static_cast<int32_t>(0x4),
__E_ArrayStart = static_cast<int32_t>(0x5),
__E_Array = static_cast<int32_t>(0x6),
__E_Closed = static_cast<int32_t>(0x7),
__E_PostValue = static_cast<int32_t>(0x8),
__E_ConstructorStart = static_cast<int32_t>(0x9),
__E_Constructor = static_cast<int32_t>(0xa),
__E_Error = static_cast<int32_t>(0xb),
__E_Finished = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonReader_State_Unwrapped () const noexcept {
return static_cast<__JsonReader_State_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonReader_State() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonReader_State(int32_t  value__) noexcept;

/// @brief Field Array value: I32(6)
static ::GlobalNamespace::JsonReader_State const Array;

/// @brief Field ArrayStart value: I32(5)
static ::GlobalNamespace::JsonReader_State const ArrayStart;

/// @brief Field Closed value: I32(7)
static ::GlobalNamespace::JsonReader_State const Closed;

/// @brief Field Complete value: I32(1)
static ::GlobalNamespace::JsonReader_State const Complete;

/// @brief Field Constructor value: I32(10)
static ::GlobalNamespace::JsonReader_State const Constructor;

/// @brief Field ConstructorStart value: I32(9)
static ::GlobalNamespace::JsonReader_State const ConstructorStart;

/// @brief Field Error value: I32(11)
static ::GlobalNamespace::JsonReader_State const Error;

/// @brief Field Finished value: I32(12)
static ::GlobalNamespace::JsonReader_State const Finished;

/// @brief Field Object value: I32(4)
static ::GlobalNamespace::JsonReader_State const Object;

/// @brief Field ObjectStart value: I32(3)
static ::GlobalNamespace::JsonReader_State const ObjectStart;

/// @brief Field PostValue value: I32(8)
static ::GlobalNamespace::JsonReader_State const PostValue;

/// @brief Field Property value: I32(2)
static ::GlobalNamespace::JsonReader_State const Property;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::JsonReader_State const Start;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23101};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonReader_State, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonReader_State) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
