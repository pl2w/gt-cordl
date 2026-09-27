#pragma once
// IWYU pragma private; include "System/Globalization/CultureData.hpp"
#include "System/Globalization/zzzz__CalendarData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/Globalization/zzzz__CalendarData_def.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
#include "System/Globalization/zzzz__CultureData_NumberFormatEntryManaged_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: ::System::Globalization::CultureData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureData::*)(::StringW)>(&::System::Globalization::CultureData::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa24b0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_Invariant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureData* (*)()>(&::System::Globalization::CultureData::get_Invariant)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0xa24b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_Invariant", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCultureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureData* (*)(::StringW, bool)>(&::System::Globalization::CultureData::GetCultureData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa24b4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCultureData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCultureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CultureData* (*)(::StringW, bool, int32_t, int32_t, int32_t, ::StringW, int32_t, int32_t, int32_t, int32_t, bool, ::StringW)>(&::System::Globalization::CultureData::GetCultureData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa24b59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCultureData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.fill_culture_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::fill_culture_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa24b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"fill_culture_data", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCalendar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::CalendarData* (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::GetCalendar)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa24b6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCalendar", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_LongTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_LongTimes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa24b808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_LongTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_ShortTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_ShortTimes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa24b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_ShortTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SISO639LANGNAME
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SISO639LANGNAME)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24b838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SISO639LANGNAME", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_IFIRSTDAYOFWEEK
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_IFIRSTDAYOFWEEK)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24b840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_IFIRSTDAYOFWEEK", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_IFIRSTWEEKOFYEAR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24b848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_IFIRSTWEEKOFYEAR", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SAM1159
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SAM1159)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SAM1159", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SPM2359
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SPM2359)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24b858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SPM2359", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_TimeSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_TimeSeparator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24b860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_TimeSeparator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_CalendarIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_CalendarIds)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xa24b868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_CalendarIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetCalendarIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Globalization::CalendarId> (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::GetCalendarIds)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa24ba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCalendarIds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_IsInvariantCulture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_IsInvariantCulture)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa24bb00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_IsInvariantCulture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_CultureName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_CultureName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24bb0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_CultureName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_SCOMPAREINFO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_SCOMPAREINFO)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa24bb14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SCOMPAREINFO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_STEXTINFO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_STEXTINFO)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_STEXTINFO", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.get_UseUserOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::CultureData::*)()>(&::System::Globalization::CultureData::get_UseUserOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa24bb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_UseUserOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.EraNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::EraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"EraNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbrevEraNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::AbbrevEraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbrevEraNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedEnglishEraNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::AbbreviatedEnglishEraNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedEnglishEraNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.ShortDates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::ShortDates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"ShortDates", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.LongDates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::LongDates)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"LongDates", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.YearMonths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::YearMonths)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"YearMonths", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.DayNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::DayNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"DayNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedDayNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::AbbreviatedDayNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bc28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedDayNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.MonthNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::MonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"MonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GenitiveMonthNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::GenitiveMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GenitiveMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedMonthNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::AbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.AbbreviatedGenitiveMonthNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::AbbreviatedGenitiveMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedGenitiveMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.LeapYearMonthNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::LeapYearMonthNames)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"LeapYearMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.MonthDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::MonthDay)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa24bcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"MonthDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.DateSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Globalization::CultureData::*)(int32_t)>(&::System::Globalization::CultureData::DateSeparator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa24bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"DateSeparator", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetDateSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Globalization::CultureData::GetDateSeparator)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa24bd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetDateSeparator", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetSeparator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::StringW)>(&::System::Globalization::CultureData::GetSeparator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa24bde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetSeparator", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.IndexOfTimePart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, ::StringW)>(&::System::Globalization::CultureData::IndexOfTimePart)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa24bec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"IndexOfTimePart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.UnescapeNlsString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t, int32_t)>(&::System::Globalization::CultureData::UnescapeNlsString)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa24bfac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"UnescapeNlsString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.ReescapeWin32Strings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&::System::Globalization::CultureData::ReescapeWin32Strings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa24c150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"ReescapeWin32Strings", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.ReescapeWin32String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::System::Globalization::CultureData::ReescapeWin32String)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa24c154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"ReescapeWin32String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.strlen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*)>(&::System::Globalization::CultureData::strlen)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa24c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"strlen", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.idx2string
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t*, int32_t)>(&::System::Globalization::CultureData::idx2string)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa24c170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"idx2string", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.create_group_sizes_array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::CultureData::*)(int32_t, int32_t)>(&::System::Globalization::CultureData::create_group_sizes_array)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa24c1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"create_group_sizes_array", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.GetNFIValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::CultureData::*)(::System::Globalization::NumberFormatInfo*)>(&::System::Globalization::CultureData::GetNFIValues)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa24c268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetNFIValues", {}, {::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CultureData.fill_number_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(int32_t, ::by_ref<::GlobalNamespace::CultureData_NumberFormatEntryManaged>)>(&::System::Globalization::CultureData::fill_number_data)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa24c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"fill_number_data", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CultureData_NumberFormatEntryManaged>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sAM1159()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sAM1159;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sAM1159() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sAM1159;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sAM1159(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sAM1159 = value;
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sPM2359()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sPM2359;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sPM2359() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sPM2359;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sPM2359(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sPM2359 = value;
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sTimeSeparator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sTimeSeparator;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sTimeSeparator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sTimeSeparator;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sTimeSeparator(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sTimeSeparator = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CultureData::__cordl_internal_get_saLongTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saLongTimes;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CultureData::__cordl_internal_get_saLongTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saLongTimes;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_saLongTimes(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saLongTimes = value;
}
constexpr ::ArrayW<::StringW>& System::Globalization::CultureData::__cordl_internal_get_saShortTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saShortTimes;
}
constexpr ::ArrayW<::StringW> const& System::Globalization::CultureData::__cordl_internal_get_saShortTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___saShortTimes;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_saShortTimes(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___saShortTimes = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iFirstDayOfWeek()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iFirstDayOfWeek;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iFirstDayOfWeek() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iFirstDayOfWeek;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iFirstDayOfWeek(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iFirstDayOfWeek = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iFirstWeekOfYear()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iFirstWeekOfYear;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iFirstWeekOfYear() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iFirstWeekOfYear;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iFirstWeekOfYear(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iFirstWeekOfYear = value;
}
constexpr ::ArrayW<int32_t>& System::Globalization::CultureData::__cordl_internal_get_waCalendars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waCalendars;
}
constexpr ::ArrayW<int32_t> const& System::Globalization::CultureData::__cordl_internal_get_waCalendars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waCalendars;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_waCalendars(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waCalendars = value;
}
constexpr ::ArrayW<::System::Globalization::CalendarData*>& System::Globalization::CultureData::__cordl_internal_get_calendars()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calendars;
}
constexpr ::ArrayW<::System::Globalization::CalendarData*> const& System::Globalization::CultureData::__cordl_internal_get_calendars() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calendars;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_calendars(::ArrayW<::System::Globalization::CalendarData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calendars = value;
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sISO639Language()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sISO639Language;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sISO639Language() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sISO639Language;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sISO639Language(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sISO639Language = value;
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sRealName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sRealName;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sRealName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sRealName;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sRealName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sRealName = value;
}
constexpr bool& System::Globalization::CultureData::__cordl_internal_get_bUseOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bUseOverrides;
}
constexpr bool const& System::Globalization::CultureData::__cordl_internal_get_bUseOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bUseOverrides;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_bUseOverrides(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bUseOverrides = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_calendarId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calendarId;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_calendarId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___calendarId;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_calendarId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___calendarId = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_numberIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberIndex;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_numberIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numberIndex;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_numberIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numberIndex = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultAnsiCodePage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultAnsiCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultAnsiCodePage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultAnsiCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultAnsiCodePage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iDefaultAnsiCodePage = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultOemCodePage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultOemCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultOemCodePage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultOemCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultOemCodePage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iDefaultOemCodePage = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultMacCodePage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultMacCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultMacCodePage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultMacCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultMacCodePage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iDefaultMacCodePage = value;
}
constexpr int32_t& System::Globalization::CultureData::__cordl_internal_get_iDefaultEbcdicCodePage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultEbcdicCodePage;
}
constexpr int32_t const& System::Globalization::CultureData::__cordl_internal_get_iDefaultEbcdicCodePage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDefaultEbcdicCodePage;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_iDefaultEbcdicCodePage(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iDefaultEbcdicCodePage = value;
}
constexpr bool& System::Globalization::CultureData::__cordl_internal_get_isRightToLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRightToLeft;
}
constexpr bool const& System::Globalization::CultureData::__cordl_internal_get_isRightToLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRightToLeft;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_isRightToLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRightToLeft = value;
}
constexpr ::StringW& System::Globalization::CultureData::__cordl_internal_get_sListSeparator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sListSeparator;
}
constexpr ::StringW const& System::Globalization::CultureData::__cordl_internal_get_sListSeparator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sListSeparator;
}
constexpr void System::Globalization::CultureData::__cordl_internal_set_sListSeparator(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sListSeparator = value;
}
inline void System::Globalization::CultureData::setStaticF_s_Invariant(::System::Globalization::CultureData*  value)  {
::cordl_internals::setStaticField<::System::Globalization::CultureData*, "s_Invariant", ::System::Globalization::CultureData*>(std::forward<::System::Globalization::CultureData*>(value));
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::getStaticF_s_Invariant()  {
return ::cordl_internals::getStaticField<::System::Globalization::CultureData*, "s_Invariant", ::System::Globalization::CultureData*>();
}
inline void System::Globalization::CultureData::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::get_Invariant()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_Invariant", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*>(nullptr, ___internal_method);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::StringW  cultureName, bool  useUserOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCultureData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*>(nullptr, ___internal_method, cultureName, useUserOverride);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::GetCultureData(::StringW  cultureName, bool  useUserOverride, int32_t  datetimeIndex, int32_t  calendarId, int32_t  numberIndex, ::StringW  iso2lang, int32_t  ansiCodePage, int32_t  oemCodePage, int32_t  macCodePage, int32_t  ebcdicCodePage, bool  rightToLeft, ::StringW  listSeparator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCultureData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureData*>(nullptr, ___internal_method, cultureName, useUserOverride, datetimeIndex, calendarId, numberIndex, iso2lang, ansiCodePage, oemCodePage, macCodePage, ebcdicCodePage, rightToLeft, listSeparator);
}
inline void System::Globalization::CultureData::fill_culture_data(int32_t  datetimeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"fill_culture_data", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, datetimeIndex);
}
inline ::System::Globalization::CalendarData* System::Globalization::CultureData::GetCalendar(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCalendar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::CalendarData*>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::get_LongTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_LongTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::get_ShortTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_ShortTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SISO639LANGNAME()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SISO639LANGNAME", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Globalization::CultureData::get_IFIRSTDAYOFWEEK()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_IFIRSTDAYOFWEEK", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::CultureData::get_IFIRSTWEEKOFYEAR()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_IFIRSTWEEKOFYEAR", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SAM1159()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SAM1159", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SPM2359()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SPM2359", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_TimeSeparator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_TimeSeparator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<int32_t> System::Globalization::CultureData::get_CalendarIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_CalendarIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline ::ArrayW<::System::Globalization::CalendarId> System::Globalization::CultureData::GetCalendarIds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetCalendarIds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CalendarId>>(this, ___internal_method);
}
inline bool System::Globalization::CultureData::get_IsInvariantCulture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_IsInvariantCulture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_CultureName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_CultureName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_SCOMPAREINFO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_SCOMPAREINFO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Globalization::CultureData::get_STEXTINFO()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_STEXTINFO", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Globalization::CultureData::get_UseUserOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"get_UseUserOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::EraNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"EraNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::AbbrevEraNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbrevEraNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedEnglishEraNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedEnglishEraNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::ShortDates(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"ShortDates", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::LongDates(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"LongDates", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::YearMonths(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"YearMonths", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::DayNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"DayNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedDayNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedDayNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::MonthNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"MonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::GenitiveMonthNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GenitiveMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedMonthNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::AbbreviatedGenitiveMonthNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"AbbreviatedGenitiveMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::LeapYearMonthNames(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"LeapYearMonthNames", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CultureData::MonthDay(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"MonthDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CultureData::DateSeparator(int32_t  calendarId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"DateSeparator", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, calendarId);
}
inline ::StringW System::Globalization::CultureData::GetDateSeparator(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetDateSeparator", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format);
}
inline ::StringW System::Globalization::CultureData::GetSeparator(::StringW  format, ::StringW  timeParts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetSeparator", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, timeParts);
}
inline int32_t System::Globalization::CultureData::IndexOfTimePart(::StringW  format, int32_t  startIndex, ::StringW  timeParts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"IndexOfTimePart", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, startIndex, timeParts);
}
inline ::StringW System::Globalization::CultureData::UnescapeNlsString(::StringW  str, int32_t  start, int32_t  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"UnescapeNlsString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str, start, end);
}
inline ::ArrayW<::StringW> System::Globalization::CultureData::ReescapeWin32Strings(::ArrayW<::StringW>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"ReescapeWin32Strings", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, array);
}
inline ::StringW System::Globalization::CultureData::ReescapeWin32String(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"ReescapeWin32String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, str);
}
inline int32_t System::Globalization::CultureData::strlen(uint8_t*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"strlen", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, s);
}
inline ::StringW System::Globalization::CultureData::idx2string(uint8_t*  data, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"idx2string", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, data, idx);
}
inline ::ArrayW<int32_t> System::Globalization::CultureData::create_group_sizes_array(int32_t  gs0, int32_t  gs1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"create_group_sizes_array", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method, gs0, gs1);
}
inline void System::Globalization::CultureData::GetNFIValues(::System::Globalization::NumberFormatInfo*  nfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"GetNFIValues", {}, {::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nfi);
}
inline uint8_t* System::Globalization::CultureData::fill_number_data(int32_t  index, ::by_ref<::GlobalNamespace::CultureData_NumberFormatEntryManaged>  nfe)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::CultureData*>(),
                        {"fill_number_data", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CultureData_NumberFormatEntryManaged>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, index, nfe);
}
inline ::System::Globalization::CultureData* System::Globalization::CultureData::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::CultureData*>(name));
}
// Ctor Parameters []
constexpr ::System::Globalization::CultureData::CultureData()   {
}
