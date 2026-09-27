#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelAllMatchmakingTicketsForPlayerRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CancelAllMatchmakingTicketsForPlayerRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::*)()>(&::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::EntityKey*& PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey* const& PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::__cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
inline void PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest* PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CancelAllMatchmakingTicketsForPlayerRequest::CancelAllMatchmakingTicketsForPlayerRequest()   {
}
