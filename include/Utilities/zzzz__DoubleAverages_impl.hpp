#pragma once
// IWYU pragma private; include "Utilities/DoubleAverages.hpp"
#include "Utilities/zzzz__AverageCalculator_1_impl.hpp"
#include "Utilities/zzzz__DoubleAverages_def.hpp"
//  Writing Method size for method: ::Utilities::DoubleAverages._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::DoubleAverages::*)(int32_t)>(&::Utilities::DoubleAverages::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b70f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::DoubleAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::DoubleAverages.PlusEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Utilities::DoubleAverages::*)(double_t, double_t)>(&::Utilities::DoubleAverages::PlusEquals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::DoubleAverages*>(),
                    {::i2c::class_of<::Utilities::DoubleAverages*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::DoubleAverages.MinusEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Utilities::DoubleAverages::*)(double_t, double_t)>(&::Utilities::DoubleAverages::MinusEquals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b70f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::DoubleAverages*>(),
                    {::i2c::class_of<::Utilities::DoubleAverages*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::DoubleAverages.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Utilities::DoubleAverages::*)(double_t, int32_t)>(&::Utilities::DoubleAverages::Divide)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b70f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::DoubleAverages*>(),
                    {::i2c::class_of<::Utilities::DoubleAverages*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::DoubleAverages.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Utilities::DoubleAverages::*)(double_t, int32_t)>(&::Utilities::DoubleAverages::Multiply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b70f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::DoubleAverages*>(),
                    {::i2c::class_of<::Utilities::DoubleAverages*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void Utilities::DoubleAverages::_ctor(int32_t  sampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::DoubleAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount);
}
inline double_t Utilities::DoubleAverages::PlusEquals(double_t  value, double_t  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::DoubleAverages*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value, sample);
}
inline double_t Utilities::DoubleAverages::MinusEquals(double_t  value, double_t  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::DoubleAverages*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value, sample);
}
inline double_t Utilities::DoubleAverages::Divide(double_t  value, int32_t  sampleCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::DoubleAverages*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value, sampleCount);
}
inline double_t Utilities::DoubleAverages::Multiply(double_t  value, int32_t  sampleCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::DoubleAverages*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, value, sampleCount);
}
inline ::Utilities::DoubleAverages* Utilities::DoubleAverages::New_ctor(int32_t  sampleCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::DoubleAverages*>(sampleCount));
}
// Ctor Parameters []
constexpr ::Utilities::DoubleAverages::DoubleAverages()   {
}
