#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GaussianWindow1D_CameraRotation.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1d_1_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1D_CameraRotation_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::GaussianWindow1D_CameraRotation._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GaussianWindow1D_CameraRotation::*)(float_t, int32_t)>(&::Unity::Cinemachine::GaussianWindow1D_CameraRotation::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb78f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_CameraRotation*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GaussianWindow1D_CameraRotation.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Unity::Cinemachine::GaussianWindow1D_CameraRotation::*)(int32_t)>(&::Unity::Cinemachine::GaussianWindow1D_CameraRotation::Compute)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xaeb795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_CameraRotation*>(),
                    {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_CameraRotation*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::GaussianWindow1D_CameraRotation::_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_CameraRotation*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigma, maxKernelRadius);
}
inline ::UnityEngine::Vector2 Unity::Cinemachine::GaussianWindow1D_CameraRotation::Compute(int32_t  windowPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_CameraRotation*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, windowPos);
}
inline ::Unity::Cinemachine::GaussianWindow1D_CameraRotation* Unity::Cinemachine::GaussianWindow1D_CameraRotation::New_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::GaussianWindow1D_CameraRotation*>(sigma, maxKernelRadius));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::GaussianWindow1D_CameraRotation::GaussianWindow1D_CameraRotation()   {
}
