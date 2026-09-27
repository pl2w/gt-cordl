#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/MatrixUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__MatrixUtility_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::MatrixUtility.ApplyMatrix4x4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Matrix4x4)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::MatrixUtility::ApplyMatrix4x4)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb427a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::MatrixUtility*>(),
                        {"ApplyMatrix4x4", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::MatrixUtility::ApplyMatrix4x4(::UnityEngine::Transform*  transform, ::UnityEngine::Matrix4x4  worldMatrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::MatrixUtility*>(),
                        {"ApplyMatrix4x4", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transform, worldMatrix);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::MatrixUtility::MatrixUtility()   {
}
