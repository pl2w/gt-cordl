#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMatchmakingTicketResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetMatchmakingTicketResult_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetMatchmakingTicketResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetMatchmakingTicketResult::*)()>(&::PlayFab::MultiplayerModels::GetMatchmakingTicketResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8409a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_CancellationReasonString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationReasonString;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_CancellationReasonString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CancellationReasonString;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_CancellationReasonString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CancellationReasonString = value;
}
constexpr ::System::DateTime& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr ::System::DateTime const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_Created(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey*& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Creator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Creator;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey* const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Creator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Creator;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_Creator(::PlayFab::MultiplayerModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Creator = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_GiveUpAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr int32_t const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_GiveUpAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_GiveUpAfterSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GiveUpAfterSeconds = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_MatchId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_MatchId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchId;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_MatchId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Members()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>* const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Members() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Members;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_Members(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Members = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_MembersToMatchWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembersToMatchWith;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>* const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_MembersToMatchWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembersToMatchWith;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_MembersToMatchWith(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MembersToMatchWith = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_Status(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_TicketId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_get_TicketId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::__cordl_internal_set_TicketId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TicketId = value;
}
inline void PlayFab::MultiplayerModels::GetMatchmakingTicketResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetMatchmakingTicketResult* PlayFab::MultiplayerModels::GetMatchmakingTicketResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetMatchmakingTicketResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetMatchmakingTicketResult::GetMatchmakingTicketResult()   {
}
