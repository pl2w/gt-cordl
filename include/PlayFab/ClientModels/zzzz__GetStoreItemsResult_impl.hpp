#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetStoreItemsResult.hpp"
#include "PlayFab/ClientModels/zzzz__SourceType_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetStoreItemsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__StoreItem_def.hpp"
#include "PlayFab/ClientModels/zzzz__StoreMarketingModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetStoreItemsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetStoreItemsResult::*)()>(&::PlayFab::ClientModels::GetStoreItemsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetStoreItemsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::PlayFab::ClientModels::StoreMarketingModel*& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_MarketingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MarketingData;
}
constexpr ::PlayFab::ClientModels::StoreMarketingModel* const& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_MarketingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MarketingData;
}
constexpr void PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_set_MarketingData(::PlayFab::ClientModels::StoreMarketingModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MarketingData = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::SourceType>& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::SourceType> const& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_set_Source(::System::Nullable_1<::PlayFab::ClientModels::SourceType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Source = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>*& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_Store()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Store;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>* const& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_Store() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Store;
}
constexpr void PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_set_Store(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StoreItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Store = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_StoreId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_get_StoreId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StoreId;
}
constexpr void PlayFab::ClientModels::GetStoreItemsResult::__cordl_internal_set_StoreId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StoreId = value;
}
inline void PlayFab::ClientModels::GetStoreItemsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetStoreItemsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetStoreItemsResult* PlayFab::ClientModels::GetStoreItemsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetStoreItemsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetStoreItemsResult::GetStoreItemsResult()   {
}
