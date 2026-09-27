#pragma once
// IWYU pragma private; include "TMPro/TMP_InputField_CharacterValidation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_InputField_CharacterValidation)
// Forward declare root types
namespace GlobalNamespace {
struct TMP_InputField_CharacterValidation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TMP_InputField_CharacterValidation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TMP_InputField_CharacterValidation, "TMPro", "TMP_InputField/CharacterValidation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TMPro.TMP_InputField/CharacterValidation
struct CORDL_TYPE TMP_InputField_CharacterValidation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TMP_InputField_CharacterValidation_Unwrapped
enum struct __TMP_InputField_CharacterValidation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Digit = static_cast<int32_t>(0x1),
__E_Integer = static_cast<int32_t>(0x2),
__E_Decimal = static_cast<int32_t>(0x3),
__E_Alphanumeric = static_cast<int32_t>(0x4),
__E_Name = static_cast<int32_t>(0x5),
__E_Regex = static_cast<int32_t>(0x6),
__E_EmailAddress = static_cast<int32_t>(0x7),
__E_CustomValidator = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TMP_InputField_CharacterValidation_Unwrapped () const noexcept {
return static_cast<__TMP_InputField_CharacterValidation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TMP_InputField_CharacterValidation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TMP_InputField_CharacterValidation(int32_t  value__) noexcept;

/// @brief Field Alphanumeric value: I32(4)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const Alphanumeric;

/// @brief Field CustomValidator value: I32(8)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const CustomValidator;

/// @brief Field Decimal value: I32(3)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const Decimal;

/// @brief Field Digit value: I32(1)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const Digit;

/// @brief Field EmailAddress value: I32(7)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const EmailAddress;

/// @brief Field Integer value: I32(2)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const Integer;

/// @brief Field Name value: I32(5)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const Name;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const None;

/// @brief Field Regex value: I32(6)
static ::GlobalNamespace::TMP_InputField_CharacterValidation const Regex;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22967};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TMP_InputField_CharacterValidation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TMP_InputField_CharacterValidation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
