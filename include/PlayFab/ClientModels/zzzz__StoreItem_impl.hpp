#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/StoreItem.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__StoreItem_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::StoreItem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::StoreItem::*)()>(&::PlayFab::ClientModels::StoreItem::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StoreItem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Object*& PlayFab::ClientModels::StoreItem::__cordl_internal_get_CustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr ::System::Object* const& PlayFab::ClientModels::StoreItem::__cordl_internal_get_CustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomData;
}
constexpr void PlayFab::ClientModels::StoreItem::__cordl_internal_set_CustomData(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomData = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::ClientModels::StoreItem::__cordl_internal_get_DisplayPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayPosition;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::ClientModels::StoreItem::__cordl_internal_get_DisplayPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayPosition;
}
constexpr void PlayFab::ClientModels::StoreItem::__cordl_internal_set_DisplayPosition(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayPosition = value;
}
constexpr ::StringW& PlayFab::ClientModels::StoreItem::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::StoreItem::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::StoreItem::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::StoreItem::__cordl_internal_get_RealCurrencyPrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RealCurrencyPrices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::StoreItem::__cordl_internal_get_RealCurrencyPrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RealCurrencyPrices;
}
constexpr void PlayFab::ClientModels::StoreItem::__cordl_internal_set_RealCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RealCurrencyPrices = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::StoreItem::__cordl_internal_get_VirtualCurrencyPrices()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyPrices;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::StoreItem::__cordl_internal_get_VirtualCurrencyPrices() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyPrices;
}
constexpr void PlayFab::ClientModels::StoreItem::__cordl_internal_set_VirtualCurrencyPrices(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyPrices = value;
}
inline void PlayFab::ClientModels::StoreItem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::StoreItem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::StoreItem* PlayFab::ClientModels::StoreItem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::StoreItem*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::StoreItem::StoreItem()   {
}
