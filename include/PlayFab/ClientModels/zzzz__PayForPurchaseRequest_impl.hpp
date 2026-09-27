#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PayForPurchaseRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PayForPurchaseRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PayForPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PayForPurchaseRequest::*)()>(&::PlayFab::ClientModels::PayForPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PayForPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_Currency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Currency;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_Currency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Currency;
}
constexpr void PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_set_Currency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Currency = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_OrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_OrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrderId;
}
constexpr void PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_set_OrderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrderId = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_ProviderName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderName;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_ProviderName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderName;
}
constexpr void PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_set_ProviderName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderName = value;
}
constexpr ::StringW& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_ProviderTransactionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderTransactionId;
}
constexpr ::StringW const& PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_get_ProviderTransactionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ProviderTransactionId;
}
constexpr void PlayFab::ClientModels::PayForPurchaseRequest::__cordl_internal_set_ProviderTransactionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ProviderTransactionId = value;
}
inline void PlayFab::ClientModels::PayForPurchaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PayForPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PayForPurchaseRequest* PlayFab::ClientModels::PayForPurchaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PayForPurchaseRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PayForPurchaseRequest::PayForPurchaseRequest()   {
}
