#pragma once
// IWYU pragma private; include "Photon/Realtime/EnterRoomParams.hpp"
#include "Photon/Realtime/zzzz__JoinMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Photon/Realtime/zzzz__TypedLobby_def.hpp"
//  Writing Method size for method: ::Photon::Realtime::EnterRoomParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Realtime::EnterRoomParams::*)()>(&::Photon::Realtime::EnterRoomParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa6fcce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::EnterRoomParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr ::StringW const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_RoomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomName = value;
}
constexpr ::Photon::Realtime::RoomOptions*& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomOptions;
}
constexpr ::Photon::Realtime::RoomOptions* const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomOptions;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_RoomOptions(::Photon::Realtime::RoomOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomOptions = value;
}
constexpr ::Photon::Realtime::TypedLobby*& Photon::Realtime::EnterRoomParams::__cordl_internal_get_Lobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lobby;
}
constexpr ::Photon::Realtime::TypedLobby* const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_Lobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lobby;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_Lobby(::Photon::Realtime::TypedLobby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lobby = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& Photon::Realtime::EnterRoomParams::__cordl_internal_get_PlayerProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProperties;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_PlayerProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProperties;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_PlayerProperties(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerProperties = value;
}
constexpr bool& Photon::Realtime::EnterRoomParams::__cordl_internal_get_OnGameServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGameServer;
}
constexpr bool const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_OnGameServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGameServer;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_OnGameServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGameServer = value;
}
constexpr ::Photon::Realtime::JoinMode& Photon::Realtime::EnterRoomParams::__cordl_internal_get_JoinMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinMode;
}
constexpr ::Photon::Realtime::JoinMode const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_JoinMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinMode;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_JoinMode(::Photon::Realtime::JoinMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinMode = value;
}
constexpr ::ArrayW<::StringW>& Photon::Realtime::EnterRoomParams::__cordl_internal_get_ExpectedUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedUsers;
}
constexpr ::ArrayW<::StringW> const& Photon::Realtime::EnterRoomParams::__cordl_internal_get_ExpectedUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedUsers;
}
constexpr void Photon::Realtime::EnterRoomParams::__cordl_internal_set_ExpectedUsers(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedUsers = value;
}
inline void Photon::Realtime::EnterRoomParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Realtime::EnterRoomParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Realtime::EnterRoomParams* Photon::Realtime::EnterRoomParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Realtime::EnterRoomParams*>());
}
// Ctor Parameters []
constexpr ::Photon::Realtime::EnterRoomParams::EnterRoomParams()   {
}
