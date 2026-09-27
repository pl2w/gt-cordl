#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/LobbyCallbacksContainer.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__LobbyCallbacksContainer_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__ILobbyCallbacks_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__LoadBalancingClient_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomInfo_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobbyInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::LobbyCallbacksContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LobbyCallbacksContainer::*)(::Fusion::Photon::Realtime::LoadBalancingClient*)>(&::Fusion::Photon::Realtime::LobbyCallbacksContainer::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f59198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LobbyCallbacksContainer.OnJoinedLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LobbyCallbacksContainer::*)()>(&::Fusion::Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5f59220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LobbyCallbacksContainer.OnLeftLobby
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LobbyCallbacksContainer::*)()>(&::Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5f593c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LobbyCallbacksContainer.OnRoomListUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LobbyCallbacksContainer::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*)>(&::Fusion::Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f59574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::LobbyCallbacksContainer.OnLobbyStatisticsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::LobbyCallbacksContainer::*)(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*)>(&::Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x5f59730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient*& Fusion::Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_get_client()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr ::Fusion::Photon::Realtime::LoadBalancingClient* const& Fusion::Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_get_client() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___client;
}
constexpr void Fusion::Photon::Realtime::LobbyCallbacksContainer::__cordl_internal_set_client(::Fusion::Photon::Realtime::LoadBalancingClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___client = value;
}
inline void Fusion::Photon::Realtime::LobbyCallbacksContainer::_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Photon::Realtime::LoadBalancingClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, client);
}
inline void Fusion::Photon::Realtime::LobbyCallbacksContainer::OnJoinedLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnJoinedLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLeftLobby()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLeftLobby", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::LobbyCallbacksContainer::OnRoomListUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*  roomList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnRoomListUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::RoomInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, roomList);
}
inline void Fusion::Photon::Realtime::LobbyCallbacksContainer::OnLobbyStatisticsUpdate(::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*  lobbyStatistics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(),
                        {"OnLobbyStatisticsUpdate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Fusion::Photon::Realtime::TypedLobbyInfo*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lobbyStatistics);
}
inline ::Fusion::Photon::Realtime::LobbyCallbacksContainer* Fusion::Photon::Realtime::LobbyCallbacksContainer::New_ctor(::Fusion::Photon::Realtime::LoadBalancingClient*  client)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::LobbyCallbacksContainer*>(client));
}
/// @brief Convert operator to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr  Fusion::Photon::Realtime::LobbyCallbacksContainer::operator ::Fusion::Photon::Realtime::ILobbyCallbacks*() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::Photon::Realtime::ILobbyCallbacks"
constexpr ::Fusion::Photon::Realtime::ILobbyCallbacks* Fusion::Photon::Realtime::LobbyCallbacksContainer::i___Fusion__Photon__Realtime__ILobbyCallbacks() noexcept {
return static_cast<::Fusion::Photon::Realtime::ILobbyCallbacks*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::LobbyCallbacksContainer::LobbyCallbacksContainer()   {
}
