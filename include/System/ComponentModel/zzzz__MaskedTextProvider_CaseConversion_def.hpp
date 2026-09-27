#pragma once
// IWYU pragma private; include "System/ComponentModel/MaskedTextProvider_CaseConversion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaskedTextProvider_CaseConversion)
// Forward declare root types
namespace GlobalNamespace {
struct MaskedTextProvider_CaseConversion;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MaskedTextProvider_CaseConversion);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaskedTextProvider_CaseConversion, "System.ComponentModel", "MaskedTextProvider/CaseConversion");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.ComponentModel.MaskedTextProvider/CaseConversion
struct CORDL_TYPE MaskedTextProvider_CaseConversion {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MaskedTextProvider_CaseConversion_Unwrapped
enum struct __MaskedTextProvider_CaseConversion_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ToLower = static_cast<int32_t>(0x1),
__E_ToUpper = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MaskedTextProvider_CaseConversion_Unwrapped () const noexcept {
return static_cast<__MaskedTextProvider_CaseConversion_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MaskedTextProvider_CaseConversion() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MaskedTextProvider_CaseConversion(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MaskedTextProvider_CaseConversion const None;

/// @brief Field ToLower value: I32(1)
static ::GlobalNamespace::MaskedTextProvider_CaseConversion const ToLower;

/// @brief Field ToUpper value: I32(2)
static ::GlobalNamespace::MaskedTextProvider_CaseConversion const ToUpper;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10205};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaskedTextProvider_CaseConversion, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaskedTextProvider_CaseConversion) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
