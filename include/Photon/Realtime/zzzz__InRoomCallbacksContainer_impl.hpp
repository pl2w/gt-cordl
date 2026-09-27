#pragma once
// IWYU pragma private; include "Photon/Realtime/InRoomCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__InRoomCallbacksContainer_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__IInRoomCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::InRoomCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6fa66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::InRoomCallbacksContainer::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa704db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::InRoomCallbacksContainer::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa705124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnRoomPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::InRoomCallbacksContainer::OnRoomPropertiesUpdate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa6fe558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnPlayerPropertiesUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*, ::ExitGames::Client::Photon::Hashtable*)>(&::Photon::Realtime::InRoomCallbacksContainer::OnPlayerPropertiesUpdate)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xa6fdd5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::InRoomCallbacksContainer.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::InRoomCallbacksContainer::*)(::Photon::Realtime::Player*)>(&::Photon::Realtime::InRoomCallbacksContainer::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa704f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::InRoomCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::InRoomCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Realtime::InRoomCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Photon::Realtime::InRoomCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnPlayerEnteredRoom(::Photon::Realtime::Player*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnPlayerLeftRoom(::Photon::Realtime::Player*  otherPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, otherPlayer);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnRoomPropertiesUpdate(::ExitGames::Client::Photon::Hashtable*  propertiesThatChanged)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnRoomPropertiesUpdate", {}, {::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertiesThatChanged);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnPlayerPropertiesUpdate(::Photon::Realtime::Player*  targetPlayer, ::ExitGames::Client::Photon::Hashtable*  changedProp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnPlayerPropertiesUpdate", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::ExitGames::Client::Photon::Hashtable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPlayer, changedProp);
}
inline void Photon::Realtime::InRoomCallbacksContainer::OnMasterClientSwitched(::Photon::Realtime::Player*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::InRoomCallbacksContainer*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline ::Photon::Realtime::InRoomCallbacksContainer* Photon::Realtime::InRoomCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::InRoomCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Photon::Realtime::IInRoomCallbacks"
constexpr  Photon::Realtime::InRoomCallbacksContainer::operator ::Photon::Realtime::IInRoomCallbacks*() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::IInRoomCallbacks"
constexpr ::Photon::Realtime::IInRoomCallbacks* Photon::Realtime::InRoomCallbacksContainer::i___Photon__Realtime__IInRoomCallbacks() noexcept {
return static_cast<::Photon::Realtime::IInRoomCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::InRoomCallbacksContainer::InRoomCallbacksContainer()   {
}
