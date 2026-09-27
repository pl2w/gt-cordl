#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterDayNightManager_WeatherType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BetterDayNightManager_WeatherType)
// Forward declare root types
namespace GlobalNamespace {
struct BetterDayNightManager_WeatherType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BetterDayNightManager_WeatherType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager_WeatherType, "", "BetterDayNightManager/WeatherType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BetterDayNightManager/WeatherType
struct CORDL_TYPE BetterDayNightManager_WeatherType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BetterDayNightManager_WeatherType_Unwrapped
enum struct __BetterDayNightManager_WeatherType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Raining = static_cast<int32_t>(0x1),
__E_All = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BetterDayNightManager_WeatherType_Unwrapped () const noexcept {
return static_cast<__BetterDayNightManager_WeatherType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager_WeatherType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BetterDayNightManager_WeatherType(int32_t  value__) noexcept;

/// @brief Field All value: I32(2)
static ::GlobalNamespace::BetterDayNightManager_WeatherType const All;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::BetterDayNightManager_WeatherType const None;

/// @brief Field Raining value: I32(1)
static ::GlobalNamespace::BetterDayNightManager_WeatherType const Raining;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2581};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_WeatherType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager_WeatherType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
