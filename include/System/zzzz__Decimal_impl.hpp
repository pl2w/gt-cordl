#pragma once
// IWYU pragma private; include "System/Decimal.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/Globalization/zzzz__NumberStyles_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_DecCalc_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__ISpanFormattable_def.hpp"
#include "System/zzzz__MidpointRounding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Decimal.get_High
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_High)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33b138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_High", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Low)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Low", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Mid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)()>(&::System::Decimal::get_Mid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33b148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Mid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)()>(&::System::Decimal::get_IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa33b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_IsNegative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::get_Scale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33b15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Scale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.get_Low64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Decimal::*)()>(&::System::Decimal::get_Low64)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa33b164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Low64", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.AsMutable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::Decimal_DecCalc> (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::AsMutable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa33b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"AsMutable", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.DecDivMod1E9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::DecDivMod1E9)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa33b1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa33b2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(uint32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa33b2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(int64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa33b2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(uint64_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33b30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(float_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa33b314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(double_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa33b7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::System::Decimal::IsValid)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa33bc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"IsValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(::ArrayW<int32_t>)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa33bc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(int32_t, int32_t, int32_t, bool, uint8_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa33bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa33be1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Decimal::*)(::by_ref<::System::Decimal>, int32_t)>(&::System::Decimal::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa33bed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Abs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::Abs)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa33bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Abs", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa33bef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Add", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Compare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Compare)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa33c660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Compare", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa33c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::CompareTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa33c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Divide)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa33c9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Divide", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::Object*)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa33d2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Decimal>(),
                    {::i2c::class_of<::System::Decimal>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::Decimal)>(&::System::Decimal::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa33d3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Equals", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)()>(&::System::Decimal::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa33d444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Decimal>(),
                    {::i2c::class_of<::System::Decimal>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Floor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Floor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa33d5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Floor", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Decimal::*)()>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa33d9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Decimal>(),
                    {::i2c::class_of<::System::Decimal>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa33da54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToString", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Decimal::*)(::StringW, ::System::IFormatProvider*)>(&::System::Decimal::ToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa33db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::Span_1<char16_t>, ::by_ref<int32_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Decimal::TryFormat)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa33dbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW, ::System::IFormatProvider*)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa33dcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&::System::Decimal::Parse)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa33dd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::System::Decimal>)>(&::System::Decimal::TryParse)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa33de6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ::by_ref<::System::Decimal>)>(&::System::Decimal::TryParse)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa33df40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (*)(::System::Decimal)>(&::System::Decimal::GetBits)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa33e038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"GetBits", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Max
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Decimal> (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Decimal::Max)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa33e0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Max", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Min
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::System::Decimal> (*)(::by_ref<::System::Decimal>, ::by_ref<::System::Decimal>)>(&::System::Decimal::Min)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa33e144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Min", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::Multiply)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa33e1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Multiply", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Negate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Negate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33e768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Negate", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, int32_t)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa33e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Round", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::by_ref<::System::Decimal>, int32_t, ::System::MidpointRounding)>(&::System::Decimal::Round)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa33e804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Round", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::MidpointRounding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (*)(::System::Decimal)>(&::System::Decimal::ToByte)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa33e9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (*)(::System::Decimal)>(&::System::Decimal::ToSByte)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa33ecc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (*)(::System::Decimal)>(&::System::Decimal::ToInt16)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa33efd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::ToDouble)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa33f14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::ToInt32)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa33ee3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::ToInt64)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa33f2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt16)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa33f474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt32)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa33eb3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::ToUInt64)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa33f5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::ToSingle)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa33f788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa33f864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Truncate", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.Truncate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::Decimal>)>(&::System::Decimal::Truncate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa33f964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Truncate", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa33f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int8_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa33fa0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa33fa20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa33fa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(char16_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa33fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa33fa54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint32_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa33fa68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(int64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa33fa78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Implicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(uint64_t)>(&::System::Decimal::op_Implicit___System__Decimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa33fa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(float_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa33fa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit___System__Decimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(double_t)>(&::System::Decimal::op_Explicit___System__Decimal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa33fadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int32_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int32_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa33fb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_int64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_int64_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa33fb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_uint64_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_uint64_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa33fbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_float_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa33fc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Explicit_double_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::Decimal)>(&::System::Decimal::op_Explicit_double_t)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa33fcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_UnaryNegation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::op_UnaryNegation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa33fd14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_UnaryNegation", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal)>(&::System::Decimal::op_Increment)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa33fd1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Increment", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Addition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Addition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa33fd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Addition", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Subtraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Subtraction)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa33fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Multiply)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa33fef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Multiply", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Division
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Division)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa33ffa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Division", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Modulus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Modulus)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa340054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Modulus", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Equality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3404a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_Inequality)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa340530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThan)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa3405c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_LessThan", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa34064c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThan)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa3406dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Decimal, ::System::Decimal)>(&::System::Decimal::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa34076c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.GetTypeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::Decimal::*)()>(&::System::Decimal::GetTypeCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa3407fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"GetTypeCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToBoolean", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa340864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToChar", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3408e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToSByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa3409a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToUInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToUInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToUInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToSingle", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa340c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToDouble", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa340ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToDecimal", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::Decimal::*)(::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa340cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToDateTime", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Decimal.System_IConvertible_ToType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Decimal::*)(::System::Type*, ::System::IFormatProvider*)>(&::System::Decimal::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa340d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& System::Decimal::__cordl_internal_get_flags()  {
return this->___flags;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_flags() const {
return this->___flags;
}
constexpr void System::Decimal::__cordl_internal_set_flags(int32_t  value)  {
this->___flags = value;
}
constexpr int32_t& System::Decimal::__cordl_internal_get_hi()  {
return this->___hi;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_hi() const {
return this->___hi;
}
constexpr void System::Decimal::__cordl_internal_set_hi(int32_t  value)  {
this->___hi = value;
}
constexpr int32_t& System::Decimal::__cordl_internal_get_lo()  {
return this->___lo;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_lo() const {
return this->___lo;
}
constexpr void System::Decimal::__cordl_internal_set_lo(int32_t  value)  {
this->___lo = value;
}
constexpr int32_t& System::Decimal::__cordl_internal_get_mid()  {
return this->___mid;
}
constexpr int32_t const& System::Decimal::__cordl_internal_get_mid() const {
return this->___mid;
}
constexpr void System::Decimal::__cordl_internal_set_mid(int32_t  value)  {
this->___mid = value;
}
constexpr uint64_t& System::Decimal::__cordl_internal_get_ulomidLE()  {
return this->___ulomidLE;
}
constexpr uint64_t const& System::Decimal::__cordl_internal_get_ulomidLE() const {
return this->___ulomidLE;
}
constexpr void System::Decimal::__cordl_internal_set_ulomidLE(uint64_t  value)  {
this->___ulomidLE = value;
}
inline void System::Decimal::setStaticF_Zero(::System::Decimal  value)  {
::cordl_internals::setStaticField<::System::Decimal, "Zero", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_Zero()  {
return ::cordl_internals::getStaticField<::System::Decimal, "Zero", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_One(::System::Decimal  value)  {
::cordl_internals::setStaticField<::System::Decimal, "One", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_One()  {
return ::cordl_internals::getStaticField<::System::Decimal, "One", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_MinusOne(::System::Decimal  value)  {
::cordl_internals::setStaticField<::System::Decimal, "MinusOne", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MinusOne()  {
return ::cordl_internals::getStaticField<::System::Decimal, "MinusOne", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_MaxValue(::System::Decimal  value)  {
::cordl_internals::setStaticField<::System::Decimal, "MaxValue", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MaxValue()  {
return ::cordl_internals::getStaticField<::System::Decimal, "MaxValue", ::System::Decimal>();
}
inline void System::Decimal::setStaticF_MinValue(::System::Decimal  value)  {
::cordl_internals::setStaticField<::System::Decimal, "MinValue", ::System::Decimal>(std::forward<::System::Decimal>(value));
}
inline ::System::Decimal System::Decimal::getStaticF_MinValue()  {
return ::cordl_internals::getStaticField<::System::Decimal, "MinValue", ::System::Decimal>();
}
inline uint32_t System::Decimal::get_High()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_High", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t System::Decimal::get_Low()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Low", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline uint32_t System::Decimal::get_Mid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Mid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline bool System::Decimal::get_IsNegative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_IsNegative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t System::Decimal::get_Scale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Scale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint64_t System::Decimal::get_Low64()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"get_Low64", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::by_ref<::GlobalNamespace::Decimal_DecCalc> System::Decimal::AsMutable(::by_ref<::System::Decimal>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"AsMutable", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::Decimal_DecCalc>>(nullptr, ___internal_method, d);
}
inline uint32_t System::Decimal::DecDivMod1E9(::by_ref<::System::Decimal>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"DecDivMod1E9", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, value);
}
inline void System::Decimal::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void System::Decimal::_ctor(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool System::Decimal::IsValid(int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"IsValid", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags);
}
inline void System::Decimal::_ctor(::ArrayW<int32_t>  bits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bits);
}
inline void System::Decimal::_ctor(int32_t  lo, int32_t  mid, int32_t  hi, bool  isNegative, uint8_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lo, mid, hi, isNegative, scale);
}
inline void System::Decimal::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline void System::Decimal::_ctor(/* [IsReadOnly] */ ::by_ref<::System::Decimal>  d, int32_t  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, d, flags);
}
inline ::System::Decimal System::Decimal::Abs(::by_ref<::System::Decimal>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Abs", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Add(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Add", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal::Compare(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Compare", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d1, d2);
}
inline int32_t System::Decimal::CompareTo(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t System::Decimal::CompareTo(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::Divide(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Divide", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Decimal>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline bool System::Decimal::Equals(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Equals", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, value);
}
inline int32_t System::Decimal::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Decimal>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::Decimal System::Decimal::Floor(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Floor", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::StringW System::Decimal::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Decimal>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW System::Decimal::ToString(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToString", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, provider);
}
inline ::StringW System::Decimal::ToString(::StringW  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, provider);
}
inline bool System::Decimal::TryFormat(::System::Span_1<char16_t>  destination, ::by_ref<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"TryFormat", {}, {::i2c::type_of<::System::Span_1<char16_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<char16_t>>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, destination, charsWritten, format, provider);
}
inline ::System::Decimal System::Decimal::Parse(::StringW  s, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, s, provider);
}
inline ::System::Decimal System::Decimal::Parse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, s, style, provider);
}
inline bool System::Decimal::TryParse(::StringW  s, ::by_ref<::System::Decimal>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, result);
}
inline bool System::Decimal::TryParse(::StringW  s, ::System::Globalization::NumberStyles  style, ::System::IFormatProvider*  provider, ::by_ref<::System::Decimal>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::NumberStyles>(), ::i2c::type_of<::System::IFormatProvider*>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, style, provider, result);
}
inline ::ArrayW<int32_t> System::Decimal::GetBits(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"GetBits", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(nullptr, ___internal_method, d);
}
inline ::by_ref<::System::Decimal> System::Decimal::Max(::by_ref<::System::Decimal>  d1, ::by_ref<::System::Decimal>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Max", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Decimal>>(nullptr, ___internal_method, d1, d2);
}
inline ::by_ref<::System::Decimal> System::Decimal::Min(::by_ref<::System::Decimal>  d1, ::by_ref<::System::Decimal>  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Min", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::System::Decimal>>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::Multiply(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Multiply", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::Negate(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Negate", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Round(::System::Decimal  d, int32_t  decimals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Round", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d, decimals);
}
inline ::System::Decimal System::Decimal::Round(::by_ref<::System::Decimal>  d, int32_t  decimals, ::System::MidpointRounding  mode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Round", {}, {::i2c::type_of<::by_ref<::System::Decimal>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::MidpointRounding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d, decimals, mode);
}
inline uint8_t System::Decimal::ToByte(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(nullptr, ___internal_method, value);
}
inline int8_t System::Decimal::ToSByte(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToSByte", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(nullptr, ___internal_method, value);
}
inline int16_t System::Decimal::ToInt16(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal::ToDouble(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToDouble", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, d);
}
inline int32_t System::Decimal::ToInt32(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, d);
}
inline int64_t System::Decimal::ToInt64(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, d);
}
inline uint16_t System::Decimal::ToUInt16(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToUInt16", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, value);
}
inline uint32_t System::Decimal::ToUInt32(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToUInt32", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, d);
}
inline uint64_t System::Decimal::ToUInt64(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToUInt64", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, d);
}
inline float_t System::Decimal::ToSingle(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"ToSingle", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::Truncate(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Truncate", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline void System::Decimal::Truncate(::by_ref<::System::Decimal>  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"Truncate", {}, {::i2c::type_of<::by_ref<::System::Decimal>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(char16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Implicit___System__Decimal(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Implicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Explicit___System__Decimal(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_Explicit___System__Decimal(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, value);
}
inline int32_t System::Decimal::op_Explicit_int32_t(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int64_t System::Decimal::op_Explicit_int64_t(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, value);
}
inline uint64_t System::Decimal::op_Explicit_uint64_t(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(nullptr, ___internal_method, value);
}
inline float_t System::Decimal::op_Explicit_float_t(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline double_t System::Decimal::op_Explicit_double_t(::System::Decimal  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Explicit", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, value);
}
inline ::System::Decimal System::Decimal::op_UnaryNegation(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_UnaryNegation", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Increment(::System::Decimal  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Increment", {}, {::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d);
}
inline ::System::Decimal System::Decimal::op_Addition(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Addition", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Subtraction(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Subtraction", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Multiply(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Multiply", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Division(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Division", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline ::System::Decimal System::Decimal::op_Modulus(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Modulus", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_Equality(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_Inequality(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_LessThan(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_LessThan", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_LessThanOrEqual(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_GreaterThan(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline bool System::Decimal::op_GreaterThanOrEqual(::System::Decimal  d1, ::System::Decimal  d2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::System::Decimal>(), ::i2c::type_of<::System::Decimal>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d1, d2);
}
inline ::System::TypeCode System::Decimal::GetTypeCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"GetTypeCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(*this, ___internal_method);
}
inline bool System::Decimal::System_IConvertible_ToBoolean(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToBoolean", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, provider);
}
inline char16_t System::Decimal::System_IConvertible_ToChar(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToChar", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, provider);
}
inline int8_t System::Decimal::System_IConvertible_ToSByte(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToSByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(*this, ___internal_method, provider);
}
inline uint8_t System::Decimal::System_IConvertible_ToByte(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, provider);
}
inline int16_t System::Decimal::System_IConvertible_ToInt16(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method, provider);
}
inline uint16_t System::Decimal::System_IConvertible_ToUInt16(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToUInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, provider);
}
inline int32_t System::Decimal::System_IConvertible_ToInt32(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, provider);
}
inline uint32_t System::Decimal::System_IConvertible_ToUInt32(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToUInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, provider);
}
inline int64_t System::Decimal::System_IConvertible_ToInt64(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, provider);
}
inline uint64_t System::Decimal::System_IConvertible_ToUInt64(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToUInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, provider);
}
inline float_t System::Decimal::System_IConvertible_ToSingle(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToSingle", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, provider);
}
inline double_t System::Decimal::System_IConvertible_ToDouble(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToDouble", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, provider);
}
inline ::System::Decimal System::Decimal::System_IConvertible_ToDecimal(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToDecimal", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method, provider);
}
inline ::System::DateTime System::Decimal::System_IConvertible_ToDateTime(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToDateTime", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, provider);
}
inline ::System::Object* System::Decimal::System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Decimal>(),
                        {"System.IConvertible.ToType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, type, provider);
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  System::Decimal::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* System::Decimal::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  System::Decimal::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Decimal::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IConvertible"
constexpr  System::Decimal::operator ::System::IConvertible*()  {
return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* System::Decimal::i___System__IConvertible()  {
return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::System::Decimal>"
constexpr  System::Decimal::operator ::System::IComparable_1<::System::Decimal>*()  {
return static_cast<::System::IComparable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::System::Decimal>"
constexpr ::System::IComparable_1<::System::Decimal>* System::Decimal::i___System__IComparable_1___System__Decimal_()  {
return static_cast<::System::IComparable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::Decimal>"
constexpr  System::Decimal::operator ::System::IEquatable_1<::System::Decimal>*()  {
return static_cast<::System::IEquatable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::System::Decimal>"
constexpr ::System::IEquatable_1<::System::Decimal>* System::Decimal::i___System__IEquatable_1___System__Decimal_()  {
return static_cast<::System::IEquatable_1<::System::Decimal>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  System::Decimal::operator ::System::Runtime::Serialization::IDeserializationCallback*()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Decimal::i___System__Runtime__Serialization__IDeserializationCallback()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ISpanFormattable"
constexpr  System::Decimal::operator ::System::ISpanFormattable*()  {
return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* System::Decimal::i___System__ISpanFormattable()  {
return static_cast<::System::ISpanFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hi", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lo", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mid", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ulomidLE", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::System::Decimal::Decimal(int32_t  flags, int32_t  hi, int32_t  lo, int32_t  mid, uint64_t  ulomidLE) noexcept  {
this->flags = flags;
this->hi = hi;
this->lo = lo;
this->mid = mid;
this->ulomidLE = ulomidLE;
}
// Ctor Parameters []
constexpr ::System::Decimal::Decimal()   {
}
