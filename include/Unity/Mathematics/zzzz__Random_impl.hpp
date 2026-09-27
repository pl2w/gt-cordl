#pragma once
// IWYU pragma private; include "Unity/Mathematics/Random.hpp"
#include "Unity/Mathematics/zzzz__Random_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::Random._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Mathematics::Random::*)(uint32_t)>(&::Unity::Mathematics::Random::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb064c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Mathematics::Random::*)(int32_t)>(&::Unity::Mathematics::Random::NextInt)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb064c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextFloat)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb064c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextFloat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Mathematics::Random::*)(float_t, float_t)>(&::Unity::Mathematics::Random::NextFloat)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb064c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextDouble)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb064ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::Unity::Mathematics::Random::*)(double_t, double_t)>(&::Unity::Mathematics::Random::NextDouble)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb064cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::Random.NextState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Unity::Mathematics::Random::*)()>(&::Unity::Mathematics::Random::NextState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb064d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextState", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Mathematics::Random::_ctor(uint32_t  seed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, seed);
}
inline int32_t Unity::Mathematics::Random::NextInt(int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, max);
}
inline float_t Unity::Mathematics::Random::NextFloat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t Unity::Mathematics::Random::NextFloat(float_t  min, float_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextFloat", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, min, max);
}
inline double_t Unity::Mathematics::Random::NextDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline double_t Unity::Mathematics::Random::NextDouble(double_t  min, double_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextDouble", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method, min, max);
}
inline uint32_t Unity::Mathematics::Random::NextState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::Random>(),
                        {"NextState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "state", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Unity::Mathematics::Random::Random(uint32_t  state) noexcept  {
this->state = state;
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::Random::Random()   {
}
