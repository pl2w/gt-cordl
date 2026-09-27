#pragma once
// IWYU pragma private; include "emotitron/Compression/HalfFloat/Half.hpp"
#include "emotitron/Compression/HalfFloat/zzzz__Half_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::emotitron::Compression::HalfFloat::Half::*)(float_t)>(&::emotitron::Compression::HalfFloat::Half::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dd8e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.get_RawValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::emotitron::Compression::HalfFloat::Half::*)()>(&::emotitron::Compression::HalfFloat::Half::get_RawValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5dd8ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"get_RawValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.ConvertToFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<float_t> (*)(::ArrayW<::emotitron::Compression::HalfFloat::Half>)>(&::emotitron::Compression::HalfFloat::Half::ConvertToFloat)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5dd8ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ConvertToFloat", {}, {::i2c::type_of<::ArrayW<::emotitron::Compression::HalfFloat::Half>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.ConvertToHalf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::emotitron::Compression::HalfFloat::Half> (*)(::ArrayW<float_t>)>(&::emotitron::Compression::HalfFloat::Half::ConvertToHalf)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5dd8fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ConvertToHalf", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.IsInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::IsInfinity)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5dd90a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsInfinity", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.IsNaN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::IsNaN)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dd91a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsNaN", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.IsNegativeInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::IsNegativeInfinity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dd9204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsNegativeInfinity", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.IsPositiveInfinity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::IsPositiveInfinity)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5dd9264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsPositiveInfinity", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_LessThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half, ::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_LessThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dd92c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_LessThan", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_GreaterThan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half, ::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_GreaterThan)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dd9398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_LessThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half, ::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_LessThanOrEqual)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dd9418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_GreaterThanOrEqual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half, ::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_GreaterThanOrEqual)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5dd9498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half, ::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dd913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Equality", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::emotitron::Compression::HalfFloat::Half, ::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_Inequality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dd9528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Inequality", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_Explicit___emotitron__Compression__HalfFloat__Half
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::emotitron::Compression::HalfFloat::Half (*)(float_t)>(&::emotitron::Compression::HalfFloat::Half::op_Explicit___emotitron__Compression__HalfFloat__Half)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5dd9590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Explicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5dd9344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Implicit", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::emotitron::Compression::HalfFloat::Half::*)()>(&::emotitron::Compression::HalfFloat::Half::ToString)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5dd95ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                    {::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::emotitron::Compression::HalfFloat::Half::*)(::StringW)>(&::emotitron::Compression::HalfFloat::Half::ToString)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5dd96d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::ToString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5dd9840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ToString", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::emotitron::Compression::HalfFloat::Half::*)(::StringW, ::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::ToString)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5dd993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::emotitron::Compression::HalfFloat::Half::*)()>(&::emotitron::Compression::HalfFloat::Half::GetHashCode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5dd9a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                    {::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::emotitron::Compression::HalfFloat::Half::*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::CompareTo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5dd9a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"CompareTo", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::emotitron::Compression::HalfFloat::Half::*)(::System::Object*)>(&::emotitron::Compression::HalfFloat::Half::CompareTo)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5dd9b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::emotitron::Compression::HalfFloat::Half>, ::by_ref<::emotitron::Compression::HalfFloat::Half>)>(&::emotitron::Compression::HalfFloat::Half::Equals)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5dd9cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::emotitron::Compression::HalfFloat::Half>>(), ::i2c::type_of<::by_ref<::emotitron::Compression::HalfFloat::Half>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::emotitron::Compression::HalfFloat::Half::*)(::emotitron::Compression::HalfFloat::Half)>(&::emotitron::Compression::HalfFloat::Half::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5dd9518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"Equals", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::emotitron::Compression::HalfFloat::Half::*)(::System::Object*)>(&::emotitron::Compression::HalfFloat::Half::Equals)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5dd9d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                    {::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.GetTypeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::emotitron::Compression::HalfFloat::Half::*)()>(&::emotitron::Compression::HalfFloat::Half::GetTypeCode)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5dd9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"GetTypeCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToBoolean)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dd9e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToBoolean", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToByte)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dd9f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToChar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<char16_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToChar)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5dd9f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToChar", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToDateTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5dd9fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToDateTime", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToDecimal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Decimal (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToDecimal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToDecimal", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToDouble)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToDouble", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int16_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToInt16)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToInt32)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToInt64)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToSByte
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToSByte)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToSByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToSingle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToSingle)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5dda3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToSingle", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::emotitron::Compression::HalfFloat::Half::*)(::System::Type*, ::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5dda404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToUInt16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToUInt16)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToUInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToUInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToUInt32)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToUInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::emotitron::Compression::HalfFloat::Half.System_IConvertible_ToUInt64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::emotitron::Compression::HalfFloat::Half::*)(::System::IFormatProvider*)>(&::emotitron::Compression::HalfFloat::Half::System_IConvertible_ToUInt64)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5dda5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToUInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
inline void emotitron::Compression::HalfFloat::Half::setStaticF_Epsilon(::emotitron::Compression::HalfFloat::Half  value)  {
::cordl_internals::setStaticField<::emotitron::Compression::HalfFloat::Half, "Epsilon", ::emotitron::Compression::HalfFloat::Half>(std::forward<::emotitron::Compression::HalfFloat::Half>(value));
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::getStaticF_Epsilon()  {
return ::cordl_internals::getStaticField<::emotitron::Compression::HalfFloat::Half, "Epsilon", ::emotitron::Compression::HalfFloat::Half>();
}
inline void emotitron::Compression::HalfFloat::Half::setStaticF_MaxValue(::emotitron::Compression::HalfFloat::Half  value)  {
::cordl_internals::setStaticField<::emotitron::Compression::HalfFloat::Half, "MaxValue", ::emotitron::Compression::HalfFloat::Half>(std::forward<::emotitron::Compression::HalfFloat::Half>(value));
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::getStaticF_MaxValue()  {
return ::cordl_internals::getStaticField<::emotitron::Compression::HalfFloat::Half, "MaxValue", ::emotitron::Compression::HalfFloat::Half>();
}
inline void emotitron::Compression::HalfFloat::Half::setStaticF_MinValue(::emotitron::Compression::HalfFloat::Half  value)  {
::cordl_internals::setStaticField<::emotitron::Compression::HalfFloat::Half, "MinValue", ::emotitron::Compression::HalfFloat::Half>(std::forward<::emotitron::Compression::HalfFloat::Half>(value));
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::getStaticF_MinValue()  {
return ::cordl_internals::getStaticField<::emotitron::Compression::HalfFloat::Half, "MinValue", ::emotitron::Compression::HalfFloat::Half>();
}
inline void emotitron::Compression::HalfFloat::Half::setStaticF_NaN(::emotitron::Compression::HalfFloat::Half  value)  {
::cordl_internals::setStaticField<::emotitron::Compression::HalfFloat::Half, "NaN", ::emotitron::Compression::HalfFloat::Half>(std::forward<::emotitron::Compression::HalfFloat::Half>(value));
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::getStaticF_NaN()  {
return ::cordl_internals::getStaticField<::emotitron::Compression::HalfFloat::Half, "NaN", ::emotitron::Compression::HalfFloat::Half>();
}
inline void emotitron::Compression::HalfFloat::Half::setStaticF_NegativeInfinity(::emotitron::Compression::HalfFloat::Half  value)  {
::cordl_internals::setStaticField<::emotitron::Compression::HalfFloat::Half, "NegativeInfinity", ::emotitron::Compression::HalfFloat::Half>(std::forward<::emotitron::Compression::HalfFloat::Half>(value));
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::getStaticF_NegativeInfinity()  {
return ::cordl_internals::getStaticField<::emotitron::Compression::HalfFloat::Half, "NegativeInfinity", ::emotitron::Compression::HalfFloat::Half>();
}
inline void emotitron::Compression::HalfFloat::Half::setStaticF_PositiveInfinity(::emotitron::Compression::HalfFloat::Half  value)  {
::cordl_internals::setStaticField<::emotitron::Compression::HalfFloat::Half, "PositiveInfinity", ::emotitron::Compression::HalfFloat::Half>(std::forward<::emotitron::Compression::HalfFloat::Half>(value));
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::getStaticF_PositiveInfinity()  {
return ::cordl_internals::getStaticField<::emotitron::Compression::HalfFloat::Half, "PositiveInfinity", ::emotitron::Compression::HalfFloat::Half>();
}
inline void emotitron::Compression::HalfFloat::Half::_ctor(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {".ctor", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline uint16_t emotitron::Compression::HalfFloat::Half::get_RawValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"get_RawValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method);
}
inline ::ArrayW<float_t> emotitron::Compression::HalfFloat::Half::ConvertToFloat(::ArrayW<::emotitron::Compression::HalfFloat::Half>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ConvertToFloat", {}, {::i2c::type_of<::ArrayW<::emotitron::Compression::HalfFloat::Half>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t>>(nullptr, ___internal_method, values);
}
inline ::ArrayW<::emotitron::Compression::HalfFloat::Half> emotitron::Compression::HalfFloat::Half::ConvertToHalf(::ArrayW<float_t>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ConvertToHalf", {}, {::i2c::type_of<::ArrayW<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::emotitron::Compression::HalfFloat::Half>>(nullptr, ___internal_method, values);
}
inline bool emotitron::Compression::HalfFloat::Half::IsInfinity(::emotitron::Compression::HalfFloat::Half  half)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsInfinity", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, half);
}
inline bool emotitron::Compression::HalfFloat::Half::IsNaN(::emotitron::Compression::HalfFloat::Half  half)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsNaN", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, half);
}
inline bool emotitron::Compression::HalfFloat::Half::IsNegativeInfinity(::emotitron::Compression::HalfFloat::Half  half)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsNegativeInfinity", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, half);
}
inline bool emotitron::Compression::HalfFloat::Half::IsPositiveInfinity(::emotitron::Compression::HalfFloat::Half  half)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"IsPositiveInfinity", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, half);
}
inline bool emotitron::Compression::HalfFloat::Half::op_LessThan(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_LessThan", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool emotitron::Compression::HalfFloat::Half::op_GreaterThan(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_GreaterThan", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool emotitron::Compression::HalfFloat::Half::op_LessThanOrEqual(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_LessThanOrEqual", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool emotitron::Compression::HalfFloat::Half::op_GreaterThanOrEqual(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_GreaterThanOrEqual", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool emotitron::Compression::HalfFloat::Half::op_Equality(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Equality", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool emotitron::Compression::HalfFloat::Half::op_Inequality(::emotitron::Compression::HalfFloat::Half  left, ::emotitron::Compression::HalfFloat::Half  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Inequality", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>(), ::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::emotitron::Compression::HalfFloat::Half emotitron::Compression::HalfFloat::Half::op_Explicit___emotitron__Compression__HalfFloat__Half(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Explicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::emotitron::Compression::HalfFloat::Half>(nullptr, ___internal_method, value);
}
inline float_t emotitron::Compression::HalfFloat::Half::op_Implicit_float_t(::emotitron::Compression::HalfFloat::Half  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"op_Implicit", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value);
}
inline ::StringW emotitron::Compression::HalfFloat::Half::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW emotitron::Compression::HalfFloat::Half::ToString(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline ::StringW emotitron::Compression::HalfFloat::Half::ToString(::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ToString", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, formatProvider);
}
inline ::StringW emotitron::Compression::HalfFloat::Half::ToString(::StringW  format, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format, formatProvider);
}
inline int32_t emotitron::Compression::HalfFloat::Half::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t emotitron::Compression::HalfFloat::Half::CompareTo(::emotitron::Compression::HalfFloat::Half  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"CompareTo", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline int32_t emotitron::Compression::HalfFloat::Half::CompareTo(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, value);
}
inline bool emotitron::Compression::HalfFloat::Half::Equals(::by_ref<::emotitron::Compression::HalfFloat::Half>  value1, ::by_ref<::emotitron::Compression::HalfFloat::Half>  value2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::emotitron::Compression::HalfFloat::Half>>(), ::i2c::type_of<::by_ref<::emotitron::Compression::HalfFloat::Half>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value1, value2);
}
inline bool emotitron::Compression::HalfFloat::Half::Equals(::emotitron::Compression::HalfFloat::Half  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"Equals", {}, {::i2c::type_of<::emotitron::Compression::HalfFloat::Half>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool emotitron::Compression::HalfFloat::Half::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline ::System::TypeCode emotitron::Compression::HalfFloat::Half::GetTypeCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"GetTypeCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(*this, ___internal_method);
}
inline bool emotitron::Compression::HalfFloat::Half::System_IConvertible_ToBoolean(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToBoolean", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, provider);
}
inline uint8_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToByte(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(*this, ___internal_method, provider);
}
inline char16_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToChar(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToChar", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t>(*this, ___internal_method, provider);
}
inline ::System::DateTime emotitron::Compression::HalfFloat::Half::System_IConvertible_ToDateTime(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToDateTime", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, provider);
}
inline ::System::Decimal emotitron::Compression::HalfFloat::Half::System_IConvertible_ToDecimal(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToDecimal", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Decimal>(*this, ___internal_method, provider);
}
inline double_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToDouble(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToDouble", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, provider);
}
inline int16_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToInt16(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int16_t>(*this, ___internal_method, provider);
}
inline int32_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToInt32(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, provider);
}
inline int64_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToInt64(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method, provider);
}
inline int8_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToSByte(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToSByte", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t>(*this, ___internal_method, provider);
}
inline float_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToSingle(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToSingle", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, provider);
}
inline ::System::Object* emotitron::Compression::HalfFloat::Half::System_IConvertible_ToType(::System::Type*  type, ::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method, type, provider);
}
inline uint16_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToUInt16(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToUInt16", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(*this, ___internal_method, provider);
}
inline uint32_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToUInt32(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToUInt32", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method, provider);
}
inline uint64_t emotitron::Compression::HalfFloat::Half::System_IConvertible_ToUInt64(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::emotitron::Compression::HalfFloat::Half>(),
                        {"System.IConvertible.ToUInt64", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method, provider);
}
/// @brief Convert operator to "::System::IConvertible"
constexpr  emotitron::Compression::HalfFloat::Half::operator ::System::IConvertible*()  {
return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IConvertible"
constexpr ::System::IConvertible* emotitron::Compression::HalfFloat::Half::i___System__IConvertible()  {
return static_cast<::System::IConvertible*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  emotitron::Compression::HalfFloat::Half::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* emotitron::Compression::HalfFloat::Half::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr  emotitron::Compression::HalfFloat::Half::operator ::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>*()  {
return static_cast<::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr ::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>* emotitron::Compression::HalfFloat::Half::i___System__IComparable_1___emotitron__Compression__HalfFloat__Half_()  {
return static_cast<::System::IComparable_1<::emotitron::Compression::HalfFloat::Half>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr  emotitron::Compression::HalfFloat::Half::operator ::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>*()  {
return static_cast<::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>"
constexpr ::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>* emotitron::Compression::HalfFloat::Half::i___System__IEquatable_1___emotitron__Compression__HalfFloat__Half_()  {
return static_cast<::System::IEquatable_1<::emotitron::Compression::HalfFloat::Half>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IFormattable"
constexpr  emotitron::Compression::HalfFloat::Half::operator ::System::IFormattable*()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IFormattable"
constexpr ::System::IFormattable* emotitron::Compression::HalfFloat::Half::i___System__IFormattable()  {
return static_cast<::System::IFormattable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "value", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::emotitron::Compression::HalfFloat::Half::Half(uint16_t  value) noexcept  {
this->value = value;
}
// Ctor Parameters []
constexpr ::emotitron::Compression::HalfFloat::Half::Half()   {
}
