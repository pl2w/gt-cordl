#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaModifyDayNightTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerBox_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaModifyDayNightTrigger)
// Forward declare root types
namespace GlobalNamespace {
class GorillaModifyDayNightTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaModifyDayNightTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaModifyDayNightTrigger*, "", "GorillaModifyDayNightTrigger");
// Dependencies BetterDayNightManager::WeatherType, GorillaTriggerBox
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaModifyDayNightTrigger
class CORDL_TYPE GorillaModifyDayNightTrigger : public ::GlobalNamespace::GorillaTriggerBox {
public:
// Declarations
/// @brief Field clearModifiedTime, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_clearModifiedTime, put=__cordl_internal_set_clearModifiedTime)) bool  clearModifiedTime;

/// @brief Field fixedWeather, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fixedWeather, put=__cordl_internal_set_fixedWeather)) ::GlobalNamespace::BetterDayNightManager_WeatherType  fixedWeather;

/// @brief Field setFixedWeather, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_setFixedWeather, put=__cordl_internal_set_setFixedWeather)) bool  setFixedWeather;

/// @brief Field timeOfDayIndex, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeOfDayIndex, put=__cordl_internal_set_timeOfDayIndex)) int32_t  timeOfDayIndex;

static inline ::GlobalNamespace::GorillaModifyDayNightTrigger* New_ctor() ;

/// @brief Method OnBoxTriggered, addr 0x5919e54, size 0x194, virtual true, abstract: false, final false
inline void OnBoxTriggered() ;

constexpr bool const& __cordl_internal_get_clearModifiedTime() const;

constexpr bool& __cordl_internal_get_clearModifiedTime() ;

constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType const& __cordl_internal_get_fixedWeather() const;

constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType& __cordl_internal_get_fixedWeather() ;

constexpr bool const& __cordl_internal_get_setFixedWeather() const;

constexpr bool& __cordl_internal_get_setFixedWeather() ;

constexpr int32_t const& __cordl_internal_get_timeOfDayIndex() const;

constexpr int32_t& __cordl_internal_get_timeOfDayIndex() ;

constexpr void __cordl_internal_set_clearModifiedTime(bool  value) ;

constexpr void __cordl_internal_set_fixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  value) ;

constexpr void __cordl_internal_set_setFixedWeather(bool  value) ;

constexpr void __cordl_internal_set_timeOfDayIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5919fe8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaModifyDayNightTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaModifyDayNightTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaModifyDayNightTrigger(GorillaModifyDayNightTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaModifyDayNightTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaModifyDayNightTrigger(GorillaModifyDayNightTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2198};

/// @brief Field clearModifiedTime, offset: 0x20, size: 0x1, def value: None
 bool  ___clearModifiedTime;

/// @brief Field timeOfDayIndex, offset: 0x24, size: 0x4, def value: None
 int32_t  ___timeOfDayIndex;

/// @brief Field setFixedWeather, offset: 0x28, size: 0x1, def value: None
 bool  ___setFixedWeather;

/// @brief Field fixedWeather, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::BetterDayNightManager_WeatherType  ___fixedWeather;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaModifyDayNightTrigger, ___clearModifiedTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaModifyDayNightTrigger, ___timeOfDayIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaModifyDayNightTrigger, ___setFixedWeather) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaModifyDayNightTrigger, ___fixedWeather) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaModifyDayNightTrigger) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
