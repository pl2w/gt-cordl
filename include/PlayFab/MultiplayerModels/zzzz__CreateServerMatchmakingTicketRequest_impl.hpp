#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateServerMatchmakingTicketRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateServerMatchmakingTicketRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::*)()>(&::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_get_GiveUpAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_get_GiveUpAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr void PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_set_GiveUpAfterSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GiveUpAfterSeconds = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*& PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>* const& PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
inline void PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest* PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateServerMatchmakingTicketRequest::CreateServerMatchmakingTicketRequest()   {
}
