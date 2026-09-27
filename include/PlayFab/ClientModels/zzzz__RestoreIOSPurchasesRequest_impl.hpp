#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RestoreIOSPurchasesRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RestoreIOSPurchasesRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RestoreIOSPurchasesRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RestoreIOSPurchasesRequest::*)()>(&::PlayFab::ClientModels::RestoreIOSPurchasesRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RestoreIOSPurchasesRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::RestoreIOSPurchasesRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::RestoreIOSPurchasesRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::RestoreIOSPurchasesRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::RestoreIOSPurchasesRequest::__cordl_internal_get_ReceiptData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptData;
}
constexpr ::StringW const& PlayFab::ClientModels::RestoreIOSPurchasesRequest::__cordl_internal_get_ReceiptData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiptData;
}
constexpr void PlayFab::ClientModels::RestoreIOSPurchasesRequest::__cordl_internal_set_ReceiptData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiptData = value;
}
inline void PlayFab::ClientModels::RestoreIOSPurchasesRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RestoreIOSPurchasesRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RestoreIOSPurchasesRequest* PlayFab::ClientModels::RestoreIOSPurchasesRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RestoreIOSPurchasesRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RestoreIOSPurchasesRequest::RestoreIOSPurchasesRequest()   {
}
