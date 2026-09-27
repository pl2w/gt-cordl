#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/PurchaseItemRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__PurchaseItemRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::PurchaseItemRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::PurchaseItemRequest::*)()>(&::PlayFab::ClientModels::PurchaseItemRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PurchaseItemRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
constexpr int32_t& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_Price()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Price;
}
constexpr int32_t const& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_Price() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Price;
}
constexpr void PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_set_Price(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Price = value;
}
constexpr ::StringW& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_StoreId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreId;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_StoreId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreId;
}
constexpr void PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_set_StoreId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StoreId = value;
}
constexpr ::StringW& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_VirtualCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr ::StringW const& PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_get_VirtualCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrency;
}
constexpr void PlayFab::ClientModels::PurchaseItemRequest::__cordl_internal_set_VirtualCurrency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrency = value;
}
inline void PlayFab::ClientModels::PurchaseItemRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::PurchaseItemRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::PurchaseItemRequest* PlayFab::ClientModels::PurchaseItemRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::PurchaseItemRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::PurchaseItemRequest::PurchaseItemRequest()   {
}
