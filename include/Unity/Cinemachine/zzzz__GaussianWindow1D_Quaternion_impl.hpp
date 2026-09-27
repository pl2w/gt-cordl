#pragma once
// IWYU pragma private; include "Unity/Cinemachine/GaussianWindow1D_Quaternion.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1d_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Unity/Cinemachine/zzzz__GaussianWindow1D_Quaternion_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::GaussianWindow1D_Quaternion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::GaussianWindow1D_Quaternion::*)(float_t, int32_t)>(&::Unity::Cinemachine::GaussianWindow1D_Quaternion::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeb7518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Quaternion*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::GaussianWindow1D_Quaternion.Compute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Unity::Cinemachine::GaussianWindow1D_Quaternion::*)(int32_t)>(&::Unity::Cinemachine::GaussianWindow1D_Quaternion::Compute)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xaeb7580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Quaternion*>(),
                    {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Quaternion*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Unity::Cinemachine::GaussianWindow1D_Quaternion::_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Quaternion*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sigma, maxKernelRadius);
}
inline ::UnityEngine::Quaternion Unity::Cinemachine::GaussianWindow1D_Quaternion::Compute(int32_t  windowPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::GaussianWindow1D_Quaternion*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, windowPos);
}
inline ::Unity::Cinemachine::GaussianWindow1D_Quaternion* Unity::Cinemachine::GaussianWindow1D_Quaternion::New_ctor(float_t  sigma, int32_t  maxKernelRadius)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::GaussianWindow1D_Quaternion*>(sigma, maxKernelRadius));
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::GaussianWindow1D_Quaternion::GaussianWindow1D_Quaternion()   {
}
