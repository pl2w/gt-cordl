#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/EnterRoomParams.hpp"
#include "Fusion/Photon/Realtime/zzzz__JoinMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__EnterRoomParams_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__RoomOptions_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::EnterRoomParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::EnterRoomParams::*)()>(&::Fusion::Photon::Realtime::EnterRoomParams::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f5dbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::EnterRoomParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr ::StringW const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomName;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_RoomName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomName = value;
}
constexpr ::Fusion::Photon::Realtime::RoomOptions*& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomOptions;
}
constexpr ::Fusion::Photon::Realtime::RoomOptions* const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_RoomOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RoomOptions;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_RoomOptions(::Fusion::Photon::Realtime::RoomOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RoomOptions = value;
}
constexpr ::Fusion::Photon::Realtime::TypedLobby*& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_Lobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lobby;
}
constexpr ::Fusion::Photon::Realtime::TypedLobby* const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_Lobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lobby;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_Lobby(::Fusion::Photon::Realtime::TypedLobby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lobby = value;
}
constexpr ::ExitGames::Client::Photon::Hashtable*& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_PlayerProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProperties;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_PlayerProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerProperties;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_PlayerProperties(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerProperties = value;
}
constexpr bool& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_OnGameServer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGameServer;
}
constexpr bool const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_OnGameServer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGameServer;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_OnGameServer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGameServer = value;
}
constexpr ::Fusion::Photon::Realtime::JoinMode& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_JoinMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinMode;
}
constexpr ::Fusion::Photon::Realtime::JoinMode const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_JoinMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___JoinMode;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_JoinMode(::Fusion::Photon::Realtime::JoinMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___JoinMode = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_ExpectedUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedUsers;
}
constexpr ::ArrayW<::StringW> const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_ExpectedUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedUsers;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_ExpectedUsers(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedUsers = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_Ticket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ticket;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_get_Ticket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ticket;
}
constexpr void Fusion::Photon::Realtime::EnterRoomParams::__cordl_internal_set_Ticket(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ticket = value;
}
inline void Fusion::Photon::Realtime::EnterRoomParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::EnterRoomParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::EnterRoomParams* Fusion::Photon::Realtime::EnterRoomParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::EnterRoomParams*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::EnterRoomParams::EnterRoomParams()   {
}
