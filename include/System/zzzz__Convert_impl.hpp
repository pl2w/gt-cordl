#pragma once
// IWYU pragma private; include "System/Convert.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "System/zzzz__Convert_def.hpp"
#include "System/zzzz__Base64FormattingOptions_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Convert.TryDecodeFromUtf16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Convert::TryDecodeFromUtf16)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xa22d320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"TryDecodeFromUtf16", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.Decode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<char16_t>, ::by_ref<int8_t>)>(&::System::Convert::Decode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa22d6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"Decode", {}, {::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<int8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.WriteThreeLowOrderBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint8_t>, int32_t)>(&::System::Convert::WriteThreeLowOrderBytes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa22d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"WriteThreeLowOrderBytes", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.GetTypeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (*)(::System::Object*)>(&::System::Convert::GetTypeCode)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa22d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"GetTypeCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::TypeCode, ::System::IFormatProvider*)>(&::System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x8a0;
  constexpr static std::size_t addrs = 0xa22d7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ChangeType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.DefaultToType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::IConvertible*, ::System::Type*, ::System::IFormatProvider*)>(&::System::Convert::DefaultToType)> {
  constexpr static std::size_t size = 0xab0;
  constexpr static std::size_t addrs = 0xa229a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"DefaultToType", {}, {::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa22e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ChangeType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*, ::System::IFormatProvider*)>(&::System::Convert::ChangeType)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0xa22e110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ChangeType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowCharOverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowCharOverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22ea5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowCharOverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowByteOverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowByteOverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22eaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowByteOverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowSByteOverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowSByteOverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22eaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowSByteOverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowInt16OverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowInt16OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22eb40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowInt16OverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowUInt16OverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowUInt16OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22eb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowUInt16OverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowInt32OverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowInt32OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22ebd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowInt32OverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowUInt32OverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowUInt32OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowUInt32OverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowInt64OverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowInt64OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22ec70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowInt64OverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ThrowUInt64OverflowException
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::System::Convert::ThrowUInt64OverflowException)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa22ecbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowUInt64OverflowException", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa22ed08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa22edfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int8_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint8_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22af8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int16_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint16_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint32_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(uint64_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22ef48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa22ef54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa22ef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22efbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22efc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal)>(&::System::Convert::ToBoolean)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa22efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::Object*)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa22f048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa22f13c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int8_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa22f240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint8_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22aff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int16_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa22f29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint16_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa22f2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int32_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint32_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(int64_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(uint64_t)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa22f47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToChar)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa22f4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Object*)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa22f56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa22f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(bool)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2294f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(char16_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa22bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint8_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa22b050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int16_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa22f764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint16_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa22f7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int32_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint32_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(int64_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(uint64_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22f950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(float_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa22f9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(double_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Decimal)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa22fb60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa22fbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Object*)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa22fbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa22fcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(bool)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(char16_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa22c07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int8_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa22fddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int16_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa22fe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint16_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa22fe9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int32_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22ff00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint32_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22ff60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(int64_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa22ffc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(uint64_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(float_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa230080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(double_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa2300dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Decimal)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa23013c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa2301b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa230224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Object*)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa230238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa23032c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(bool)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2295c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(char16_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa22c138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int8_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa230430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint8_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22b10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint16_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa230438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int32_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint32_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa2304f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(int64_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(uint64_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa2305b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(float_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa230614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(double_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Decimal)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa2306d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa230744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Object*)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa23075c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa230850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(bool)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa229624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(char16_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa22c1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int8_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa230954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint8_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22b16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int16_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2309b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int32_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint32_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(int64_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(uint64_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(float_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa230b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(double_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Decimal)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa230c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa230cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa230cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa230dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(bool)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa229688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22c248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int8_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa230ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22b1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int16_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa230ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint16_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa230edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint32_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa230ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int64_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint64_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa230fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(double_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa22fa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa23105c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2310d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa231148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Object*)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa231160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa231254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(bool)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2296ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(char16_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22c2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int8_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint8_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22b22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int16_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2313b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint16_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa231410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int32_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(int64_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa231474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint64_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa2314d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(float_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(double_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa231590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa231630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2316a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Object*)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa2316bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa2317b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(bool)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa229750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(char16_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22c308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int8_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2318b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint8_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22b28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int16_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2318bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint16_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2318c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int32_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2318cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint32_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2318d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(uint64_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa2318dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(float_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(double_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa231994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa231aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa231b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa231b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Object*)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa231ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa231c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(bool)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2297b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(char16_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int8_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint8_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa22b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int16_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint16_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa231e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int32_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(uint32_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa231ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(int64_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(float_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa231f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(double_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa231f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa232078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2320ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Object*)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa232104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa2321f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int8_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2322fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint8_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22b34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int16_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa232308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint16_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa232314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint32_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int64_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(uint64_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa232338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa232344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(double_t)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Decimal)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa232350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2323b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa232430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(bool)>(&::System::Convert::ToSingle)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa229820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Object*)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa23244c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa232540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int8_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa232644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint8_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa22b3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int16_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa232650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint16_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa23265c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int32_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint32_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(int64_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(uint64_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(float_t)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa232688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Decimal)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa232690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2326f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa232770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(bool)>(&::System::Convert::ToDouble)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa229898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Object*)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xa23278c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa2328a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int8_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2329d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint8_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa22b414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int16_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint16_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int32_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint32_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int64_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint64_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(float_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa232c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(double_t)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa232c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa232cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(bool)>(&::System::Convert::ToDecimal)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa229908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa232d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDateTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::StringW, ::System::IFormatProvider*)>(&::System::Convert::ToDateTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa232eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDateTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa232f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa232f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa233130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(char16_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa233164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa233198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2331b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint64_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2331cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(double_t, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2331e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Decimal, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa233204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::DateTime, ::System::IFormatProvider*)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa233298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::StringW, int32_t)>(&::System::Convert::ToByte)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa233304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::StringW, int32_t)>(&::System::Convert::ToSByte)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa233414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::StringW, int32_t)>(&::System::Convert::ToInt16)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa233534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::StringW, int32_t)>(&::System::Convert::ToUInt16)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa233654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::System::Convert::ToInt32)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa233764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW, int32_t)>(&::System::Convert::ToUInt32)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa233838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW, int32_t)>(&::System::Convert::ToInt64)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa23390c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::StringW, int32_t)>(&::System::Convert::ToUInt64)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa2339e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint8_t, int32_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa233ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa233b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int64_t, int32_t)>(&::System::Convert::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa233bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa233c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, ::System::Base64FormattingOptions)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa233e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa233f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::System::Base64FormattingOptions)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa233fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::ReadOnlySpan_1<uint8_t>, ::System::Base64FormattingOptions)>(&::System::Convert::ToBase64String)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa233cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64CharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t)>(&::System::Convert::ToBase64CharArray)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa23443c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64CharArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64CharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<char16_t>, int32_t, ::System::Base64FormattingOptions)>(&::System::Convert::ToBase64CharArray)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xa2344c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64CharArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ConvertToBase64Array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, uint8_t*, int32_t, int32_t, bool)>(&::System::Convert::ConvertToBase64Array)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xa234204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ConvertToBase64Array", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.ToBase64_CalculateAndValidateOutputLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, bool)>(&::System::Convert::ToBase64_CalculateAndValidateOutputLength)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa234154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64_CalculateAndValidateOutputLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::StringW)>(&::System::Convert::FromBase64String)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa2347c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.TryFromBase64Chars
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<uint8_t>, ::by_ref<int32_t>)>(&::System::Convert::TryFromBase64Chars)> {
  constexpr static std::size_t size = 0x518;
  constexpr static std::size_t addrs = 0xa234a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"TryFromBase64Chars", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.CopyToTempBufferWithoutWhiteSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Span_1<char16_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::System::Convert::CopyToTempBufferWithoutWhiteSpace)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa234f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"CopyToTempBufferWithoutWhiteSpace", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.IsSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(char16_t)>(&::System::Convert::IsSpace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa235044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"IsSpace", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64CharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(::ArrayW<char16_t>, int32_t, int32_t)>(&::System::Convert::FromBase64CharArray)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xa235064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64CharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64CharPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (*)(char16_t*, int32_t)>(&::System::Convert::FromBase64CharPtr)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa23487c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64CharPtr", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Convert.FromBase64_ComputeResultLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(char16_t*, int32_t)>(&::System::Convert::FromBase64_ComputeResultLength)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa235260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64_ComputeResultLength", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Convert::setStaticF_s_decodingMap(::ArrayW<int8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int8_t>, "s_decodingMap", ::System::Convert*>(std::forward<::ArrayW<int8_t>>(value));
}
inline ::ArrayW<int8_t> System::Convert::getStaticF_s_decodingMap()  {
return ::cordl_internals::getStaticField<::ArrayW<int8_t>, "s_decodingMap", ::System::Convert*>();
}
inline void System::Convert::setStaticF_ConvertTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "ConvertTypes", ::System::Convert*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Convert::getStaticF_ConvertTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "ConvertTypes", ::System::Convert*>();
}
inline void System::Convert::setStaticF_EnumType(::System::Type*  value)  {
::cordl_internals::setStaticField<::System::Type*, "EnumType", ::System::Convert*>(std::forward<::System::Type*>(value));
}
inline ::System::Type* System::Convert::getStaticF_EnumType()  {
return ::cordl_internals::getStaticField<::System::Type*, "EnumType", ::System::Convert*>();
}
inline void System::Convert::setStaticF_base64Table(::ArrayW<char16_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t>, "base64Table", ::System::Convert*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> System::Convert::getStaticF_base64Table()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "base64Table", ::System::Convert*>();
}
inline void System::Convert::setStaticF_DBNull(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "DBNull", ::System::Convert*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Convert::getStaticF_DBNull()  {
return ::cordl_internals::getStaticField<::System::Object*, "DBNull", ::System::Convert*>();
}
inline bool System::Convert::TryDecodeFromUtf16(::System::ReadOnlySpan_1<char16_t>  utf16, ::System::Span_1<uint8_t>  bytes, ::by_ref<int32_t>  consumed, ::by_ref<int32_t>  written)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"TryDecodeFromUtf16", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, utf16, bytes, consumed, written);
}
inline int32_t System::Convert::Decode(::by_ref<char16_t>  encodedChars, ::by_ref<int8_t>  decodingMap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"Decode", {}, {::i2c::type_of<::by_ref<char16_t>>(), ::i2c::type_of<::by_ref<int8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, encodedChars, decodingMap);
}
inline void System::Convert::WriteThreeLowOrderBytes(::by_ref<uint8_t>  destination, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"WriteThreeLowOrderBytes", {}, {::i2c::type_of<::by_ref<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, destination, value);
}
inline ::System::TypeCode System::Convert::GetTypeCode(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"GetTypeCode", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(nullptr, ___internal_method, value);
}
inline ::System::Object* System::Convert::ChangeType(::System::Object*  value, ::System::TypeCode  typeCode, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ChangeType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::TypeCode>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, typeCode, provider);
}
inline ::System::Object* System::Convert::DefaultToType(::System::IConvertible*  value, ::System::Type*  targetType, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"DefaultToType", {}, {::i2c::type_of<::System::IConvertible*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, targetType, provider);
}
inline ::System::Object* System::Convert::ChangeType(::System::Object*  value, ::System::Type*  conversionType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ChangeType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, conversionType);
}
inline ::System::Object* System::Convert::ChangeType(::System::Object*  value, ::System::Type*  conversionType, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ChangeType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, value, conversionType, provider);
}
inline void System::Convert::ThrowCharOverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowCharOverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowByteOverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowByteOverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowSByteOverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowSByteOverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowInt16OverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowInt16OverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowUInt16OverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowUInt16OverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowInt32OverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowInt32OverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowUInt32OverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowUInt32OverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowInt64OverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowInt64OverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void System::Convert::ThrowUInt64OverflowException()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ThrowUInt64OverflowException", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool System::Convert::ToBoolean(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, provider);
}
inline bool System::Convert::ToBoolean(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value, provider);
}
inline bool System::Convert::ToBoolean(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline bool System::Convert::ToBoolean(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBoolean", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value, provider);
}
inline char16_t System::Convert::ToChar(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value);
}
inline char16_t System::Convert::ToChar(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToChar", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(nullptr, ___internal_method, value, provider);
}
inline int8_t System::Convert::ToSByte(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value, provider);
}
inline int8_t System::Convert::ToSByte(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Convert::ToSByte(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value, provider);
}
inline uint8_t System::Convert::ToByte(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, provider);
}
inline uint8_t System::Convert::ToByte(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline uint8_t System::Convert::ToByte(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, provider);
}
inline int16_t System::Convert::ToInt16(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, provider);
}
inline int16_t System::Convert::ToInt16(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Convert::ToInt16(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, provider);
}
inline uint16_t System::Convert::ToUInt16(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, provider);
}
inline uint16_t System::Convert::ToUInt16(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint16_t System::Convert::ToUInt16(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, provider);
}
inline int32_t System::Convert::ToInt32(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, provider);
}
inline int32_t System::Convert::ToInt32(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t System::Convert::ToInt32(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, provider);
}
inline uint32_t System::Convert::ToUInt32(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, provider);
}
inline uint32_t System::Convert::ToUInt32(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Convert::ToUInt32(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, provider);
}
inline int64_t System::Convert::ToInt64(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, provider);
}
inline int64_t System::Convert::ToInt64(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Convert::ToInt64(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, provider);
}
inline uint64_t System::Convert::ToUInt64(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, provider);
}
inline uint64_t System::Convert::ToUInt64(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Convert::ToUInt64(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, provider);
}
inline float_t System::Convert::ToSingle(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, provider);
}
inline float_t System::Convert::ToSingle(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline float_t System::Convert::ToSingle(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, provider);
}
inline float_t System::Convert::ToSingle(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSingle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, provider);
}
inline double_t System::Convert::ToDouble(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline double_t System::Convert::ToDouble(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value, provider);
}
inline double_t System::Convert::ToDouble(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDouble", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value, provider);
}
inline ::System::Decimal System::Convert::ToDecimal(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Convert::ToDecimal(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value, provider);
}
inline ::System::Decimal System::Convert::ToDecimal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDecimal", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::DateTime System::Convert::ToDateTime(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDateTime", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value, provider);
}
inline ::System::DateTime System::Convert::ToDateTime(::StringW  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToDateTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Convert::ToString(::System::Object*  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::StringW System::Convert::ToString(char16_t  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<char16_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(int32_t  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(int64_t  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(uint64_t  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(double_t  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(::System::Decimal  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline ::StringW System::Convert::ToString(::System::DateTime  value, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, provider);
}
inline uint8_t System::Convert::ToByte(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value, fromBase);
}
inline int8_t System::Convert::ToSByte(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToSByte", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value, fromBase);
}
inline int16_t System::Convert::ToInt16(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value, fromBase);
}
inline uint16_t System::Convert::ToUInt16(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt16", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value, fromBase);
}
inline int32_t System::Convert::ToInt32(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, fromBase);
}
inline uint32_t System::Convert::ToUInt32(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt32", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value, fromBase);
}
inline int64_t System::Convert::ToInt64(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value, fromBase);
}
inline uint64_t System::Convert::ToUInt64(::StringW  value, int32_t  fromBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToUInt64", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value, fromBase);
}
inline ::StringW System::Convert::ToString(uint8_t  value, int32_t  toBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, toBase);
}
inline ::StringW System::Convert::ToString(int32_t  value, int32_t  toBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, toBase);
}
inline ::StringW System::Convert::ToString(int64_t  value, int32_t  toBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToString", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, toBase);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t>  inArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t>  inArray, ::System::Base64FormattingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray, options);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t>  inArray, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray, offset, length);
}
inline ::StringW System::Convert::ToBase64String(::ArrayW<uint8_t>  inArray, int32_t  offset, int32_t  length, ::System::Base64FormattingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, inArray, offset, length, options);
}
inline ::StringW System::Convert::ToBase64String(::System::ReadOnlySpan_1<uint8_t>  bytes, ::System::Base64FormattingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64String", {}, {::i2c::type_of<::System::ReadOnlySpan_1<uint8_t>>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, bytes, options);
}
inline int32_t System::Convert::ToBase64CharArray(::ArrayW<uint8_t>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t>  outArray, int32_t  offsetOut)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64CharArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inArray, offsetIn, length, outArray, offsetOut);
}
inline int32_t System::Convert::ToBase64CharArray(::ArrayW<uint8_t>  inArray, int32_t  offsetIn, int32_t  length, ::ArrayW<char16_t>  outArray, int32_t  offsetOut, ::System::Base64FormattingOptions  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64CharArray", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Base64FormattingOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inArray, offsetIn, length, outArray, offsetOut, options);
}
inline int32_t System::Convert::ConvertToBase64Array(char16_t*  outChars, uint8_t*  inData, int32_t  offset, int32_t  length, bool  insertLineBreaks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ConvertToBase64Array", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, outChars, inData, offset, length, insertLineBreaks);
}
inline int32_t System::Convert::ToBase64_CalculateAndValidateOutputLength(int32_t  inputLength, bool  insertLineBreaks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"ToBase64_CalculateAndValidateOutputLength", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputLength, insertLineBreaks);
}
inline ::ArrayW<uint8_t> System::Convert::FromBase64String(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, s);
}
inline bool System::Convert::TryFromBase64Chars(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<uint8_t>  bytes, ::by_ref<int32_t>  bytesWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"TryFromBase64Chars", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<uint8_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, chars, bytes, bytesWritten);
}
inline void System::Convert::CopyToTempBufferWithoutWhiteSpace(::System::ReadOnlySpan_1<char16_t>  chars, ::System::Span_1<char16_t>  tempBuffer, ::by_ref<int32_t>  consumed, ::by_ref<int32_t>  charsWritten)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"CopyToTempBufferWithoutWhiteSpace", {}, {::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chars, tempBuffer, consumed, charsWritten);
}
inline bool System::Convert::IsSpace(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"IsSpace", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, c);
}
inline ::ArrayW<uint8_t> System::Convert::FromBase64CharArray(::ArrayW<char16_t>  inArray, int32_t  offset, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64CharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inArray, offset, length);
}
inline ::ArrayW<uint8_t> System::Convert::FromBase64CharPtr(char16_t*  inputPtr, int32_t  inputLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64CharPtr", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(nullptr, ___internal_method, inputPtr, inputLength);
}
inline int32_t System::Convert::FromBase64_ComputeResultLength(char16_t*  inputPtr, int32_t  inputLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Convert*>(),
                        {"FromBase64_ComputeResultLength", {}, {::i2c::type_of<char16_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, inputPtr, inputLength);
}
// Ctor Parameters []
constexpr ::System::Convert::Convert()   {
}
