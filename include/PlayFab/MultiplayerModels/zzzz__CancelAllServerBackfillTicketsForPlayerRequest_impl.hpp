#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelAllServerBackfillTicketsForPlayerRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CancelAllServerBackfillTicketsForPlayerRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::*)()>(&::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::EntityKey*& PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey* const& PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::__cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
inline void PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest* PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CancelAllServerBackfillTicketsForPlayerRequest::CancelAllServerBackfillTicketsForPlayerRequest()   {
}
