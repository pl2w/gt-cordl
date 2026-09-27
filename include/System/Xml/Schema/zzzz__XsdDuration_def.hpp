#pragma once
// IWYU pragma private; include "System/Xml/Schema/XsdDuration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDuration)
namespace GlobalNamespace {
struct XsdDuration_DurationType;
}
namespace GlobalNamespace {
struct XsdDuration_Parts;
}
namespace System {
class Exception;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
struct XsdDuration;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XsdDuration);
DEFINE_IL2CPP_CLASS(::System::Xml::Schema::XsdDuration, "System.Xml.Schema", "XsdDuration");
// Dependencies 
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XsdDuration
struct CORDL_TYPE XsdDuration {
public:
// Declarations
using DurationType = ::GlobalNamespace::XsdDuration_DurationType;

using Parts = ::GlobalNamespace::XsdDuration_Parts;

 __declspec(property(get=get_Days)) int32_t  Days;

 __declspec(property(get=get_Hours)) int32_t  Hours;

 __declspec(property(get=get_IsNegative)) bool  IsNegative;

 __declspec(property(get=get_Minutes)) int32_t  Minutes;

 __declspec(property(get=get_Months)) int32_t  Months;

 __declspec(property(get=get_Nanoseconds)) int32_t  Nanoseconds;

 __declspec(property(get=get_Seconds)) int32_t  Seconds;

 __declspec(property(get=get_Years)) int32_t  Years;

/// @brief Method ToString, addr 0xab82214, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xab8221c, size 0x420, virtual false, abstract: false, final false
inline ::StringW ToString(::GlobalNamespace::XsdDuration_DurationType  durationType) ;

/// @brief Method ToTimeSpan, addr 0xab81d10, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan ToTimeSpan() ;

/// @brief Method ToTimeSpan, addr 0xab81d18, size 0x48, virtual false, abstract: false, final false
inline ::System::TimeSpan ToTimeSpan(::GlobalNamespace::XsdDuration_DurationType  durationType) ;

/// @brief Method TryParse, addr 0xab8154c, size 0x77c, virtual false, abstract: false, final false
static inline ::System::Exception* TryParse(::StringW  s, ::GlobalNamespace::XsdDuration_DurationType  durationType, ::by_ref<::System::Xml::Schema::XsdDuration>  result) ;

/// @brief Method TryParse, addr 0xab8263c, size 0xc, virtual false, abstract: false, final false
static inline ::System::Exception* TryParse(::StringW  s, ::by_ref<::System::Xml::Schema::XsdDuration>  result) ;

/// @brief Method TryParseDigits, addr 0xab82648, size 0x1b8, virtual false, abstract: false, final false
static inline ::StringW TryParseDigits(::StringW  s, ::by_ref<int32_t>  offset, bool  eatDigits, ::by_ref<int32_t>  result, ::by_ref<int32_t>  numDigits) ;

/// @brief Method TryToTimeSpan, addr 0xab81d60, size 0x4a8, virtual false, abstract: false, final false
inline ::System::Exception* TryToTimeSpan(::GlobalNamespace::XsdDuration_DurationType  durationType, ::by_ref<::System::TimeSpan>  result) ;

/// @brief Method TryToTimeSpan, addr 0xab82208, size 0xc, virtual false, abstract: false, final false
inline ::System::Exception* TryToTimeSpan(::by_ref<::System::TimeSpan>  result) ;

/// @brief Method .ctor, addr 0xab811a0, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(bool  isNegative, int32_t  years, int32_t  months, int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, int32_t  nanoseconds) ;

/// @brief Method .ctor, addr 0xab814d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  s) ;

/// @brief Method .ctor, addr 0xab814d8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  s, ::GlobalNamespace::XsdDuration_DurationType  durationType) ;

/// @brief Method .ctor, addr 0xab812fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  timeSpan) ;

/// @brief Method .ctor, addr 0xab81304, size 0x1cc, virtual false, abstract: false, final false
inline void _ctor(::System::TimeSpan  timeSpan, ::GlobalNamespace::XsdDuration_DurationType  durationType) ;

/// @brief Method get_Days, addr 0xab81cf0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Days() ;

/// @brief Method get_Hours, addr 0xab81cf8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Hours() ;

/// @brief Method get_IsNegative, addr 0xab81cd4, size 0xc, virtual false, abstract: false, final false
inline bool get_IsNegative() ;

/// @brief Method get_Minutes, addr 0xab81d00, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Minutes() ;

/// @brief Method get_Months, addr 0xab81ce8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Months() ;

/// @brief Method get_Nanoseconds, addr 0xab81cc8, size 0xc, virtual false, abstract: false, final false
inline int32_t get_Nanoseconds() ;

/// @brief Method get_Seconds, addr 0xab81d08, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Seconds() ;

/// @brief Method get_Years, addr 0xab81ce0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Years() ;

// Ctor Parameters []
// @brief default ctor
constexpr XsdDuration() ;

// Ctor Parameters [CppParam { name: "years", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "months", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "days", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "hours", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minutes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "seconds", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "nanoseconds", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr XsdDuration(int32_t  years, int32_t  months, int32_t  days, int32_t  hours, int32_t  minutes, int32_t  seconds, uint32_t  nanoseconds) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14590};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field years, offset: 0x0, size: 0x4, def value: None
 int32_t  years;

/// @brief Field months, offset: 0x4, size: 0x4, def value: None
 int32_t  months;

/// @brief Field days, offset: 0x8, size: 0x4, def value: None
 int32_t  days;

/// @brief Field hours, offset: 0xc, size: 0x4, def value: None
 int32_t  hours;

/// @brief Field minutes, offset: 0x10, size: 0x4, def value: None
 int32_t  minutes;

/// @brief Field seconds, offset: 0x14, size: 0x4, def value: None
 int32_t  seconds;

/// @brief Field nanoseconds, offset: 0x18, size: 0x4, def value: None
 uint32_t  nanoseconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XsdDuration, years) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, months) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, days) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, hours) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, minutes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, seconds) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XsdDuration, nanoseconds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Xml::Schema::XsdDuration) == 0x1c, "Size mismatch!");

} // namespace end def System::Xml::Schema
