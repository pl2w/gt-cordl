#pragma once
// IWYU pragma private; include "Photon/Pun/IOnPhotonViewOwnerChange.hpp"
#include "Photon/Pun/zzzz__IOnPhotonViewOwnerChange_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IOnPhotonViewOwnerChange.OnOwnerChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IOnPhotonViewOwnerChange::*)(::Photon::Realtime::Player*, ::Photon::Realtime::Player*)>(&::Photon::Pun::IOnPhotonViewOwnerChange::OnOwnerChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IOnPhotonViewOwnerChange*>(),
                    {::i2c::class_of<::Photon::Pun::IOnPhotonViewOwnerChange*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::IOnPhotonViewOwnerChange::OnOwnerChange(::Photon::Realtime::Player*  newOwner, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IOnPhotonViewOwnerChange*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newOwner, previousOwner);
}
/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr  Photon::Pun::IOnPhotonViewOwnerChange::operator ::Photon::Pun::IPhotonViewCallback*() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* Photon::Pun::IOnPhotonViewOwnerChange::i___Photon__Pun__IPhotonViewCallback() noexcept {
return static_cast<::Photon::Pun::IPhotonViewCallback*>(static_cast<void*>(this));
}
