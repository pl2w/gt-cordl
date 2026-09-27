#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserTitleInfo.hpp"
#include "PlayFab/ClientModels/zzzz__UserOrigination_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserTitleInfo_def.hpp"
#include "PlayFab/ClientModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserTitleInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserTitleInfo::*)()>(&::PlayFab::ClientModels::UserTitleInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserTitleInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_AvatarUrl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvatarUrl;
}
constexpr ::StringW const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_AvatarUrl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AvatarUrl;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_AvatarUrl(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AvatarUrl = value;
}
constexpr ::System::DateTime& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_Created()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr ::System::DateTime const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_Created() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Created;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_Created(::System::DateTime  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Created = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr ::StringW const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisplayName;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_DisplayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisplayName = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_FirstLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstLogin;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_FirstLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FirstLogin;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_FirstLogin(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FirstLogin = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_isBanned()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBanned;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_isBanned() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBanned;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_isBanned(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBanned = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_LastLogin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLogin;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_LastLogin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastLogin;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_LastLogin(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastLogin = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_Origination()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origination;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::UserOrigination> const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_Origination() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origination;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_Origination(::System::Nullable_1<::PlayFab::ClientModels::UserOrigination>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Origination = value;
}
constexpr ::PlayFab::ClientModels::EntityKey*& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_TitlePlayerAccount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccount;
}
constexpr ::PlayFab::ClientModels::EntityKey* const& PlayFab::ClientModels::UserTitleInfo::__cordl_internal_get_TitlePlayerAccount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TitlePlayerAccount;
}
constexpr void PlayFab::ClientModels::UserTitleInfo::__cordl_internal_set_TitlePlayerAccount(::PlayFab::ClientModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TitlePlayerAccount = value;
}
inline void PlayFab::ClientModels::UserTitleInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserTitleInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserTitleInfo* PlayFab::ClientModels::UserTitleInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserTitleInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserTitleInfo::UserTitleInfo()   {
}
