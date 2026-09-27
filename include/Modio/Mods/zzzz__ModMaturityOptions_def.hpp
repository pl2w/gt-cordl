#pragma once
// IWYU pragma private; include "Modio/Mods/ModMaturityOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModMaturityOptions)
// Forward declare root types
namespace Modio::Mods {
struct ModMaturityOptions;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModMaturityOptions);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModMaturityOptions, "Modio.Mods", "ModMaturityOptions");
// [Flags]
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModMaturityOptions
struct CORDL_TYPE ModMaturityOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModMaturityOptions_Unwrapped
enum struct __ModMaturityOptions_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Alcohol = static_cast<int32_t>(0x1),
__E_Drugs = static_cast<int32_t>(0x2),
__E_Violence = static_cast<int32_t>(0x4),
__E_Explicit = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModMaturityOptions_Unwrapped () const noexcept {
return static_cast<__ModMaturityOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModMaturityOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModMaturityOptions(int32_t  value__) noexcept;

/// @brief Field Alcohol value: I32(1)
static ::Modio::Mods::ModMaturityOptions const Alcohol;

/// @brief Field Drugs value: I32(2)
static ::Modio::Mods::ModMaturityOptions const Drugs;

/// @brief Field Explicit value: I32(8)
static ::Modio::Mods::ModMaturityOptions const Explicit;

/// @brief Field None value: I32(0)
static ::Modio::Mods::ModMaturityOptions const None;

/// @brief Field Violence value: I32(4)
static ::Modio::Mods::ModMaturityOptions const Violence;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17594};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModMaturityOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModMaturityOptions) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
