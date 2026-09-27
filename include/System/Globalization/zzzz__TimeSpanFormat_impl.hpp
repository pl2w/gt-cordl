#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanFormat.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_FormatLiterals_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_FormatLiterals_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_Pattern_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.AppendNonNegativeInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(&::System::Globalization::TimeSpanFormat::AppendNonNegativeInt32)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa2362d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"AppendNonNegativeInt32", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan, ::StringW, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::Format)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa2363d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"Format", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::TryFormat)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa236784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatToBuilder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanFormat::FormatToBuilder)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xa236490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"FormatToBuilder", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatStandard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, bool, ::System::ReadOnlySpan_1<char16_t>, ::GlobalNamespace::TimeSpanFormat_Pattern)>(&::System::Globalization::TimeSpanFormat::FormatStandard)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xa2368a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"FormatStandard", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanFormat_Pattern>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanFormat.FormatCustomized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Text::StringBuilder* (*)(::System::TimeSpan, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::DateTimeFormatInfo*, ::System::Text::StringBuilder*)>(&::System::Globalization::TimeSpanFormat::FormatCustomized)> {
  constexpr static std::size_t size = 0x6cc;
  constexpr static std::size_t addrs = 0xa236d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"FormatCustomized", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Globalization::TimeSpanFormat::setStaticF_PositiveInvariantFormatLiterals(::GlobalNamespace::TimeSpanFormat_FormatLiterals  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TimeSpanFormat_FormatLiterals, "PositiveInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>(std::forward<::GlobalNamespace::TimeSpanFormat_FormatLiterals>(value));
}
inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_PositiveInvariantFormatLiterals()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TimeSpanFormat_FormatLiterals, "PositiveInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>();
}
inline void System::Globalization::TimeSpanFormat::setStaticF_NegativeInvariantFormatLiterals(::GlobalNamespace::TimeSpanFormat_FormatLiterals  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TimeSpanFormat_FormatLiterals, "NegativeInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>(std::forward<::GlobalNamespace::TimeSpanFormat_FormatLiterals>(value));
}
inline ::GlobalNamespace::TimeSpanFormat_FormatLiterals System::Globalization::TimeSpanFormat::getStaticF_NegativeInvariantFormatLiterals()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TimeSpanFormat_FormatLiterals, "NegativeInvariantFormatLiterals", ::System::Globalization::TimeSpanFormat*>();
}
inline void System::Globalization::TimeSpanFormat::AppendNonNegativeInt32(::System::Text::StringBuilder*  sb, int32_t  n, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"AppendNonNegativeInt32", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, n, digits);
}
inline ::StringW System::Globalization::TimeSpanFormat::Format(::System::TimeSpan  value, ::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"Format", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, formatProvider);
}
inline bool System::Globalization::TimeSpanFormat::TryFormat(::System::TimeSpan  value, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, charsWritten, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatToBuilder(::System::TimeSpan  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"FormatToBuilder", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, value, format, formatProvider);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatStandard(::System::TimeSpan  value, bool  isInvariant, ::System::ReadOnlySpan_1<char16_t>  format, ::GlobalNamespace::TimeSpanFormat_Pattern  pattern)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"FormatStandard", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanFormat_Pattern>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, value, isInvariant, format, pattern);
}
inline ::System::Text::StringBuilder* System::Globalization::TimeSpanFormat::FormatCustomized(::System::TimeSpan  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::DateTimeFormatInfo*  dtfi, ::System::Text::StringBuilder*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanFormat*>(),
                        {"FormatCustomized", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::DateTimeFormatInfo*>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*>(nullptr, ___internal_method, value, format, dtfi, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanFormat::TimeSpanFormat()   {
}
