#pragma once
// IWYU pragma private; include "Oculus/Interaction/VectorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__VectorExtensions_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::VectorExtensions.Approximately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::VectorExtensions::Approximately)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa403130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VectorExtensions*>(),
                        {"Approximately", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::VectorExtensions::Approximately(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::VectorExtensions*>(),
                        {"Approximately", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b, epsilon);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::VectorExtensions::VectorExtensions()   {
}
