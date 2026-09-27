#pragma once
// IWYU pragma private; include "System/Globalization/UmAlQuraCalendar.hpp"
#include "System/Globalization/zzzz__Calendar_impl.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_DateMapping_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_def.hpp"
#include "System/Globalization/zzzz__UmAlQuraCalendar_DateMapping_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.InitDateMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping> (*)()>(&::System::Globalization::UmAlQuraCalendar::InitDateMapping)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa24923c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"InitDateMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_MinSupportedDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_MinSupportedDateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa24939c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_MaxSupportedDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_MaxSupportedDateTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2493f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa24944c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_BaseCalendarID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_BaseCalendarID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa249460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa249468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ConvertHijriToGregorian
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Globalization::UmAlQuraCalendar::ConvertHijriToGregorian)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa249470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"ConvertHijriToGregorian", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetAbsoluteDateUmAlQura
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetAbsoluteDateUmAlQura)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa2495c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"GetAbsoluteDateUmAlQura", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckTicksRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::System::Globalization::UmAlQuraCalendar::CheckTicksRange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa249688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckTicksRange", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckEraRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckEraRange)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa249868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckEraRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckYearRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckYearRange)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa2498e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckYearRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.CheckYearMonthRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::CheckYearMonthRange)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa249a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckYearMonthRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ConvertGregorianToHijri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Globalization::UmAlQuraCalendar::ConvertGregorianToHijri)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xa249afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"ConvertGregorianToHijri", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDatePart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetDatePart)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa249de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDayOfMonth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetDayOfMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa249f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDayOfWeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetDayOfWeek)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa249f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDaysInMonth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetDaysInMonth)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa24a02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.RealGetDaysInYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::RealGetDaysInYear)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa24a0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"RealGetDaysInYear", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetDaysInYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetDaysInYear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa24a180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetEra
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetEra)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa24a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_Eras
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_Eras)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa24a280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetMonth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetMonth)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa24a2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetMonthsInYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::GetMonthsInYear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa24a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.GetYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(::System::DateTime)>(&::System::Globalization::UmAlQuraCalendar::GetYear)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa24a364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.IsLeapYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::IsLeapYear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa24a378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Globalization::UmAlQuraCalendar::*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::UmAlQuraCalendar::ToDateTime)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa24a3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.get_TwoDigitYearMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)()>(&::System::Globalization::UmAlQuraCalendar::get_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa24a630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.set_TwoDigitYearMax
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Globalization::UmAlQuraCalendar::*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::set_TwoDigitYearMax)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa24a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::UmAlQuraCalendar.ToFourDigitYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Globalization::UmAlQuraCalendar::*)(int32_t)>(&::System::Globalization::UmAlQuraCalendar::ToFourDigitYear)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa24a788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                    {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 30}
                ));
    return ___internal_method;
  }
};
inline void System::Globalization::UmAlQuraCalendar::setStaticF_HijriYearInfo(::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>, "HijriYearInfo", ::System::Globalization::UmAlQuraCalendar*>(std::forward<::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>>(value));
}
inline ::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping> System::Globalization::UmAlQuraCalendar::getStaticF_HijriYearInfo()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>, "HijriYearInfo", ::System::Globalization::UmAlQuraCalendar*>();
}
inline void System::Globalization::UmAlQuraCalendar::setStaticF_minDate(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "minDate", ::System::Globalization::UmAlQuraCalendar*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::getStaticF_minDate()  {
return ::cordl_internals::getStaticField<::System::DateTime, "minDate", ::System::Globalization::UmAlQuraCalendar*>();
}
inline void System::Globalization::UmAlQuraCalendar::setStaticF_maxDate(::System::DateTime  value)  {
::cordl_internals::setStaticField<::System::DateTime, "maxDate", ::System::Globalization::UmAlQuraCalendar*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::getStaticF_maxDate()  {
return ::cordl_internals::getStaticField<::System::DateTime, "maxDate", ::System::Globalization::UmAlQuraCalendar*>();
}
inline ::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping> System::Globalization::UmAlQuraCalendar::InitDateMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"InitDateMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::UmAlQuraCalendar_DateMapping>>(nullptr, ___internal_method);
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::get_MinSupportedDateTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::get_MaxSupportedDateTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method);
}
inline void System::Globalization::UmAlQuraCalendar::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Globalization::UmAlQuraCalendar::get_BaseCalendarID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Globalization::UmAlQuraCalendar::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::UmAlQuraCalendar::ConvertHijriToGregorian(int32_t  HijriYear, int32_t  HijriMonth, int32_t  HijriDay, ::by_ref<int32_t>  yg, ::by_ref<int32_t>  mg, ::by_ref<int32_t>  dg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"ConvertHijriToGregorian", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, HijriYear, HijriMonth, HijriDay, yg, mg, dg);
}
inline int64_t System::Globalization::UmAlQuraCalendar::GetAbsoluteDateUmAlQura(int32_t  year, int32_t  month, int32_t  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"GetAbsoluteDateUmAlQura", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, year, month, day);
}
inline void System::Globalization::UmAlQuraCalendar::CheckTicksRange(int64_t  ticks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckTicksRange", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ticks);
}
inline void System::Globalization::UmAlQuraCalendar::CheckEraRange(int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckEraRange", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, era);
}
inline void System::Globalization::UmAlQuraCalendar::CheckYearRange(int32_t  year, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckYearRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, year, era);
}
inline void System::Globalization::UmAlQuraCalendar::CheckYearMonthRange(int32_t  year, int32_t  month, int32_t  era)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"CheckYearMonthRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, year, month, era);
}
inline void System::Globalization::UmAlQuraCalendar::ConvertGregorianToHijri(::System::DateTime  time, ::by_ref<int32_t>  HijriYear, ::by_ref<int32_t>  HijriMonth, ::by_ref<int32_t>  HijriDay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"ConvertGregorianToHijri", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, time, HijriYear, HijriMonth, HijriDay);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDatePart(::System::DateTime  time, int32_t  part)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time, part);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDayOfMonth(::System::DateTime  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::System::DayOfWeek System::Globalization::UmAlQuraCalendar::GetDayOfWeek(::System::DateTime  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(this, ___internal_method, time);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDaysInMonth(int32_t  year, int32_t  month, int32_t  era)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, month, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::RealGetDaysInYear(int32_t  year)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(),
                        {"RealGetDaysInYear", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, year);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetDaysInYear(int32_t  year, int32_t  era)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetEra(::System::DateTime  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline ::ArrayW<int32_t> System::Globalization::UmAlQuraCalendar::get_Eras()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetMonth(::System::DateTime  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetMonthsInYear(int32_t  year, int32_t  era)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::GetYear(::System::DateTime  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, time);
}
inline bool System::Globalization::UmAlQuraCalendar::IsLeapYear(int32_t  year, int32_t  era)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, year, era);
}
inline ::System::DateTime System::Globalization::UmAlQuraCalendar::ToDateTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  millisecond, int32_t  era)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, year, month, day, hour, minute, second, millisecond, era);
}
inline int32_t System::Globalization::UmAlQuraCalendar::get_TwoDigitYearMax()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Globalization::UmAlQuraCalendar::set_TwoDigitYearMax(int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Globalization::UmAlQuraCalendar::ToFourDigitYear(int32_t  year)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Globalization::UmAlQuraCalendar*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, year);
}
inline ::System::Globalization::UmAlQuraCalendar* System::Globalization::UmAlQuraCalendar::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Globalization::UmAlQuraCalendar*>());
}
// Ctor Parameters []
constexpr ::System::Globalization::UmAlQuraCalendar::UmAlQuraCalendar()   {
}
