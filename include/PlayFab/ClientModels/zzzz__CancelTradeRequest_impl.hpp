#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CancelTradeRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CancelTradeRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CancelTradeRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CancelTradeRequest::*)()>(&::PlayFab::ClientModels::CancelTradeRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CancelTradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CancelTradeRequest::__cordl_internal_get_TradeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr ::StringW const& PlayFab::ClientModels::CancelTradeRequest::__cordl_internal_get_TradeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr void PlayFab::ClientModels::CancelTradeRequest::__cordl_internal_set_TradeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TradeId = value;
}
inline void PlayFab::ClientModels::CancelTradeRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CancelTradeRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CancelTradeRequest* PlayFab::ClientModels::CancelTradeRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CancelTradeRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CancelTradeRequest::CancelTradeRequest()   {
}
