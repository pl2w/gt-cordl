#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserSteamInfo.hpp"
#include "PlayFab/ClientModels/zzzz__Currency_impl.hpp"
#include "PlayFab/ClientModels/zzzz__TitleActivationStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserSteamInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserSteamInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserSteamInfo::*)()>(&::PlayFab::ClientModels::UserSteamInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserSteamInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamActivationStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamActivationStatus;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus> const& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamActivationStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamActivationStatus;
}
constexpr void PlayFab::ClientModels::UserSteamInfo::__cordl_internal_set_SteamActivationStatus(::System::Nullable_1<::PlayFab::ClientModels::TitleActivationStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamActivationStatus = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamCountry()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamCountry;
}
constexpr ::StringW const& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamCountry() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamCountry;
}
constexpr void PlayFab::ClientModels::UserSteamInfo::__cordl_internal_set_SteamCountry(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamCountry = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Currency>& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamCurrency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamCurrency;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::Currency> const& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamCurrency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamCurrency;
}
constexpr void PlayFab::ClientModels::UserSteamInfo::__cordl_internal_set_SteamCurrency(::System::Nullable_1<::PlayFab::ClientModels::Currency>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamCurrency = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamId;
}
constexpr void PlayFab::ClientModels::UserSteamInfo::__cordl_internal_set_SteamId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamName;
}
constexpr ::StringW const& PlayFab::ClientModels::UserSteamInfo::__cordl_internal_get_SteamName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SteamName;
}
constexpr void PlayFab::ClientModels::UserSteamInfo::__cordl_internal_set_SteamName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SteamName = value;
}
inline void PlayFab::ClientModels::UserSteamInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserSteamInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserSteamInfo* PlayFab::ClientModels::UserSteamInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserSteamInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserSteamInfo::UserSteamInfo()   {
}
