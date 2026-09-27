#pragma once
// IWYU pragma private; include "Utilities/IntAverages.hpp"
#include "Utilities/zzzz__AverageCalculator_1_impl.hpp"
#include "Utilities/zzzz__IntAverages_def.hpp"
//  Writing Method size for method: ::Utilities::IntAverages._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::IntAverages::*)(int32_t)>(&::Utilities::IntAverages::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b71038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::IntAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::IntAverages.PlusEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Utilities::IntAverages::*)(int32_t, int32_t)>(&::Utilities::IntAverages::PlusEquals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::IntAverages*>(),
                    {::i2c::class_of<::Utilities::IntAverages*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::IntAverages.MinusEquals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Utilities::IntAverages::*)(int32_t, int32_t)>(&::Utilities::IntAverages::MinusEquals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::IntAverages*>(),
                    {::i2c::class_of<::Utilities::IntAverages*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::IntAverages.Divide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Utilities::IntAverages::*)(int32_t, int32_t)>(&::Utilities::IntAverages::Divide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::IntAverages*>(),
                    {::i2c::class_of<::Utilities::IntAverages*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Utilities::IntAverages.Multiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Utilities::IntAverages::*)(int32_t, int32_t)>(&::Utilities::IntAverages::Multiply)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Utilities::IntAverages*>(),
                    {::i2c::class_of<::Utilities::IntAverages*>(), 10}
                ));
    return ___internal_method;
  }
};
inline void Utilities::IntAverages::_ctor(int32_t  sampleCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::IntAverages*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sampleCount);
}
inline int32_t Utilities::IntAverages::PlusEquals(int32_t  value, int32_t  samples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::IntAverages*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, samples);
}
inline int32_t Utilities::IntAverages::MinusEquals(int32_t  value, int32_t  samples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::IntAverages*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, samples);
}
inline int32_t Utilities::IntAverages::Divide(int32_t  value, int32_t  samples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::IntAverages*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, samples);
}
inline int32_t Utilities::IntAverages::Multiply(int32_t  value, int32_t  samples)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Utilities::IntAverages*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, value, samples);
}
inline ::Utilities::IntAverages* Utilities::IntAverages::New_ctor(int32_t  sampleCount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::IntAverages*>(sampleCount));
}
// Ctor Parameters []
constexpr ::Utilities::IntAverages::IntAverages()   {
}
