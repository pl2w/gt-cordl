#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTradesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerTradesResponse_def.hpp"
#include "PlayFab/ClientModels/zzzz__TradeInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerTradesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerTradesResponse::*)()>(&::PlayFab::ClientModels::GetPlayerTradesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerTradesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*& PlayFab::ClientModels::GetPlayerTradesResponse::__cordl_internal_get_AcceptedTrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedTrades;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>* const& PlayFab::ClientModels::GetPlayerTradesResponse::__cordl_internal_get_AcceptedTrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AcceptedTrades;
}
constexpr void PlayFab::ClientModels::GetPlayerTradesResponse::__cordl_internal_set_AcceptedTrades(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AcceptedTrades = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*& PlayFab::ClientModels::GetPlayerTradesResponse::__cordl_internal_get_OpenedTrades()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenedTrades;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>* const& PlayFab::ClientModels::GetPlayerTradesResponse::__cordl_internal_get_OpenedTrades() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OpenedTrades;
}
constexpr void PlayFab::ClientModels::GetPlayerTradesResponse::__cordl_internal_set_OpenedTrades(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TradeInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OpenedTrades = value;
}
inline void PlayFab::ClientModels::GetPlayerTradesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerTradesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerTradesResponse* PlayFab::ClientModels::GetPlayerTradesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerTradesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerTradesResponse::GetPlayerTradesResponse()   {
}
