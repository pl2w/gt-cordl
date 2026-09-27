#pragma once
// IWYU pragma private; include "GlobalNamespace/FlagForLighting_TimeOfDay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlagForLighting_TimeOfDay)
// Forward declare root types
namespace GlobalNamespace {
struct FlagForLighting_TimeOfDay;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FlagForLighting_TimeOfDay);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FlagForLighting_TimeOfDay, "", "FlagForLighting/TimeOfDay");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FlagForLighting/TimeOfDay
struct CORDL_TYPE FlagForLighting_TimeOfDay {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlagForLighting_TimeOfDay_Unwrapped
enum struct __FlagForLighting_TimeOfDay_Unwrapped : int32_t {
__E_Sunrise = static_cast<int32_t>(0x0),
__E_TenAM = static_cast<int32_t>(0x1),
__E_Noon = static_cast<int32_t>(0x2),
__E_ThreePM = static_cast<int32_t>(0x3),
__E_Sunset = static_cast<int32_t>(0x4),
__E_Night = static_cast<int32_t>(0x5),
__E_RainingDay = static_cast<int32_t>(0x6),
__E_RainingNight = static_cast<int32_t>(0x7),
__E_None = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlagForLighting_TimeOfDay_Unwrapped () const noexcept {
return static_cast<__FlagForLighting_TimeOfDay_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlagForLighting_TimeOfDay() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FlagForLighting_TimeOfDay(int32_t  value__) noexcept;

/// @brief Field Night value: I32(5)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const Night;

/// @brief Field None value: I32(8)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const None;

/// @brief Field Noon value: I32(2)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const Noon;

/// @brief Field RainingDay value: I32(6)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const RainingDay;

/// @brief Field RainingNight value: I32(7)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const RainingNight;

/// @brief Field Sunrise value: I32(0)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const Sunrise;

/// @brief Field Sunset value: I32(4)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const Sunset;

/// @brief Field TenAM value: I32(1)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const TenAM;

/// @brief Field ThreePM value: I32(3)
static ::GlobalNamespace::FlagForLighting_TimeOfDay const ThreePM;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FlagForLighting_TimeOfDay, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FlagForLighting_TimeOfDay) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
