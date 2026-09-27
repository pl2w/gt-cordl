#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UserIosDeviceInfo.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UserIosDeviceInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UserIosDeviceInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UserIosDeviceInfo::*)()>(&::PlayFab::ClientModels::UserIosDeviceInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserIosDeviceInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UserIosDeviceInfo::__cordl_internal_get_IosDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IosDeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::UserIosDeviceInfo::__cordl_internal_get_IosDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IosDeviceId;
}
constexpr void PlayFab::ClientModels::UserIosDeviceInfo::__cordl_internal_set_IosDeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IosDeviceId = value;
}
inline void PlayFab::ClientModels::UserIosDeviceInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UserIosDeviceInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UserIosDeviceInfo* PlayFab::ClientModels::UserIosDeviceInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UserIosDeviceInfo*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UserIosDeviceInfo::UserIosDeviceInfo()   {
}
