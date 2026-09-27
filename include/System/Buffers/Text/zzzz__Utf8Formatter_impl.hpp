#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Formatter.hpp"
#include "System/zzzz__IFormattable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/Text/zzzz__Utf8Formatter_def.hpp"
#include "System/Buffers/Text/zzzz__NumberBuffer_def.hpp"
#include "System/Buffers/Text/zzzz__Utf8Formatter_DecomposedGuid_def.hpp"
#include "System/Buffers/zzzz__StandardFormat_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa272f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDateTimeG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeSpan, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDateTimeG)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xa2731c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeG", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDateTimeL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDateTimeL)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa273564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeL", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDateTimeO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::TimeSpan, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDateTimeO)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0xa273804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeO", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDateTimeR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDateTimeR)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xa273ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeR", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTimeOffset, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa273f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa274230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDecimalE
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Buffers::Text::NumberBuffer>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, uint8_t, uint8_t)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDecimalE)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa274424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDecimalE", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDecimalF
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Buffers::Text::NumberBuffer>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, uint8_t)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDecimalF)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa2746f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDecimalF", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatDecimalG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::Buffers::Text::NumberBuffer>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatDecimalG)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa2749c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDecimalG", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa274c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa2752f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa275394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Guid, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0xa275438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, uint8_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64D)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa275a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64D", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64Default)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa275dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64Default", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt32MultipleDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt32MultipleDigits)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa2769cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt32MultipleDigits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64MultipleDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64MultipleDigits)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa276bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64MultipleDigits", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64MoreThanNegativeBillionMaxUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64MoreThanNegativeBillionMaxUInt)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xa276224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64MoreThanNegativeBillionMaxUInt", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64LessThanNegativeBillionMaxUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64LessThanNegativeBillionMaxUInt)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xa276718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64LessThanNegativeBillionMaxUInt", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64N
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, uint8_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64N)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa276e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64N", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormatInt64)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xa2771d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint8_t, ::System::Span_1<uint8_t>, bool, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64D)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xa275ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64D", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64Default)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa277660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64Default", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt32SingleDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt32SingleDigit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa277804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt32SingleDigit", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt32MultipleDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt32MultipleDigits)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa277878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt32MultipleDigits", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64MultipleDigits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64MultipleDigits)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa2779fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64MultipleDigits", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64LessThanBillionMaxUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64LessThanBillionMaxUInt)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa275fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64LessThanBillionMaxUInt", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64MoreThanBillionMaxUInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64MoreThanBillionMaxUInt)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0xa276498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64MoreThanBillionMaxUInt", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64N
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint8_t, ::System::Span_1<uint8_t>, bool, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64N)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa276ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64N", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, uint8_t, bool, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64X)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa2774f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64X", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormatUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormatUInt64)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa277bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa277e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int8_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa277f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa277f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int16_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa278014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa2780a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa278128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa2781b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa27823c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Formatter.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::TimeSpan, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::System::Buffers::StandardFormat)>(&::System::Buffers::Text::Utf8Formatter::TryFormat)> {
  constexpr static std::size_t size = 0x798;
  constexpr static std::size_t addrs = 0xa2782c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Buffers::Text::Utf8Formatter::setStaticF_DayAbbreviations(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "DayAbbreviations", ::System::Buffers::Text::Utf8Formatter*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Buffers::Text::Utf8Formatter::getStaticF_DayAbbreviations()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "DayAbbreviations", ::System::Buffers::Text::Utf8Formatter*>();
}
inline void System::Buffers::Text::Utf8Formatter::setStaticF_DayAbbreviationsLowercase(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "DayAbbreviationsLowercase", ::System::Buffers::Text::Utf8Formatter*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Buffers::Text::Utf8Formatter::getStaticF_DayAbbreviationsLowercase()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "DayAbbreviationsLowercase", ::System::Buffers::Text::Utf8Formatter*>();
}
inline void System::Buffers::Text::Utf8Formatter::setStaticF_MonthAbbreviations(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "MonthAbbreviations", ::System::Buffers::Text::Utf8Formatter*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Buffers::Text::Utf8Formatter::getStaticF_MonthAbbreviations()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "MonthAbbreviations", ::System::Buffers::Text::Utf8Formatter*>();
}
inline void System::Buffers::Text::Utf8Formatter::setStaticF_MonthAbbreviationsLowercase(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "MonthAbbreviationsLowercase", ::System::Buffers::Text::Utf8Formatter*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Buffers::Text::Utf8Formatter::getStaticF_MonthAbbreviationsLowercase()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "MonthAbbreviationsLowercase", ::System::Buffers::Text::Utf8Formatter*>();
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(bool  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDateTimeG(::System::DateTime  value, ::System::TimeSpan  offset, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeG", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, offset, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDateTimeL(::System::DateTime  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeL", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDateTimeO(::System::DateTime  value, ::System::TimeSpan  offset, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeO", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, offset, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDateTimeR(::System::DateTime  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDateTimeR", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(::System::DateTimeOffset  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(::System::DateTime  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDecimalE(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, uint8_t  precision, uint8_t  exponentSymbol)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDecimalE", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, destination, bytesWritten, precision, exponentSymbol);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDecimalF(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, uint8_t  precision)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDecimalF", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, destination, bytesWritten, precision);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatDecimalG(::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatDecimalG", {}, {::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(::System::Decimal  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(double_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(float_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IFormattable*>)
inline bool System::Buffers::Text::Utf8Formatter::TryFormatFloatingPoint(T  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                    {"TryFormatFloatingPoint", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(::System::Guid  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64D(int64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64D", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64Default(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64Default", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt32MultipleDigits(int32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt32MultipleDigits", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64MultipleDigits(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64MultipleDigits", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64MoreThanNegativeBillionMaxUInt(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64MoreThanNegativeBillionMaxUInt", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64LessThanNegativeBillionMaxUInt(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64LessThanNegativeBillionMaxUInt", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64N(int64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64N", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatInt64(int64_t  value, uint64_t  mask, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatInt64", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, mask, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64D(uint64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, bool  insertNegationSign, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64D", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, destination, insertNegationSign, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64Default(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64Default", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt32SingleDigit(uint32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt32SingleDigit", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt32MultipleDigits(uint32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt32MultipleDigits", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64MultipleDigits(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64MultipleDigits", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64LessThanBillionMaxUInt(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64LessThanBillionMaxUInt", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64MoreThanBillionMaxUInt(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64MoreThanBillionMaxUInt", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64N(uint64_t  value, uint8_t  precision, ::System::Span_1<uint8_t>  destination, bool  insertNegationSign, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64N", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, destination, insertNegationSign, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64X(uint64_t  value, uint8_t  precision, bool  useLower, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64X", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, precision, useLower, destination, bytesWritten);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormatUInt64(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormatUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(uint8_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(int8_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int8_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(uint16_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(int16_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int16_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(uint32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(int32_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(uint64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(int64_t  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
inline bool System::Buffers::Text::Utf8Formatter::TryFormat(::System::TimeSpan  value, ::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten, ::System::Buffers::StandardFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Formatter*>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Buffers::StandardFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, destination, bytesWritten, format);
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::Utf8Formatter::Utf8Formatter()   {
}
