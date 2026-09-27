#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/OpJoinRandomRoomParams.hpp"
#include "Fusion/Photon/Realtime/zzzz__MatchmakingMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__OpJoinRandomRoomParams_def.hpp"
#include "ExitGames/Client/Photon/zzzz__Hashtable_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__TypedLobby_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::OpJoinRandomRoomParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::OpJoinRandomRoomParams::*)()>(&::Fusion::Photon::Realtime::OpJoinRandomRoomParams::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f5dbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ExitGames::Client::Photon::Hashtable*& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedCustomRoomProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedCustomRoomProperties;
}
constexpr ::ExitGames::Client::Photon::Hashtable* const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedCustomRoomProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedCustomRoomProperties;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_ExpectedCustomRoomProperties(::ExitGames::Client::Photon::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedCustomRoomProperties = value;
}
constexpr int32_t& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedMaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedMaxPlayers;
}
constexpr int32_t const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedMaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedMaxPlayers;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_ExpectedMaxPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedMaxPlayers = value;
}
constexpr ::Fusion::Photon::Realtime::MatchmakingMode& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_MatchingType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchingType;
}
constexpr ::Fusion::Photon::Realtime::MatchmakingMode const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_MatchingType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchingType;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_MatchingType(::Fusion::Photon::Realtime::MatchmakingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchingType = value;
}
constexpr ::Fusion::Photon::Realtime::TypedLobby*& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_TypedLobby()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypedLobby;
}
constexpr ::Fusion::Photon::Realtime::TypedLobby* const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_TypedLobby() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TypedLobby;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_TypedLobby(::Fusion::Photon::Realtime::TypedLobby*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TypedLobby = value;
}
constexpr ::StringW& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_SqlLobbyFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SqlLobbyFilter;
}
constexpr ::StringW const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_SqlLobbyFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SqlLobbyFilter;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_SqlLobbyFilter(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SqlLobbyFilter = value;
}
constexpr ::ArrayW<::StringW>& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedUsers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedUsers;
}
constexpr ::ArrayW<::StringW> const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_ExpectedUsers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpectedUsers;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_ExpectedUsers(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpectedUsers = value;
}
constexpr ::System::Object*& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_Ticket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ticket;
}
constexpr ::System::Object* const& Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_get_Ticket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ticket;
}
constexpr void Fusion::Photon::Realtime::OpJoinRandomRoomParams::__cordl_internal_set_Ticket(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ticket = value;
}
inline void Fusion::Photon::Realtime::OpJoinRandomRoomParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::OpJoinRandomRoomParams* Fusion::Photon::Realtime::OpJoinRandomRoomParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::OpJoinRandomRoomParams*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::OpJoinRandomRoomParams::OpJoinRandomRoomParams()   {
}
