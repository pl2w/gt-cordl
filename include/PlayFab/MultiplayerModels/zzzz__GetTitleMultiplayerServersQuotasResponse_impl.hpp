#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetTitleMultiplayerServersQuotasResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__GetTitleMultiplayerServersQuotasResponse_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TitleMultiplayerServersQuotas_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::*)()>(&::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*& PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::__cordl_internal_get_Quotas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quotas;
}
constexpr ::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas* const& PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::__cordl_internal_get_Quotas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quotas;
}
constexpr void PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::__cordl_internal_set_Quotas(::PlayFab::MultiplayerModels::TitleMultiplayerServersQuotas*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quotas = value;
}
inline void PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse* PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::GetTitleMultiplayerServersQuotasResponse::GetTitleMultiplayerServersQuotasResponse()   {
}
