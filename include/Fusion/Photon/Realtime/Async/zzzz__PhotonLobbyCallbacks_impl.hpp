#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/Async/PhotonLobbyCallbacks.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/Async/zzzz__PhotonLobbyCallbacks_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::*)()>(&::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f6911c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::__cordl_internal_get_JoinedLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinedLobby;
}
constexpr ::System::Action* const& Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::__cordl_internal_get_JoinedLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinedLobby;
}
constexpr void Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::__cordl_internal_set_JoinedLobby(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinedLobby = value;
}
inline void Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks* Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::Async::PhotonLobbyCallbacks::PhotonLobbyCallbacks()   {
}
