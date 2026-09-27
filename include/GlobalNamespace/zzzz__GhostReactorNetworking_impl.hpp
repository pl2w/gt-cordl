#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorNetworking.hpp"
#include "Photon/Pun/zzzz__MonoBehaviourPunCallbacks_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorNetworking_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorNetworking._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorNetworking::*)()>(&::GlobalNamespace::GhostReactorNetworking::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5860630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorNetworking*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GhostReactorNetworking::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorNetworking*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorNetworking* GlobalNamespace::GhostReactorNetworking::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorNetworking*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorNetworking::GhostReactorNetworking()   {
}
