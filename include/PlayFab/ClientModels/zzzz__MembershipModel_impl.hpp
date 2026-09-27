#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/MembershipModel.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__MembershipModel_def.hpp"
#include "PlayFab/ClientModels/zzzz__SubscriptionModel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::MembershipModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::MembershipModel::*)()>(&::PlayFab::ClientModels::MembershipModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::MembershipModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr bool const& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr void PlayFab::ClientModels::MembershipModel::__cordl_internal_set_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsActive = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_MembershipExpiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembershipExpiration;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_MembershipExpiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembershipExpiration;
}
constexpr void PlayFab::ClientModels::MembershipModel::__cordl_internal_set_MembershipExpiration(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MembershipExpiration = value;
}
constexpr ::StringW& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_MembershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembershipId;
}
constexpr ::StringW const& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_MembershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MembershipId;
}
constexpr void PlayFab::ClientModels::MembershipModel::__cordl_internal_set_MembershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MembershipId = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_OverrideExpiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideExpiration;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_OverrideExpiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OverrideExpiration;
}
constexpr void PlayFab::ClientModels::MembershipModel::__cordl_internal_set_OverrideExpiration(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OverrideExpiration = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_Subscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subscriptions;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>* const& PlayFab::ClientModels::MembershipModel::__cordl_internal_get_Subscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subscriptions;
}
constexpr void PlayFab::ClientModels::MembershipModel::__cordl_internal_set_Subscriptions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::SubscriptionModel*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Subscriptions = value;
}
inline void PlayFab::ClientModels::MembershipModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::MembershipModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::MembershipModel* PlayFab::ClientModels::MembershipModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::MembershipModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::MembershipModel::MembershipModel()   {
}
