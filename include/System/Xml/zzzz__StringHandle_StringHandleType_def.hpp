#pragma once
// IWYU pragma private; include "System/Xml/StringHandle_StringHandleType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringHandle_StringHandleType)
// Forward declare root types
namespace GlobalNamespace {
struct StringHandle_StringHandleType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StringHandle_StringHandleType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringHandle_StringHandleType, "System.Xml", "StringHandle/StringHandleType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Xml.StringHandle/StringHandleType
struct CORDL_TYPE StringHandle_StringHandleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StringHandle_StringHandleType_Unwrapped
enum struct __StringHandle_StringHandleType_Unwrapped : int32_t {
__E_Dictionary = static_cast<int32_t>(0x0),
__E_UTF8 = static_cast<int32_t>(0x1),
__E_EscapedUTF8 = static_cast<int32_t>(0x2),
__E_ConstString = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StringHandle_StringHandleType_Unwrapped () const noexcept {
return static_cast<__StringHandle_StringHandleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StringHandle_StringHandleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StringHandle_StringHandleType(int32_t  value__) noexcept;

/// @brief Field ConstString value: I32(3)
static ::GlobalNamespace::StringHandle_StringHandleType const ConstString;

/// @brief Field Dictionary value: I32(0)
static ::GlobalNamespace::StringHandle_StringHandleType const Dictionary;

/// @brief Field EscapedUTF8 value: I32(2)
static ::GlobalNamespace::StringHandle_StringHandleType const EscapedUTF8;

/// @brief Field UTF8 value: I32(1)
static ::GlobalNamespace::StringHandle_StringHandleType const UTF8;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24411};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringHandle_StringHandleType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringHandle_StringHandleType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
