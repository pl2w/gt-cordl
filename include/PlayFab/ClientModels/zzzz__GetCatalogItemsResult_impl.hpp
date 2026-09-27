#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCatalogItemsResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetCatalogItemsResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItem_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetCatalogItemsResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetCatalogItemsResult::*)()>(&::PlayFab::ClientModels::GetCatalogItemsResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCatalogItemsResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*& PlayFab::ClientModels::GetCatalogItemsResult::__cordl_internal_get_Catalog()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Catalog;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>* const& PlayFab::ClientModels::GetCatalogItemsResult::__cordl_internal_get_Catalog() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Catalog;
}
constexpr void PlayFab::ClientModels::GetCatalogItemsResult::__cordl_internal_set_Catalog(::System::Collections::Generic::List_1<::PlayFab::ClientModels::CatalogItem*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Catalog = value;
}
inline void PlayFab::ClientModels::GetCatalogItemsResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetCatalogItemsResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetCatalogItemsResult* PlayFab::ClientModels::GetCatalogItemsResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetCatalogItemsResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetCatalogItemsResult::GetCatalogItemsResult()   {
}
