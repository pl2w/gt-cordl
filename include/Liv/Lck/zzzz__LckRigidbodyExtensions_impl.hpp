#pragma once
// IWYU pragma private; include "Liv/Lck/LckRigidbodyExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckRigidbodyExtensions_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckRigidbodyExtensions.LookAtFromPivotPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rigidbody*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Liv::Lck::LckRigidbodyExtensions::LookAtFromPivotPoint)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x9d33884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckRigidbodyExtensions*>(),
                        {"LookAtFromPivotPoint", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckRigidbodyExtensions::LookAtFromPivotPoint(::UnityEngine::Rigidbody*  rigidbody, ::UnityEngine::Vector3  pivot, ::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  currentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckRigidbodyExtensions*>(),
                        {"LookAtFromPivotPoint", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigidbody, pivot, forward, position, currentRotation);
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckRigidbodyExtensions::LckRigidbodyExtensions()   {
}
