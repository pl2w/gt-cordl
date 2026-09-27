#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StartPurchaseRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__StartPurchaseRequest_def.hpp"
#include "PlayFab/ClientModels/zzzz__ItemPurchaseRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::StartPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::StartPurchaseRequest::*)()>(&::PlayFab::ClientModels::StartPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StartPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>*& PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_get_Items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>* const& PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_get_Items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Items;
}
constexpr void PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_set_Items(::System::Collections::Generic::List_1<::PlayFab::ClientModels::ItemPurchaseRequest*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Items = value;
}
constexpr ::StringW& PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_get_StoreId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreId;
}
constexpr ::StringW const& PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_get_StoreId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreId;
}
constexpr void PlayFab::ClientModels::StartPurchaseRequest::__cordl_internal_set_StoreId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StoreId = value;
}
inline void PlayFab::ClientModels::StartPurchaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StartPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::StartPurchaseRequest* PlayFab::ClientModels::StartPurchaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::StartPurchaseRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::StartPurchaseRequest::StartPurchaseRequest()   {
}
