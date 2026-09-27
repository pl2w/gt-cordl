#pragma once
// IWYU pragma private; include "Photon/Realtime/IInRoomCallbacks.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::IInRoomCallbacks.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::IInRoomCallbacks::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IInRoomCallbacks.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::IInRoomCallbacks::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IInRoomCallbacks.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IInRoomCallbacks::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::IInRoomCallbacks::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IInRoomCallbacks.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::IInRoomCallbacks::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::IInRoomCallbacks.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::IInRoomCallbacks::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::IInRoomCallbacks::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Photon::Realtime::IInRoomCallbacks::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Photon::Realtime::IInRoomCallbacks::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Photon::Realtime::IInRoomCallbacks::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Realtime::IInRoomCallbacks::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Photon::Realtime::IInRoomCallbacks::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Realtime::IInRoomCallbacks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
