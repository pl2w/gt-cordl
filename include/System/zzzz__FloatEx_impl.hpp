#pragma once
// IWYU pragma private; include "System/FloatEx.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__FloatEx_def.hpp"
//  Writing Method size for method: ::System::FloatEx.IsFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::FloatEx::IsFinite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb993d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsFinite", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FloatEx.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(double_t)>(&::System::FloatEx::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb993d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsNegative", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FloatEx.IsFinite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::FloatEx::IsFinite)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb993d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsFinite", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FloatEx.IsNegative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t)>(&::System::FloatEx::IsNegative)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb993d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsNegative", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::FloatEx.SingleToInt32Bits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::System::FloatEx::SingleToInt32Bits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"SingleToInt32Bits", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::FloatEx::IsFinite(double_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsFinite", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::FloatEx::IsNegative(double_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsNegative", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, d);
}
inline bool System::FloatEx::IsFinite(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsFinite", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f);
}
inline bool System::FloatEx::IsNegative(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"IsNegative", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, f);
}
inline int32_t System::FloatEx::SingleToInt32Bits(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::FloatEx*>(),
                        {"SingleToInt32Bits", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::System::FloatEx::FloatEx()   {
}
