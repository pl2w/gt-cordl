#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTradeStatusRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetTradeStatusRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetTradeStatusRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetTradeStatusRequest::*)()>(&::PlayFab::ClientModels::GetTradeStatusRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTradeStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetTradeStatusRequest::__cordl_internal_get_OfferingPlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferingPlayerId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetTradeStatusRequest::__cordl_internal_get_OfferingPlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OfferingPlayerId;
}
constexpr void PlayFab::ClientModels::GetTradeStatusRequest::__cordl_internal_set_OfferingPlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OfferingPlayerId = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetTradeStatusRequest::__cordl_internal_get_TradeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetTradeStatusRequest::__cordl_internal_get_TradeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TradeId;
}
constexpr void PlayFab::ClientModels::GetTradeStatusRequest::__cordl_internal_set_TradeId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TradeId = value;
}
inline void PlayFab::ClientModels::GetTradeStatusRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTradeStatusRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetTradeStatusRequest* PlayFab::ClientModels::GetTradeStatusRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetTradeStatusRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetTradeStatusRequest::GetTradeStatusRequest()   {
}
