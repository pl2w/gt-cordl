#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/SubscriptionModel.hpp"
#include "PlayFab/ClientModels/zzzz__SubscriptionProviderStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__SubscriptionModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::SubscriptionModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::SubscriptionModel::*)()>(&::PlayFab::ClientModels::SubscriptionModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SubscriptionModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_Expiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expiration;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_Expiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expiration;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_Expiration(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Expiration = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_InitialSubscriptionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialSubscriptionTime;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_InitialSubscriptionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialSubscriptionTime;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_InitialSubscriptionTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialSubscriptionTime = value;
}
constexpr bool& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr bool const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsActive = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::SubscriptionProviderStatus>& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::SubscriptionProviderStatus> const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_Status(::System::Nullable_1<::PlayFab::ClientModels::SubscriptionProviderStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::StringW& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_SubscriptionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionId;
}
constexpr ::StringW const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_SubscriptionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionId;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_SubscriptionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionId = value;
}
constexpr ::StringW& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_SubscriptionItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_SubscriptionItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionItemId;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_SubscriptionItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionItemId = value;
}
constexpr ::StringW& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_SubscriptionProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionProvider;
}
constexpr ::StringW const& PlayFab::ClientModels::SubscriptionModel::__cordl_internal_get_SubscriptionProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionProvider;
}
constexpr void PlayFab::ClientModels::SubscriptionModel::__cordl_internal_set_SubscriptionProvider(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionProvider = value;
}
inline void PlayFab::ClientModels::SubscriptionModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::SubscriptionModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::SubscriptionModel* PlayFab::ClientModels::SubscriptionModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::SubscriptionModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::SubscriptionModel::SubscriptionModel()   {
}
