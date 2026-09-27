#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchmakingTicketRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMatchmakingTicketRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::*)()>(&::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_get_EscapeObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapeObject;
}
constexpr bool const& PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_get_EscapeObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EscapeObject;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_set_EscapeObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EscapeObject = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_get_TicketId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_get_TicketId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::__cordl_internal_set_TicketId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TicketId = value;
}
inline void PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest* PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMatchmakingTicketRequest::GetMatchmakingTicketRequest()   {
}
