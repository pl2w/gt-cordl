#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlockContainerInstanceRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlockContainerInstanceRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlockContainerInstanceRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlockContainerInstanceRequest::*)()>(&::PlayFab::ClientModels::UnlockContainerInstanceRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e3d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlockContainerInstanceRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_ContainerItemInstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerItemInstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_ContainerItemInstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ContainerItemInstanceId;
}
constexpr void PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_set_ContainerItemInstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ContainerItemInstanceId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_KeyItemInstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyItemInstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_get_KeyItemInstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KeyItemInstanceId;
}
constexpr void PlayFab::ClientModels::UnlockContainerInstanceRequest::__cordl_internal_set_KeyItemInstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KeyItemInstanceId = value;
}
inline void PlayFab::ClientModels::UnlockContainerInstanceRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlockContainerInstanceRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlockContainerInstanceRequest* PlayFab::ClientModels::UnlockContainerInstanceRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlockContainerInstanceRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlockContainerInstanceRequest::UnlockContainerInstanceRequest()   {
}
