#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AdRewardItemGranted.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AdRewardItemGranted_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AdRewardItemGranted._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AdRewardItemGranted::*)()>(&::PlayFab::ClientModels::AdRewardItemGranted::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AdRewardItemGranted*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_CatalogId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogId;
}
constexpr ::StringW const& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_CatalogId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogId;
}
constexpr void PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_set_CatalogId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogId = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_InstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_InstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InstanceId;
}
constexpr void PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_set_InstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InstanceId = value;
}
constexpr ::StringW& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::AdRewardItemGranted::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
inline void PlayFab::ClientModels::AdRewardItemGranted::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AdRewardItemGranted*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AdRewardItemGranted* PlayFab::ClientModels::AdRewardItemGranted::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AdRewardItemGranted*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AdRewardItemGranted::AdRewardItemGranted()   {
}
