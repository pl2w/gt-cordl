#pragma once
// IWYU pragma private; include "System/Guid.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Guid_GuidParseThrowStyle_def.hpp"
#include "System/zzzz__Guid_GuidResult_def.hpp"
#include "System/zzzz__Guid_GuidStyles_def.hpp"
#include "System/zzzz__Guid_ParseFailureKind_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Guid.NewGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)()>(&::System::Guid::NewGuid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2d54b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"NewGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Guid::*)(::ArrayW<uint8_t>)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa2d54fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Guid::*)(::System::ReadOnlySpan_1<uint8_t>)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa2d5590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Guid::*)(uint32_t, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa2d56b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Guid::*)(int32_t, int16_t, int16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa2d56f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Guid::*)(::StringW)>(&::System::Guid::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa2d5734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::StringW)>(&::System::Guid::Parse)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa2d5be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Guid::Parse)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa2d5c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Guid>)>(&::System::Guid::TryParse)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa2d5ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Guid>)>(&::System::Guid::TryParse)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2d5d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::by_ref<::System::Guid>)>(&::System::Guid::TryParseExact)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa2d5db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseExact", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::by_ref<::System::Guid>)>(&::System::Guid::TryParseExact)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa2d5e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::GlobalNamespace::Guid_GuidStyles, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::TryParseGuid)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0xa2d5824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuid", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::GlobalNamespace::Guid_GuidStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuidWithHexPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::TryParseGuidWithHexPrefix)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xa2d6270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuidWithHexPrefix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuidWithNoStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::TryParseGuidWithNoStyle)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xa2d6824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuidWithNoStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryParseGuidWithDashes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::TryParseGuidWithDashes)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xa2d5fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuidWithDashes", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, ::by_ref<int16_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::StringToShort)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa2d6edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToShort", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToShort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>, int32_t, int32_t, ::by_ref<int16_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::StringToShort)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa2d7274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToShort", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::StringToInt)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa2d6eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToInt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>, int32_t, int32_t, ::by_ref<int32_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::StringToInt)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa2d707c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToInt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.StringToLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>, int32_t, ::by_ref<int64_t>, ::by_ref<::GlobalNamespace::Guid_GuidResult>)>(&::System::Guid::StringToLong)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa2d6f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToLong", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.EatAllWhitespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<char16_t> (*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Guid::EatAllWhitespace)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa2d6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"EatAllWhitespace", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.IsHexPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Guid::IsHexPrefix)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa2d6de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"IsHexPrefix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.WriteByteHelper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Guid::*)(::System::Span_1<uint8_t>)>(&::System::Guid::WriteByteHelper)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa2d72b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"WriteByteHelper", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToByteArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Guid::*)()>(&::System::Guid::ToByteArray)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa2d73c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"ToByteArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryWriteBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Guid::*)(::System::Span_1<uint8_t>)>(&::System::Guid::TryWriteBytes)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa2d745c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Guid::*)()>(&::System::Guid::ToString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa2d74c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Guid>(),
                    {::i2c::class_of<::System::Guid>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Guid::*)()>(&::System::Guid::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa2d7708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Guid>(),
                    {::i2c::class_of<::System::Guid>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Guid::*)(::System::Object*)>(&::System::Guid::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa2d7724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Guid>(),
                    {::i2c::class_of<::System::Guid>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Guid::*)(::System::Guid)>(&::System::Guid::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa2d77cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"Equals", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Guid::*)(uint32_t, uint32_t)>(&::System::Guid::GetResult)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2d7810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"GetResult", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Guid::*)(::System::Object*)>(&::System::Guid::CompareTo)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa2d7820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Guid::*)(::System::Guid)>(&::System::Guid::CompareTo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa2d79b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Guid, ::System::Guid)>(&::System::Guid::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2d7a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Guid, ::System::Guid)>(&::System::Guid::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2d7aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Guid::*)(::StringW)>(&::System::Guid::ToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2d7ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.HexToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::Guid::HexToChar)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa2d7ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"HexToChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.HexsToChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t)>(&::System::Guid::HexsToChars)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2d7af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"HexsToChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.HexsToCharsHexOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t, int32_t)>(&::System::Guid::HexsToCharsHexOutput)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa2d7b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"HexsToCharsHexOutput", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Guid::*)(::StringW, ::System::IFormatProvider*)>(&::System::Guid::ToString)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa2d7510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Guid::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Guid::TryFormat)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xa2d7c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Guid.System_ISpanFormattable_TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Guid::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Guid::System_ISpanFormattable_TryFormat)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2d8028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"System.ISpanFormattable.TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Guid::setStaticF_Empty(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "Empty", ::System::Guid>(std::forward<::System::Guid>(value));
}
inline ::System::Guid System::Guid::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::System::Guid, "Empty", ::System::Guid>();
}
inline ::System::Guid System::Guid::NewGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"NewGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method);
}
inline void System::Guid::_ctor(::ArrayW<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, b);
}
inline void System::Guid::_ctor(::System::ReadOnlySpan_1<uint8_t>  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, b);
}
inline void System::Guid::_ctor(uint32_t  a, uint16_t  b, uint16_t  c, uint8_t  d, uint8_t  e, uint8_t  f, uint8_t  g, uint8_t  h, uint8_t  i, uint8_t  j, uint8_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, d, e, f, g, h, i, j, k);
}
inline void System::Guid::_ctor(int32_t  a, int16_t  b, int16_t  c, uint8_t  d, uint8_t  e, uint8_t  f, uint8_t  g, uint8_t  h, uint8_t  i, uint8_t  j, uint8_t  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, a, b, c, d, e, f, g, h, i, j, k);
}
inline void System::Guid::_ctor(::StringW  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, g);
}
inline ::System::Guid System::Guid::Parse(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, input);
}
inline ::System::Guid System::Guid::Parse(::System::ReadOnlySpan_1<char16_t>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"Parse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, input);
}
inline bool System::Guid::TryParse(::StringW  input, ::by_ref<::System::Guid>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline bool System::Guid::TryParse(::System::ReadOnlySpan_1<char16_t>  input, ::by_ref<::System::Guid>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParse", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, result);
}
inline bool System::Guid::TryParseExact(::StringW  input, ::StringW  format, ::by_ref<::System::Guid>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseExact", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, result);
}
inline bool System::Guid::TryParseExact(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<::System::Guid>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseExact", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::System::Guid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, format, result);
}
inline bool System::Guid::TryParseGuid(::System::ReadOnlySpan_1<char16_t>  guidString, ::GlobalNamespace::Guid_GuidStyles  flags, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuid", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::GlobalNamespace::Guid_GuidStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guidString, flags, result);
}
inline bool System::Guid::TryParseGuidWithHexPrefix(::System::ReadOnlySpan_1<char16_t>  guidString, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuidWithHexPrefix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guidString, result);
}
inline bool System::Guid::TryParseGuidWithNoStyle(::System::ReadOnlySpan_1<char16_t>  guidString, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuidWithNoStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guidString, result);
}
inline bool System::Guid::TryParseGuidWithDashes(::System::ReadOnlySpan_1<char16_t>  guidString, ::by_ref<::GlobalNamespace::Guid_GuidResult>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryParseGuidWithDashes", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guidString, result);
}
inline bool System::Guid::StringToShort(::System::ReadOnlySpan_1<char16_t>  str, int32_t  requiredLength, int32_t  flags, ::by_ref<int16_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToShort", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToShort(::System::ReadOnlySpan_1<char16_t>  str, ::by_ref<int32_t>  parsePos, int32_t  requiredLength, int32_t  flags, ::by_ref<int16_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToShort", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int16_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, parsePos, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToInt(::System::ReadOnlySpan_1<char16_t>  str, int32_t  requiredLength, int32_t  flags, ::by_ref<int32_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToInt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToInt(::System::ReadOnlySpan_1<char16_t>  str, ::by_ref<int32_t>  parsePos, int32_t  requiredLength, int32_t  flags, ::by_ref<int32_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToInt", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, parsePos, requiredLength, flags, result, parseResult);
}
inline bool System::Guid::StringToLong(::System::ReadOnlySpan_1<char16_t>  str, ::by_ref<int32_t>  parsePos, int32_t  flags, ::by_ref<int64_t>  result, ::by_ref<::GlobalNamespace::Guid_GuidResult>  parseResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"StringToLong", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Guid_GuidResult>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, parsePos, flags, result, parseResult);
}
inline ::System::ReadOnlySpan_1<char16_t> System::Guid::EatAllWhitespace(::System::ReadOnlySpan_1<char16_t>  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"EatAllWhitespace", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<char16_t>>(nullptr, ___internal_method, str);
}
inline bool System::Guid::IsHexPrefix(::System::ReadOnlySpan_1<char16_t>  str, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"IsHexPrefix", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, i);
}
inline void System::Guid::WriteByteHelper(::System::Span_1<uint8_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"WriteByteHelper", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, destination);
}
inline ::ArrayW<uint8_t> System::Guid::ToByteArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"ToByteArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline bool System::Guid::TryWriteBytes(::System::Span_1<uint8_t>  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryWriteBytes", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination);
}
inline ::StringW System::Guid::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Guid>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t System::Guid::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Guid>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool System::Guid::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Guid>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, o);
}
inline bool System::Guid::Equals(::System::Guid  g)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"Equals", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, g);
}
inline int32_t System::Guid::GetResult(uint32_t  me, uint32_t  them)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"GetResult", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, me, them);
}
inline int32_t System::Guid::CompareTo(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Guid::CompareTo(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool System::Guid::op_Equality(::System::Guid  a, ::System::Guid  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool System::Guid::op_Inequality(::System::Guid  a, ::System::Guid  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW System::Guid::ToString(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline char16_t System::Guid::HexToChar(int32_t  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"HexToChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, a);
}
inline int32_t System::Guid::HexsToChars(char16_t*  guidChars, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"HexsToChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, guidChars, a, b);
}
inline int32_t System::Guid::HexsToCharsHexOutput(char16_t*  guidChars, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"HexsToCharsHexOutput", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, guidChars, a, b);
}
inline ::StringW System::Guid::ToString(::StringW  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline bool System::Guid::TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format);
}
inline bool System::Guid::System_ISpanFormattable_TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Guid>(),
                        {"System.ISpanFormattable.TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, provider);
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  System::Guid::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Guid::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  System::Guid::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Guid::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Guid>"
constexpr  System::Guid::operator ::System::IComparable_1<::System::Guid>*()  {
return static_cast<::System::IComparable_1<::System::Guid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::Guid>"
constexpr ::System::IComparable_1<::System::Guid>* System::Guid::i___System__IComparable_1___System__Guid_()  {
return static_cast<::System::IComparable_1<::System::Guid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Guid>"
constexpr  System::Guid::operator ::System::IEquatable_1<::System::Guid>*()  {
return static_cast<::System::IEquatable_1<::System::Guid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Guid>"
constexpr ::System::IEquatable_1<::System::Guid>* System::Guid::i___System__IEquatable_1___System__Guid_()  {
return static_cast<::System::IEquatable_1<::System::Guid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr  System::Guid::operator ::System::ISpanFormattable*()  {
return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Guid::i___System__ISpanFormattable()  {
return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_a", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_b", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_c", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_d", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_e", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_f", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_g", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_h", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_i", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_j", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_k", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Guid::Guid(int32_t  _a, int16_t  _b, int16_t  _c, uint8_t  _d, uint8_t  _e, uint8_t  _f, uint8_t  _g, uint8_t  _h, uint8_t  _i, uint8_t  _j, uint8_t  _k) noexcept  {
this->_a = _a;
this->_b = _b;
this->_c = _c;
this->_d = _d;
this->_e = _e;
this->_f = _f;
this->_g = _g;
this->_h = _h;
this->_i = _i;
this->_j = _j;
this->_k = _k;
}
// Ctor Parameters []
constexpr ::System::Guid::Guid()   {
}
