#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CartItem.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CartItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CartItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CartItem::*)()>(&::PlayFab::ClientModels::CartItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CartItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::CartItem::__cordl_internal_get_Description()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr ::StringW const& PlayFab::ClientModels::CartItem::__cordl_internal_get_Description() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Description;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_Description(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Description = value;
}
constexpr ::StringW& PlayFab::ClientModels::CartItem::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::CartItem::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& PlayFab::ClientModels::CartItem::__cordl_internal_get_ItemClass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemClass;
}
constexpr ::StringW const& PlayFab::ClientModels::CartItem::__cordl_internal_get_ItemClass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemClass;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_ItemClass(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemClass = value;
}
constexpr ::StringW& PlayFab::ClientModels::CartItem::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::CartItem::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
constexpr ::StringW& PlayFab::ClientModels::CartItem::__cordl_internal_get_ItemInstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::CartItem::__cordl_internal_get_ItemInstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_ItemInstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemInstanceId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CartItem::__cordl_internal_get_RealCurrencyPrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RealCurrencyPrices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CartItem::__cordl_internal_get_RealCurrencyPrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RealCurrencyPrices;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_RealCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RealCurrencyPrices = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CartItem::__cordl_internal_get_VCAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VCAmount;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CartItem::__cordl_internal_get_VCAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VCAmount;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_VCAmount(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VCAmount = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CartItem::__cordl_internal_get_VirtualCurrencyPrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyPrices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CartItem::__cordl_internal_get_VirtualCurrencyPrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyPrices;
}
constexpr void PlayFab::ClientModels::CartItem::__cordl_internal_set_VirtualCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyPrices = value;
}
inline void PlayFab::ClientModels::CartItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CartItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CartItem* PlayFab::ClientModels::CartItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CartItem*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CartItem::CartItem()   {
}
