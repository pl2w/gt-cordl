#pragma once
// IWYU pragma private; include "Unity/Mathematics/noise.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Mathematics/zzzz__noise_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb0643f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.mod289
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::mod289)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb064504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.permute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::permute)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb064578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.taylorInvSqrt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float4 (*)(::Unity::Mathematics::float4)>(&::Unity::Mathematics::noise::taylorInvSqrt)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb0645ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"taylorInvSqrt", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Mathematics::noise.snoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Unity::Mathematics::float3)>(&::Unity::Mathematics::noise::snoise)> {
  constexpr static std::size_t size = 0x624;
  constexpr static std::size_t addrs = 0xb0645e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Unity::Mathematics::float3 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float3  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::mod289(::Unity::Mathematics::float4  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"mod289", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::permute(::Unity::Mathematics::float4  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"permute", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, x);
}
inline ::Unity::Mathematics::float4 Unity::Mathematics::noise::taylorInvSqrt(::Unity::Mathematics::float4  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"taylorInvSqrt", {}, {::i2c::type_of<::Unity::Mathematics::float4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float4>(nullptr, ___internal_method, r);
}
inline float_t Unity::Mathematics::noise::snoise(::Unity::Mathematics::float3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Mathematics::noise*>(),
                        {"snoise", {}, {::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
// Ctor Parameters []
constexpr ::Unity::Mathematics::noise::noise()   {
}
