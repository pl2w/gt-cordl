#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterDayNightManager_Season.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BetterDayNightManager_Season)
// Forward declare root types
namespace GlobalNamespace {
struct BetterDayNightManager_Season;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BetterDayNightManager_Season);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager_Season, "", "BetterDayNightManager/Season");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BetterDayNightManager/Season
struct CORDL_TYPE BetterDayNightManager_Season {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BetterDayNightManager_Season_Unwrapped
enum struct __BetterDayNightManager_Season_Unwrapped : int32_t {
__E_Winter = static_cast<int32_t>(0x0),
__E_Spring = static_cast<int32_t>(0x1),
__E_Summer = static_cast<int32_t>(0x2),
__E_Fall = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BetterDayNightManager_Season_Unwrapped () const noexcept {
return static_cast<__BetterDayNightManager_Season_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager_Season() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BetterDayNightManager_Season(int32_t  value__) noexcept;

/// @brief Field Fall value: I32(3)
static ::GlobalNamespace::BetterDayNightManager_Season const Fall;

/// @brief Field Spring value: I32(1)
static ::GlobalNamespace::BetterDayNightManager_Season const Spring;

/// @brief Field Summer value: I32(2)
static ::GlobalNamespace::BetterDayNightManager_Season const Summer;

/// @brief Field Winter value: I32(0)
static ::GlobalNamespace::BetterDayNightManager_Season const Winter;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2580};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_Season, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager_Season) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
