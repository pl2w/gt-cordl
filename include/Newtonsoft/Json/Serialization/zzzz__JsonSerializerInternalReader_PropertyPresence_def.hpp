#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonSerializerInternalReader_PropertyPresence.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(JsonSerializerInternalReader_PropertyPresence)
// Forward declare root types
namespace GlobalNamespace {
struct JsonSerializerInternalReader_PropertyPresence;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence, "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader/PropertyPresence");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct CORDL_TYPE JsonSerializerInternalReader_PropertyPresence {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __JsonSerializerInternalReader_PropertyPresence_Unwrapped
enum struct __JsonSerializerInternalReader_PropertyPresence_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Null = static_cast<int32_t>(0x1),
__E_Value = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __JsonSerializerInternalReader_PropertyPresence_Unwrapped () const noexcept {
return static_cast<__JsonSerializerInternalReader_PropertyPresence_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr JsonSerializerInternalReader_PropertyPresence() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr JsonSerializerInternalReader_PropertyPresence(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence const None;

/// @brief Field Null value: I32(1)
static ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence const Null;

/// @brief Field Value value: I32(2)
static ::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence const Value;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23295};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::JsonSerializerInternalReader_PropertyPresence) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
