#pragma once
// IWYU pragma private; include "System/Buffers/Text/Utf8Parser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_def.hpp"
#include "System/Buffers/Text/zzzz__NumberBuffer_def.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_ComponentParseResult_def.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_ParseNumberOptions_def.hpp"
#include "System/Buffers/Text/zzzz__Utf8Parser_TimeSpanSplitter_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseDateTimeOffsetDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::DateTimeOffset>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseDateTimeOffsetDefault)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xa278c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeOffsetDefault", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseDateTimeG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::DateTime>, ::by_ref<::System::DateTimeOffset>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseDateTimeG)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa278e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeG", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryCreateDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::DateTime, bool, int32_t, int32_t, ::by_ref<::System::DateTimeOffset>)>(&::System::Buffers::Text::Utf8Parser::TryCreateDateTimeOffset)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa2790c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTimeOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryCreateDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, bool, int32_t, int32_t, ::by_ref<::System::DateTimeOffset>)>(&::System::Buffers::Text::Utf8Parser::TryCreateDateTimeOffset)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa2793e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTimeOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryCreateDateTimeOffsetInterpretingDataAsLocalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::by_ref<::System::DateTimeOffset>)>(&::System::Buffers::Text::Utf8Parser::TryCreateDateTimeOffsetInterpretingDataAsLocalTime)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa279254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTimeOffsetInterpretingDataAsLocalTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryCreateDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::DateTimeKind, ::by_ref<::System::DateTime>)>(&::System::Buffers::Text::Utf8Parser::TryCreateDateTime)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa2794f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTimeKind>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseDateTimeOffsetO
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::DateTimeOffset>, ::by_ref<int32_t>, ::by_ref<::System::DateTimeKind>)>(&::System::Buffers::Text::Utf8Parser::TryParseDateTimeOffsetO)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0xa279730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeOffsetO", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeKind>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseDateTimeOffsetR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, uint32_t, ::by_ref<::System::DateTimeOffset>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseDateTimeOffsetR)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xa279b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeOffsetR", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::DateTime>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa27a03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::DateTimeOffset>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa27a2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::Decimal>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xa27a4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<float_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa27ad88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<double_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa27b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseNormalAsFloatingPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<double_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParseNormalAsFloatingPoint)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa27aeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseNormalAsFloatingPoint", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::Guid>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa27b1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseGuidN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::Guid>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseGuidN)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xa27b710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseGuidN", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseGuidCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, bool, char16_t, char16_t, ::by_ref<::System::Guid>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseGuidCore)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xa27b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseGuidCore", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseInt32D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseInt32D)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xa27be74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt32D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseInt64D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int64_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseInt64D)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa27c214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt64D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseInt32N
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseInt32N)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa27c420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt32N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseInt64N
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int64_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseInt64N)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa27c628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt64N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa27c83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<int64_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa27c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt32D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint32_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt32D)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xa27cb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt32D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt64D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt64D)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa27cf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt64D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt32N
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint32_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt32N)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa27d050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt32N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt64N
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt64N)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa27d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt64N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt16X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint16_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt16X)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa27bb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt16X", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt32X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint32_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt32X)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa27b9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt32X", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseUInt64X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint64_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseUInt64X)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa27bcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt64X", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint32_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa27d434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint64_t>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa27d5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::Buffers::Text::NumberBuffer>, ::by_ref<int32_t>, ::GlobalNamespace::Utf8Parser_ParseNumberOptions, ::by_ref<bool>)>(&::System::Buffers::Text::Utf8Parser::TryParseNumber)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0xa27a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseNumber", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::Utf8Parser_ParseNumberOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseTimeSpanBigG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::TimeSpan>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseTimeSpanBigG)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0xa27d784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanBigG", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseTimeSpanC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::TimeSpan>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseTimeSpanC)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa27dd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanC", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseTimeSpanLittleG
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::TimeSpan>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseTimeSpanLittleG)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa27e2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanLittleG", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<::System::TimeSpan>, ::by_ref<int32_t>, char16_t)>(&::System::Buffers::Text::Utf8Parser::TryParse)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa27e568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryParseTimeSpanFraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<uint8_t>, ::by_ref<uint32_t>, ::by_ref<int32_t>)>(&::System::Buffers::Text::Utf8Parser::TryParseTimeSpanFraction)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa27db1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanFraction", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::Text::Utf8Parser.TryCreateTimeSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, ::by_ref<::System::TimeSpan>)>(&::System::Buffers::Text::Utf8Parser::TryCreateTimeSpan)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa27dc88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateTimeSpan", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Buffers::Text::Utf8Parser::setStaticF_s_daysToMonth365(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_daysToMonth365", ::System::Buffers::Text::Utf8Parser*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Buffers::Text::Utf8Parser::getStaticF_s_daysToMonth365()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_daysToMonth365", ::System::Buffers::Text::Utf8Parser*>();
}
inline void System::Buffers::Text::Utf8Parser::setStaticF_s_daysToMonth366(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_daysToMonth366", ::System::Buffers::Text::Utf8Parser*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Buffers::Text::Utf8Parser::getStaticF_s_daysToMonth366()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_daysToMonth366", ::System::Buffers::Text::Utf8Parser*>();
}
inline bool System::Buffers::Text::Utf8Parser::TryParseDateTimeOffsetDefault(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTimeOffset>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeOffsetDefault", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseDateTimeG(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTime>  value, ::by_ref<::System::DateTimeOffset>  valueAsOffset, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeG", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, valueAsOffset, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryCreateDateTimeOffset(::System::DateTime  dateTime, bool  offsetNegative, int32_t  offsetHours, int32_t  offsetMinutes, ::by_ref<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTimeOffset", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dateTime, offsetNegative, offsetHours, offsetMinutes, value);
}
inline bool System::Buffers::Text::Utf8Parser::TryCreateDateTimeOffset(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, bool  offsetNegative, int32_t  offsetHours, int32_t  offsetMinutes, ::by_ref<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTimeOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, year, month, day, hour, minute, second, fraction, offsetNegative, offsetHours, offsetMinutes, value);
}
inline bool System::Buffers::Text::Utf8Parser::TryCreateDateTimeOffsetInterpretingDataAsLocalTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, ::by_ref<::System::DateTimeOffset>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTimeOffsetInterpretingDataAsLocalTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, year, month, day, hour, minute, second, fraction, value);
}
inline bool System::Buffers::Text::Utf8Parser::TryCreateDateTime(int32_t  year, int32_t  month, int32_t  day, int32_t  hour, int32_t  minute, int32_t  second, int32_t  fraction, ::System::DateTimeKind  kind, ::by_ref<::System::DateTime>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateDateTime", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTimeKind>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, year, month, day, hour, minute, second, fraction, kind, value);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseDateTimeOffsetO(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTimeOffset>  value, ::by_ref<int32_t>  bytesConsumed, ::by_ref<::System::DateTimeKind>  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeOffsetO", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeKind>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, kind);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseDateTimeOffsetR(::System::ReadOnlySpan_1<uint8_t>  source, uint32_t  caseFlipXorMask, ::by_ref<::System::DateTimeOffset>  dateTimeOffset, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseDateTimeOffsetR", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, caseFlipXorMask, dateTimeOffset, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTime>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTime>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::DateTimeOffset>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::Decimal>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<float_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<double_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseNormalAsFloatingPoint(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<double_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseNormalAsFloatingPoint", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
template<typename T>
inline bool System::Buffers::Text::Utf8Parser::TryParseAsSpecialFloatingPoint(::System::ReadOnlySpan_1<uint8_t>  source, T  positiveInfinity, T  negativeInfinity, T  nan, ::by_ref<T>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                    {"TryParseAsSpecialFloatingPoint", {::i2c::class_of<T>()}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<T>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, positiveInfinity, negativeInfinity, nan, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::Guid>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseGuidN(::System::ReadOnlySpan_1<uint8_t>  text, ::by_ref<::System::Guid>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseGuidN", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseGuidCore(::System::ReadOnlySpan_1<uint8_t>  source, bool  ends, char16_t  begin, char16_t  end, ::by_ref<::System::Guid>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseGuidCore", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<bool>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<::System::Guid>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, ends, begin, end, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseInt32D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt32D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseInt64D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int64_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt64D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseInt32N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt32N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseInt64N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int64_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseInt64N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int64_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt32D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt32D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt64D(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt64D", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt32N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt32N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt64N(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt64N", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt16X(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint16_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt16X", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt32X(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt32X", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseUInt64X(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseUInt64X", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint64_t>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint64_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseNumber(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::Buffers::Text::NumberBuffer>  number, ::by_ref<int32_t>  bytesConsumed, ::GlobalNamespace::Utf8Parser_ParseNumberOptions  options, ::by_ref<bool>  textUsedExponentNotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseNumber", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::Buffers::Text::NumberBuffer>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::GlobalNamespace::Utf8Parser_ParseNumberOptions>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, number, bytesConsumed, options, textUsedExponentNotation);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseTimeSpanBigG(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanBigG", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseTimeSpanC(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanC", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseTimeSpanLittleG(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanLittleG", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryParse(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<::System::TimeSpan>  value, ::by_ref<int32_t>  bytesConsumed, char16_t  standardFormat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed, standardFormat);
}
inline bool System::Buffers::Text::Utf8Parser::TryParseTimeSpanFraction(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<uint32_t>  value, ::by_ref<int32_t>  bytesConsumed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryParseTimeSpanFraction", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, value, bytesConsumed);
}
inline bool System::Buffers::Text::Utf8Parser::TryCreateTimeSpan(bool  isNegative, uint32_t  days, uint32_t  hours, uint32_t  minutes, uint32_t  seconds, uint32_t  fraction, ::by_ref<::System::TimeSpan>  timeSpan)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Buffers::Text::Utf8Parser*>(),
                        {"TryCreateTimeSpan", {}, {::i2c::type_of<bool>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, isNegative, days, hours, minutes, seconds, fraction, timeSpan);
}
// Ctor Parameters []
constexpr ::System::Buffers::Text::Utf8Parser::Utf8Parser()   {
}
