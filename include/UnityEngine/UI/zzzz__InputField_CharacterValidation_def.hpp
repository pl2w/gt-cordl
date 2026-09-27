#pragma once
// IWYU pragma private; include "UnityEngine/UI/InputField_CharacterValidation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputField_CharacterValidation)
// Forward declare root types
namespace GlobalNamespace {
struct InputField_CharacterValidation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputField_CharacterValidation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputField_CharacterValidation, "UnityEngine.UI", "InputField/CharacterValidation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.InputField/CharacterValidation
struct CORDL_TYPE InputField_CharacterValidation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputField_CharacterValidation_Unwrapped
enum struct __InputField_CharacterValidation_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Integer = static_cast<int32_t>(0x1),
__E_Decimal = static_cast<int32_t>(0x2),
__E_Alphanumeric = static_cast<int32_t>(0x3),
__E_Name = static_cast<int32_t>(0x4),
__E_EmailAddress = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputField_CharacterValidation_Unwrapped () const noexcept {
return static_cast<__InputField_CharacterValidation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputField_CharacterValidation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputField_CharacterValidation(int32_t  value__) noexcept;

/// @brief Field Alphanumeric value: I32(3)
static ::GlobalNamespace::InputField_CharacterValidation const Alphanumeric;

/// @brief Field Decimal value: I32(2)
static ::GlobalNamespace::InputField_CharacterValidation const Decimal;

/// @brief Field EmailAddress value: I32(5)
static ::GlobalNamespace::InputField_CharacterValidation const EmailAddress;

/// @brief Field Integer value: I32(1)
static ::GlobalNamespace::InputField_CharacterValidation const Integer;

/// @brief Field Name value: I32(4)
static ::GlobalNamespace::InputField_CharacterValidation const Name;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InputField_CharacterValidation const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26038};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputField_CharacterValidation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputField_CharacterValidation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
