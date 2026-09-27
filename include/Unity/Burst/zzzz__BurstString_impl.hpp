#pragma once
// IWYU pragma private; include "Unity/Burst/BurstString.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
#include "Unity/Burst/zzzz__BurstString_CutoffMode_def.hpp"
#include "Unity/Burst/zzzz__BurstString_FormatOptions_def.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberBufferKind_def.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberBuffer_def.hpp"
#include "Unity/Burst/zzzz__BurstString_NumberFormatKind_def.hpp"
#include "Unity/Burst/zzzz__BurstString_def.hpp"
#include "Unity/Burst/zzzz__BurstString_tBigInt_def.hpp"
#include "Unity/Burst/zzzz__BurstString_tFloatUnion32_def.hpp"
#include "Unity/Burst/zzzz__BurstString_tFloatUnion64_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstString.CopyFixedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Burst::BurstString::CopyFixedString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xae81458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"CopyFixedString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint8_t*, int32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xae8147c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, float_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae816ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, double_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae819d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, bool, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xae81d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, char16_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xae81ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint8_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae820c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint16_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae821d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae82254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint64_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae8214c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int8_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae82478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int16_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae826d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae82798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int64_t, int32_t)>(&::Unity::Burst::BurstString::Format)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae82858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertUnsignedIntegerToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint64_t, ::GlobalNamespace::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::ConvertUnsignedIntegerToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xae822d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertUnsignedIntegerToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.GetLengthIntegerToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::GetLengthIntegerToString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xae82be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"GetLengthIntegerToString", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertIntegerToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int64_t, ::GlobalNamespace::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::ConvertIntegerToString)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xae82538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertIntegerToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>, int32_t, ::GlobalNamespace::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::FormatNumber)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xae82990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatNumber", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatDecimalOrHexadecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>, int32_t, bool)>(&::Unity::Burst::BurstString::FormatDecimalOrHexadecimal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae82c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatDecimalOrHexadecimal", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ValueToIntegerChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t, bool)>(&::Unity::Burst::BurstString::ValueToIntegerChar)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae82940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ValueToIntegerChar", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.AlignRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::AlignRight)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae815e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"AlignRight", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.AlignLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, ::by_ref<int32_t>, int32_t, int32_t, int32_t)>(&::Unity::Burst::BurstString::AlignLeft)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xae815a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"AlignLeft", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.GetLengthForFormatGeneral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::BurstString_NumberBuffer>, int32_t)>(&::Unity::Burst::BurstString::GetLengthForFormatGeneral)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xae82de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"GetLengthForFormatGeneral", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatGeneral
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>, int32_t, uint8_t)>(&::Unity::Burst::BurstString::FormatGeneral)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xae82f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatGeneral", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.RoundNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_NumberBuffer>, int32_t, bool)>(&::Unity::Burst::BurstString::RoundNumber)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae82cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"RoundNumber", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ShouldRoundUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t*, int32_t, bool)>(&::Unity::Burst::BurstString::ShouldRoundUp)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae83140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ShouldRoundUp", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.LogBase2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::Unity::Burst::BurstString::LogBase2)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xae8315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"LogBase2", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Compare)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae832a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Compare", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Add)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae83300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Add", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Add_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Add_internal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae83394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Add_internal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae83434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply_internal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply_internal)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae834c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply_internal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Multiply)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xae835f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xae83658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae836b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Multiply10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_Multiply10)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae8370c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply10", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.g_PowerOf10_Big
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BurstString_tBigInt (*)(int32_t)>(&::Unity::Burst::BurstString::g_PowerOf10_Big)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xae83764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"g_PowerOf10_Big", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Pow10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Pow10)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xae839b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Pow10", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_MultiplyPow10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_MultiplyPow10)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xae83b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_MultiplyPow10", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_Pow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_Pow2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xae83d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Pow2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_DivideWithRemainder_MaxQuotient9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, ::by_ref<::GlobalNamespace::BurstString_tBigInt>)>(&::Unity::Burst::BurstString::BigInt_DivideWithRemainder_MaxQuotient9)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xae83dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_DivideWithRemainder_MaxQuotient9", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.BigInt_ShiftLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::BurstString_tBigInt>, uint32_t)>(&::Unity::Burst::BurstString::BigInt_ShiftLeft)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xae83f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_ShiftLeft", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.Dragon4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t, int32_t, uint32_t, bool, ::GlobalNamespace::BurstString_CutoffMode, uint32_t, uint8_t*, uint32_t, ::by_ref<int32_t>)>(&::Unity::Burst::BurstString::Dragon4)> {
  constexpr static std::size_t size = 0xb30;
  constexpr static std::size_t addrs = 0xae84044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Dragon4", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BurstString_CutoffMode>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.FormatInfinityNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, uint64_t, bool, ::GlobalNamespace::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::FormatInfinityNaN)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xae84bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatInfinityNaN", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertFloatToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, float_t, ::GlobalNamespace::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::ConvertFloatToString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xae81738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertFloatToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstString.ConvertDoubleToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, ::by_ref<int32_t>, int32_t, double_t, ::GlobalNamespace::BurstString_FormatOptions)>(&::Unity::Burst::BurstString::ConvertDoubleToString)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xae81a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertDoubleToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString::setStaticF_SplitByColon(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "SplitByColon", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> Unity::Burst::BurstString::getStaticF_SplitByColon()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "SplitByColon", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_logTable(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "logTable", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Burst::BurstString::getStaticF_logTable()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "logTable", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_g_PowerOf10_U32(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "g_PowerOf10_U32", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> Unity::Burst::BurstString::getStaticF_g_PowerOf10_U32()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "g_PowerOf10_U32", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_InfinityString(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "InfinityString", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Burst::BurstString::getStaticF_InfinityString()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "InfinityString", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::setStaticF_NanString(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "NanString", ::Unity::Burst::BurstString*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> Unity::Burst::BurstString::getStaticF_NanString()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "NanString", ::Unity::Burst::BurstString*>();
}
inline void Unity::Burst::BurstString::CopyFixedString(uint8_t*  dest, int32_t  destLength, uint8_t*  src, int32_t  srcLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"CopyFixedString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destLength, src, srcLength);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint8_t*  src, int32_t  srcLength, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, src, srcLength, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, float_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, double_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, bool  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, char16_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint8_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint16_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint32_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint64_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int8_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int16_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int32_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::Format(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int64_t  value, int32_t  formatOptionsRaw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Format", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptionsRaw);
}
inline void Unity::Burst::BurstString::ConvertUnsignedIntegerToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint64_t  value, ::GlobalNamespace::BurstString_FormatOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertUnsignedIntegerToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, options);
}
inline int32_t Unity::Burst::BurstString::GetLengthIntegerToString(int64_t  value, int32_t  basis, int32_t  zeroPadding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"GetLengthIntegerToString", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, basis, zeroPadding);
}
inline void Unity::Burst::BurstString::ConvertIntegerToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int64_t  value, ::GlobalNamespace::BurstString_FormatOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertIntegerToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, options);
}
inline void Unity::Burst::BurstString::FormatNumber(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  nMaxDigits, ::GlobalNamespace::BurstString_FormatOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatNumber", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, number, nMaxDigits, options);
}
inline void Unity::Burst::BurstString::FormatDecimalOrHexadecimal(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  zeroPadding, bool  outputPositiveSign)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatDecimalOrHexadecimal", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, number, zeroPadding, outputPositiveSign);
}
inline uint8_t Unity::Burst::BurstString::ValueToIntegerChar(int32_t  value, bool  uppercase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ValueToIntegerChar", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, uppercase);
}
inline bool Unity::Burst::BurstString::AlignRight(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int32_t  align, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"AlignRight", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dest, destIndex, destLength, align, length);
}
inline bool Unity::Burst::BurstString::AlignLeft(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, int32_t  align, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"AlignLeft", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dest, destIndex, destLength, align, length);
}
inline int32_t Unity::Burst::BurstString::GetLengthForFormatGeneral(::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  nMaxDigits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"GetLengthForFormatGeneral", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, number, nMaxDigits);
}
inline void Unity::Burst::BurstString::FormatGeneral(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, ::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  nMaxDigits, uint8_t  expChar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatGeneral", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, number, nMaxDigits, expChar);
}
inline void Unity::Burst::BurstString::RoundNumber(::by_ref<::GlobalNamespace::BurstString_NumberBuffer>  number, int32_t  pos, bool  isCorrectlyRounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"RoundNumber", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_NumberBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, number, pos, isCorrectlyRounded);
}
inline bool Unity::Burst::BurstString::ShouldRoundUp(uint8_t*  dig, int32_t  i, bool  isCorrectlyRounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ShouldRoundUp", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, dig, i, isCorrectlyRounded);
}
inline uint32_t Unity::Burst::BurstString::LogBase2(uint32_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"LogBase2", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, val);
}
inline int32_t Unity::Burst::BurstString::BigInt_Compare(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Compare", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Add(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Add", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Add_internal(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pLarge, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pSmall)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Add_internal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, pLarge, pSmall);
}
inline void Unity::Burst::BurstString::BigInt_Multiply(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Multiply_internal(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pLarge, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  pSmall)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply_internal", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, pLarge, pSmall);
}
inline void Unity::Burst::BurstString::BigInt_Multiply(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  lhs, uint32_t  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, lhs, rhs);
}
inline void Unity::Burst::BurstString::BigInt_Multiply2(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, input);
}
inline void Unity::Burst::BurstString::BigInt_Multiply2(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult);
}
inline void Unity::Burst::BurstString::BigInt_Multiply10(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Multiply10", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult);
}
inline ::GlobalNamespace::BurstString_tBigInt Unity::Burst::BurstString::g_PowerOf10_Big(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"g_PowerOf10_Big", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BurstString_tBigInt>(nullptr, ___internal_method, i);
}
inline void Unity::Burst::BurstString::BigInt_Pow10(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, uint32_t  exponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Pow10", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, exponent);
}
inline void Unity::Burst::BurstString::BigInt_MultiplyPow10(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  input, uint32_t  exponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_MultiplyPow10", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, input, exponent);
}
inline void Unity::Burst::BurstString::BigInt_Pow2(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, uint32_t  exponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_Pow2", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, exponent);
}
inline uint32_t Unity::Burst::BurstString::BigInt_DivideWithRemainder_MaxQuotient9(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pDividend, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BurstString_tBigInt>  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_DivideWithRemainder_MaxQuotient9", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pDividend, divisor);
}
inline void Unity::Burst::BurstString::BigInt_ShiftLeft(::by_ref<::GlobalNamespace::BurstString_tBigInt>  pResult, uint32_t  shift)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"BigInt_ShiftLeft", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BurstString_tBigInt>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pResult, shift);
}
inline uint32_t Unity::Burst::BurstString::Dragon4(uint64_t  mantissa, int32_t  exponent, uint32_t  mantissaHighBitIdx, bool  hasUnequalMargins, ::GlobalNamespace::BurstString_CutoffMode  cutoffMode, uint32_t  cutoffNumber, uint8_t*  pOutBuffer, uint32_t  bufferSize, ::by_ref<int32_t>  pOutExponent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"Dragon4", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BurstString_CutoffMode>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, mantissa, exponent, mantissaHighBitIdx, hasUnequalMargins, cutoffMode, cutoffNumber, pOutBuffer, bufferSize, pOutExponent);
}
inline void Unity::Burst::BurstString::FormatInfinityNaN(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, uint64_t  mantissa, bool  isNegative, ::GlobalNamespace::BurstString_FormatOptions  formatOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"FormatInfinityNaN", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, mantissa, isNegative, formatOptions);
}
inline void Unity::Burst::BurstString::ConvertFloatToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, float_t  value, ::GlobalNamespace::BurstString_FormatOptions  formatOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertFloatToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptions);
}
inline void Unity::Burst::BurstString::ConvertDoubleToString(uint8_t*  dest, ::by_ref<int32_t>  destIndex, int32_t  destLength, double_t  value, ::GlobalNamespace::BurstString_FormatOptions  formatOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString*>(),
                        {"ConvertDoubleToString", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<::GlobalNamespace::BurstString_FormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, destIndex, destLength, value, formatOptions);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString::BurstString()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstString_PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstString_PreserveAttribute::*)()>(&::Unity::Burst::BurstString_PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae84fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString_PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstString_PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstString_PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstString_PreserveAttribute* Unity::Burst::BurstString_PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstString_PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstString_PreserveAttribute::BurstString_PreserveAttribute()   {
}
