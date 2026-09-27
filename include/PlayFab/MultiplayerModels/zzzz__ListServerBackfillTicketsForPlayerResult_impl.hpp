#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListServerBackfillTicketsForPlayerResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListServerBackfillTicketsForPlayerResult_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::*)()>(&::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::__cordl_internal_get_TicketIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketIds;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::__cordl_internal_get_TicketIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TicketIds;
}
constexpr void PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::__cordl_internal_set_TicketIds(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TicketIds = value;
}
inline void PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult* PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult::ListServerBackfillTicketsForPlayerResult()   {
}
