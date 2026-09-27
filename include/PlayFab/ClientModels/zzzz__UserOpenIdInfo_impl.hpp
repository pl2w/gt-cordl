#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserOpenIdInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserOpenIdInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserOpenIdInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserOpenIdInfo::*)()>(&::PlayFab::ClientModels::UserOpenIdInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserOpenIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_get_ConnectionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_get_ConnectionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConnectionId;
}
constexpr void PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_set_ConnectionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConnectionId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_get_Issuer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Issuer;
}
constexpr ::StringW const& PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_get_Issuer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Issuer;
}
constexpr void PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_set_Issuer(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Issuer = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_get_Subject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subject;
}
constexpr ::StringW const& PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_get_Subject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subject;
}
constexpr void PlayFab::ClientModels::UserOpenIdInfo::__cordl_internal_set_Subject(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Subject = value;
}
inline void PlayFab::ClientModels::UserOpenIdInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserOpenIdInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserOpenIdInfo* PlayFab::ClientModels::UserOpenIdInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserOpenIdInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserOpenIdInfo::UserOpenIdInfo()   {
}
