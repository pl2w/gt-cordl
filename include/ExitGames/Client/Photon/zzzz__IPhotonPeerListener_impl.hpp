#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/IPhotonPeerListener.hpp"
#include "ExitGames/Client/Photon/zzzz__IPhotonPeerListener_def.hpp"
#include "ExitGames/Client/Photon/zzzz__DebugLevel_def.hpp"
#include "ExitGames/Client/Photon/zzzz__EventData_def.hpp"
#include "ExitGames/Client/Photon/zzzz__OperationResponse_def.hpp"
#include "ExitGames/Client/Photon/zzzz__StatusCode_def.hpp"
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.DebugReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::DebugLevel, ::StringW)>(&::ExitGames::Client::Photon::IPhotonPeerListener::DebugReturn)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.OnOperationResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::OperationResponse*)>(&::ExitGames::Client::Photon::IPhotonPeerListener::OnOperationResponse)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.OnStatusChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::StatusCode)>(&::ExitGames::Client::Photon::IPhotonPeerListener::OnStatusChanged)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::ExitGames::Client::Photon::IPhotonPeerListener.OnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::ExitGames::Client::Photon::IPhotonPeerListener::*)(::ExitGames::Client::Photon::EventData*)>(&::ExitGames::Client::Photon::IPhotonPeerListener::OnEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(),
                    {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 3}
                ));
    return ___internal_method;
  }
};
inline void ExitGames::Client::Photon::IPhotonPeerListener::DebugReturn(::ExitGames::Client::Photon::DebugLevel  level, ::StringW  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message);
}
inline void ExitGames::Client::Photon::IPhotonPeerListener::OnOperationResponse(::ExitGames::Client::Photon::OperationResponse*  operationResponse)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, operationResponse);
}
inline void ExitGames::Client::Photon::IPhotonPeerListener::OnStatusChanged(::ExitGames::Client::Photon::StatusCode  statusCode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, statusCode);
}
inline void ExitGames::Client::Photon::IPhotonPeerListener::OnEvent(::ExitGames::Client::Photon::EventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::ExitGames::Client::Photon::IPhotonPeerListener*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
