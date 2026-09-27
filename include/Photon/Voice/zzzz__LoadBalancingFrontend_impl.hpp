#pragma once
// IWYU pragma private; include "Photon/Voice/LoadBalancingFrontend.hpp"
#include "Photon/Voice/zzzz__LoadBalancingTransport_impl.hpp"
#include "Photon/Voice/zzzz__LoadBalancingFrontend_def.hpp"
//  Writing Method size for method: ::Photon::Voice::LoadBalancingFrontend._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::LoadBalancingFrontend::*)()>(&::Photon::Voice::LoadBalancingFrontend::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa765950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingFrontend*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::LoadBalancingFrontend::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::LoadBalancingFrontend*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Voice::LoadBalancingFrontend* Photon::Voice::LoadBalancingFrontend::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Voice::LoadBalancingFrontend*>());
}
// Ctor Parameters []
constexpr ::Photon::Voice::LoadBalancingFrontend::LoadBalancingFrontend()   {
}
