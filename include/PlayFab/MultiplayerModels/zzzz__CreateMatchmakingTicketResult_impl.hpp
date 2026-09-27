#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CreateMatchmakingTicketResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CreateMatchmakingTicketResult_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::*)()>(&::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::__cordl_internal_get_TicketId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::__cordl_internal_get_TicketId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketId;
}
constexpr void PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::__cordl_internal_set_TicketId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TicketId = value;
}
inline void PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult* PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CreateMatchmakingTicketResult::CreateMatchmakingTicketResult()   {
}
