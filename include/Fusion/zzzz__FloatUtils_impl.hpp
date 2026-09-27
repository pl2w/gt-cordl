#pragma once
// IWYU pragma private; include "Fusion/FloatUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FloatUtils_def.hpp"
//  Writing Method size for method: ::Fusion::FloatUtils.Compress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t, int32_t)>(&::Fusion::FloatUtils::Compress)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5f9e298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatUtils*>(),
                        {"Compress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatUtils.Decompress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, float_t)>(&::Fusion::FloatUtils::Decompress)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f9e334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatUtils*>(),
                        {"Decompress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::FloatUtils::Compress(float_t  f, int32_t  accuracy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatUtils*>(),
                        {"Compress", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, f, accuracy);
}
inline float_t Fusion::FloatUtils::Decompress(int32_t  value, float_t  accuracy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatUtils*>(),
                        {"Decompress", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, value, accuracy);
}
// Ctor Parameters []
constexpr ::Fusion::FloatUtils::FloatUtils()   {
}
