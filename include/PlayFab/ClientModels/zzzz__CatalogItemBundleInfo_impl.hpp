#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItemBundleInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItemBundleInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CatalogItemBundleInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CatalogItemBundleInfo::*)()>(&::PlayFab::ClientModels::CatalogItemBundleInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItemBundleInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_get_BundledItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundledItems;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_get_BundledItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundledItems;
}
constexpr void PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_set_BundledItems(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundledItems = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_get_BundledResultTables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundledResultTables;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_get_BundledResultTables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundledResultTables;
}
constexpr void PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_set_BundledResultTables(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundledResultTables = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_get_BundledVirtualCurrencies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundledVirtualCurrencies;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_get_BundledVirtualCurrencies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BundledVirtualCurrencies;
}
constexpr void PlayFab::ClientModels::CatalogItemBundleInfo::__cordl_internal_set_BundledVirtualCurrencies(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BundledVirtualCurrencies = value;
}
inline void PlayFab::ClientModels::CatalogItemBundleInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItemBundleInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CatalogItemBundleInfo* PlayFab::ClientModels::CatalogItemBundleInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CatalogItemBundleInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CatalogItemBundleInfo::CatalogItemBundleInfo()   {
}
