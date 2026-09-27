#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/IInRoomCallbacks.hpp"
#include "Fusion/Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::IInRoomCallbacks.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::IInRoomCallbacks::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::IInRoomCallbacks::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::IInRoomCallbacks.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::IInRoomCallbacks::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::IInRoomCallbacks::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::IInRoomCallbacks.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::IInRoomCallbacks::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::IInRoomCallbacks::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::IInRoomCallbacks.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::IInRoomCallbacks::*)(::Fusion::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Fusion::Photon::Realtime::IInRoomCallbacks::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::IInRoomCallbacks.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::IInRoomCallbacks::*)(::Fusion::Photon::Realtime::Player*)>(&::Fusion::Photon::Realtime::IInRoomCallbacks::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void Fusion::Photon::Realtime::IInRoomCallbacks::OnPlayerEnteredRoom(::Fusion::Photon::Realtime::Player*  newPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Fusion::Photon::Realtime::IInRoomCallbacks::OnPlayerLeftRoom(::Fusion::Photon::Realtime::Player*  otherPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Fusion::Photon::Realtime::IInRoomCallbacks::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Fusion::Photon::Realtime::IInRoomCallbacks::OnPlayerPropertiesUpdate(::Fusion::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProps)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProps);
}
inline void Fusion::Photon::Realtime::IInRoomCallbacks::OnMasterClientSwitched(::Fusion::Photon::Realtime::Player*  newMasterClient)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::IInRoomCallbacks*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
