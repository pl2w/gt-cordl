#pragma once
// IWYU pragma private; include "Photon/Realtime/LobbyCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Photon/Realtime/zzzz__LobbyCallbacksContainer_def.hpp"
#include "Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)(::Photon::Realtime::LoadBalancingClient*)>(&::Photon::Realtime::LobbyCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa6fa6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)()>(&::Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa702ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)()>(&::Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa702e84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*)>(&::Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa702b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Realtime::LobbyCallbacksContainer.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::LobbyCallbacksContainer::*)(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*)>(&::Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa705334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Photon::Realtime::LoadBalancingClient*& Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Photon::Realtime::LoadBalancingClient* const& Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_set_client(::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Photon::Realtime::LobbyCallbacksContainer::_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline ::Photon::Realtime::LobbyCallbacksContainer* Photon::Realtime::LobbyCallbacksContainer::New_ctor(::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::LobbyCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Photon::Realtime::ILobbyCallbacks"
constexpr  Photon::Realtime::LobbyCallbacksContainer::operator ::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Photon::Realtime::ILobbyCallbacks"
constexpr ::Photon::Realtime::ILobbyCallbacks* Photon::Realtime::LobbyCallbacksContainer::i___Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Photon::Realtime::LobbyCallbacksContainer::LobbyCallbacksContainer()   {
}
