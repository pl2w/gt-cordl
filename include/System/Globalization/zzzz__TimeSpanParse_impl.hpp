#pragma once
// IWYU pragma private; include "System/Globalization/TimeSpanParse.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_ParseFailureKind_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_StringParser_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TTT_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanRawInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanResult_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanStandardStyles_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanToken_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_TimeSpanTokenizer_def.hpp"
#include "System/Globalization/zzzz__TimeSpanStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Pow10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t)>(&::System::Globalization::TimeSpanParse::Pow10)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa2377e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Pow10", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryTimeToTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::GlobalNamespace::TimeSpanParse_TimeSpanToken, ::GlobalNamespace::TimeSpanParse_TimeSpanToken, ::GlobalNamespace::TimeSpanParse_TimeSpanToken, ::GlobalNamespace::TimeSpanParse_TimeSpanToken, ::GlobalNamespace::TimeSpanParse_TimeSpanToken, ::by_ref<int64_t>)>(&::System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa237c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryTimeToTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanParse::Parse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa237db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::by_ref<::System::TimeSpan>)>(&::System::Globalization::TimeSpanParse::TryParse)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa237f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::by_ref<::System::TimeSpan>)>(&::System::Globalization::TimeSpanParse::TryParseExact)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa237fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::System::IFormatProvider*, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa237df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminalState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa238698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminalState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_DHMSF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa23a4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_DHMSF", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HMS_F_D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  constexpr static std::size_t size = 0xb48;
  constexpr static std::size_t addrs = 0xa239968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HMS_F_D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM_S_D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  constexpr static std::size_t size = 0xbcc;
  constexpr static std::size_t addrs = 0xa238d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM_S_D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xa238adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa238814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExactTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseExactTimeSpan)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa238004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseExactTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseByFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanStyles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseByFormat)> {
  constexpr static std::size_t size = 0x6d0;
  constexpr static std::size_t addrs = 0xa23c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseByFormat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>, int32_t, ::by_ref<int32_t>)>(&::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa23c98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ParseExactDigits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa23c9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ParseExactDigits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactLiteral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>, ::System::Text::StringBuilder*)>(&::System::Globalization::TimeSpanParse::ParseExactLiteral)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa23ca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ParseExactLiteral", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpanConstant
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseTimeSpanConstant)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa23c27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseTimeSpanConstant", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
    return ___internal_method;
  }
};
inline int64_t System::Globalization::TimeSpanParse::Pow10(int32_t  pow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Pow10", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, pow);
}
inline bool System::Globalization::TimeSpanParse::TryTimeToTicks(bool  positive, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  days, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  hours, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  minutes, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  seconds, ::GlobalNamespace::TimeSpanParse_TimeSpanToken  fraction, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryTimeToTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanToken>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, positive, days, hours, minutes, seconds, fraction, result);
}
inline ::System::TimeSpan System::Globalization::TimeSpanParse::Parse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, input, formatProvider);
}
inline bool System::Globalization::TimeSpanParse::TryParse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider, ::by_ref<::System::TimeSpan>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, formatProvider, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseExact(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ::by_ref<::System::TimeSpan>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::System::IFormatProvider*  formatProvider, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, style, formatProvider, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminalState(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminalState", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_DHMSF", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HMS_F_D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM_S_D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_HM", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_D(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>  raw, ::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles  style, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ProcessTerminal_D", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanRawInfo>>(), ::i2c::type_of<::GlobalNamespace::TimeSpanParse_TimeSpanStandardStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseExactTimeSpan", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseByFormat(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::TimeSpanStyles  styles, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseByFormat", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::TimeSpanStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, styles, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ParseExactDigits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokenizer, minDigitLength, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, int32_t  maxDigitLength, ::by_ref<int32_t>  zeroes, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ParseExactDigits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokenizer, minDigitLength, maxDigitLength, zeroes, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactLiteral(::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>  tokenizer, ::System::Text::StringBuilder*  enquotedString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"ParseExactLiteral", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanTokenizer>>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokenizer, enquotedString);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Globalization::TimeSpanParse*>(),
                        {"TryParseTimeSpanConstant", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TimeSpanParse_TimeSpanResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
// Ctor Parameters []
constexpr ::System::Globalization::TimeSpanParse::TimeSpanParse()   {
}
