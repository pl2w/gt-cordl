#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/CatalogItemContainerInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__CatalogItemContainerInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::CatalogItemContainerInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::CatalogItemContainerInfo::*)()>(&::PlayFab::ClientModels::CatalogItemContainerInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84daa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItemContainerInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_ItemContents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemContents;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_ItemContents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemContents;
}
constexpr void PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_set_ItemContents(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemContents = value;
}
constexpr ::StringW& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_KeyItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_KeyItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyItemId;
}
constexpr void PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_set_KeyItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyItemId = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_ResultTableContents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResultTableContents;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_ResultTableContents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ResultTableContents;
}
constexpr void PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_set_ResultTableContents(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ResultTableContents = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_VirtualCurrencyContents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyContents;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_get_VirtualCurrencyContents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VirtualCurrencyContents;
}
constexpr void PlayFab::ClientModels::CatalogItemContainerInfo::__cordl_internal_set_VirtualCurrencyContents(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VirtualCurrencyContents = value;
}
inline void PlayFab::ClientModels::CatalogItemContainerInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::CatalogItemContainerInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::CatalogItemContainerInfo* PlayFab::ClientModels::CatalogItemContainerInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::CatalogItemContainerInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::CatalogItemContainerInfo::CatalogItemContainerInfo()   {
}
