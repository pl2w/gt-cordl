#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumePSNEntitlementsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ConsumePSNEntitlementsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ConsumePSNEntitlementsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ConsumePSNEntitlementsRequest::*)()>(&::PlayFab::ClientModels::ConsumePSNEntitlementsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84daf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumePSNEntitlementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ConsumePSNEntitlementsRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::ConsumePSNEntitlementsRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::ConsumePSNEntitlementsRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr int32_t& PlayFab::ClientModels::ConsumePSNEntitlementsRequest::__cordl_internal_get_ServiceLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServiceLabel;
}
constexpr int32_t const& PlayFab::ClientModels::ConsumePSNEntitlementsRequest::__cordl_internal_get_ServiceLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServiceLabel;
}
constexpr void PlayFab::ClientModels::ConsumePSNEntitlementsRequest::__cordl_internal_set_ServiceLabel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServiceLabel = value;
}
inline void PlayFab::ClientModels::ConsumePSNEntitlementsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumePSNEntitlementsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ConsumePSNEntitlementsRequest* PlayFab::ClientModels::ConsumePSNEntitlementsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ConsumePSNEntitlementsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ConsumePSNEntitlementsRequest::ConsumePSNEntitlementsRequest()   {
}
