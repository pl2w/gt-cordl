#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserXboxInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserXboxInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserXboxInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserXboxInfo::*)()>(&::PlayFab::ClientModels::UserXboxInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserXboxInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserXboxInfo::__cordl_internal_get_XboxUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxUserId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserXboxInfo::__cordl_internal_get_XboxUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___XboxUserId;
}
constexpr void PlayFab::ClientModels::UserXboxInfo::__cordl_internal_set_XboxUserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___XboxUserId = value;
}
inline void PlayFab::ClientModels::UserXboxInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserXboxInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserXboxInfo* PlayFab::ClientModels::UserXboxInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserXboxInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserXboxInfo::UserXboxInfo()   {
}
