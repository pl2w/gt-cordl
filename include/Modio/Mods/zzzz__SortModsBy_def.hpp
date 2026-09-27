#pragma once
// IWYU pragma private; include "Modio/Mods/SortModsBy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortModsBy)
// Forward declare root types
namespace Modio::Mods {
struct SortModsBy;
}
// Write type traits
MARK_VAL_T(::Modio::Mods::SortModsBy);
DEFINE_IL2CPP_CLASS(::Modio::Mods::SortModsBy, "Modio.Mods", "SortModsBy");
// Dependencies 
namespace Modio::Mods {
// Is value type: true
// CS Name: Modio.Mods.SortModsBy
struct CORDL_TYPE SortModsBy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SortModsBy_Unwrapped
enum struct __SortModsBy_Unwrapped : int32_t {
__E_Name = static_cast<int32_t>(0x0),
__E_Price = static_cast<int32_t>(0x1),
__E_Rating = static_cast<int32_t>(0x2),
__E_Popular = static_cast<int32_t>(0x3),
__E_Downloads = static_cast<int32_t>(0x4),
__E_Subscribers = static_cast<int32_t>(0x5),
__E_DateSubmitted = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SortModsBy_Unwrapped () const noexcept {
return static_cast<__SortModsBy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SortModsBy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SortModsBy(int32_t  value__) noexcept;

/// @brief Field DateSubmitted value: I32(6)
static ::Modio::Mods::SortModsBy const DateSubmitted;

/// @brief Field Downloads value: I32(4)
static ::Modio::Mods::SortModsBy const Downloads;

/// @brief Field Name value: I32(0)
static ::Modio::Mods::SortModsBy const Name;

/// @brief Field Popular value: I32(3)
static ::Modio::Mods::SortModsBy const Popular;

/// @brief Field Price value: I32(1)
static ::Modio::Mods::SortModsBy const Price;

/// @brief Field Rating value: I32(2)
static ::Modio::Mods::SortModsBy const Rating;

/// @brief Field Subscribers value: I32(5)
static ::Modio::Mods::SortModsBy const Subscribers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17597};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::SortModsBy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::SortModsBy) == 0x4, "Size mismatch!");

} // namespace end def Modio::Mods
