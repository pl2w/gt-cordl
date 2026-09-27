#pragma once
// IWYU pragma private; include "Modio/Mods/ModMonetizationOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModMonetizationOption)
// Forward declare root types
namespace Modio::Mods {
struct ModMonetizationOption;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModMonetizationOption);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModMonetizationOption, "Modio.Mods", "ModMonetizationOption");
// [Flags]
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModMonetizationOption
struct CORDL_TYPE ModMonetizationOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModMonetizationOption_Unwrapped
enum struct __ModMonetizationOption_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Enabled = static_cast<int32_t>(0x1),
__E_Live = static_cast<int32_t>(0x2),
__E_EnablePartnerProgram = static_cast<int32_t>(0x4),
__E_EnableScarcity = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModMonetizationOption_Unwrapped () const noexcept {
return static_cast<__ModMonetizationOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModMonetizationOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModMonetizationOption(int32_t  value__) noexcept;

/// @brief Field EnablePartnerProgram value: I32(4)
static ::Modio::Mods::ModMonetizationOption const EnablePartnerProgram;

/// @brief Field EnableScarcity value: I32(8)
static ::Modio::Mods::ModMonetizationOption const EnableScarcity;

/// @brief Field Enabled value: I32(1)
static ::Modio::Mods::ModMonetizationOption const Enabled;

/// @brief Field Live value: I32(2)
static ::Modio::Mods::ModMonetizationOption const Live;

/// @brief Field None value: I32(0)
static ::Modio::Mods::ModMonetizationOption const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17595};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModMonetizationOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModMonetizationOption) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
