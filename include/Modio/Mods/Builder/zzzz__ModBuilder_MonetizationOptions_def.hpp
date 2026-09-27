#pragma once
// IWYU pragma private; include "Modio/Mods/Builder/ModBuilder_MonetizationOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModBuilder_MonetizationOptions)
// Forward declare root types
namespace GlobalNamespace {
struct ModBuilder_MonetizationOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ModBuilder_MonetizationOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ModBuilder_MonetizationOptions, "Modio.Mods.Builder", "ModBuilder/MonetizationOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Modio.Mods.Builder.ModBuilder/MonetizationOptions
struct CORDL_TYPE ModBuilder_MonetizationOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModBuilder_MonetizationOptions_Unwrapped
enum struct __ModBuilder_MonetizationOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Enabled = static_cast<int32_t>(0x1),
__E_Live = static_cast<int32_t>(0x2),
__E_LimitedStock = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModBuilder_MonetizationOptions_Unwrapped () const noexcept {
return static_cast<__ModBuilder_MonetizationOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModBuilder_MonetizationOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModBuilder_MonetizationOptions(int32_t  value__) noexcept;

/// @brief Field Enabled value: I32(1)
static ::GlobalNamespace::ModBuilder_MonetizationOptions const Enabled;

/// @brief Field LimitedStock value: I32(8)
static ::GlobalNamespace::ModBuilder_MonetizationOptions const LimitedStock;

/// @brief Field Live value: I32(2)
static ::GlobalNamespace::ModBuilder_MonetizationOptions const Live;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ModBuilder_MonetizationOptions const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17605};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ModBuilder_MonetizationOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ModBuilder_MonetizationOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
