#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CancelTradeResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CancelTradeResponse_def.hpp"
#include "PlayFab/ClientModels/zzzz__TradeInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CancelTradeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CancelTradeResponse::*)()>(&::PlayFab::ClientModels::CancelTradeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CancelTradeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::TradeInfo*& PlayFab::ClientModels::CancelTradeResponse::__cordl_internal_get_Trade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trade;
}
constexpr ::PlayFab::ClientModels::TradeInfo* const& PlayFab::ClientModels::CancelTradeResponse::__cordl_internal_get_Trade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trade;
}
constexpr void PlayFab::ClientModels::CancelTradeResponse::__cordl_internal_set_Trade(::PlayFab::ClientModels::TradeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Trade = value;
}
inline void PlayFab::ClientModels::CancelTradeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CancelTradeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CancelTradeResponse* PlayFab::ClientModels::CancelTradeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CancelTradeResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CancelTradeResponse::CancelTradeResponse()   {
}
