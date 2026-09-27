#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField_ContentType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputField_ContentType)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_InputField_ContentType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_InputField_ContentType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_InputField_ContentType, "TMPro", "TMP_InputField/ContentType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_InputField/ContentType
struct CORDL_TYPE TMP_InputField_ContentType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TMP_InputField_ContentType_Unwrapped
enum struct __TMP_InputField_ContentType_Unwrapped : int32_t {
__E_Standard = static_cast<int32_t>(0x0),
__E_Autocorrected = static_cast<int32_t>(0x1),
__E_IntegerNumber = static_cast<int32_t>(0x2),
__E_DecimalNumber = static_cast<int32_t>(0x3),
__E_Alphanumeric = static_cast<int32_t>(0x4),
__E_Name = static_cast<int32_t>(0x5),
__E_EmailAddress = static_cast<int32_t>(0x6),
__E_Password = static_cast<int32_t>(0x7),
__E_Pin = static_cast<int32_t>(0x8),
__E_Custom = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_InputField_ContentType_Unwrapped () const noexcept {
return static_cast<__TMP_InputField_ContentType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TMP_InputField_ContentType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_InputField_ContentType(int32_t  value__) noexcept;

/// @brief Field Alphanumeric value: I32(4)
static ::GlobalNamespace::TMP_InputField_ContentType const Alphanumeric;

/// @brief Field Autocorrected value: I32(1)
static ::GlobalNamespace::TMP_InputField_ContentType const Autocorrected;

/// @brief Field Custom value: I32(9)
static ::GlobalNamespace::TMP_InputField_ContentType const Custom;

/// @brief Field DecimalNumber value: I32(3)
static ::GlobalNamespace::TMP_InputField_ContentType const DecimalNumber;

/// @brief Field EmailAddress value: I32(6)
static ::GlobalNamespace::TMP_InputField_ContentType const EmailAddress;

/// @brief Field IntegerNumber value: I32(2)
static ::GlobalNamespace::TMP_InputField_ContentType const IntegerNumber;

/// @brief Field Name value: I32(5)
static ::GlobalNamespace::TMP_InputField_ContentType const Name;

/// @brief Field Password value: I32(7)
static ::GlobalNamespace::TMP_InputField_ContentType const Password;

/// @brief Field Pin value: I32(8)
static ::GlobalNamespace::TMP_InputField_ContentType const Pin;

/// @brief Field Standard value: I32(0)
static ::GlobalNamespace::TMP_InputField_ContentType const Standard;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22965};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_InputField_ContentType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_InputField_ContentType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
