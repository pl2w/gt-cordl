#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserFacebookInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserFacebookInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserFacebookInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserFacebookInfo::*)()>(&::PlayFab::ClientModels::UserFacebookInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserFacebookInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserFacebookInfo::__cordl_internal_get_FacebookId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserFacebookInfo::__cordl_internal_get_FacebookId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FacebookId;
}
constexpr void PlayFab::ClientModels::UserFacebookInfo::__cordl_internal_set_FacebookId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FacebookId = value;
}
constexpr ::StringW& PlayFab::ClientModels::UserFacebookInfo::__cordl_internal_get_FullName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullName;
}
constexpr ::StringW const& PlayFab::ClientModels::UserFacebookInfo::__cordl_internal_get_FullName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FullName;
}
constexpr void PlayFab::ClientModels::UserFacebookInfo::__cordl_internal_set_FullName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FullName = value;
}
inline void PlayFab::ClientModels::UserFacebookInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserFacebookInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserFacebookInfo* PlayFab::ClientModels::UserFacebookInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserFacebookInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserFacebookInfo::UserFacebookInfo()   {
}
