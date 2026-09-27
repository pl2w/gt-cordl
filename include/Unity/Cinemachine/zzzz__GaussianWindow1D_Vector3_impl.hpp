#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GaussianWindow1D_Vector3.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1d_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1D_Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::GaussianWindow1D_Vector3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GaussianWindow1D_Vector3::*)(float_t, int32_t)>(&::Unity::Cinemachine::GaussianWindow1D_Vector3::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb735c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Vector3*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GaussianWindow1D_Vector3.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::GaussianWindow1D_Vector3::*)(int32_t)>(&::Unity::Cinemachine::GaussianWindow1D_Vector3::Compute)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xaeb73c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Vector3*>(),
                    {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Vector3*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::GaussianWindow1D_Vector3::_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Vector3*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigma, maxKernelRadius);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::GaussianWindow1D_Vector3::Compute(int32_t  windowPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Vector3*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, windowPos);
}
inline ::Unity::Cinemachine::GaussianWindow1D_Vector3* Unity::Cinemachine::GaussianWindow1D_Vector3::New_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::GaussianWindow1D_Vector3*>(sigma, maxKernelRadius));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::GaussianWindow1D_Vector3::GaussianWindow1D_Vector3()   {
}
