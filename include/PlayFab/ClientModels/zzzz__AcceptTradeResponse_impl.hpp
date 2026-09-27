#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AcceptTradeResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AcceptTradeResponse_def.hpp"
#include "PlayFab/ClientModels/zzzz__TradeInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AcceptTradeResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AcceptTradeResponse::*)()>(&::PlayFab::ClientModels::AcceptTradeResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84d9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AcceptTradeResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::TradeInfo*& PlayFab::ClientModels::AcceptTradeResponse::__cordl_internal_get_Trade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trade;
}
constexpr ::PlayFab::ClientModels::TradeInfo* const& PlayFab::ClientModels::AcceptTradeResponse::__cordl_internal_get_Trade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Trade;
}
constexpr void PlayFab::ClientModels::AcceptTradeResponse::__cordl_internal_set_Trade(::PlayFab::ClientModels::TradeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Trade = value;
}
inline void PlayFab::ClientModels::AcceptTradeResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AcceptTradeResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AcceptTradeResponse* PlayFab::ClientModels::AcceptTradeResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AcceptTradeResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AcceptTradeResponse::AcceptTradeResponse()   {
}
