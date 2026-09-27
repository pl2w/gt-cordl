#pragma once
// IWYU pragma private; include "Photon/Pun/IPunOwnershipCallbacks.hpp"
#include "Photon/Pun/zzzz__IPunOwnershipCallbacks_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::IPunOwnershipCallbacks.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IPunOwnershipCallbacks::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::Photon::Pun::IPunOwnershipCallbacks::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::IPunOwnershipCallbacks.OnOwnershipTransfered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IPunOwnershipCallbacks::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransfered)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::IPunOwnershipCallbacks.OnOwnershipTransferFailed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::IPunOwnershipCallbacks::*)(::Photon::Pun::PhotonView*, ::Photon::Realtime::Player*)>(&::Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransferFailed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(),
                    {::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
inline void Photon::Pun::IPunOwnershipCallbacks::OnOwnershipRequest(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  requestingPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, requestingPlayer);
}
inline void Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransfered(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  previousOwner)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, previousOwner);
}
inline void Photon::Pun::IPunOwnershipCallbacks::OnOwnershipTransferFailed(::Photon::Pun::PhotonView*  targetView, ::Photon::Realtime::Player*  senderOfFailedRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::IPunOwnershipCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetView, senderOfFailedRequest);
}
