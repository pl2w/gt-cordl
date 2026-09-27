#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SimplexNoise.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__SimplexNoise_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::SimplexNoise.srdnoise
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, float_t)>(&::Meta::XR::MRUtilityKit::SimplexNoise::srdnoise)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x9f4f9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SimplexNoise*>(),
                        {"srdnoise", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Meta::XR::MRUtilityKit::SimplexNoise::srdnoise(::UnityEngine::Vector2  pos, float_t  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SimplexNoise*>(),
                        {"srdnoise", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pos, rot);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::SimplexNoise::SimplexNoise()   {
}
