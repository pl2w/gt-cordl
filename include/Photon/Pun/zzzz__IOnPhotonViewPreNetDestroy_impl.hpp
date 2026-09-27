#pragma once
// IWYU pragma private; include "Photon/Pun/IOnPhotonViewPreNetDestroy.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewPreNetDestroy_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IOnPhotonViewPreNetDestroy.OnPreNetDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IOnPhotonViewPreNetDestroy::*)(::Photon::Pun::PhotonView*)>(&::Photon::Pun::IOnPhotonViewPreNetDestroy::OnPreNetDestroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(),
                    {::i2c::class_of<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::IOnPhotonViewPreNetDestroy::OnPreNetDestroy(::Photon::Pun::PhotonView*  rootView)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IOnPhotonViewPreNetDestroy*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rootView);
}
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr  Photon::Pun::IOnPhotonViewPreNetDestroy::operator ::Photon::Pun::IPhotonViewCallback*() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* Photon::Pun::IOnPhotonViewPreNetDestroy::i___Photon__Pun__IPhotonViewCallback() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
