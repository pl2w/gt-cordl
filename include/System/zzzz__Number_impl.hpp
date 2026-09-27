#pragma once
// IWYU pragma private; include "System/Number.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Number_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Text/zzzz__ValueStringBuilder_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Number_BigInteger_def.hpp"
#include "System/zzzz__Number_DiyFp_def.hpp"
#include "System/zzzz__Number_FloatingPointInfo_def.hpp"
#include "System/zzzz__Number_NumberBufferKind_def.hpp"
#include "System/zzzz__Number_NumberBuffer_def.hpp"
#include "System/zzzz__Number_ParsingStatus_def.hpp"
#include "System/zzzz__Number_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::System::Number.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Number::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb994fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsNegative", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.IsNegativeInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::Number::IsNegativeInfinity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb994fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsNegativeInfinity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Dragon4Double
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(double_t, int32_t, bool, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::Dragon4Double)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb994fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Dragon4Double", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Dragon4Single
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, int32_t, bool, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::Dragon4Single)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb99595c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Dragon4Single", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Dragon4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t, int32_t, uint32_t, bool, int32_t, bool, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Number::Dragon4)> {
  constexpr static std::size_t size = 0x7f8;
  constexpr static std::size_t addrs = 0xb995164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Dragon4", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatDecimal)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb996cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatDecimal", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatDecimal)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb99893c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatDecimal", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.DecimalToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::DecimalToNumber)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb996fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"DecimalToNumber", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatDouble)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb998b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatDouble)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb998f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.GetFloatingPointMaxDigitsAndPrecision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t, ::by_ref<int32_t>, ::System::Globalization::NumberFormatInfo*, ::by_ref<bool>)>(&::System::Number::GetFloatingPointMaxDigitsAndPrecision)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb999190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"GetFloatingPointMaxDigitsAndPrecision", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::Text::ValueStringBuilder>, double_t, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatDouble)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xb998c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatDouble", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(float_t, ::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatSingle)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb999340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatSingle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatSingle)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb999754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatSingle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::System::Text::ValueStringBuilder>, float_t, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatSingle)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xb999480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatSingle", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryCopyTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryCopyTo)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb9990b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryCopyTo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatInt32)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0xb9998b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatInt32)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0xb99a1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatUInt32)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xb99abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatUInt32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatUInt32)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xb99af38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatUInt32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatInt64)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xb99b308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatInt64", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatInt64)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb99c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatInt64", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Number::FormatUInt64)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb99cc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryFormatUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryFormatUInt64)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xb99d090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32ToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::Int32ToNumber)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb99d374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32ToNumber", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NegativeInt32ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::StringW)>(&::System::Number::NegativeInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb999ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NegativeInt32ToDecStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNegativeInt32ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, int32_t, ::StringW, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryNegativeInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb99a85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNegativeInt32ToDecStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32ToHexStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, char16_t, int32_t)>(&::System::Number::Int32ToHexStr)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb99a0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32ToHexStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryInt32ToHexStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, char16_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryInt32ToHexStr)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb99aa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryInt32ToHexStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32ToHexChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, uint32_t, int32_t, int32_t)>(&::System::Number::Int32ToHexChars)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb99d4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32ToHexChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::UInt32ToNumber)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb99d544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToNumber", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToDecChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*, uint32_t, int32_t)>(&::System::Number::UInt32ToDecChars)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb998afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToDecChars", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToDecChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, uint32_t, int32_t)>(&::System::Number::UInt32ToDecChars)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb99d49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToDecChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt32ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t, int32_t)>(&::System::Number::UInt32ToDecStr)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb999cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToDecStr", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryUInt32ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryUInt32ToDecStr)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb99a678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryUInt32ToDecStr", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int64ToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::Int64ToNumber)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb99beb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int64ToNumber", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NegativeInt64ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, int32_t, ::StringW)>(&::System::Number::NegativeInt64ToDecStr)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xb99b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NegativeInt64ToDecStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNegativeInt64ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, int32_t, ::StringW, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryNegativeInt64ToDecStr)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xb99c6bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNegativeInt64ToDecStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int64ToHexStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, char16_t, int32_t)>(&::System::Number::Int64ToHexStr)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb99bc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int64ToHexStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryInt64ToHexStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, char16_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryInt64ToHexStr)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xb99c9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryInt64ToHexStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt64ToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::UInt64ToNumber)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb99cee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt64ToNumber", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.UInt64ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t, int32_t)>(&::System::Number::UInt64ToDecStr)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xb99b628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt64ToDecStr", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryUInt64ToDecStr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t, int32_t, ::System::Span_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::TryUInt64ToDecStr)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0xb99c3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryUInt64ToDecStr", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseFormatSpecifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::ReadOnlySpan_1<char16_t>, ::by_ref<int32_t>)>(&::System::Number::ParseFormatSpecifier)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb996e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseFormatSpecifier", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, char16_t, int32_t, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::NumberToString)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0xb9971dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToString", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToStringFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::NumberToStringFormat)> {
  constexpr static std::size_t size = 0x11a0;
  constexpr static std::size_t addrs = 0xb99779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToStringFormat", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatCurrency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatCurrency)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb99d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatCurrency", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatFixed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, ::ArrayW<int32_t>, ::StringW, ::StringW)>(&::System::Number::FormatFixed)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0xb99da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatFixed", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatNumber)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xb99df6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatNumber", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatScientific
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, ::System::Globalization::NumberFormatInfo*, char16_t)>(&::System::Number::FormatScientific)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xb99e1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatScientific", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::System::Globalization::NumberFormatInfo*, int32_t, char16_t, int32_t, bool)>(&::System::Number::FormatExponent)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb99eb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatExponent", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatGeneral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, ::System::Globalization::NumberFormatInfo*, char16_t, bool)>(&::System::Number::FormatGeneral)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0xb99e3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatGeneral", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FormatPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Text::ValueStringBuilder>, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::FormatPercent)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0xb99e754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatPercent", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.RoundNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, int32_t, bool)>(&::System::Number::RoundNumber)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb99d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"RoundNumber", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FindSection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Number::FindSection)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb99e9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FindSection", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Low32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Number::Low32)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb99d68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Low32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.High32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Number::High32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb99d684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"High32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int64DivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<uint64_t>)>(&::System::Number::Int64DivMod1E9)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb99d64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int64DivMod1E9", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ExtractFractionAndBiasedExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(double_t, ::by_ref<int32_t>)>(&::System::Number::ExtractFractionAndBiasedExponent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb99512c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ExtractFractionAndBiasedExponent", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ExtractFractionAndBiasedExponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(float_t, ::by_ref<int32_t>)>(&::System::Number::ExtractFractionAndBiasedExponent)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb995a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ExtractFractionAndBiasedExponent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.FastAllocateString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t)>(&::System::Number::FastAllocateString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb99d488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FastAllocateString", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.SingleToInt32Bits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::System::Number::SingleToInt32Bits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb99edc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"SingleToInt32Bits", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.AccumulateDecimalDigitsIntoBigInteger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, uint32_t, uint32_t, ::by_ref<::GlobalNamespace::Number_BigInteger>)>(&::System::Number::AccumulateDecimalDigitsIntoBigInteger)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb99edcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"AccumulateDecimalDigitsIntoBigInteger", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_BigInteger>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.AssembleFloatingPointBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<::GlobalNamespace::Number_FloatingPointInfo>, uint64_t, int32_t, bool)>(&::System::Number::AssembleFloatingPointBits)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xb99f02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"AssembleFloatingPointBits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ConvertBigIntegerToFloatingPointBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<::GlobalNamespace::Number_BigInteger>, ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>, uint32_t, bool)>(&::System::Number::ConvertBigIntegerToFloatingPointBits)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb99f39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ConvertBigIntegerToFloatingPointBits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_BigInteger>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.DigitsToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t*, int32_t)>(&::System::Number::DigitsToUInt32)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb99ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"DigitsToUInt32", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.DigitsToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint8_t*, int32_t)>(&::System::Number::DigitsToUInt64)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb99f5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"DigitsToUInt64", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToFloatingPointBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>)>(&::System::Number::NumberToFloatingPointBits)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb99f60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToFloatingPointBits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToFloatingPointBitsSlow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>, uint32_t, uint32_t, uint32_t)>(&::System::Number::NumberToFloatingPointBitsSlow)> {
  constexpr static std::size_t size = 0x4b8;
  constexpr static std::size_t addrs = 0xb99f8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToFloatingPointBitsSlow", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.RightShiftWithRounding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint64_t, int32_t, bool)>(&::System::Number::RightShiftWithRounding)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb99f2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"RightShiftWithRounding", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ShouldRoundUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(bool, bool, bool)>(&::System::Number::ShouldRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9a036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ShouldRoundUp", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.get_CharToHexLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ReadOnlySpan_1<uint8_t> (*)()>(&::System::Number::get_CharToHexLookup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb9a037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"get_CharToHexLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNumberToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<int32_t>)>(&::System::Number::TryNumberToInt32)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb9a03cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToInt32", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNumberToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<int64_t>)>(&::System::Number::TryNumberToInt64)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb9a0478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToInt64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNumberToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<uint32_t>)>(&::System::Number::TryNumberToUInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9a0520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToUInt32", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNumberToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<uint64_t>)>(&::System::Number::TryNumberToUInt64)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb9a05c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToUInt64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseInt32)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb9a0660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseInt64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb9a075c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseUInt32)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb9a0810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseUInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseUInt64)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb9a08c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseUInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<char16_t*>, char16_t*, ::System::Globalization::NumberStyles, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::TryParseNumber)> {
  constexpr static std::size_t size = 0x6b8;
  constexpr static std::size_t addrs = 0xb9a0978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseNumber", {}, {::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int32_t>)>(&::System::Number::TryParseInt32)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb9a1130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt32Number
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int32_t>)>(&::System::Number::TryParseInt32Number)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb9a1b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt32Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt32IntegerStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int32_t>)>(&::System::Number::TryParseInt32IntegerStyle)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0xb9a1230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt32IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt64IntegerStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int64_t>)>(&::System::Number::TryParseInt64IntegerStyle)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0xb9a1e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt64IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int64_t>)>(&::System::Number::TryParseInt64)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb9a23ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseInt64Number
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<int64_t>)>(&::System::Number::TryParseInt64Number)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb9a280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt64Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<uint32_t>)>(&::System::Number::TryParseUInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb9a2930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32Number
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<uint32_t>)>(&::System::Number::TryParseUInt32Number)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb9a2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32IntegerStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<uint32_t>)>(&::System::Number::TryParseUInt32IntegerStyle)> {
  constexpr static std::size_t size = 0x5cc;
  constexpr static std::size_t addrs = 0xb9a2a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt32HexNumberStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::by_ref<uint32_t>)>(&::System::Number::TryParseUInt32HexNumberStyle)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xb9a17d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32HexNumberStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<uint64_t>)>(&::System::Number::TryParseUInt64)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb9a3114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64Number
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<uint64_t>)>(&::System::Number::TryParseUInt64Number)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb9a37d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64IntegerStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<uint64_t>)>(&::System::Number::TryParseUInt64IntegerStyle)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xb9a3208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseUInt64HexNumberStyle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::by_ref<uint64_t>)>(&::System::Number::TryParseUInt64HexNumberStyle)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xb9a24ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64HexNumberStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseDecimal)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb9a38fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseDecimal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryNumberToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::by_ref<::System::Decimal>)>(&::System::Number::TryNumberToDecimal)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0xb9a3b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToDecimal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseDouble)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb9a3dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseDouble", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ParseSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::ParseSingle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb9a4488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseSingle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_ParsingStatus (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<::System::Decimal>)>(&::System::Number::TryParseDecimal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb9a39e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseDecimal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<double_t>)>(&::System::Number::TryParseDouble)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xb9a3e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseDouble", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryParseSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ::by_ref<float_t>)>(&::System::Number::TryParseSingle)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0xb9a4534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseSingle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TryStringToNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::NumberStyles, ::by_ref<::GlobalNamespace::Number_NumberBuffer>, ::System::Globalization::NumberFormatInfo*)>(&::System::Number::TryStringToNumber)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb9a1c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryStringToNumber", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.TrailingZeros
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Number::TrailingZeros)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb9a1d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TrailingZeros", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.IsSpaceReplacingChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Number::IsSpaceReplacingChar)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb9a4c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsSpaceReplacingChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.MatchChars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t* (*)(char16_t*, char16_t*, ::StringW)>(&::System::Number::MatchChars)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb9a1044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"MatchChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.IsWhite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Number::IsWhite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9a1030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsWhite", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.IsDigit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Number::IsDigit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb9a1120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsDigit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ThrowOverflowOrFormatException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Number_ParsingStatus, ::System::TypeCode)>(&::System::Number::ThrowOverflowOrFormatException)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb9a0714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ThrowOverflowOrFormatException", {}, {::i2c::type_of<::GlobalNamespace::Number_ParsingStatus>(), ::i2c::type_of<::System::TypeCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.ThrowOverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TypeCode)>(&::System::Number::ThrowOverflowException)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb9a4db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ThrowOverflowException", {}, {::i2c::type_of<::System::TypeCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.GetException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (*)(::GlobalNamespace::Number_ParsingStatus, ::System::TypeCode)>(&::System::Number::GetException)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb9a4c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"GetException", {}, {::i2c::type_of<::GlobalNamespace::Number_ParsingStatus>(), ::i2c::type_of<::System::TypeCode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::NumberToDouble)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb9a4ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToDouble", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.NumberToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number::NumberToSingle)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb9a4bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToSingle", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number.Int32BitsToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::System::Number::Int32BitsToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb9a4df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32BitsToSingle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number._RoundNumber_g__ShouldRoundUp_70_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t, ::GlobalNamespace::Number_NumberBufferKind, bool)>(&::System::Number::_RoundNumber_g__ShouldRoundUp_70_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb99eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"<RoundNumber>g__ShouldRoundUp|70_0", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Number_NumberBufferKind>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Number::setStaticF_s_singleDigitStringCache(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_singleDigitStringCache", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_singleDigitStringCache()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_singleDigitStringCache", ::System::Number*>();
}
inline void System::Number::setStaticF_s_posCurrencyFormats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_posCurrencyFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posCurrencyFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_negCurrencyFormats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_negCurrencyFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negCurrencyFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_posPercentFormats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_posPercentFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_posPercentFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_negPercentFormats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_negPercentFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negPercentFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_negNumberFormats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::System::Number*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Number::getStaticF_s_negNumberFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "s_negNumberFormats", ::System::Number*>();
}
inline void System::Number::setStaticF_s_Pow10SingleTable(::ArrayW<float_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<float_t>, "s_Pow10SingleTable", ::System::Number*>(std::forward<::ArrayW<float_t>>(value));
}
inline ::ArrayW<float_t> System::Number::getStaticF_s_Pow10SingleTable()  {
return ::cordl_internals::getStaticField<::ArrayW<float_t>, "s_Pow10SingleTable", ::System::Number*>();
}
inline void System::Number::setStaticF_s_Pow10DoubleTable(::ArrayW<double_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<double_t>, "s_Pow10DoubleTable", ::System::Number*>(std::forward<::ArrayW<double_t>>(value));
}
inline ::ArrayW<double_t> System::Number::getStaticF_s_Pow10DoubleTable()  {
return ::cordl_internals::getStaticField<::ArrayW<double_t>, "s_Pow10DoubleTable", ::System::Number*>();
}
inline bool System::Number::IsNegative(double_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsNegative", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Number::IsNegativeInfinity(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsNegativeInfinity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f);
}
inline void System::Number::Dragon4Double(double_t  value, int32_t  cutoffNumber, bool  isSignificantDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Dragon4Double", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, cutoffNumber, isSignificantDigits, number);
}
inline void System::Number::Dragon4Single(float_t  value, int32_t  cutoffNumber, bool  isSignificantDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Dragon4Single", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, cutoffNumber, isSignificantDigits, number);
}
inline uint32_t System::Number::Dragon4(uint64_t  mantissa, int32_t  exponent, uint32_t  mantissaHighBitIdx, bool  hasUnequalMargins, int32_t  cutoffNumber, bool  isSignificantDigits, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  decimalExponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Dragon4", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, cutoffNumber, isSignificantDigits, buffer, decimalExponent);
}
inline ::StringW System::Number::FormatDecimal(::System::Decimal  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatDecimal", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline bool System::Number::TryFormatDecimal(::System::Decimal  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatDecimal", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
inline void System::Number::DecimalToNumber(::by_ref<::System::Decimal>  d, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"DecimalToNumber", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d, number);
}
inline ::StringW System::Number::FormatDouble(double_t  value, ::StringW  format, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline bool System::Number::TryFormatDouble(double_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
inline int32_t System::Number::GetFloatingPointMaxDigitsAndPrecision(char16_t  fmt, ::by_ref<int32_t>  precision, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<bool>  isSignificantDigits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"GetFloatingPointMaxDigitsAndPrecision", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fmt, precision, info, isSignificantDigits);
}
inline ::StringW System::Number::FormatDouble(::by_ref<::System::Text::ValueStringBuilder>  sb, double_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatDouble", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sb, value, format, info);
}
inline ::StringW System::Number::FormatSingle(float_t  value, ::StringW  format, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatSingle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, info);
}
inline bool System::Number::TryFormatSingle(float_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatSingle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, info, destination, charsWritten);
}
inline ::StringW System::Number::FormatSingle(::by_ref<::System::Text::ValueStringBuilder>  sb, float_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatSingle", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, sb, value, format, info);
}
inline bool System::Number::TryCopyTo(::StringW  source, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryCopyTo", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, destination, charsWritten);
}
inline ::StringW System::Number::FormatInt32(int32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatInt32(int32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline ::StringW System::Number::FormatUInt32(uint32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatUInt32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatUInt32(uint32_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatUInt32", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline ::StringW System::Number::FormatInt64(int64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatInt64", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatInt64(int64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatInt64", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline ::StringW System::Number::FormatUInt64(uint64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, format, provider);
}
inline bool System::Number::TryFormatUInt64(uint64_t  value, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryFormatUInt64", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, format, provider, destination, charsWritten);
}
inline void System::Number::Int32ToNumber(int32_t  value, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32ToNumber", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline ::StringW System::Number::NegativeInt32ToDecStr(int32_t  value, int32_t  digits, ::StringW  sNegative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NegativeInt32ToDecStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, digits, sNegative);
}
inline bool System::Number::TryNegativeInt32ToDecStr(int32_t  value, int32_t  digits, ::StringW  sNegative, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNegativeInt32ToDecStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, digits, sNegative, destination, charsWritten);
}
inline ::StringW System::Number::Int32ToHexStr(int32_t  value, char16_t  hexBase, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32ToHexStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, hexBase, digits);
}
inline bool System::Number::TryInt32ToHexStr(int32_t  value, char16_t  hexBase, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryInt32ToHexStr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, hexBase, digits, destination, charsWritten);
}
inline char16_t* System::Number::Int32ToHexChars(char16_t*  buffer, uint32_t  value, int32_t  hexBase, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32ToHexChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, buffer, value, hexBase, digits);
}
inline void System::Number::UInt32ToNumber(uint32_t  value, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToNumber", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline uint8_t* System::Number::UInt32ToDecChars(uint8_t*  bufferEnd, uint32_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToDecChars", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, bufferEnd, value, digits);
}
inline char16_t* System::Number::UInt32ToDecChars(char16_t*  bufferEnd, uint32_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToDecChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, bufferEnd, value, digits);
}
inline ::StringW System::Number::UInt32ToDecStr(uint32_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt32ToDecStr", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, digits);
}
inline bool System::Number::TryUInt32ToDecStr(uint32_t  value, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryUInt32ToDecStr", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, digits, destination, charsWritten);
}
inline void System::Number::Int64ToNumber(int64_t  input, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int64ToNumber", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, input, number);
}
inline ::StringW System::Number::NegativeInt64ToDecStr(int64_t  input, int32_t  digits, ::StringW  sNegative)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NegativeInt64ToDecStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, input, digits, sNegative);
}
inline bool System::Number::TryNegativeInt64ToDecStr(int64_t  input, int32_t  digits, ::StringW  sNegative, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNegativeInt64ToDecStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, input, digits, sNegative, destination, charsWritten);
}
inline ::StringW System::Number::Int64ToHexStr(int64_t  value, char16_t  hexBase, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int64ToHexStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, hexBase, digits);
}
inline bool System::Number::TryInt64ToHexStr(int64_t  value, char16_t  hexBase, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryInt64ToHexStr", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, hexBase, digits, destination, charsWritten);
}
inline void System::Number::UInt64ToNumber(uint64_t  value, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt64ToNumber", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, number);
}
inline ::StringW System::Number::UInt64ToDecStr(uint64_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"UInt64ToDecStr", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, digits);
}
inline bool System::Number::TryUInt64ToDecStr(uint64_t  value, int32_t  digits, ::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryUInt64ToDecStr", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, digits, destination, charsWritten);
}
inline char16_t System::Number::ParseFormatSpecifier(::System::ReadOnlySpan_1<char16_t>  format, ::by_ref<int32_t>  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseFormatSpecifier", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, format, digits);
}
inline void System::Number::NumberToString(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, char16_t  format, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToString", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, format, nMaxDigits, info);
}
inline void System::Number::NumberToStringFormat(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToStringFormat", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, format, info);
}
inline void System::Number::FormatCurrency(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatCurrency", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMaxDigits, info);
}
inline void System::Number::FormatFixed(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::ArrayW<int32_t>  groupDigits, ::StringW  sDecimal, ::StringW  sGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatFixed", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMaxDigits, groupDigits, sDecimal, sGroup);
}
inline void System::Number::FormatNumber(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatNumber", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMaxDigits, info);
}
inline void System::Number::FormatScientific(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, char16_t  expChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatScientific", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMaxDigits, info, expChar);
}
inline void System::Number::FormatExponent(::by_ref<::System::Text::ValueStringBuilder>  sb, ::System::Globalization::NumberFormatInfo*  info, int32_t  value, char16_t  expChar, int32_t  minDigits, bool  positiveSign)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatExponent", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, info, value, expChar, minDigits, positiveSign);
}
inline void System::Number::FormatGeneral(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info, char16_t  expChar, bool  bSuppressScientific)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatGeneral", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMaxDigits, info, expChar, bSuppressScientific);
}
inline void System::Number::FormatPercent(::by_ref<::System::Text::ValueStringBuilder>  sb, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  nMaxDigits, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FormatPercent", {}, {::i2c::type_of<::by_ref<::System::Text::ValueStringBuilder>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, number, nMaxDigits, info);
}
inline void System::Number::RoundNumber(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, int32_t  pos, bool  isCorrectlyRounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"RoundNumber", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, pos, isCorrectlyRounded);
}
inline int32_t System::Number::FindSection(::System::ReadOnlySpan_1<char16_t>  format, int32_t  section)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FindSection", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, format, section);
}
inline uint32_t System::Number::Low32(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Low32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Number::High32(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"High32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Number::Int64DivMod1E9(::by_ref<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int64DivMod1E9", {}, {::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Number::ExtractFractionAndBiasedExponent(double_t  value, ::by_ref<int32_t>  exponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ExtractFractionAndBiasedExponent", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, exponent);
}
inline uint32_t System::Number::ExtractFractionAndBiasedExponent(float_t  value, ::by_ref<int32_t>  exponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ExtractFractionAndBiasedExponent", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, exponent);
}
inline ::StringW System::Number::FastAllocateString(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"FastAllocateString", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, length);
}
inline int32_t System::Number::SingleToInt32Bits(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"SingleToInt32Bits", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline void System::Number::AccumulateDecimalDigitsIntoBigInteger(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, uint32_t  firstIndex, uint32_t  lastIndex, ::by_ref<::GlobalNamespace::Number_BigInteger>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"AccumulateDecimalDigitsIntoBigInteger", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_BigInteger>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, firstIndex, lastIndex, result);
}
inline uint64_t System::Number::AssembleFloatingPointBits(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info, uint64_t  initialMantissa, int32_t  initialExponent, bool  hasZeroTail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"AssembleFloatingPointBits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, info, initialMantissa, initialExponent, hasZeroTail);
}
inline uint64_t System::Number::ConvertBigIntegerToFloatingPointBits(::by_ref<::GlobalNamespace::Number_BigInteger>  value, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info, uint32_t  integerBitsOfPrecision, bool  hasNonZeroFractionalPart)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ConvertBigIntegerToFloatingPointBits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_BigInteger>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, info, integerBitsOfPrecision, hasNonZeroFractionalPart);
}
inline uint32_t System::Number::DigitsToUInt32(uint8_t*  p, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"DigitsToUInt32", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, p, count);
}
inline uint64_t System::Number::DigitsToUInt64(uint8_t*  p, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"DigitsToUInt64", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, p, count);
}
inline uint64_t System::Number::NumberToFloatingPointBits(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToFloatingPointBits", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, number, info);
}
inline uint64_t System::Number::NumberToFloatingPointBitsSlow(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_FloatingPointInfo>  info, uint32_t  positiveExponent, uint32_t  integerDigitsPresent, uint32_t  fractionalDigitsPresent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToFloatingPointBitsSlow", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_FloatingPointInfo>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, number, info, positiveExponent, integerDigitsPresent, fractionalDigitsPresent);
}
inline uint64_t System::Number::RightShiftWithRounding(uint64_t  value, int32_t  shift, bool  hasZeroTail)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"RightShiftWithRounding", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, shift, hasZeroTail);
}
inline bool System::Number::ShouldRoundUp(bool  lsbBit, bool  roundBit, bool  hasTailBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ShouldRoundUp", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lsbBit, roundBit, hasTailBits);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Number::get_CharToHexLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"get_CharToHexLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>>(nullptr, ___internal_method);
}
inline bool System::Number::TryNumberToInt32(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToInt32", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Number::TryNumberToInt64(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<int64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToInt64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Number::TryNumberToUInt32(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<uint32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToUInt32", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline bool System::Number::TryNumberToUInt64(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<uint64_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToUInt64", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline int32_t System::Number::ParseInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, styles, info);
}
inline int64_t System::Number::ParseInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, styles, info);
}
inline uint32_t System::Number::ParseUInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseUInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, styles, info);
}
inline uint64_t System::Number::ParseUInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseUInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, styles, info);
}
inline bool System::Number::TryParseNumber(::by_ref<char16_t*>  str, char16_t*  strEnd, ::System::Globalization::NumberStyles  styles, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseNumber", {}, {::i2c::type_of<::by_ref<char16_t*>>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, strEnd, styles, number, info);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseInt32Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt32Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt32IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt64IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseInt64Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseInt64Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt32(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt32Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt32IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt32HexNumberStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::by_ref<uint32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt32HexNumberStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt64(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt64Number(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64Number", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt64IntegerStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<uint64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64IntegerStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseUInt64HexNumberStyle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::by_ref<uint64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseUInt64HexNumberStyle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<uint64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, result);
}
inline ::System::Decimal System::Number::ParseDecimal(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseDecimal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value, styles, info);
}
inline bool System::Number::TryNumberToDecimal(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::by_ref<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryNumberToDecimal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, number, value);
}
inline double_t System::Number::ParseDouble(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseDouble", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, styles, info);
}
inline float_t System::Number::ParseSingle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ParseSingle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, styles, info);
}
inline ::GlobalNamespace::Number_ParsingStatus System::Number::TryParseDecimal(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<::System::Decimal>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseDecimal", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_ParsingStatus>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseDouble(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<double_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseDouble", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<double_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryParseSingle(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::System::Globalization::NumberFormatInfo*  info, ::by_ref<float_t>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryParseSingle", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, info, result);
}
inline bool System::Number::TryStringToNumber(::System::ReadOnlySpan_1<char16_t>  value, ::System::Globalization::NumberStyles  styles, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number, ::System::Globalization::NumberFormatInfo*  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TryStringToNumber", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>(), ::i2c::type_of<::System::Globalization::NumberFormatInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, styles, number, info);
}
inline bool System::Number::TrailingZeros(::System::ReadOnlySpan_1<char16_t>  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"TrailingZeros", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, index);
}
inline bool System::Number::IsSpaceReplacingChar(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsSpaceReplacingChar", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline char16_t* System::Number::MatchChars(char16_t*  p, char16_t*  pEnd, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"MatchChars", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<char16_t*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t*>(nullptr, ___internal_method, p, pEnd, value);
}
inline bool System::Number::IsWhite(int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsWhite", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline bool System::Number::IsDigit(int32_t  ch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"IsDigit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ch);
}
inline void System::Number::ThrowOverflowOrFormatException(::GlobalNamespace::Number_ParsingStatus  status, ::System::TypeCode  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ThrowOverflowOrFormatException", {}, {::i2c::type_of<::GlobalNamespace::Number_ParsingStatus>(), ::i2c::type_of<::System::TypeCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, status, type);
}
inline void System::Number::ThrowOverflowException(::System::TypeCode  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"ThrowOverflowException", {}, {::i2c::type_of<::System::TypeCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type);
}
inline ::System::Exception* System::Number::GetException(::GlobalNamespace::Number_ParsingStatus  status, ::System::TypeCode  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"GetException", {}, {::i2c::type_of<::GlobalNamespace::Number_ParsingStatus>(), ::i2c::type_of<::System::TypeCode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(nullptr, ___internal_method, status, type);
}
inline double_t System::Number::NumberToDouble(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToDouble", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, number);
}
inline float_t System::Number::NumberToSingle(::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"NumberToSingle", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, number);
}
inline float_t System::Number::Int32BitsToSingle(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"Int32BitsToSingle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline bool System::Number::_RoundNumber_g__ShouldRoundUp_70_0(uint8_t*  _dig, int32_t  _i, ::GlobalNamespace::Number_NumberBufferKind  numberKind, bool  _isCorrectlyRounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number*>(),
                        {"<RoundNumber>g__ShouldRoundUp|70_0", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Number_NumberBufferKind>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _dig, _i, numberKind, _isCorrectlyRounded);
}
// Ctor Parameters []
constexpr ::System::Number::Number()   {
}
//  Writing Method size for method: ::System::Number_Grisu3.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Number_Grisu3::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb9a6760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"IsNegative", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.IsNegativeInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::Number_Grisu3::IsNegativeInfinity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb9a676c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"IsNegativeInfinity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryRunDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t, int32_t, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number_Grisu3::TryRunDouble)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb9a6780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryRunSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, int32_t, ::by_ref<::GlobalNamespace::Number_NumberBuffer>)>(&::System::Number_Grisu3::TryRunSingle)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb9a6b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunSingle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryRunCounted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_DiyFp>, int32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Number_Grisu3::TryRunCounted)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb9a6a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunCounted", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryRunShortest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Number_Grisu3::TryRunShortest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb9a6904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunShortest", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.BiggestPowerTen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t, ::by_ref<int32_t>)>(&::System::Number_Grisu3::BiggestPowerTen)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb9a72d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"BiggestPowerTen", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryDigitGenCounted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_DiyFp>, int32_t, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Number_Grisu3::TryDigitGenCounted)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xb9a6dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryDigitGenCounted", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryDigitGenShortest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::by_ref<::GlobalNamespace::Number_DiyFp>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Number_Grisu3::TryDigitGenShortest)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb9a7070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryDigitGenShortest", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.GetCachedPowerForBinaryExponentRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Number_DiyFp (*)(int32_t, int32_t, ::by_ref<int32_t>)>(&::System::Number_Grisu3::GetCachedPowerForBinaryExponentRange)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb9a6c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"GetCachedPowerForBinaryExponentRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryRoundWeedCounted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Span_1<uint8_t>, int32_t, uint64_t, uint64_t, uint64_t, ::by_ref<int32_t>)>(&::System::Number_Grisu3::TryRoundWeedCounted)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb9a73bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRoundWeedCounted", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Number_Grisu3.TryRoundWeedShortest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Span_1<uint8_t>, int32_t, uint64_t, uint64_t, uint64_t, uint64_t, uint64_t)>(&::System::Number_Grisu3::TryRoundWeedShortest)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb9a74a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRoundWeedShortest", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Number_Grisu3::setStaticF_s_CachedPowersBinaryExponent(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "s_CachedPowersBinaryExponent", ::System::Number_Grisu3*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> System::Number_Grisu3::getStaticF_s_CachedPowersBinaryExponent()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "s_CachedPowersBinaryExponent", ::System::Number_Grisu3*>();
}
inline void System::Number_Grisu3::setStaticF_s_CachedPowersDecimalExponent(::ArrayW<int16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int16_t>, "s_CachedPowersDecimalExponent", ::System::Number_Grisu3*>(std::forward<::ArrayW<int16_t>>(value));
}
inline ::ArrayW<int16_t> System::Number_Grisu3::getStaticF_s_CachedPowersDecimalExponent()  {
return ::cordl_internals::getStaticField<::ArrayW<int16_t>, "s_CachedPowersDecimalExponent", ::System::Number_Grisu3*>();
}
inline void System::Number_Grisu3::setStaticF_s_CachedPowersSignificand(::ArrayW<uint64_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint64_t>, "s_CachedPowersSignificand", ::System::Number_Grisu3*>(std::forward<::ArrayW<uint64_t>>(value));
}
inline ::ArrayW<uint64_t> System::Number_Grisu3::getStaticF_s_CachedPowersSignificand()  {
return ::cordl_internals::getStaticField<::ArrayW<uint64_t>, "s_CachedPowersSignificand", ::System::Number_Grisu3*>();
}
inline void System::Number_Grisu3::setStaticF_s_SmallPowersOfTen(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_SmallPowersOfTen", ::System::Number_Grisu3*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> System::Number_Grisu3::getStaticF_s_SmallPowersOfTen()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_SmallPowersOfTen", ::System::Number_Grisu3*>();
}
inline bool System::Number_Grisu3::IsNegative(double_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"IsNegative", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::Number_Grisu3::IsNegativeInfinity(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"IsNegativeInfinity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f);
}
inline bool System::Number_Grisu3::TryRunDouble(double_t  value, int32_t  requestedDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, requestedDigits, number);
}
inline bool System::Number_Grisu3::TryRunSingle(float_t  value, int32_t  requestedDigits, ::by_ref<::GlobalNamespace::Number_NumberBuffer>  number)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunSingle", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_NumberBuffer>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, requestedDigits, number);
}
inline bool System::Number_Grisu3::TryRunCounted(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, int32_t  requestedDigits, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  decimalExponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunCounted", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, w, requestedDigits, buffer, length, decimalExponent);
}
inline bool System::Number_Grisu3::TryRunShortest(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  boundaryMinus, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  boundaryPlus, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  decimalExponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRunShortest", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, boundaryMinus, w, boundaryPlus, buffer, length, decimalExponent);
}
inline uint32_t System::Number_Grisu3::BiggestPowerTen(uint32_t  number, int32_t  numberBits, ::by_ref<int32_t>  exponentPlusOne)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"BiggestPowerTen", {}, {::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, number, numberBits, exponentPlusOne);
}
inline bool System::Number_Grisu3::TryDigitGenCounted(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, int32_t  requestedDigits, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  kappa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryDigitGenCounted", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, w, requestedDigits, buffer, length, kappa);
}
inline bool System::Number_Grisu3::TryDigitGenShortest(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  low, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  w, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Number_DiyFp>  high, ::System::Span_1<uint8_t>  buffer, ::by_ref<int32_t>  length, ::by_ref<int32_t>  kappa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryDigitGenShortest", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::Number_DiyFp>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, low, w, high, buffer, length, kappa);
}
inline ::GlobalNamespace::Number_DiyFp System::Number_Grisu3::GetCachedPowerForBinaryExponentRange(int32_t  minExponent, int32_t  maxExponent, ::by_ref<int32_t>  decimalExponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"GetCachedPowerForBinaryExponentRange", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Number_DiyFp>(nullptr, ___internal_method, minExponent, maxExponent, decimalExponent);
}
inline bool System::Number_Grisu3::TryRoundWeedCounted(::System::Span_1<uint8_t>  buffer, int32_t  length, uint64_t  rest, uint64_t  tenKappa, uint64_t  unit, ::by_ref<int32_t>  kappa)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRoundWeedCounted", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, length, rest, tenKappa, unit, kappa);
}
inline bool System::Number_Grisu3::TryRoundWeedShortest(::System::Span_1<uint8_t>  buffer, int32_t  length, uint64_t  distanceTooHighW, uint64_t  unsafeInterval, uint64_t  rest, uint64_t  tenKappa, uint64_t  unit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Number_Grisu3*>(),
                        {"TryRoundWeedShortest", {}, {::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer, length, distanceTooHighW, unsafeInterval, rest, tenKappa, unit);
}
// Ctor Parameters []
constexpr ::System::Number_Grisu3::Number_Grisu3()   {
}
