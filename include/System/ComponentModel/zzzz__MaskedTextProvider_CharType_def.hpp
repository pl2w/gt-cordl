#pragma once
// IWYU pragma private; include "System/ComponentModel/MaskedTextProvider_CharType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskedTextProvider_CharType)
// Forward declare root types
namespace GlobalNamespace {
struct MaskedTextProvider_CharType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MaskedTextProvider_CharType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaskedTextProvider_CharType, "System.ComponentModel", "MaskedTextProvider/CharType");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.ComponentModel.MaskedTextProvider/CharType
struct CORDL_TYPE MaskedTextProvider_CharType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskedTextProvider_CharType_Unwrapped
enum struct __MaskedTextProvider_CharType_Unwrapped : int32_t {
__E_EditOptional = static_cast<int32_t>(0x1),
__E_EditRequired = static_cast<int32_t>(0x2),
__E_Separator = static_cast<int32_t>(0x4),
__E_Literal = static_cast<int32_t>(0x8),
__E_Modifier = static_cast<int32_t>(0x10),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskedTextProvider_CharType_Unwrapped () const noexcept {
return static_cast<__MaskedTextProvider_CharType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskedTextProvider_CharType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MaskedTextProvider_CharType(int32_t  value__) noexcept;

/// @brief Field EditOptional value: I32(1)
static ::GlobalNamespace::MaskedTextProvider_CharType const EditOptional;

/// @brief Field EditRequired value: I32(2)
static ::GlobalNamespace::MaskedTextProvider_CharType const EditRequired;

/// @brief Field Literal value: I32(8)
static ::GlobalNamespace::MaskedTextProvider_CharType const Literal;

/// @brief Field Modifier value: I32(16)
static ::GlobalNamespace::MaskedTextProvider_CharType const Modifier;

/// @brief Field Separator value: I32(4)
static ::GlobalNamespace::MaskedTextProvider_CharType const Separator;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaskedTextProvider_CharType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaskedTextProvider_CharType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
