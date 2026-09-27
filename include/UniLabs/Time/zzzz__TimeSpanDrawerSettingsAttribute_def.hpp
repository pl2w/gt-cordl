#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeSpanDrawerSettingsAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_def.hpp"
CORDL_MODULE_EXPORT(TimeSpanDrawerSettingsAttribute)
namespace UniLabs::Time {
struct TimeUnit;
}
// Forward declare root types
namespace UniLabs::Time {
class TimeSpanDrawerSettingsAttribute;
}
// Write type traits
MARK_REF_T(::UniLabs::Time::TimeSpanDrawerSettingsAttribute*);
DEFINE_IL2CPP_CLASS(::UniLabs::Time::TimeSpanDrawerSettingsAttribute*, "UniLabs.Time", "TimeSpanDrawerSettingsAttribute");
// [Conditional("UNITY_EDITOR")]
// Dependencies System.Attribute, UniLabs.Time.TimeUnit
namespace UniLabs::Time {
// Is value type: false
// CS Name: UniLabs.Time.TimeSpanDrawerSettingsAttribute
class CORDL_TYPE TimeSpanDrawerSettingsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field HighestUnit, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_HighestUnit, put=__cordl_internal_set_HighestUnit)) ::UniLabs::Time::TimeUnit  HighestUnit;

/// @brief Field LowestUnit, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_LowestUnit, put=__cordl_internal_set_LowestUnit)) ::UniLabs::Time::TimeUnit  LowestUnit;

static inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* New_ctor() ;

static inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* New_ctor(bool  drawMilliseconds) ;

static inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* New_ctor(::UniLabs::Time::TimeUnit  highestUnit, bool  drawMilliseconds) ;

static inline ::UniLabs::Time::TimeSpanDrawerSettingsAttribute* New_ctor(::UniLabs::Time::TimeUnit  highestUnit, ::UniLabs::Time::TimeUnit  lowestUnit) ;

constexpr ::UniLabs::Time::TimeUnit const& __cordl_internal_get_HighestUnit() const;

constexpr ::UniLabs::Time::TimeUnit& __cordl_internal_get_HighestUnit() ;

constexpr ::UniLabs::Time::TimeUnit const& __cordl_internal_get_LowestUnit() const;

constexpr ::UniLabs::Time::TimeUnit& __cordl_internal_get_LowestUnit() ;

constexpr void __cordl_internal_set_HighestUnit(::UniLabs::Time::TimeUnit  value) ;

constexpr void __cordl_internal_set_LowestUnit(::UniLabs::Time::TimeUnit  value) ;

/// @brief Method .ctor, addr 0x5b6be0c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5b6be9c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(bool  drawMilliseconds) ;

/// @brief Method .ctor, addr 0x5b6be58, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UniLabs::Time::TimeUnit  highestUnit, bool  drawMilliseconds) ;

/// @brief Method .ctor, addr 0x5b6be20, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::UniLabs::Time::TimeUnit  highestUnit, ::UniLabs::Time::TimeUnit  lowestUnit) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeSpanDrawerSettingsAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanDrawerSettingsAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeSpanDrawerSettingsAttribute(TimeSpanDrawerSettingsAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeSpanDrawerSettingsAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeSpanDrawerSettingsAttribute(TimeSpanDrawerSettingsAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3850};

/// @brief Field HighestUnit, offset: 0x10, size: 0x4, def value: None
 ::UniLabs::Time::TimeUnit  ___HighestUnit;

/// @brief Field LowestUnit, offset: 0x14, size: 0x4, def value: None
 ::UniLabs::Time::TimeUnit  ___LowestUnit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UniLabs::Time::TimeSpanDrawerSettingsAttribute, ___HighestUnit) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UniLabs::Time::TimeSpanDrawerSettingsAttribute, ___LowestUnit) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UniLabs::Time::TimeSpanDrawerSettingsAttribute) == 0x18, "Size mismatch!");

} // namespace end def UniLabs::Time
