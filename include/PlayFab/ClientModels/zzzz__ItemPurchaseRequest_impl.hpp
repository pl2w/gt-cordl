#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ItemPurchaseRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ItemPurchaseRequest_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ItemPurchaseRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ItemPurchaseRequest::*)()>(&::PlayFab::ClientModels::ItemPurchaseRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84ded8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ItemPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_Annotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Annotation;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_Annotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Annotation;
}
constexpr void PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_set_Annotation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Annotation = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
constexpr uint32_t& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_Quantity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantity;
}
constexpr uint32_t const& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_Quantity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Quantity;
}
constexpr void PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_set_Quantity(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Quantity = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_UpgradeFromItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeFromItems;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_get_UpgradeFromItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpgradeFromItems;
}
constexpr void PlayFab::ClientModels::ItemPurchaseRequest::__cordl_internal_set_UpgradeFromItems(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpgradeFromItems = value;
}
inline void PlayFab::ClientModels::ItemPurchaseRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ItemPurchaseRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ItemPurchaseRequest* PlayFab::ClientModels::ItemPurchaseRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ItemPurchaseRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ItemPurchaseRequest::ItemPurchaseRequest()   {
}
