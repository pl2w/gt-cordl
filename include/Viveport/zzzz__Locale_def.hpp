#pragma once
// IWYU pragma private; include "Viveport/Locale.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Locale)
// Forward declare root types
namespace Viveport {
struct Locale;
}
// Write type traits
MARK_VAL_T(::Viveport::Locale);
DEFINE_IL2CPP_CLASS(::Viveport::Locale, "Viveport", "Locale");
// Dependencies 
namespace Viveport {
// Is value type: true
// CS Name: Viveport.Locale
struct CORDL_TYPE Locale {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Locale_Unwrapped
enum struct __Locale_Unwrapped : int32_t {
__E_US = static_cast<int32_t>(0x0),
__E_DE = static_cast<int32_t>(0x1),
__E_JP = static_cast<int32_t>(0x2),
__E_KR = static_cast<int32_t>(0x3),
__E_RU = static_cast<int32_t>(0x4),
__E_CN = static_cast<int32_t>(0x5),
__E_TW = static_cast<int32_t>(0x6),
__E_FR = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Locale_Unwrapped () const noexcept {
return static_cast<__Locale_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Locale() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Locale(int32_t  value__) noexcept;

/// @brief Field CN value: I32(5)
static ::Viveport::Locale const CN;

/// @brief Field DE value: I32(1)
static ::Viveport::Locale const DE;

/// @brief Field FR value: I32(7)
static ::Viveport::Locale const FR;

/// @brief Field JP value: I32(2)
static ::Viveport::Locale const JP;

/// @brief Field KR value: I32(3)
static ::Viveport::Locale const KR;

/// @brief Field RU value: I32(4)
static ::Viveport::Locale const RU;

/// @brief Field TW value: I32(6)
static ::Viveport::Locale const TW;

/// @brief Field US value: I32(0)
static ::Viveport::Locale const US;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Locale, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Viveport::Locale) == 0x4, "Size mismatch!");

} // namespace end def Viveport
