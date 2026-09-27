#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkAndroidDeviceIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkAndroidDeviceIDRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::*)()>(&::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::__cordl_internal_get_AndroidDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::__cordl_internal_get_AndroidDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceId;
}
constexpr void PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::__cordl_internal_set_AndroidDeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidDeviceId = value;
}
inline void PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest* PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkAndroidDeviceIDRequest::UnlinkAndroidDeviceIDRequest()   {
}
