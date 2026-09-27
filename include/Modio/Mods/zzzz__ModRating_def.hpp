#pragma once
// IWYU pragma private; include "Modio/Mods/ModRating.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ModRating)
// Forward declare root types
namespace Modio::Mods {
struct ModRating;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::ModRating);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModRating, "Modio.Mods", "ModRating");
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.ModRating
struct CORDL_TYPE ModRating {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ModRating_Unwrapped
enum struct __ModRating_Unwrapped : int32_t {
__E_Positive = static_cast<int32_t>(0x1),
__E_Negative = static_cast<int32_t>(0xffffffff),
__E_None = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ModRating_Unwrapped () const noexcept {
return static_cast<__ModRating_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ModRating() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ModRating(int32_t  value__) noexcept;

/// @brief Field Negative value: I32(-1)
static ::Modio::Mods::ModRating const Negative;

/// @brief Field None value: I32(0)
static ::Modio::Mods::ModRating const None;

/// @brief Field Positive value: I32(1)
static ::Modio::Mods::ModRating const Positive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17596};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModRating, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModRating) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
