#pragma once
// IWYU pragma private; include "Photon/Realtime/IOnEventCallback.hpp"
#include "Photon/Realtime/zzzz__IOnEventCallback_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::IOnEventCallback.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IOnEventCallback::*)(::ExitGames::Client::Photon::EventData*)>(&::Photon::Realtime::IOnEventCallback::OnEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IOnEventCallback*>(),
                    {::i2c::class_of<::Photon::Realtime::IOnEventCallback*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Photon::Realtime::IOnEventCallback::OnEvent(::ExitGames::Client::Photon::EventData*  photonEvent)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IOnEventCallback*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, photonEvent);
}
