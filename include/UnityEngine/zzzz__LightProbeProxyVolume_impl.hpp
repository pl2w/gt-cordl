#pragma once
// IWYU pragma private; include "UnityEngine/LightProbeProxyVolume.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__LightProbeProxyVolume_def.hpp"
//  Writing Method size for method: ::UnityEngine::LightProbeProxyVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::LightProbeProxyVolume::*)()>(&::UnityEngine::LightProbeProxyVolume::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb59e9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbeProxyVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::LightProbeProxyVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::LightProbeProxyVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::LightProbeProxyVolume* UnityEngine::LightProbeProxyVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::LightProbeProxyVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::LightProbeProxyVolume::LightProbeProxyVolume()   {
}
