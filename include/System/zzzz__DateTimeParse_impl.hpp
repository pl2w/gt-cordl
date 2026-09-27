#pragma once
// IWYU pragma private; include "System/DateTimeParse.hpp"
#include "System/zzzz__DateTimeParse_DS_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__DateTimeParse_DS_def.hpp"
#include "System/zzzz__DateTimeParse_DTT_def.hpp"
#include "System/zzzz__DateTimeParse_TM_def.hpp"
#include "System/zzzz__DateTimeParse_def.hpp"
#include "System/zzzz__DateTimeRawInfo_def.hpp"
#include "System/zzzz__DateTimeResult_def.hpp"
#include "System/zzzz__DateTimeToken_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ParsingInfo_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz____DTString_def.hpp"
//  Writing Method size for method: ::System::DateTimeParse.ParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa2bdd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseExact)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xa2c27d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>)>(&::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa2bf0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa2c3d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParseExact)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa2c95cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExactMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::ParseExactMultiple)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa2be154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseExactMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseExactMultiple)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa2c2ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa2c4068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>)>(&::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa2bf364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseExactMultiple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::ArrayW<::StringW>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParseExactMultiple)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa2ca0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchWord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::StringW)>(&::System::DateTimeParse::MatchWord)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa2ca338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchWord", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeZoneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>)>(&::System::DateTimeParse::GetTimeZoneName)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa2ca4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeZoneName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.IsDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::DateTimeParse::IsDigit)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2ca598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"IsDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<double_t>)>(&::System::DateTimeParse::ParseFraction)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa2ca5ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseFraction", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseTimeZone)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0xa2ca698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseTimeZone", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.HandleTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::HandleTimeZone)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa2ca9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"HandleTimeZone", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Lex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::DateTimeParse_DS, ::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeToken>, ::by_ref<::System::DateTimeRawInfo>, ::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeFormatInfo*>, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::Lex)> {
  constexpr static std::size_t size = 0xe10;
  constexpr static std::size_t addrs = 0xa2cab38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"Lex", {}, {::i2c::type_of<::GlobalNamespace::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetJapaneseCalendarDefaultInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::DateTimeParse::GetJapaneseCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa2cbcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetJapaneseCalendarDefaultInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTaiwanCalendarDefaultInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::Calendar* (*)()>(&::System::DateTimeParse::GetTaiwanCalendarDefaultInstance)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa2cbdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTaiwanCalendarDefaultInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.VerifyValidPunctuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>)>(&::System::DateTimeParse::VerifyValidPunctuation)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa2cbe94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"VerifyValidPunctuation", {}, {::i2c::type_of<::by_ref<::System::__DTString>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetYearMonthDayOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::GetYearMonthDayOrder)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa2cc068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetYearMonthDayOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetYearMonthOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::GetYearMonthOrder)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa2cc2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetYearMonthOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetMonthDayOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::GetMonthDayOrder)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa2cc4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetMonthDayOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryAdjustYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::TryAdjustYear)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa2cc6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryAdjustYear", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateYMD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateYMD)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2cc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateYMD", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateMDY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateMDY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2cc7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateMDY", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateDMY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateDMY)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2cc85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateDMY", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.SetDateYDM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, int32_t, int32_t, int32_t)>(&::System::DateTimeParse::SetDateYDM)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2cc8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateYDM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDefaultYear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>)>(&::System::DateTimeParse::GetDefaultYear)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa2cc954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDefaultYear", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNN)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa2ccaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNNN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNNN)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xa2ccc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfMN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfMN)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa2ccf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfMN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetHebrewDayOfNM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetHebrewDayOfNM)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa2cd150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetHebrewDayOfNM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNM)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa2cd2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfMNN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfMNN)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa2cd4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfMNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYNN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfYNN)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa2cd7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfNNY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDayOfNNY)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa2cd8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNNY", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYMN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYMN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa2cda80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYMN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYN)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa2cdb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDayOfYM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDayOfYM)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa2cdbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::AdjustTimeMark)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa2cdc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustTimeMark", {}, {::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustHour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, ::GlobalNamespace::DateTimeParse_TM)>(&::System::DateTimeParse::AdjustHour)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2cdd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustHour", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::DateTimeParse_TM>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfN)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2cdda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeOfN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfNN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfNN)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2cddfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeOfNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetTimeOfNNN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetTimeOfNNN)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa2cde6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeOfNNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfDSN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDateOfDSN)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2cdef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateOfDSN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfNDS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>)>(&::System::DateTimeParse::GetDateOfNDS)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa2cdf48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateOfNDS", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateOfNNDS
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::GetDateOfNNDS)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa2cdffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateOfNNDS", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessDateTimeSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::DateTimeRawInfo>, ::by_ref<::System::DateTimeToken>)>(&::System::DateTimeParse::ProcessDateTimeSuffix)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa2ce228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ProcessDateTimeSuffix", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessHebrewTerminalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::DateTimeParse_DS, ::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::ProcessHebrewTerminalState)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0xa2ce320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ProcessHebrewTerminalState", {}, {::i2c::type_of<::GlobalNamespace::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ProcessTerminalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::DateTimeParse_DS, ::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>, ::by_ref<::System::DateTimeRawInfo>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0xa2cb948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ProcessTerminalState", {}, {::i2c::type_of<::GlobalNamespace::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa2bd8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::Parse)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa2c24b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa2bed0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTime>, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa2c39d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::TryParse)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0xa2ce6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DetermineTimeZoneAdjustments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>, ::System::Globalization::DateTimeStyles, bool)>(&::System::DateTimeParse::DetermineTimeZoneAdjustments)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa2cf6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"DetermineTimeZoneAdjustments", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DateTimeOffsetTimeZonePostProcessing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::DateTimeResult>, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa2cf938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"DateTimeOffsetTimeZonePostProcessing", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeZoneToUniversal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::AdjustTimeZoneToUniversal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa2cfb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustTimeZoneToUniversal", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.AdjustTimeZoneToLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, bool)>(&::System::DateTimeParse::AdjustTimeZoneToLocal)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xa2cfc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustTimeZoneToLocal", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseISO8601
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeRawInfo>, ::by_ref<::System::__DTString>, ::System::Globalization::DateTimeStyles, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::ParseISO8601)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0xa2cee54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseISO8601", {}, {::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchHebrewDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchHebrewDigits)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa2cffa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchHebrewDigits", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa2cff14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseDigits", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse::ParseDigits)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa2d00b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseDigits", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseFractionExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<double_t>)>(&::System::DateTimeParse::ParseFractionExact)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xa2d0258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseFractionExact", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseSign
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<bool>)>(&::System::DateTimeParse::ParseSign)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa2d04bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseSign", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseTimeZoneOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<::System::TimeSpan>)>(&::System::DateTimeParse::ParseTimeZoneOffset)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa2d0574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseTimeZoneOffset", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedMonthName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa2d0768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchAbbreviatedMonthName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchMonthName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchMonthName)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa2d094c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchMonthName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedDayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchAbbreviatedDayName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa2d0b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchAbbreviatedDayName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchDayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchDayName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa2d0ce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchDayName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchEraName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<int32_t>)>(&::System::DateTimeParse::MatchEraName)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa2d0e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchEraName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchTimeMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::GlobalNamespace::DateTimeParse_TM>)>(&::System::DateTimeParse::MatchTimeMark)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa2d0fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchTimeMark", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::DateTimeParse_TM>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.MatchAbbreviatedTimeMark
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::GlobalNamespace::DateTimeParse_TM>)>(&::System::DateTimeParse::MatchAbbreviatedTimeMark)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa2d1184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchAbbreviatedTimeMark", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::DateTimeParse_TM>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.CheckNewValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<int32_t>, int32_t, char16_t, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::CheckNewValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa2d12d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"CheckNewValue", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateTimeNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::DateTimeStyles>)>(&::System::DateTimeParse::GetDateTimeNow)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa2cc9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateTimeNow", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.CheckDefaultDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::DateTimeResult>, ::by_ref<::System::Globalization::Calendar*>, ::System::Globalization::DateTimeStyles)>(&::System::DateTimeParse::CheckDefaultDateTime)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xa2cf464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"CheckDefaultDateTime", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::Calendar*>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ExpandPredefinedFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Globalization::DateTimeFormatInfo*>, ::by_ref<::System::ParsingInfo>, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::ExpandPredefinedFormat)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0xa2d1380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ExpandPredefinedFormat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::by_ref<::System::ParsingInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseJapaneseEraStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::System::Globalization::DateTimeFormatInfo*)>(&::System::DateTimeParse::ParseJapaneseEraStart)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa2d1758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseJapaneseEraStart", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.ParseByFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::__DTString>, ::by_ref<::System::__DTString>, ::by_ref<::System::ParsingInfo>, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::ParseByFormat)> {
  constexpr static std::size_t size = 0x1174;
  constexpr static std::size_t addrs = 0xa2d1860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseByFormat", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::ParsingInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.TryParseQuoteString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, ::System::Text::StringBuilder*, ::by_ref<int32_t>)>(&::System::DateTimeParse::TryParseQuoteString)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa2d29d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseQuoteString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.DoStrictParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeStyles, ::System::Globalization::DateTimeFormatInfo*, ::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::DoStrictParse)> {
  constexpr static std::size_t size = 0x828;
  constexpr static std::size_t addrs = 0xa2c98a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"DoStrictParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse.GetDateTimeParseException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::by_ref<::System::DateTimeResult>)>(&::System::DateTimeParse::GetDateTimeParseException)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa2c96d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateTimeParseException", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::DateTimeParse::setStaticF_m_hebrewNumberParser(::System::DateTimeParse_MatchNumberDelegate*  value)  {
::cordl_internals::setStaticField<::System::DateTimeParse_MatchNumberDelegate*, "m_hebrewNumberParser", ::System::DateTimeParse*>(std::forward<::System::DateTimeParse_MatchNumberDelegate*>(value));
}
inline ::System::DateTimeParse_MatchNumberDelegate* System::DateTimeParse::getStaticF_m_hebrewNumberParser()  {
return ::cordl_internals::getStaticField<::System::DateTimeParse_MatchNumberDelegate*, "m_hebrewNumberParser", ::System::DateTimeParse*>();
}
inline void System::DateTimeParse::setStaticF_dateParsingStates(::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>>, "dateParsingStates", ::System::DateTimeParse*>(std::forward<::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>>>(value));
}
inline ::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>> System::DateTimeParse::getStaticF_dateParsingStates()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::GlobalNamespace::DateTimeParse_DS>>, "dateParsingStates", ::System::DateTimeParse*>();
}
inline ::System::DateTime System::DateTimeParse::ParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, format, dtfi, style);
}
inline ::System::DateTime System::DateTimeParse::ParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, format, dtfi, style, offset);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, dtfi, style, result, offset);
}
inline bool System::DateTimeParse::TryParseExact(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, format, dtfi, style, result);
}
inline ::System::DateTime System::DateTimeParse::ParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, formats, dtfi, style);
}
inline ::System::DateTime System::DateTimeParse::ParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, formats, dtfi, style, offset);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formats, dtfi, style, result, offset);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTime>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formats, dtfi, style, result);
}
inline bool System::DateTimeParse::TryParseExactMultiple(::System::ReadOnlySpan_1<char16_t>  s, ::ArrayW<::StringW>  formats, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  style, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseExactMultiple", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formats, dtfi, style, result);
}
inline bool System::DateTimeParse::MatchWord(::by_ref<::System::__DTString>  str, ::StringW  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchWord", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, target);
}
inline bool System::DateTimeParse::GetTimeZoneName(::by_ref<::System::__DTString>  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeZoneName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str);
}
inline bool System::DateTimeParse::IsDigit(char16_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"IsDigit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::DateTimeParse::ParseFraction(::by_ref<::System::__DTString>  str, ::by_ref<double_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseFraction", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::ParseTimeZone(::by_ref<::System::__DTString>  str, ::by_ref<::System::TimeSpan>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseTimeZone", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::HandleTimeZone(::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"HandleTimeZone", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::Lex(::GlobalNamespace::DateTimeParse_DS  dps, ::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeToken>  dtok, ::by_ref<::System::DateTimeRawInfo>  raw, ::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeFormatInfo*>  dtfi, ::System::Globalization::DateTimeStyles  styles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"Lex", {}, {::i2c::type_of<::GlobalNamespace::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dps, str, dtok, raw, result, dtfi, styles);
}
inline ::System::Globalization::Calendar* System::DateTimeParse::GetJapaneseCalendarDefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetJapaneseCalendarDefaultInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline ::System::Globalization::Calendar* System::DateTimeParse::GetTaiwanCalendarDefaultInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTaiwanCalendarDefaultInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*>(nullptr, ___internal_method);
}
inline bool System::DateTimeParse::VerifyValidPunctuation(::by_ref<::System::__DTString>  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"VerifyValidPunctuation", {}, {::i2c::type_of<::by_ref<::System::__DTString>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str);
}
inline bool System::DateTimeParse::GetYearMonthDayOrder(::StringW  datePattern, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetYearMonthDayOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, datePattern, dtfi, order);
}
inline bool System::DateTimeParse::GetYearMonthOrder(::StringW  pattern, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetYearMonthOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, dtfi, order);
}
inline bool System::DateTimeParse::GetMonthDayOrder(::StringW  pattern, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetMonthDayOrder", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pattern, dtfi, order);
}
inline bool System::DateTimeParse::TryAdjustYear(::by_ref<::System::DateTimeResult>  result, int32_t  year, ::by_ref<int32_t>  adjustedYear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryAdjustYear", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, year, adjustedYear);
}
inline bool System::DateTimeParse::SetDateYMD(::by_ref<::System::DateTimeResult>  result, int32_t  year, int32_t  month, int32_t  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateYMD", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, year, month, day);
}
inline bool System::DateTimeParse::SetDateMDY(::by_ref<::System::DateTimeResult>  result, int32_t  month, int32_t  day, int32_t  year)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateMDY", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, month, day, year);
}
inline bool System::DateTimeParse::SetDateDMY(::by_ref<::System::DateTimeResult>  result, int32_t  day, int32_t  month, int32_t  year)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateDMY", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, day, month, year);
}
inline bool System::DateTimeParse::SetDateYDM(::by_ref<::System::DateTimeResult>  result, int32_t  year, int32_t  day, int32_t  month)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"SetDateYDM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, year, day, month);
}
inline void System::DateTimeParse::GetDefaultYear(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDefaultYear", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, result, styles);
}
inline bool System::DateTimeParse::GetDayOfNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfMN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfMN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetHebrewDayOfNM(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetHebrewDayOfNM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNM(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfMNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfMNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfYNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfNNY(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfNNY", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::GetDayOfYMN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYMN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDayOfYN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDayOfYM(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDayOfYM", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline void System::DateTimeParse::AdjustTimeMark(::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustTimeMark", {}, {::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dtfi, raw);
}
inline bool System::DateTimeParse::AdjustHour(::by_ref<int32_t>  hour, ::GlobalNamespace::DateTimeParse_TM  timeMark)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustHour", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::DateTimeParse_TM>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hour, timeMark);
}
inline bool System::DateTimeParse::GetTimeOfN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeOfN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetTimeOfNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeOfNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetTimeOfNNN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetTimeOfNNN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfDSN(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateOfDSN", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfNDS(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateOfNDS", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw);
}
inline bool System::DateTimeParse::GetDateOfNNDS(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateOfNNDS", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtfi);
}
inline bool System::DateTimeParse::ProcessDateTimeSuffix(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::DateTimeRawInfo>  raw, ::by_ref<::System::DateTimeToken>  dtok)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ProcessDateTimeSuffix", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeToken>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, raw, dtok);
}
inline bool System::DateTimeParse::ProcessHebrewTerminalState(::GlobalNamespace::DateTimeParse_DS  dps, ::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ProcessHebrewTerminalState", {}, {::i2c::type_of<::GlobalNamespace::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
inline bool System::DateTimeParse::ProcessTerminalState(::GlobalNamespace::DateTimeParse_DS  dps, ::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles, ::by_ref<::System::DateTimeRawInfo>  raw, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ProcessTerminalState", {}, {::i2c::type_of<::GlobalNamespace::DateTimeParse_DS>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>(), ::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dps, str, result, styles, raw, dtfi);
}
inline ::System::DateTime System::DateTimeParse::Parse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, dtfi, styles);
}
inline ::System::DateTime System::DateTimeParse::Parse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, s, dtfi, styles, offset);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTime>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dtfi, styles, result);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTime>  result, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dtfi, styles, result, offset);
}
inline bool System::DateTimeParse::TryParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dtfi, styles, result);
}
inline bool System::DateTimeParse::DetermineTimeZoneAdjustments(::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::System::Globalization::DateTimeStyles  styles, bool  bTimeOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"DetermineTimeZoneAdjustments", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result, styles, bTimeOnly);
}
inline bool System::DateTimeParse::DateTimeOffsetTimeZonePostProcessing(::by_ref<::System::__DTString>  str, ::by_ref<::System::DateTimeResult>  result, ::System::Globalization::DateTimeStyles  styles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"DateTimeOffsetTimeZonePostProcessing", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result, styles);
}
inline bool System::DateTimeParse::AdjustTimeZoneToUniversal(::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustTimeZoneToUniversal", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result);
}
inline bool System::DateTimeParse::AdjustTimeZoneToLocal(::by_ref<::System::DateTimeResult>  result, bool  bTimeOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"AdjustTimeZoneToLocal", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, bTimeOnly);
}
inline bool System::DateTimeParse::ParseISO8601(::by_ref<::System::DateTimeRawInfo>  raw, ::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeStyles  styles, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseISO8601", {}, {::i2c::type_of<::by_ref<::System::DateTimeRawInfo>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, str, styles, result);
}
inline bool System::DateTimeParse::MatchHebrewDigits(::by_ref<::System::__DTString>  str, int32_t  digitLen, ::by_ref<int32_t>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchHebrewDigits", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, digitLen, number);
}
inline bool System::DateTimeParse::ParseDigits(::by_ref<::System::__DTString>  str, int32_t  digitLen, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseDigits", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, digitLen, result);
}
inline bool System::DateTimeParse::ParseDigits(::by_ref<::System::__DTString>  str, int32_t  minDigitLen, int32_t  maxDigitLen, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseDigits", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, minDigitLen, maxDigitLen, result);
}
inline bool System::DateTimeParse::ParseFractionExact(::by_ref<::System::__DTString>  str, int32_t  maxDigitLen, ::by_ref<double_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseFractionExact", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, maxDigitLen, result);
}
inline bool System::DateTimeParse::ParseSign(::by_ref<::System::__DTString>  str, ::by_ref<bool>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseSign", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, result);
}
inline bool System::DateTimeParse::ParseTimeZoneOffset(::by_ref<::System::__DTString>  str, int32_t  len, ::by_ref<::System::TimeSpan>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseTimeZoneOffset", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, len, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedMonthName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchAbbreviatedMonthName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchMonthName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchMonthName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedDayName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchAbbreviatedDayName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchDayName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchDayName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchEraName(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchEraName", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchTimeMark(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::GlobalNamespace::DateTimeParse_TM>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchTimeMark", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::DateTimeParse_TM>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::MatchAbbreviatedTimeMark(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::GlobalNamespace::DateTimeParse_TM>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"MatchAbbreviatedTimeMark", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::DateTimeParse_TM>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi, result);
}
inline bool System::DateTimeParse::CheckNewValue(::by_ref<int32_t>  currentValue, int32_t  newValue, char16_t  patternChar, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"CheckNewValue", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentValue, newValue, patternChar, result);
}
inline ::System::DateTime System::DateTimeParse::GetDateTimeNow(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::DateTimeStyles>  styles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateTimeNow", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeStyles>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, result, styles);
}
inline bool System::DateTimeParse::CheckDefaultDateTime(::by_ref<::System::DateTimeResult>  result, ::by_ref<::System::Globalization::Calendar*>  cal, ::System::Globalization::DateTimeStyles  styles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"CheckDefaultDateTime", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>(), ::i2c::type_of<::by_ref<::System::Globalization::Calendar*>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, result, cal, styles);
}
inline ::StringW System::DateTimeParse::ExpandPredefinedFormat(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::Globalization::DateTimeFormatInfo*>  dtfi, ::by_ref<::System::ParsingInfo>  parseInfo, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ExpandPredefinedFormat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Globalization::DateTimeFormatInfo*>>(), ::i2c::type_of<::by_ref<::System::ParsingInfo>>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, format, dtfi, parseInfo, result);
}
inline bool System::DateTimeParse::ParseJapaneseEraStart(::by_ref<::System::__DTString>  str, ::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseJapaneseEraStart", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, dtfi);
}
inline bool System::DateTimeParse::ParseByFormat(::by_ref<::System::__DTString>  str, ::by_ref<::System::__DTString>  format, ::by_ref<::System::ParsingInfo>  parseInfo, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"ParseByFormat", {}, {::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::__DTString>>(), ::i2c::type_of<::by_ref<::System::ParsingInfo>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, format, parseInfo, dtfi, result);
}
inline bool System::DateTimeParse::TryParseQuoteString(::System::ReadOnlySpan_1<char16_t>  format, int32_t  pos, ::System::Text::StringBuilder*  result, ::by_ref<int32_t>  returnValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"TryParseQuoteString", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format, pos, result, returnValue);
}
inline bool System::DateTimeParse::DoStrictParse(::System::ReadOnlySpan_1<char16_t>  s, ::System::ReadOnlySpan_1<char16_t>  formatParam, ::System::Globalization::DateTimeStyles  styles, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"DoStrictParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeStyles>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, formatParam, styles, dtfi, result);
}
inline ::System::Exception* System::DateTimeParse::GetDateTimeParseException(::by_ref<::System::DateTimeResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse*>(),
                        {"GetDateTimeParseException", {}, {::i2c::type_of<::by_ref<::System::DateTimeResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::System::DateTimeParse::DateTimeParse()   {
}
//  Writing Method size for method: ::System::DateTimeParse___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeParse___c::*)()>(&::System::DateTimeParse___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2d34dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse___c._DoStrictParse_b__98_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTimeParse_MatchNumberDelegate* (::System::DateTimeParse___c::*)()>(&::System::DateTimeParse___c::_DoStrictParse_b__98_0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa2d34e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse___c*>(),
                        {"<DoStrictParse>b__98_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::DateTimeParse___c::setStaticF___9(::System::DateTimeParse___c*  value)  {
::cordl_internals::setStaticField<::System::DateTimeParse___c*, "<>9", ::System::DateTimeParse___c*>(std::forward<::System::DateTimeParse___c*>(value));
}
inline ::System::DateTimeParse___c* System::DateTimeParse___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::DateTimeParse___c*, "<>9", ::System::DateTimeParse___c*>();
}
inline void System::DateTimeParse___c::setStaticF___9__98_0(::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*, "<>9__98_0", ::System::DateTimeParse___c*>(std::forward<::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*>(value));
}
inline ::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>* System::DateTimeParse___c::getStaticF___9__98_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::System::DateTimeParse_MatchNumberDelegate*>*, "<>9__98_0", ::System::DateTimeParse___c*>();
}
inline void System::DateTimeParse___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DateTimeParse_MatchNumberDelegate* System::DateTimeParse___c::_DoStrictParse_b__98_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse___c*>(),
                        {"<DoStrictParse>b__98_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTimeParse_MatchNumberDelegate*>(this, ___internal_method);
}
inline ::System::DateTimeParse___c* System::DateTimeParse___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DateTimeParse___c*>());
}
// Ctor Parameters []
constexpr ::System::DateTimeParse___c::DateTimeParse___c()   {
}
//  Writing Method size for method: ::System::DateTimeParse_MatchNumberDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DateTimeParse_MatchNumberDelegate::*)(::System::Object*, ::System::IntPtr)>(&::System::DateTimeParse_MatchNumberDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa2d33ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DateTimeParse_MatchNumberDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DateTimeParse_MatchNumberDelegate::*)(::by_ref<::System::__DTString>, int32_t, ::by_ref<int32_t>)>(&::System::DateTimeParse_MatchNumberDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2d3460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(),
                    {::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
inline void System::DateTimeParse_MatchNumberDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline bool System::DateTimeParse_MatchNumberDelegate::Invoke(::by_ref<::System::__DTString>  str, int32_t  digitLen, ::by_ref<int32_t>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::DateTimeParse_MatchNumberDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, str, digitLen, result);
}
inline ::System::DateTimeParse_MatchNumberDelegate* System::DateTimeParse_MatchNumberDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DateTimeParse_MatchNumberDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::System::DateTimeParse_MatchNumberDelegate::DateTimeParse_MatchNumberDelegate()   {
}
