#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateMatchmakingTicketRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateMatchmakingTicketRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::*)()>(&::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer*& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_Creator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Creator;
}
constexpr ::PlayFab::MultiplayerModels::MatchmakingPlayer* const& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_Creator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Creator;
}
constexpr void PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_set_Creator(::PlayFab::MultiplayerModels::MatchmakingPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Creator = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_GiveUpAfterSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr int32_t const& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_GiveUpAfterSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GiveUpAfterSeconds;
}
constexpr void PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_set_GiveUpAfterSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GiveUpAfterSeconds = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_MembersToMatchWith()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembersToMatchWith;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>* const& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_MembersToMatchWith() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembersToMatchWith;
}
constexpr void PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_set_MembersToMatchWith(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::EntityKey*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MembersToMatchWith = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
inline void PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest* PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateMatchmakingTicketRequest::CreateMatchmakingTicketRequest()   {
}
