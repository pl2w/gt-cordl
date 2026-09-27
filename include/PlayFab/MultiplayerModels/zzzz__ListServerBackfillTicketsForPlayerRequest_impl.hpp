#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListServerBackfillTicketsForPlayerRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListServerBackfillTicketsForPlayerRequest_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::*)()>(&::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::EntityKey*& PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::MultiplayerModels::EntityKey* const& PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::__cordl_internal_set_Entity(::PlayFab::MultiplayerModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::__cordl_internal_get_QueueName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::__cordl_internal_get_QueueName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___QueueName;
}
constexpr void PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::__cordl_internal_set_QueueName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___QueueName = value;
}
inline void PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest* PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerRequest::ListServerBackfillTicketsForPlayerRequest()   {
}
