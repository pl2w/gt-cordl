#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/SerializationUtilities_ObjectType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationUtilities_ObjectType)
// Forward declare root types
namespace GlobalNamespace {
struct SerializationUtilities_ObjectType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializationUtilities_ObjectType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializationUtilities_ObjectType, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities/ObjectType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.Utility.SerializationUtilities/ObjectType
struct CORDL_TYPE SerializationUtilities_ObjectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SerializationUtilities_ObjectType_Unwrapped
enum struct __SerializationUtilities_ObjectType_Unwrapped : int32_t {
__E_AsciiString = static_cast<int32_t>(0x0),
__E_UnicodeString = static_cast<int32_t>(0x1),
__E_UInt16 = static_cast<int32_t>(0x2),
__E_UInt32 = static_cast<int32_t>(0x3),
__E_Int32 = static_cast<int32_t>(0x4),
__E_Hash128 = static_cast<int32_t>(0x5),
__E_Type = static_cast<int32_t>(0x6),
__E_JsonObject = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SerializationUtilities_ObjectType_Unwrapped () const noexcept {
return static_cast<__SerializationUtilities_ObjectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SerializationUtilities_ObjectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializationUtilities_ObjectType(int32_t  value__) noexcept;

/// @brief Field AsciiString value: I32(0)
static ::GlobalNamespace::SerializationUtilities_ObjectType const AsciiString;

/// @brief Field Hash128 value: I32(5)
static ::GlobalNamespace::SerializationUtilities_ObjectType const Hash128;

/// @brief Field Int32 value: I32(4)
static ::GlobalNamespace::SerializationUtilities_ObjectType const Int32;

/// @brief Field JsonObject value: I32(7)
static ::GlobalNamespace::SerializationUtilities_ObjectType const JsonObject;

/// @brief Field Type value: I32(6)
static ::GlobalNamespace::SerializationUtilities_ObjectType const Type;

/// @brief Field UInt16 value: I32(2)
static ::GlobalNamespace::SerializationUtilities_ObjectType const UInt16;

/// @brief Field UInt32 value: I32(3)
static ::GlobalNamespace::SerializationUtilities_ObjectType const UInt32;

/// @brief Field UnicodeString value: I32(1)
static ::GlobalNamespace::SerializationUtilities_ObjectType const UnicodeString;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29266};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializationUtilities_ObjectType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializationUtilities_ObjectType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
