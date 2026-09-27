#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateServerBackfillTicketRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateServerBackfillTicketRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayerWithTeamAssignment_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ServerDetails_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::*)()>(&::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_GiveUpAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_GiveUpAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr void PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_set_GiveUpAfterSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GiveUpAfterSeconds = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>* const& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayerWithTeamAssignment*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
constexpr ::PlayFab::MultiplayerModels::ServerDetails*& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_ServerDetails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerDetails;
}
constexpr ::PlayFab::MultiplayerModels::ServerDetails* const& PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_get_ServerDetails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerDetails;
}
constexpr void PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::__cordl_internal_set_ServerDetails(::PlayFab::MultiplayerModels::ServerDetails*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerDetails = value;
}
inline void PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest* PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateServerBackfillTicketRequest::CreateServerBackfillTicketRequest()   {
}
