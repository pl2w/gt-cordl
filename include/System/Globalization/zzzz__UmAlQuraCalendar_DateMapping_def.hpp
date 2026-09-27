#pragma once
// IWYU pragma private; include "System/Globalization/UmAlQuraCalendar_DateMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UmAlQuraCalendar_DateMapping)
// Forward declare root types
namespace GlobalNamespace {
struct UmAlQuraCalendar_DateMapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UmAlQuraCalendar_DateMapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UmAlQuraCalendar_DateMapping, "System.Globalization", "UmAlQuraCalendar/DateMapping");
// Dependencies System.DateTime
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.Globalization.UmAlQuraCalendar/DateMapping
struct CORDL_TYPE UmAlQuraCalendar_DateMapping {
public:
// Declarations
/// @brief Method .ctor, addr 0xa24aa78, size 0x40, virtual false, abstract: false, final false
inline void _ctor(int32_t  MonthsLengthFlags, int32_t  GYear, int32_t  GMonth, int32_t  GDay) ;

// Ctor Parameters []
// @brief default ctor
constexpr UmAlQuraCalendar_DateMapping() ;

// Ctor Parameters [CppParam { name: "HijriMonthsLengthFlags", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "GregorianDate", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }]
constexpr UmAlQuraCalendar_DateMapping(int32_t  HijriMonthsLengthFlags, ::System::DateTime  GregorianDate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6760};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field HijriMonthsLengthFlags, offset: 0x0, size: 0x4, def value: None
 int32_t  HijriMonthsLengthFlags;

/// @brief Field GregorianDate, offset: 0x8, size: 0x8, def value: None
 ::System::DateTime  GregorianDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UmAlQuraCalendar_DateMapping, HijriMonthsLengthFlags) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UmAlQuraCalendar_DateMapping, GregorianDate) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UmAlQuraCalendar_DateMapping) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
