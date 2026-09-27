#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ItemInstance.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ItemInstance_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ItemInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ItemInstance::*)()>(&::PlayFab::ClientModels::ItemInstance::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84ded0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ItemInstance*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_Annotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Annotation;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_Annotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Annotation;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_Annotation(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Annotation = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_BundleContents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleContents;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_BundleContents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleContents;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_BundleContents(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundleContents = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_BundleParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleParent;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_BundleParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundleParent;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_BundleParent(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundleParent = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_CustomData(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_Expiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expiration;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_Expiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expiration;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_Expiration(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Expiration = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_ItemClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemClass;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_ItemClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemClass;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_ItemClass(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemClass = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_ItemInstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_ItemInstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_ItemInstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemInstanceId = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_PurchaseDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseDate;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_PurchaseDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PurchaseDate;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_PurchaseDate(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PurchaseDate = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_RemainingUses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemainingUses;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_RemainingUses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RemainingUses;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_RemainingUses(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RemainingUses = value;
}
constexpr ::StringW& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_UnitCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnitCurrency;
}
constexpr ::StringW const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_UnitCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnitCurrency;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_UnitCurrency(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnitCurrency = value;
}
constexpr uint32_t& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_UnitPrice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnitPrice;
}
constexpr uint32_t const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_UnitPrice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnitPrice;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_UnitPrice(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnitPrice = value;
}
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_UsesIncrementedBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsesIncrementedBy;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::ItemInstance::__cordl_internal_get_UsesIncrementedBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UsesIncrementedBy;
}
constexpr void PlayFab::ClientModels::ItemInstance::__cordl_internal_set_UsesIncrementedBy(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UsesIncrementedBy = value;
}
inline void PlayFab::ClientModels::ItemInstance::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ItemInstance*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ItemInstance* PlayFab::ClientModels::ItemInstance::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ItemInstance*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ItemInstance::ItemInstance()   {
}
