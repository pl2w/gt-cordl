#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkAndroidDeviceIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkAndroidDeviceIDRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkAndroidDeviceIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkAndroidDeviceIDRequest::*)()>(&::PlayFab::ClientModels::LinkAndroidDeviceIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkAndroidDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_AndroidDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDevice;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_AndroidDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDevice;
}
constexpr void PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_set_AndroidDevice(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidDevice = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_AndroidDeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_AndroidDeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AndroidDeviceId;
}
constexpr void PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_set_AndroidDeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AndroidDeviceId = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_OS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_get_OS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr void PlayFab::ClientModels::LinkAndroidDeviceIDRequest::__cordl_internal_set_OS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OS = value;
}
inline void PlayFab::ClientModels::LinkAndroidDeviceIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkAndroidDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkAndroidDeviceIDRequest* PlayFab::ClientModels::LinkAndroidDeviceIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkAndroidDeviceIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkAndroidDeviceIDRequest::LinkAndroidDeviceIDRequest()   {
}
