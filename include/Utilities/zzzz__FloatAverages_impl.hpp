#pragma once
// IWYU pragma private; include "Utilities/FloatAverages.hpp"
#include "Utilities/zzzz__AverageCalculator_1_impl.hpp"
#include "Utilities/zzzz__FloatAverages_def.hpp"
//  Writing Method size for method: ::Utilities::FloatAverages._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::FloatAverages::*)(int32_t)>(&::Utilities::FloatAverages::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b70f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::FloatAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::FloatAverages.PlusEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Utilities::FloatAverages::*)(float_t, float_t)>(&::Utilities::FloatAverages::PlusEquals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b71004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::FloatAverages*>(),
                    {::i2c::class_of<::Utilities::FloatAverages*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::FloatAverages.MinusEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Utilities::FloatAverages::*)(float_t, float_t)>(&::Utilities::FloatAverages::MinusEquals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b7100c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::FloatAverages*>(),
                    {::i2c::class_of<::Utilities::FloatAverages*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::FloatAverages.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Utilities::FloatAverages::*)(float_t, int32_t)>(&::Utilities::FloatAverages::Divide)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b71014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::FloatAverages*>(),
                    {::i2c::class_of<::Utilities::FloatAverages*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::FloatAverages.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Utilities::FloatAverages::*)(float_t, int32_t)>(&::Utilities::FloatAverages::Multiply)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b71020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::FloatAverages*>(),
                    {::i2c::class_of<::Utilities::FloatAverages*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void Utilities::FloatAverages::_ctor(int32_t  sampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::FloatAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount);
}
inline float_t Utilities::FloatAverages::PlusEquals(float_t  value, float_t  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::FloatAverages*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, sample);
}
inline float_t Utilities::FloatAverages::MinusEquals(float_t  value, float_t  sample)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::FloatAverages*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, sample);
}
inline float_t Utilities::FloatAverages::Divide(float_t  value, int32_t  sampleCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::FloatAverages*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, sampleCount);
}
inline float_t Utilities::FloatAverages::Multiply(float_t  value, int32_t  sampleCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::FloatAverages*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, sampleCount);
}
inline ::Utilities::FloatAverages* Utilities::FloatAverages::New_ctor(int32_t  sampleCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::FloatAverages*>(sampleCount));
}
// Ctor Parameters []
constexpr ::Utilities::FloatAverages::FloatAverages()   {
}
