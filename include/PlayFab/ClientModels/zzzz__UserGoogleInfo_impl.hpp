#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserGoogleInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserGoogleInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserGoogleInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserGoogleInfo::*)()>(&::PlayFab::ClientModels::UserGoogleInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserGoogleInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleEmail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleEmail;
}
constexpr ::StringW const& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleEmail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleEmail;
}
constexpr void PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_set_GoogleEmail(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleEmail = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleGender()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleGender;
}
constexpr ::StringW const& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleGender() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleGender;
}
constexpr void PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_set_GoogleGender(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleGender = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleId;
}
constexpr void PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_set_GoogleId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleLocale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleLocale;
}
constexpr ::StringW const& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleLocale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleLocale;
}
constexpr void PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_set_GoogleLocale(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleLocale = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleName;
}
constexpr ::StringW const& PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_get_GoogleName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GoogleName;
}
constexpr void PlayFab::ClientModels::UserGoogleInfo::__cordl_internal_set_GoogleName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GoogleName = value;
}
inline void PlayFab::ClientModels::UserGoogleInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserGoogleInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserGoogleInfo* PlayFab::ClientModels::UserGoogleInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserGoogleInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserGoogleInfo::UserGoogleInfo()   {
}
