#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MatchmakeResult.hpp"
#include "PlayFab/ClientModels/zzzz__MatchmakeStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__MatchmakeResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::MatchmakeResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::MatchmakeResult::*)()>(&::PlayFab::ClientModels::MatchmakeResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::MatchmakeResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_Expires()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expires;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_Expires() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expires;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_Expires(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Expires = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_LobbyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyID;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_LobbyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LobbyID;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_LobbyID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LobbyID = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_PollWaitTimeMS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollWaitTimeMS;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_PollWaitTimeMS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PollWaitTimeMS;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_PollWaitTimeMS(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PollWaitTimeMS = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerIPV4Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV4Address;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerIPV4Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV4Address;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_ServerIPV4Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerIPV4Address = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerIPV6Address()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV6Address;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerIPV6Address() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerIPV6Address;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_ServerIPV6Address(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerIPV6Address = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerPort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPort;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerPort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPort;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_ServerPort(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerPort = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerPublicDNSName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPublicDNSName;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_ServerPublicDNSName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerPublicDNSName;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_ServerPublicDNSName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerPublicDNSName = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus>& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus> const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::MatchmakeStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::StringW& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_Ticket()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ticket;
}
constexpr ::StringW const& PlayFab::ClientModels::MatchmakeResult::__cordl_internal_get_Ticket() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Ticket;
}
constexpr void PlayFab::ClientModels::MatchmakeResult::__cordl_internal_set_Ticket(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Ticket = value;
}
inline void PlayFab::ClientModels::MatchmakeResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::MatchmakeResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::MatchmakeResult* PlayFab::ClientModels::MatchmakeResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::MatchmakeResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::MatchmakeResult::MatchmakeResult()   {
}
