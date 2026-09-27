#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlockContainerItemRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlockContainerItemRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlockContainerItemRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlockContainerItemRequest::*)()>(&::PlayFab::ClientModels::UnlockContainerItemRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e3e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlockContainerItemRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_get_ContainerItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_get_ContainerItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerItemId;
}
constexpr void PlayFab::ClientModels::UnlockContainerItemRequest::__cordl_internal_set_ContainerItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerItemId = value;
}
inline void PlayFab::ClientModels::UnlockContainerItemRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlockContainerItemRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlockContainerItemRequest* PlayFab::ClientModels::UnlockContainerItemRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlockContainerItemRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlockContainerItemRequest::UnlockContainerItemRequest()   {
}
