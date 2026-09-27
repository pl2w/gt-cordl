#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItem.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItem_def.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItemBundleInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItemConsumableInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItemContainerInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CatalogItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CatalogItem::*)()>(&::PlayFab::ClientModels::CatalogItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::CatalogItemBundleInfo*& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Bundle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bundle;
}
constexpr ::PlayFab::ClientModels::CatalogItemBundleInfo* const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Bundle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Bundle;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_Bundle(::PlayFab::ClientModels::CatalogItemBundleInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Bundle = value;
}
constexpr bool& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_CanBecomeCharacter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanBecomeCharacter;
}
constexpr bool const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_CanBecomeCharacter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CanBecomeCharacter;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_CanBecomeCharacter(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CanBecomeCharacter = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::PlayFab::ClientModels::CatalogItemConsumableInfo*& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Consumable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Consumable;
}
constexpr ::PlayFab::ClientModels::CatalogItemConsumableInfo* const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Consumable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Consumable;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_Consumable(::PlayFab::ClientModels::CatalogItemConsumableInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Consumable = value;
}
constexpr ::PlayFab::ClientModels::CatalogItemContainerInfo*& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Container()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Container;
}
constexpr ::PlayFab::ClientModels::CatalogItemContainerInfo* const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Container() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Container;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_Container(::PlayFab::ClientModels::CatalogItemContainerInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Container = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_CustomData(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Description = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr int32_t& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_InitialLimitedEditionCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialLimitedEditionCount;
}
constexpr int32_t const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_InitialLimitedEditionCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialLimitedEditionCount;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_InitialLimitedEditionCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialLimitedEditionCount = value;
}
constexpr bool& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_IsLimitedEdition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLimitedEdition;
}
constexpr bool const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_IsLimitedEdition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsLimitedEdition;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_IsLimitedEdition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsLimitedEdition = value;
}
constexpr bool& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_IsStackable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsStackable;
}
constexpr bool const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_IsStackable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsStackable;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_IsStackable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsStackable = value;
}
constexpr bool& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_IsTradable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTradable;
}
constexpr bool const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_IsTradable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsTradable;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_IsTradable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsTradable = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_ItemClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemClass;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_ItemClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemClass;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_ItemClass(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemClass = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_ItemImageUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemImageUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_ItemImageUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemImageUrl;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_ItemImageUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemImageUrl = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_RealCurrencyPrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RealCurrencyPrices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_RealCurrencyPrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RealCurrencyPrices;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_RealCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RealCurrencyPrices = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Tags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_Tags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tags;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_Tags(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tags = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_VirtualCurrencyPrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyPrices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CatalogItem::__cordl_internal_get_VirtualCurrencyPrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyPrices;
}
constexpr void PlayFab::ClientModels::CatalogItem::__cordl_internal_set_VirtualCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyPrices = value;
}
inline void PlayFab::ClientModels::CatalogItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CatalogItem* PlayFab::ClientModels::CatalogItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CatalogItem*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CatalogItem::CatalogItem()   {
}
