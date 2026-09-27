#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/SubscriptionModel.hpp"
#include "PlayFab/CloudScriptModels/zzzz__SubscriptionProviderStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__SubscriptionModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::SubscriptionModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::SubscriptionModel::*)()>(&::PlayFab::CloudScriptModels::SubscriptionModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84300c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::SubscriptionModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::DateTime& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_Expiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expiration;
}
constexpr ::System::DateTime const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_Expiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Expiration;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_Expiration(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Expiration = value;
}
constexpr ::System::DateTime& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_InitialSubscriptionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialSubscriptionTime;
}
constexpr ::System::DateTime const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_InitialSubscriptionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialSubscriptionTime;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_InitialSubscriptionTime(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialSubscriptionTime = value;
}
constexpr bool& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr bool const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsActive = value;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus>& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_Status()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus> const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_Status() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Status;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_Status(::System::Nullable_1<::PlayFab::CloudScriptModels::SubscriptionProviderStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Status = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_SubscriptionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionId;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_SubscriptionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionId;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_SubscriptionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionId = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_SubscriptionItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionItemId;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_SubscriptionItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionItemId;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_SubscriptionItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionItemId = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_SubscriptionProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionProvider;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_get_SubscriptionProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionProvider;
}
constexpr void PlayFab::CloudScriptModels::SubscriptionModel::__cordl_internal_set_SubscriptionProvider(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionProvider = value;
}
inline void PlayFab::CloudScriptModels::SubscriptionModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::SubscriptionModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::SubscriptionModel* PlayFab::CloudScriptModels::SubscriptionModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::SubscriptionModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::SubscriptionModel::SubscriptionModel()   {
}
