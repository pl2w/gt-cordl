#pragma once
// IWYU pragma private; include "Oculus/Interaction/ConeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__ConeUtils_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ConeUtils.RayWithinCone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::ConeUtils::RayWithinCone)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa48afb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ConeUtils*>(),
                        {"RayWithinCone", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ConeUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ConeUtils::*)()>(&::Oculus::Interaction::ConeUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48b0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ConeUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::ConeUtils::RayWithinCone(::UnityEngine::Ray  ray, ::UnityEngine::Vector3  position, float_t  apertureDegrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ConeUtils*>(),
                        {"RayWithinCone", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, position, apertureDegrees);
}
inline void Oculus::Interaction::ConeUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::ConeUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::ConeUtils* Oculus::Interaction::ConeUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::ConeUtils*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::ConeUtils::ConeUtils()   {
}
