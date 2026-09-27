#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerTradesRequest.hpp"
#include "PlayFab/ClientModels/zzzz__TradeStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerTradesRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerTradesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerTradesRequest::*)()>(&::PlayFab::ClientModels::GetPlayerTradesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerTradesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>& PlayFab::ClientModels::GetPlayerTradesRequest::__cordl_internal_get_StatusFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusFilter;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TradeStatus> const& PlayFab::ClientModels::GetPlayerTradesRequest::__cordl_internal_get_StatusFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatusFilter;
}
constexpr void PlayFab::ClientModels::GetPlayerTradesRequest::__cordl_internal_set_StatusFilter(::System::Nullable_1<::PlayFab::ClientModels::TradeStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatusFilter = value;
}
inline void PlayFab::ClientModels::GetPlayerTradesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerTradesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerTradesRequest* PlayFab::ClientModels::GetPlayerTradesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerTradesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerTradesRequest::GetPlayerTradesRequest()   {
}
