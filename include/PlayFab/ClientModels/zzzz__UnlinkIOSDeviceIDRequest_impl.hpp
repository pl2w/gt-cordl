#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkIOSDeviceIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__UnlinkIOSDeviceIDRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::*)()>(&::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::__cordl_internal_get_DeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::__cordl_internal_get_DeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceId;
}
constexpr void PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::__cordl_internal_set_DeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceId = value;
}
inline void PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest* PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::UnlinkIOSDeviceIDRequest::UnlinkIOSDeviceIDRequest()   {
}
