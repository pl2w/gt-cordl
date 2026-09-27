#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CancelServerBackfillTicketResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CancelServerBackfillTicketResult_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult::*)()>(&::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::CancelServerBackfillTicketResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult* PlayFab::MultiplayerModels::CancelServerBackfillTicketResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CancelServerBackfillTicketResult::CancelServerBackfillTicketResult()   {
}
