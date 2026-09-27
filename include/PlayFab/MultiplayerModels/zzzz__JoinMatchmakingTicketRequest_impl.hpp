#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/JoinMatchmakingTicketRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__JoinMatchmakingTicketRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayer_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::*)()>(&::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer*& PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_get_Member()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Member;
}
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer* const& PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_get_Member() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Member;
}
constexpr void PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_set_Member(::PlayFab::MultiplayerModels::MatchmakingPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Member = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_get_TicketId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_get_TicketId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr void PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::__cordl_internal_set_TicketId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TicketId = value;
}
inline void PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest* PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::JoinMatchmakingTicketRequest::JoinMatchmakingTicketRequest()   {
}
